/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: ac_invlib
 * File: ac_inv_alloc.c
 * Author: hilchenbachc
 * Created: December 16, 2009
 *******************************************************************/

#include <bur/plctypes.h>
#include "ac_inv_global.h"



/* -----------------------------------------------------------------------------------
axis allocation 
-----------------------------------------------------------------------------------
*/

void ac_inv_alloc( struct ac_inv_alloc* inst ){
	ac_inv_AxIdent *ax_ident;
	char *token;
	struct EplGetLocalNodeID fub_getlocalnodeid;
	struct CANopenGetLocalNodeID fub_canopen_getlocalnodeid;
	RTInfo_typ rt_info;

	
	/* check version of Automation Runtime */
	{
		struct TARGETInfo fub_targetinfo;
		char   v[7];
		long   version;
		
		fub_targetinfo.enable = 1;
		fub_targetinfo.pOSVersion = (UDINT) &v;
		TARGETInfo( &fub_targetinfo );
		version = v[0]-'A' + 1000 * (v[2]-'0') + 100 * (v[4]-'0') + 10 * (v[5]-'0');
		if( version < 2963 ){
			ERRxfatal( ac_invlibERR_WRONG_ARVERSION, 0, "ACPinverter: AR >= D2.96 required" );
			return;			
		}
	}
	
	
	
	inst->status = TMP_alloc( sizeof(ac_inv_AxIdent), (void*) &inst->ax_ident );
	if( inst->status == 0 ){		
		memset( (void*) inst->ax_ident, 0, sizeof(ac_inv_AxIdent) );
		
		ax_ident = (ac_inv_AxIdent *) inst->ax_ident;
		ax_ident->p_alloc = inst;
		
		if( inst->pDevice ){
			char device[40];
			strcpy( device, (char*) inst->pDevice );
				
			token = strtok( device , "." );       
			while( token != NULL )
			{
				if( !strncmp( token, "ST", 2 ) ){
					if( strlen(token) >=3 ){
						ax_ident->node_number = m_atol( token+2 );
					}
					else {
						inst->status = ERR_ASEPL_WRONG_DEVICE;
						inst->ax_ident = 0;			
						return;				 	
					}
				}
				else if( !strncmp( token, "IF", 2 ) ){
					if( strlen(token) >= 3 ){
						char *p = strstr( (char*) inst->pDevice, "IF" );
						strncpy( ax_ident->interface, (char*) inst->pDevice, (UDINT) p - inst->pDevice );
						strcat( ax_ident->interface, token );
					}
					else {
						inst->status = ERR_ASEPL_WRONG_DEVICE;
						inst->ax_ident = 0;			
						return;				 	
					}			     
				}
				token = strtok(NULL, "." );        
			}   
			
		}
		else {
			strcpy( inst->message, "Wrong device name !" );			
			inst->status = ERR_ASEPL_WRONG_DEVICE;
			inst->ax_ident = 0;			
			return;
		}
		
	}
	else {
		strcpy( inst->message, "Error at TMP_alloc()" );
		inst->ax_ident = 0;			
		return;
	}
	
	/* check device name */
	memset( &fub_getlocalnodeid, 0, sizeof(fub_getlocalnodeid) );
	fub_getlocalnodeid.enable = 1;
	fub_getlocalnodeid.pDevice = (plcstring*) ax_ident->interface;
	
	memset( &fub_canopen_getlocalnodeid, 0, sizeof(fub_canopen_getlocalnodeid) );
	fub_canopen_getlocalnodeid.enable = 1;
	fub_canopen_getlocalnodeid.pDevice = (UDINT) ax_ident->interface;

	ax_ident->isCANopen = 0;
	
	do {
		EplGetLocalNodeID( &fub_getlocalnodeid );
	} while( fub_getlocalnodeid.status == 65535 );
	inst->status = 	fub_getlocalnodeid.status;
	
	if( inst->status == ERR_ASEPL_WRONG_DEVICE ){
	
		do {
			CANopenGetLocalNodeID( &fub_canopen_getlocalnodeid );
		} while( fub_canopen_getlocalnodeid.status == 65535 );
		inst->status = 	fub_canopen_getlocalnodeid.status;	
	
		if( inst->status == ERR_CANOPEN_DEVICE_NOT_FOUND || inst->status == ERR_CANOPEN_DEVICE_NOT_OPENED ){
			strcpy( inst->message, "device is not a valid EPL oder CANopen node" );
			inst->ax_ident = 0;			
			return;				
		}
		else if( inst->status != 0 ){
			strcpy( inst->message, "Error at CANopenGetLocalNodeID()" );
			inst->ax_ident = 0;		
			return;			
		}
		ax_ident->isCANopen = 1;
		
	}
	else if( inst->status != 0 ){
		strcpy( inst->message, "Error at EplGetLocalNodeID()" );
		inst->ax_ident = 0;			
		return;		
	}

	
	ax_ident->use_rpm = inst->rpm;
	ax_ident->dont_sort_parameters = inst->no_parameter_sort;

  	rt_info.enable = 1;     /* enables the function */
	RTInfo(&rt_info);       /* gets information from the software object */
	ax_ident->cycleTime = (REAL) rt_info.cycle_time / 1.0e6;


	/* initialize SDO fubs */
	if( ax_ident->isCANopen ){
		memset( &ax_ident->fub_canopen_sdoread, 0, sizeof(ax_ident->fub_canopen_sdoread) );	
		ax_ident->fub_canopen_sdoread.pDevice = (UDINT) ax_ident->interface;
		ax_ident->fub_canopen_sdoread.node = ax_ident->node_number;
	    ax_ident->fub_canopen_sdoread.pRxdata = (UDINT) &ax_ident->sdo_read_value;
		ax_ident->fub_canopen_sdoread.maxlength = sizeof(ax_ident->sdo_read_value);
		
		memset( &ax_ident->fub_canopen_sdowrite, 0, sizeof(ax_ident->fub_canopen_sdowrite) );	
		ax_ident->fub_canopen_sdowrite.pDevice = (UDINT) ax_ident->interface;
		ax_ident->fub_canopen_sdowrite.node = ax_ident->node_number;
		ax_ident->fub_canopen_sdowrite.pTxdata = (UDINT) &ax_ident->sdo_write_value;
		ax_ident->fub_canopen_sdowrite.txlength = sizeof(ax_ident->sdo_write_value);		
	}
	else {
		memset( &ax_ident->fub_sdoread, 0, sizeof(ax_ident->fub_sdoread) );	
		ax_ident->fub_sdoread.pDevice = (plcstring*) ax_ident->interface;
		ax_ident->fub_sdoread.node = ax_ident->node_number;
	    ax_ident->fub_sdoread.pData = (UDINT) &ax_ident->sdo_read_value;
		ax_ident->fub_sdoread.datalen = sizeof(ax_ident->sdo_read_value);
		
		memset( &ax_ident->fub_sdowrite, 0, sizeof(ax_ident->fub_sdowrite) );	
		ax_ident->fub_sdowrite.pDevice = (plcstring*) ax_ident->interface;
		ax_ident->fub_sdowrite.node = ax_ident->node_number;
		ax_ident->fub_sdowrite.pData = (UDINT) &ax_ident->sdo_write_value;
		ax_ident->fub_sdowrite.datalen = sizeof(ax_ident->sdo_write_value);	
	}
	
	/* check if data objects available */
	{
		int i;
		
		for( i = 0; i < (sizeof(inst->pcfgpar)/sizeof(inst->pcfgpar[0])); ++i ){
			memset( &ax_ident->fub_datobjinfo, 0, sizeof(ax_ident->fub_datobjinfo) );
			ax_ident->fub_datobjinfo.enable = 1;
			if( inst->pcfgpar[i]){
				ax_ident->fub_datobjinfo.pName = inst->pcfgpar[i];
				DatObjInfo( &ax_ident->fub_datobjinfo	);
				inst->status = ax_ident->fub_datobjinfo.status;
				if( inst->status == doERR_MODULNOTFOUND ){
					strcpy( inst->message, "module not found: \"" );
					strcat( inst->message, (char*) ax_ident->fub_datobjinfo.pName ); 
					strcat( inst->message, "\"" );
					inst->ax_ident = 0;			
					return;							
				}
				else if( inst->status ){
					strcpy( inst->message, "Error at DatObjInfo(\"" );
					strcat( inst->message, (char*) ax_ident->fub_datobjinfo.pName ); 
					strcat( inst->message, "\")" );
					inst->ax_ident = 0;			
					return;										
				}
			}
		}
	}
	
	
	/* access log */
	{
		struct AsArLogCreate fub_logcreate;
		struct AsArLogGetInfo fub_loginfo;			
		
		memset( &fub_loginfo, 0, sizeof(fub_loginfo) );
		fub_loginfo.enable = 1;
		fub_loginfo.pName = (UDINT) "ac_invlog";
		do {
			AsArLogGetInfo( &fub_loginfo );
		} while( fub_loginfo.status == 65535 );
		if( fub_loginfo.status == 0 ){
			ax_ident->fub_log_write.ident = fub_loginfo.ident;			
		}
		else if( fub_loginfo.status == arlogERR_NOTEXISTING ){  /* module doesn't exist */
			/* create log */
			memset( &fub_logcreate, 0, sizeof(fub_logcreate) );
			fub_logcreate.enable = 1;
			fub_logcreate.pName = fub_loginfo.pName;
			fub_logcreate.len = 128*1024;
			fub_logcreate.memType = arlogDRAM;
			do {
				AsArLogCreate( &fub_logcreate );
			} while( fub_logcreate.status == 65535 );
			if( fub_logcreate.status == 0 ){
				ax_ident->fub_log_write.ident = fub_logcreate.ident;			
			}
			else {
				inst->status = fub_logcreate.status;			
				strcpy( inst->message, "Error at AsArLogCreate()" );
				inst->ax_ident = 0;			
				return;	
			}
		}
		else { /* other errors */
			inst->status = fub_loginfo.status;			
			strcpy( inst->message, "Error at AsArLogGetInfo()" );
			inst->ax_ident = 0;			
			return;				
		}	
		ax_ident->fub_log_write.enable = 1;		
	}

	
	
}


