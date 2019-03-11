/*

This file is part of ACOPOSinverter- Library https://github.com/hilch/ac_invlib.
The source code is released under LGPL:

                   GNU LESSER GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.


  This version of the GNU Lesser General Public License incorporates
the terms and conditions of version 3 of the GNU General Public
License, supplemented by the additional permissions listed below.

  0. Additional Definitions.

  As used herein, "this License" refers to version 3 of the GNU Lesser
General Public License, and the "GNU GPL" refers to version 3 of the GNU
General Public License.

  "The Library" refers to a covered work governed by this License,
other than an Application or a Combined Work as defined below.

  An "Application" is any work that makes use of an interface provided
by the Library, but which is not otherwise based on the Library.
Defining a subclass of a class defined by the Library is deemed a mode
of using an interface provided by the Library.

  A "Combined Work" is a work produced by combining or linking an
Application with the Library.  The particular version of the Library
with which the Combined Work was made is also called the "Linked
Version".

  The "Minimal Corresponding Source" for a Combined Work means the
Corresponding Source for the Combined Work, excluding any source code
for portions of the Combined Work that, considered in isolation, are
based on the Application, and not on the Linked Version.

  The "Corresponding Application Code" for a Combined Work means the
object code and/or source code for the Application, including any data
and utility programs needed for reproducing the Combined Work from the
Application, but excluding the System Libraries of the Combined Work.

  1. Exception to Section 3 of the GNU GPL.

  You may convey a covered work under sections 3 and 4 of this License
without being bound by section 3 of the GNU GPL.

  2. Conveying Modified Versions.

  If you modify a copy of the Library, and, in your modifications, a
facility refers to a function or data to be supplied by an Application
that uses the facility (other than as an argument passed when the
facility is invoked), then you may convey a copy of the modified
version:

   a) under this License, provided that you make a good faith effort to
   ensure that, in the event an Application does not supply the
   function or data, the facility still operates, and performs
   whatever part of its purpose remains meaningful, or

   b) under the GNU GPL, with none of the additional permissions of
   this License applicable to that copy.

  3. Object Code Incorporating Material from Library Header Files.

  The object code form of an Application may incorporate material from
a header file that is part of the Library.  You may convey such object
code under terms of your choice, provided that, if the incorporated
material is not limited to numerical parameters, data structure
layouts and accessors, or small macros, inline functions and templates
(ten or fewer lines in length), you do both of the following:

   a) Give prominent notice with each copy of the object code that the
   Library is used in it and that the Library and its use are
   covered by this License.

   b) Accompany the object code with a copy of the GNU GPL and this license
   document.

  4. Combined Works.

  You may convey a Combined Work under terms of your choice that,
taken together, effectively do not restrict modification of the
portions of the Library contained in the Combined Work and reverse
engineering for debugging such modifications, if you also do each of
the following:

   a) Give prominent notice with each copy of the Combined Work that
   the Library is used in it and that the Library and its use are
   covered by this License.

   b) Accompany the Combined Work with a copy of the GNU GPL and this license
   document.

   c) For a Combined Work that displays copyright notices during
   execution, include the copyright notice for the Library among
   these notices, as well as a reference directing the user to the
   copies of the GNU GPL and this license document.

   d) Do one of the following:

       0) Convey the Minimal Corresponding Source under the terms of this
       License, and the Corresponding Application Code in a form
       suitable for, and under terms that permit, the user to
       recombine or relink the Application with a modified version of
       the Linked Version to produce a modified Combined Work, in the
       manner specified by section 6 of the GNU GPL for conveying
       Corresponding Source.

       1) Use a suitable shared library mechanism for linking with the
       Library.  A suitable mechanism is one that (a) uses at run time
       a copy of the Library already present on the user's computer
       system, and (b) will operate properly with a modified version
       of the Library that is interface-compatible with the Linked
       Version.

   e) Provide Installation Information, but only if you would otherwise
   be required to provide such information under section 6 of the
   GNU GPL, and only to the extent that such information is
   necessary to install and execute a modified version of the
   Combined Work produced by recombining or relinking the
   Application with a modified version of the Linked Version. (If
   you use option 4d0, the Installation Information must accompany
   the Minimal Corresponding Source and Corresponding Application
   Code. If you use option 4d1, you must provide the Installation
   Information in the manner specified by section 6 of the GNU GPL
   for conveying Corresponding Source.)

  5. Combined Libraries.

  You may place library facilities that are a work based on the
Library side by side in a single library together with other library
facilities that are not Applications and are not covered by this
License, and convey such a combined library under terms of your
choice, if you do both of the following:

   a) Accompany the combined library with a copy of the same work based
   on the Library, uncombined with any other library facilities,
   conveyed under the terms of this License.

   b) Give prominent notice with the combined library that part of it
   is a work based on the Library, and explaining where to find the
   accompanying uncombined form of the same work.

  6. Revised Versions of the GNU Lesser General Public License.

  The Free Software Foundation may publish revised and/or new versions
of the GNU Lesser General Public License from time to time. Such new
versions will be similar in spirit to the present version, but may
differ in detail to address new problems or concerns.

  Each version is given a distinguishing version number. If the
Library as you received it specifies that a certain numbered version
of the GNU Lesser General Public License "or any later version"
applies to it, you have the option of following the terms and
conditions either of that published version or of any later version
published by the Free Software Foundation. If the Library as you
received it does not specify a version number of the GNU Lesser
General Public License, you may choose any version of the GNU Lesser
General Public License ever published by the Free Software Foundation.

  If the Library as you received it specifies that a proxy can decide
whether future versions of the GNU Lesser General Public License shall
apply, that proxy's public statement of acceptance of any version is
permanent authorization for you to choose that version for the
Library.

*/
#include <bur/plctypes.h>
#include "ac_inv_global.h"

BOOL g_libraryStarted = 0;

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
//	    ax_ident->fub_canopen_sdoread.pRxdata = (UDINT) &ax_ident->sdo_read_value;
//		ax_ident->fub_canopen_sdoread.maxlength = sizeof(ax_ident->sdo_read_value);
		
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

	if( !g_libraryStarted )
	{
		g_libraryStarted = 1;
		strcpy( ax_ident->log_info, "https://github.com/hilch/ac_invlib " TOSTRING(_ac_invlib_VERSION) );	
		ax_ident->fub_log_write.logLevel = arlogLEVEL_INFO;
		ax_ident->fub_log_write.errornr = 0;
		ax_ident->fub_log_write.mem = 0;
		ax_ident->fub_log_write.len = 0;
		ax_ident->fub_log_write.asciiString = (UDINT) ax_ident->log_info;
		do 
			AsArLogWrite( &ax_ident->fub_log_write );
		while( ax_ident->fub_log_write.status == 0xffff );
	}
}


