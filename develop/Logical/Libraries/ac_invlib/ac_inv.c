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
				



/* --------------------------------------------------------------------------------------
control the inverter
--------------------------------------------------------------------------------------
*/


//#define ETAD 			ax_ident->p_alloc->io_mapping.ETAD
#define RFRD 			ax_ident->p_alloc->io_mapping.RFRD
//#define CMDD 			ax_ident->p_alloc->io_mapping.CMDD
#define CMI				ax_ident->p_alloc->io_mapping.CMI
#define LFRD 			ax_ident->p_alloc->io_mapping.LFRD
#define MODULE_OK 		ax_ident->p_alloc->io_mapping.ModuleOK
#define _LFT			(ax_ident->p_alloc->io_mapping.LFT + ax_ident->p_alloc->io_mapping._LFT)
#define OTR				ax_ident->p_alloc->io_mapping.OTR
#define LCR				ax_ident->p_alloc->io_mapping.LCR
#define THD				ax_ident->p_alloc->io_mapping.THD
#define THR				ax_ident->p_alloc->io_mapping.THR
//#define HMIS			ax_ident->p_alloc->io_mapping.HMIS
#define LTR				ax_ident->p_alloc->io_mapping.LTR




void ac_inv(struct ac_inv* inst)
{

	UINT cmdd = 0;
	UINT etad = 0;
	UINT hmis = 0;
	
	if( inst->ax_ident != 0 )
	{
		ac_inv_AxIdent *ax_ident = (ac_inv_AxIdent*) inst->ax_ident;
		etad = ax_ident->p_alloc->io_mapping.ETAD;
		hmis = ax_ident->p_alloc->io_mapping.HMIS;		  
		ax_ident->timer += ax_ident->cycleTime;

		/* CiA 402 state machine */
		//CMDD = 0;  
		LFRD = 0;
		LTR = 0;
	
			
		switch( ax_ident->step_init )
		{
		case STEP_W_NETWORK:  /* wait for network */
			inst->initialized = 0;		
			if( MODULE_OK  )
			{
				inst->quickstop = 1;
				ax_ident->step_init = STEP_READ_DEVICE_NAME;
				memset( ax_ident->device_name, 0, sizeof(ax_ident->device_name));
				ax_ident->fub_sdoread.pData = (UDINT) &ax_ident->device_name;
				ax_ident->fub_sdoread.datalen = sizeof(ax_ident->device_name)-1;
				ax_ident->fub_sdoread.index = 0x1008;
				ax_ident->fub_sdoread.subindex = 0;
				ax_ident->sdo_read_transfertype = coSDO_TYPE_SEGMENTED_TRANSFER;  /* CANopen only */
				ax_ident->sdo_read_step = 100; /* SDO direct read */
				ax_ident->HMIS_old = hmis +1;
			}
			break;


		case STEP_READ_DEVICE_NAME:  /* read device name */
			if( ax_ident->sdo_read_step == 0 )
			{
				/*0 = unknown, 1 = P84, 2 = P74, 3 = P76, 4=P66, 5 = P86*/
				if( !strcmp( ax_ident->device_name, "ACOPOS Inverter P74" ) )
					ax_ident->drive_type = ACPiDriveType_P74;
				else if( !strcmp( ax_ident->device_name, "8I0IF248.300-1" ) )
					ax_ident->drive_type = ACPiDriveType_P84;
				else if( !strcmp( ax_ident->device_name, "8I0IF108.400-2" ) || !strncmp( ax_ident->device_name, "8I76", 4 ) )
				{
					ax_ident->drive_type = ACPiDriveType_P76;
					if( !ax_ident->isCANopen )
						ax_ident->use_rpm = 1;  /* P76 EPL: settings in physical view are used here */
				}
				else if( !strcmp( ax_ident->device_name, "8I0IF108.400-3" ) || !strncmp( ax_ident->device_name, "8I66", 4 ) )
				{						
					ax_ident->drive_type = ACPiDriveType_P66;
					if( !ax_ident->isCANopen )
						ax_ident->use_rpm = 1;  /* P66 EPL: settings in physical view are used here */
				}
					else if( !strcmp( ax_ident->device_name, "8I0IF108.400-4" ) )
					{
						ax_ident->drive_type = ACPiDriveType_P86;
						if( !ax_ident->isCANopen )
							ax_ident->use_rpm = 1;  /* P86 EPL: settings in physical view are used here */
					}
					else if( !strcmp( ax_ident->device_name, "8I0IF108.400-5" ) )
					{
						ax_ident->drive_type = ACPiDriveType_P86;
						
						if( !ax_ident->isCANopen )
							ax_ident->use_rpm = 1;  /* P86 EPL: settings in physical view are used here */
					}
					else
						ax_ident->drive_type = ACPiDriveType_unknown;
				inst->drive_type = ax_ident->drive_type;
				ax_ident->step_init = STEP_LOG_DEVICE_TYPE;
			}
			break;


		case STEP_LOG_DEVICE_TYPE:  /* write device information into log */
		{
			char tempstring[20];

			strcpy( ax_ident->log_info, ax_ident->interface );
			strcat( ax_ident->log_info, "." );
			m_ltoa( ax_ident->node_number, tempstring, 10 );
			strcat( ax_ident->log_info, tempstring );
			strcat( ax_ident->log_info, ":" );
			strcat( ax_ident->log_info, ax_ident->device_name );
			strcat( ax_ident->log_info, "(" );
			switch( ax_ident->drive_type )
			{
				case ACPiDriveType_P86: strcat( ax_ident->log_info, "P86" ); break;
				case ACPiDriveType_P84: strcat( ax_ident->log_info, "P84" ); break;
				case ACPiDriveType_P74: strcat( ax_ident->log_info, "P74" ); break;
				case ACPiDriveType_P76: strcat( ax_ident->log_info, "P76" ); break;
				case ACPiDriveType_P66: strcat( ax_ident->log_info, "P66" ); break;
				default: strcat( ax_ident->log_info, "??" ); break;
			}
			strcat( ax_ident->log_info, ")" );
			ax_ident->fub_log_write.logLevel = arlogLEVEL_INFO;
			ax_ident->fub_log_write.errornr = 0;
			ax_ident->fub_log_write.mem = (UDINT) &ax_ident->node_number;
			ax_ident->fub_log_write.len = sizeof(ax_ident->node_number);
			ax_ident->fub_log_write.asciiString = (UDINT) ax_ident->log_info;
			AsArLogWrite( &ax_ident->fub_log_write );
			ax_ident->step_init = STEP_W_LOG_DEVICE_TYPE;
		}
		break;


		case STEP_W_LOG_DEVICE_TYPE:
			if( ax_ident->fub_log_write.status != 65535 )
			{
				if( ax_ident->drive_type == ACPiDriveType_unknown )
				{
					inst->fault = 1;
					strcpy( inst->drive_state, "????" );
					strcpy( inst->fault_code, "????" );
					ax_ident->step_init = STEP_INTERNAL_ERROR;
				}
				/* if no parameter module is given rely on parameters in physical view and don't reset the inverter */
				else if( (ax_ident->p_alloc->pcfgpar[0]==0) && (ax_ident->p_alloc->pcfgpar[1]==0) && (ax_ident->p_alloc->pcfgpar[2]== 0) )
				{
					ax_ident->step_init = STEP_READ_KV;
				}
				else if( ax_ident->drive_type == ACPiDriveType_P74 )    /* P74 */
				{
					CMI = 0;
					ax_ident->timer = 0;
					strcpy( ax_ident->sdo_write_par_name, "FCS" );
					strcpy( ax_ident->sdo_write_value_constant,  "InI" );
					ax_ident->sdo_write_step = 1;
					ax_ident->step_init = STEP_W_FACTORY_RESET_P74;
				}
				/* P76, P66 HWX: CMI is not included */
				else if(  (ax_ident->drive_type == ACPiDriveType_P76 || ax_ident->drive_type == ACPiDriveType_P66 || ax_ident->drive_type == ACPiDriveType_P86) && !ax_ident->isCANopen  )     /* P76, P66 by EPL */
				{
					strcpy( ax_ident->sdo_write_par_name, "CMI" );
					strcpy( ax_ident->sdo_write_value_constant,  "32768" );   /* 32768 = 0x8000 = disable parameter checking */
					ax_ident->sdo_write_step = 1;
					ax_ident->step_init = STEP_W_DISABLE_PCHECK_P76;
				}
				else    /* P84  and CANopen drives */
				{
					ax_ident->step_init = STEP_W_FACTORY_RESET_P84;
				}
			}
			else
			{
				AsArLogWrite( &ax_ident->fub_log_write );
			}
			break;


			/* ------------------  P74 ------------------------- */

		case STEP_W_FACTORY_RESET_P74: /* wait, until factory settings done (P74) */
			if( ax_ident->sdo_write_step == 0 && ax_ident->timer > 5.0 )
			{
				CMI = 0x8000;  /* disable parameter checking */
				strcpy( ax_ident->sdo_write_par_name, "Fr1" );
				strcpy( ax_ident->sdo_write_value_constant,  "nEt" );
				ax_ident->sdo_write_step = 1;
				ax_ident->step_init = STEP_W_P74_CONFIG_1;
			}
			break;

		case STEP_W_P74_CONFIG_1:
			if( ax_ident->sdo_write_step == 0 )
			{
				strcpy( ax_ident->sdo_write_par_name, "Cd1" );
				strcpy( ax_ident->sdo_write_value_constant,  "nEt" );
				ax_ident->sdo_write_step = 1;
				ax_ident->step_init = STEP_W_P74_CONFIG_2;
			}
			break;

		case STEP_W_P74_CONFIG_2:
			if( ax_ident->sdo_write_step == 0 )
			{
				strcpy( ax_ident->sdo_write_par_name, "Cd2" );
				strcpy( ax_ident->sdo_write_value_constant,  "tEr" );
				ax_ident->sdo_write_step = 1;

				if( (etad & 0x0f) == 0x8 && _LFT == 7 )    /* "CNF" at bootup- time ? */
				{
					cmdd |= 0x80;
				}
				ax_ident->step_init = STEP_W_REFERENCE_CHANNEL_SET;
			}
			break;

			/* ------------------  P84 ------------------------- */

		case STEP_W_FACTORY_RESET_P84: /* force to factory settings (P84) */
			CMI = 1;
			ax_ident->timer = 0;
			ax_ident->step_init = STEP_W_P84_CONFIG_1;
			break;


		case STEP_W_P84_CONFIG_1:  /* wait, until factory settings done  */
			if( ax_ident->timer > 5.0 )
			{
				CMI = 0x8000;  /* disable parameter checking */
				ax_ident->timer = 0;
				ax_ident->step_init = STEP_W_P84_CONFIG_2;
			}
			break;


		case STEP_W_P84_CONFIG_2:  /* set Ref1 channel to Powerlink */
			if( ax_ident->timer > 1 )
			{
				if( ax_ident->drive_type == ACPiDriveType_P74 )   /* P74 */
				{
					ax_ident->step_init = STEP_W_REFERENCE_CHANNEL_SET;
				}
				else
				{
					strcpy( ax_ident->sdo_write_par_name, "Fr1" );
					strcpy( ax_ident->sdo_write_value_constant,  "CAn" );
					ax_ident->sdo_write_step = 1;
					ax_ident->step_init = STEP_W_REFERENCE_CHANNEL_SET;
				}
			}
			break;


			/* ------------------  P76 ------------------------- */
		case STEP_W_DISABLE_PCHECK_P76:  /* wait CMI is written */
			if( ax_ident->sdo_write_step == 0 )
			{
				ax_ident->timer = 0;
				strcpy( ax_ident->sdo_write_par_name, "FCS" );
				strcpy( ax_ident->sdo_write_value_constant,  "InI" );
				ax_ident->sdo_write_step = 1;
				ax_ident->step_init = STEP_W_FACTORY_RESET_P76;
			}
			break;

		case STEP_W_FACTORY_RESET_P76: /* wait, until factory settings done (P74) */
			if( ax_ident->sdo_write_step == 0 && ax_ident->timer > 5.0 )
			{
				strcpy( ax_ident->sdo_write_par_name, "Fr1" );
				strcpy( ax_ident->sdo_write_value_constant,  "nEt" );
				ax_ident->sdo_write_step = 1;
				ax_ident->step_init = STEP_W_P76_CONFIG_1;
			}
			break;

		case STEP_W_P76_CONFIG_1:
			if( ax_ident->sdo_write_step == 0 )
			{
				strcpy( ax_ident->sdo_write_par_name, "Cd1" );
				strcpy( ax_ident->sdo_write_value_constant,  "nEt" );
				ax_ident->sdo_write_step = 1;
				ax_ident->step_init = STEP_W_P76_CONFIG_2;
			}
			break;

		case STEP_W_P76_CONFIG_2:
			if( ax_ident->sdo_write_step == 0 )
			{
				strcpy( ax_ident->sdo_write_par_name, "Cd2" );
				strcpy( ax_ident->sdo_write_value_constant,  "tEr" );
				ax_ident->sdo_write_step = 1;

				if( (etad & 0x0f) == 0x8 && _LFT == 7 )    /* "CNF" at bootup- time ? */
				{
					cmdd |= 0x80;
				}
				ax_ident->step_init = STEP_W_REFERENCE_CHANNEL_SET;
			}
			break;



			/* ------------------P86 & P74 & P84 & P76 & P66 ------------------------- */

		case STEP_W_REFERENCE_CHANNEL_SET: /* wait until reference channel is set */
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				ax_ident->step_init = STEP_W_NETWORK;
				break;
			}
			if( ax_ident->sdo_write_step == 0 )
			{
				inst->status = ax_ident->sdo_write_status;
				if( inst->status == 0 )
				{
					create_parameterlist( ax_ident );
					if( ax_ident->dont_sort_parameters == 0 )
					{
						sort_parameterlist( ax_ident );
					}
					ax_ident->write_parameterlist_step = 1;
					ax_ident->step_init = STEP_W_PARAMETER_LIST_DOWNLOAD;
				}
				else
				{
					ax_ident->step_init = STEP_INTERNAL_ERROR;
				}
			}
			break;



		case STEP_W_PARAMETER_LIST_DOWNLOAD:  /* wait until parameter list is downloaded */
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				ax_ident->step_init = STEP_W_NETWORK;
				break;
			}
			else   /* ready ? */
			{
				if( ax_ident->write_parameterlist_step == 0 )  /* ready ? */
				{
					inst->status = ax_ident->write_parameterlist_status;
					if( inst->status == 0 )
					{
						ax_ident->timer = 0;
						if( ax_ident->drive_type == ACPiDriveType_P76 ||  ax_ident->drive_type == ACPiDriveType_P66 
								|| ax_ident->drive_type == ACPiDriveType_P86)  
						{   /* P76 & P66 */
							strcpy( ax_ident->sdo_write_par_name, "CMI" );
							strcpy( ax_ident->sdo_write_value_constant,  "0" );   /* 0 = enable parameter checking */
							ax_ident->sdo_write_step = 1;
							ax_ident->step_init = STEP_W_ENABLE_PCHECK_P76;						
						}
						else
						{
							ax_ident->step_init = STEP_CHECK_PARAMETER_LIST;
						}
					}
					else
					{
						ax_ident->step_init = STEP_INTERNAL_ERROR;
					}
				}
			}
			break;

		case STEP_W_ENABLE_PCHECK_P76:
			if( ax_ident->sdo_write_step == 0 )
			{
				ax_ident->step_init = STEP_CHECK_PARAMETER_LIST;
			}				
			break;

		case STEP_CHECK_PARAMETER_LIST:
			CMI = 0; /* enable parameter checking */
			if( ax_ident->timer > 1.0 )
			{
				ax_ident->compare_parameterlist_step = 1;
				ax_ident->step_init = STEP_W_PARAMETER_LIST_CHECKED;
			}
			break;


		case STEP_W_PARAMETER_LIST_CHECKED: /* compare parameter list */
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				ax_ident->step_init = STEP_W_NETWORK;
				break;
			}
			else if( ax_ident->compare_parameterlist_step == 0 ) 	/* ready ? */
			{
				inst->status = ax_ident->compare_parameterlist_status;
				if( inst->status == 0 )
				{
					ax_ident->step_init = STEP_READ_KV;
				}
				else   /* error */
				{
					ax_ident->step_init = STEP_INTERNAL_ERROR;
				}
			}
			break;



		case STEP_READ_KV: /* read kv */
			strcpy( ax_ident->sdo_read_par_name, "SPG" );
			ax_ident->sdo_read_step = 10;  /* start reading */
			ax_ident->step_init = STEP_READ_TI;
			break;


		case STEP_READ_TI: /* read ti */
			if( ax_ident->sdo_read_step == 0 )
			{
				inst->kv = ax_ident->kv_old = ax_ident->sdo_read_value;
				strcpy( ax_ident->sdo_read_par_name, "SIt" );
				ax_ident->sdo_read_step = 10;  /* start reading */
				ax_ident->step_init = STEP_READ_OUTPUT_FREQUENCY;
			}
			break;


		case STEP_READ_OUTPUT_FREQUENCY: /* read maximum output frequency  */
			if( ax_ident->sdo_read_step == 0 )
			{
				inst->ti = ax_ident->ti_old = ax_ident->sdo_read_value;
				strcpy( ax_ident->sdo_read_par_name, "tFr" );
				ax_ident->sdo_read_step = 10;  /* start reading */
				ax_ident->step_init = STEP_READ_TORQUE_LIMIT_0;
			}
			break;

		case STEP_READ_TORQUE_LIMIT_0: /* read motor torque limitation 0  */
			if( ax_ident->sdo_read_step == 0 )
			{
				ax_ident->maximum_output_frequency = (REAL) ax_ident->sdo_read_value / 10.0;
				strcpy( ax_ident->sdo_read_par_name, "tLIM" );
				ax_ident->sdo_read_step = 10;  /* start reading */
				ax_ident->step_init = STEP_READ_TORQUE_LIMIT_1;
			}
			break;

		case STEP_READ_TORQUE_LIMIT_1: /* read motor torque limitation 1  */
			if( ax_ident->sdo_read_step == 0 )
			{
				inst->t_limit[0] = ax_ident->t_limit_old[0] = (REAL) ax_ident->sdo_read_value;
				strcpy( ax_ident->sdo_read_par_name, "tLIG" );
				ax_ident->sdo_read_step = 10;  /* start reading */
				ax_ident->step_init = STEP_READ_CTT;
			}
			break;

		case STEP_READ_CTT: /* read Ctt  */
			if( ax_ident->sdo_read_step == 0 )
			{
				inst->t_limit[1] = ax_ident->t_limit_old[1] = (REAL) ax_ident->sdo_read_value;
				strcpy( ax_ident->sdo_read_par_name, "Ctt" );
				ax_ident->sdo_read_step = 10;  /* start reading */
				ax_ident->step_init = STEP_READ_RATED_FREQ;
			}
			break;


		case STEP_READ_RATED_FREQ: /* read rated motor frequency  or torque  */
			if( ax_ident->sdo_read_step == 0 )
			{
				if( ax_ident->sdo_read_value == 5 )   /* 5 = "SyN" */
				{
					ax_ident->use_rpm = 1;
					ax_ident->step_init = STEP_W_COMMAND;
				}
				else   /* only allowed for induction motors */
				{
					strcpy( ax_ident->sdo_read_par_name, "FrS" );
					ax_ident->sdo_read_step = 10;  /* start reading */
					ax_ident->step_init = STEP_READ_RATED_SPEED;
				}
			}
			break;


		case STEP_READ_RATED_SPEED: /* read rated motor speed  */
			if( ax_ident->sdo_read_step == 0 )
			{
				ax_ident->rated_motor_frequency = (REAL) ax_ident->sdo_read_value / 10.0;
				strcpy( ax_ident->sdo_read_par_name, "nSP" );
				ax_ident->sdo_read_step = 10;  /* start reading */
				ax_ident->step_init = STEP_W_READ_RATED_SPEED;
			}
			break;


		case STEP_W_READ_RATED_SPEED: /* wait until read  */
			if( ax_ident->sdo_read_step == 0 )
			{
				ax_ident->rated_motor_speed = (REAL) ax_ident->sdo_read_value;
				ax_ident->polepairs = 60.0 * ax_ident->rated_motor_frequency	/ ax_ident->rated_motor_speed;
				ax_ident->HMIS_old = 0xffff;
				ax_ident->step_init = STEP_W_COMMAND;
			}
			break;


		/* ---------------------------------------------------
			drive is initialized 
			-------------------------------------------------- */

		case STEP_W_COMMAND:  /* initialization successful */
			inst->initialized = 1;
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				inst->initialized = 0;
				ax_ident->step_init = STEP_W_NETWORK;
			}
			else
			{
				if( inst->quickstop && inst->activate_tuning && inst->ctrl_is_on == 0 && inst->ctrl_on == 1 
					&& (ax_ident->drive_type == ACPiDriveType_P84  ))
				{
					ax_ident->ctrl_on_internal = 0;
					strcpy( ax_ident->sdo_write_par_name, "tUn" );
					strcpy( ax_ident->sdo_write_value_constant,  "yES" );
					ax_ident->sdo_write_step = 1;										
					ax_ident->step_init = STEP_P84_WRITE_TUN;									
				}
				else if( inst->quickstop && inst->activate_tuning && inst->ctrl_is_on == 0 && inst->ctrl_on == 1 
							&& (  (ax_ident->drive_type == ACPiDriveType_P74)
								 || (ax_ident->drive_type == ACPiDriveType_P76)	
								 || (ax_ident->drive_type == ACPiDriveType_P66)
								 || ax_ident->drive_type == ACPiDriveType_P86)
						)
				{
					ax_ident->ctrl_on_internal = 0;
					ax_ident->timer = 0;					
					ax_ident->step_init = STEP_P74_START_TUNING;									
				}				
				else
				{
					ax_ident->ctrl_on_internal = inst->ctrl_on;				
				}
				
			}
			break;

		
		case STEP_P84_WRITE_TUN:
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				ax_ident->step_init = STEP_W_NETWORK;
			}
			else if( ax_ident->sdo_write_step == 0 )
			{
				ax_ident->ctrl_on_internal = 1;
				ax_ident->step_init = STEP_W_P84_TUNING_DONE;
			}			
			break;	
			
		case STEP_W_P84_TUNING_DONE:
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				ax_ident->step_init = STEP_W_NETWORK;
			}
			else if( inst->ctrl_is_on )
			{
				ax_ident->step_init = STEP_W_COMMAND;
			}
			break;
			
		
		case STEP_P74_START_TUNING:
		    ax_ident->tempUINT = (1<<8);  /* Halt */
			cmdd = ax_ident->tempUINT;
			ax_ident->timer = 0;	
			ax_ident->step_init = STEP_P74_TUNING_1;			
			break;		
			
		case STEP_P74_TUNING_1:
			if( ax_ident->timer > 0.1 )
			{
			    ax_ident->tempUINT |= (1<<1);  /* enable voltage */			
				ax_ident->timer = 0;
				ax_ident->step_init = STEP_P74_TUNING_2;
			}	
			cmdd = ax_ident->tempUINT;
			break;	
			
		case STEP_P74_TUNING_2:
			if( etad & (1<<4) )  /* voltage enabled ? */
			{
			    ax_ident->tempUINT |= (1<<2);   /* no quickstop */			
				ax_ident->timer = 0;
				ax_ident->step_init = STEP_P74_TUNING_3;
			}	
			cmdd = ax_ident->tempUINT;
			break;				

		case STEP_P74_TUNING_3:
			if( ax_ident->timer > 0.1 )  
			{
			    ax_ident->tempUINT |= (1<<0);   /* switch on */
				ax_ident->timer = 0;
				ax_ident->step_init = STEP_P74_TUNING_4;
			}
			cmdd = ax_ident->tempUINT;	
			break;				
			
			
						
		case STEP_P74_TUNING_4:
			if( (etad & (1<<0)) || (ax_ident->timer > 1.0) )  /* read to switch on ? */
			{
			    ax_ident->tempUINT |= (1<<3);   /* enable operation */
				ax_ident->timer = 0;
				ax_ident->step_init = STEP_P74_TUNING_5;
			}
			cmdd = ax_ident->tempUINT;	
			break;				


		case STEP_P74_TUNING_5:
			if( (etad & (2<<0)) || (ax_ident->timer > 1.0) )  /* switched on ? */
			{
				strcpy( ax_ident->sdo_write_par_name, "tUn" );
				strcpy( ax_ident->sdo_write_value_constant,  "yES" );
				ax_ident->sdo_write_step = 1;				
				ax_ident->timer = 0;
				ax_ident->step_init = STEP_P74_TUNING_6;
			}
			cmdd = ax_ident->tempUINT;	
			break;				

			
		case STEP_P74_TUNING_6:
			if( ax_ident->sdo_write_step == 0 || (ax_ident->timer > 1.0) )  /* parameter downloaded ? */
			{
				ax_ident->tempUINT &= ~(1<<8); /* no halt */
				ax_ident->ctrl_on_internal = 1;				
				ax_ident->timer = 0;
				ax_ident->step_init = STEP_P74_TUNING_7;
			}
			cmdd = ax_ident->tempUINT;							
			break;							
			
			
		case STEP_P74_TUNING_7:
			if( (ax_ident->timer > 0.5) && (hmis != 0) ) /* tuning done ? */
			{
				ax_ident->step_init = STEP_P74_TUNING_8;				
			}	
			cmdd = ax_ident->tempUINT;							
			break;	
			
			
		case STEP_P74_TUNING_8:
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				ax_ident->step_init = STEP_W_NETWORK;
			}		
			else if( inst->ctrl_is_on )
			{
				ax_ident->step_init = STEP_W_COMMAND;			
			}	
			break;					

			
									
		case STEP_INTERNAL_ERROR: /* error */
			if( !MODULE_OK )
			{
				logCOF( ax_ident );
				inst->fault = 1;
				strcpy( inst->drive_state, "COF" );
				ax_ident->step_init = 0;
				break;
			}
			inst->fault = 1;
			break;

		}


		/* Power removal */
		if( ax_ident->ctrl_on_internal == 0 )
		{
			inst->PRA_detected = 0;
		}
		if (inst->drive_type == ACPiDriveType_P86)
		{
			if(hmis == 30) // STO active
			{
				inst->PRA_detected = 1;
			}
		}
		else
		{
			if( hmis == 12)  /* PrA - Power removal */
			{
				inst->PRA_detected = 1;
			}
		}


		/* CiA 402 state machine */

		inst->ctrl_is_on = 0;			
		if( inst->initialized )
		{
			if( ax_ident->ctrl_on_internal && !inst->PRA_detected )
			{
				if( (etad & 0xfe) == 0x40 || (etad & 0xfe) == 0x50 )   /* switch on disabled */
				{
					cmdd = 0x6;
					/*LFRD = 0;*/
					inst->ctrl_is_on = 0;
					/*strcpy( inst->drive_state, "nSt" );*/
				}
				else if( (etad & 0xff) == 0x21 || (etad & 0xff) == 0x31 )   /* ready to switch on */
				{
					cmdd = 0x7;
					/*LFRD = 0;*/
					inst->ctrl_is_on = 0;
					/*
					if( (ETAD & 0xff) == 0x21 )
					strcpy( inst->drive_state, "nSt" );
					else if( (ETAD & 0xff) == 0x31 )
					strcpy( inst->drive_state, "rdY" );
					*/
				}
				else if( (etad & 0xff) == 0x33   )   /* switched on */
				{
					cmdd = 0xf;
					/*LFRD = 0;*/
					inst->ctrl_is_on = 1;
					/*strcpy( inst->drive_state, "rdY" );				*/
				}
				else if( (etad & 0xff) == 0x37  )   /* movement enabled */
				{
					cmdd = 0xf;
					if( ax_ident->use_rpm )
					{
						LFRD = (INT) inst->n_set;
					}
					else
					{
						LFRD = (INT)((inst->n_set * 60.0 * ax_ident->maximum_output_frequency)/(100.0 *ax_ident->polepairs));
					}
					LTR = (INT) (inst->t_set * 10.0);
					inst->ctrl_is_on = 1;
					/*strcpy( inst->drive_state, "rUn" );								*/
				}
				

			}

		} /* end of if( inst->initialized ) ... */
		if( !inst->quickstop )
			cmdd = 0x0002;
		if( inst->C211 )
			cmdd |= 0x0800;
		if( inst->C212 )
			cmdd |= 0x1000;
		if( inst->C213 )
			cmdd |= 0x2000;
		if( inst->C214 )
			cmdd |= 0x4000;
		if( inst->C215 )
			cmdd |= 0x8000;


		if( inst->initialized || inst->fault )
		{


			/* actual values */
			if( ax_ident->use_rpm )
			{
				inst->n_act = RFRD;
			}
			else
			{
				if( ax_ident->maximum_output_frequency > 0.0001 )
					inst->n_act = (100.0 * (REAL) RFRD * ax_ident->polepairs) / (ax_ident->maximum_output_frequency * 60.0);
				else
					inst->n_act = 0.0;
			}
			inst->alarm = etad & 0x80 ? 1 : 0;
			inst->fault = (etad & 0x0f) == 0x8 ? 1 : 0;
			inst->LFT = _LFT;
			inst->current = (REAL) LCR * 0.1;
			inst->t_act = (REAL) OTR * 0.1;
			inst->thst_drive = (REAL) THD;
			inst->thst_motor = (REAL) THR;



			/* drive state */
			if( hmis != ax_ident->HMIS_old )
			{
				char *s;
				ax_ident->HMIS_old = hmis;
				s = find_value_constant( "HMIS", hmis, ax_ident->drive_type );
				if( s )
					strncpy( inst->drive_state, s, 4 );
			}

			/* fault code */
			if( inst->fault )
			{
				char *s;
				s = find_value_constant( "LFT", _LFT, ax_ident->drive_type );
				if( s )
				{
					strncpy( inst->fault_code, s, 4 );
				}
			}
			else
			{
				memset( inst->fault_code, 0, sizeof(inst->fault_code) );
			}

			/* quit faults */
			if( inst->f_quit )
			{
				cmdd |= 0x80;
			}


			switch( ax_ident->step_read_data )
			{
			case 0: /* wait for command */
				++ax_ident->counter_cyclic_data;
				if( inst->read_parameter == 1 )
				{
					inst->read_parameter = 2; /* busy */
					strcpy( ax_ident->sdo_read_par_name, inst->parameter_name );
					ax_ident->sdo_read_step = 1;  /* start reading */
					ax_ident->step_read_data = 10; /* let user read data from drive */
				}
				else if( ax_ident->counter_cyclic_data > 10 )   /* read cylic fub data */
				{
					strcpy( ax_ident->sdo_read_par_name, "ULN" );
					ax_ident->sdo_read_step = 10;  /* start reading (without logging) */
					ax_ident->step_read_data = 20;
				}
				break;


			case 10: /* let user read data from drive */
				if( ax_ident->sdo_read_step == 0 )
				{
					if( ax_ident->sdo_read_status )
					{
						char tempstring[20];
						inst->status = ax_ident->sdo_read_status;
						m_ltoa( ax_ident->sdo_read_errorinfo, tempstring, 16 );
						strcpy( inst->parameter_value, "16#" );
						strcat( inst->parameter_value, tempstring );
					}
					else
					{
						inst->status = 0;
						strcpy( inst->parameter_value, ax_ident->sdo_read_value_constant );
					}
					inst->read_parameter = 0;
					ax_ident->step_read_data = 0;
				}
				break;


			case 20: /* read cyclic data from drive */
				if( ax_ident->sdo_read_step == 0 )
				{
					if( ax_ident->sdo_read_status == 0)
					{
						inst->udc = (REAL)ax_ident->sdo_read_value / 10.0 * 1.414213;
					}
					if( ax_ident->drive_type == 1 )   /* P84 */
					{
						strcpy( ax_ident->sdo_read_par_name, "PUC" );
						ax_ident->sdo_read_step = 10;  /* start reading (without logging) */
						ax_ident->step_read_data = 21;
					}
					else    /* P74 */
					{
						ax_ident->step_read_data = 0;
						ax_ident->counter_cyclic_data = 0;
					}
				}
				break;


			case 21: /* */
				if( ax_ident->sdo_read_step == 0 )
				{
					if( ax_ident->sdo_read_status == 0)
					{
						inst->encoder_value = (UINT) ax_ident->sdo_read_value;
					}
					ax_ident->step_read_data = 0;
					ax_ident->counter_cyclic_data = 0;
				}
				break;


			} /* end of switch( ax_ident->step_read_data )... */



			/* write a parameter to inverter */
			if( inst->write_parameter == 1 && ax_ident->sdo_write_step == 0 )
			{
				inst->write_parameter = 2;
			}
			if( inst->write_parameter == 2 && ax_ident->sdo_write_step == 0 )
			{
				strcpy( ax_ident->sdo_write_par_name, inst->parameter_name );
				strcpy( ax_ident->sdo_write_value_constant, inst->parameter_value );
				inst->write_parameter = 3;
				ax_ident->sdo_write_step = 1; /* start writing */
			}
			if( inst->write_parameter == 3 && ax_ident->sdo_write_step == 0 )
			{
				inst->status = 0;
				if( ax_ident->sdo_write_status )
				{
					char tempstring[20];
					inst->status = ax_ident->sdo_write_status;
					m_ltoa( ax_ident->sdo_write_errorinfo, tempstring, 16 );
					strcpy( inst->parameter_value, "16#" );
					strcat( inst->parameter_value, tempstring );
				}
				inst->write_parameter = 0;
			}


			/* write new kv to inverter */
			if( (inst->write_parameter == 0) && (inst->kv != ax_ident->kv_old ) && ax_ident->sdo_write_step == 0 )
			{
				ax_ident->kv_old = inst->kv;
				strcpy( inst->parameter_name, "SPG" );
				m_ltoa( inst->kv, (char*) inst->parameter_value, 10 );
				inst->write_parameter = 1;
			}


			/* write new ti to inverter */
			if( (inst->write_parameter == 0) && (inst->ti != ax_ident->ti_old ) && ax_ident->sdo_write_step == 0 )
			{
				ax_ident->ti_old = inst->ti;
				strcpy( inst->parameter_name, "SIt" );
				m_ltoa( inst->ti, (char*) inst->parameter_value, 10 );
				inst->write_parameter = 1;
			}


			/* write new motoring torque limitation to inverter */
			if( (inst->write_parameter == 0) && (fabs( inst->t_limit[0] - ax_ident->t_limit_old[0]) >= 0.1 ) && ax_ident->sdo_write_step == 0 )
			{
				ax_ident->t_limit_old[0] = inst->t_limit[0];
				strcpy( inst->parameter_name, "tLIM" );
				m_ltoa( inst->t_limit[0], (char*) inst->parameter_value, 10 );
				inst->write_parameter = 1;
			}

			/* write new generatoring torque limitation to inverter */
			if( (inst->write_parameter == 0) && (fabs( inst->t_limit[1] - ax_ident->t_limit_old[1]) >= 0.1 ) && ax_ident->sdo_write_step == 0 )
			{
				ax_ident->t_limit_old[1] = inst->t_limit[1];
				strcpy( inst->parameter_name, "tLIG" );
				m_ltoa( inst->t_limit[1], (char*) inst->parameter_value, 10 );
				inst->write_parameter = 1;
			}

		}  /* end of if( inst->initialized || inst->fault )... */


		/* call subroutines */
		if( MODULE_OK )
		{
			write_parameterlist( ax_ident );
			compare_parameterlist( ax_ident );
			read_parameter( ax_ident );
			write_parameter( ax_ident );
		}

		inst->power_line = etad & 0x10 ? 1 : 0;
		inst->ctrl_ready = inst->initialized && inst->power_line && !inst->fault && inst->quickstop;


 		ax_ident->p_alloc->io_mapping.CMDD = cmdd;


	}
	else
	{
		inst->status = ac_invlibERR_ILLEGAL_AXIDENT;
	}
	
	
}




void logCOF( ac_inv_AxIdent *ax_ident )
{
	char tempstring1[80];
	char tempstring2[20];
	strcpy( tempstring1, "ac_invlib COF node " );
	m_ltoa( ax_ident->node_number, tempstring2, 10 );
	strcat( tempstring1, tempstring2 );
	ERRxwarning( ac_invlibERR_NETWORK, ax_ident->step_init, tempstring1 );
}



