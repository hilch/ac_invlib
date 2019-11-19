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
#include <stdlib.h>
#include <string.h>
#include <ac_inv_global.h>

#include <ac_invparameter.h>
#include <P84_registers.h>
#include <P74_registers.h>
#include <P76_registers.h>


/* -----------------------------------------------------------------------------------
   find parameter in list
   returns index of parameter in parameter list or -1 in case of failure
   -----------------------------------------------------------------------------------
*/

int find_parameter( char *name, UINT *index, USINT *subindex, ac_inv_DriveType drive_type )
{
	int i = 0;
	acpireg *regs;

	switch( drive_type )
	{
		default: 		
		regs = p84reg; 
		break;

		case ACPiDriveType_P74: 		
		regs = p74reg; 
		break;

		case ACPiDriveType_P76:
		case ACPiDriveType_P66: 	
		regs = p76reg; 
		break;
	}
	
	while( regs[i].name )
	{
		if( strcasecmp( regs[i].name, name ) == 0 )   /* found ? */
		{
			if( index )
				*index = regs[i].index;
			if( subindex )
				*subindex = regs[i].subindex;
			return i;
		}
		++i;
	}
	return -1; /* not found */
}





/* -----------------------------------------------------------------------------------
 	returns the enumerated name of the parameter's value
   -----------------------------------------------------------------------------------
*/

char *find_value_constant( char *name, UINT value, ac_inv_DriveType drive_type )
{
	int index;
	static char s[20];
	char sign = 'u';

	acpireg *regs;

	switch( drive_type )
	{
		default: 	
		regs = p84reg; 
		break;

		case ACPiDriveType_P74: 	
		regs = p74reg; 
		break;

		case ACPiDriveType_P76: 
		case ACPiDriveType_P66:	
		regs = p76reg; 
		break;
	}


	index = find_parameter( name, 0, 0, drive_type );
	if( index >= 0 )
	{
		int i = 0;
		sign = regs[index].sign;
		/* translate parameter value to enumeration constant */
		if( regs[index].enu )   /* are constants defined ? */
		{
			while( regs[index].enu[i].name )
			{
				if( regs[index].enu[i].value == value )
				{
					return( regs[index].enu[i].name );  /* return enumerated name */
				}
				++i;
			}
		}
	}
	if( sign == 'u' )
		m_ltoa( value , s, 10 );  /* return numeric value */
	else
		m_ltoa( (INT) value, s, 10 );
	return s; /* not found or no constant defined */

}


/* -----------------------------------------------------------------------------------
 	returns the value for the given constant
   -----------------------------------------------------------------------------------
*/

int find_numeric_value( char *name, char *constant, ac_inv_DriveType drive_type )
{
	int index;
	acpireg *regs;

	switch( drive_type )
	{
		default: 	
		regs = p84reg; 
		break;

		case ACPiDriveType_P74: 	
		regs = p74reg; 
		break;

		case ACPiDriveType_P76: 	
		case ACPiDriveType_P66:
		regs = p76reg; 
		break;
	}


	index = find_parameter( name, 0, 0, drive_type );
	if( index >= 0 )
	{
		int i = 0;
		/* try to find the constant */
		if( regs[index].enu )   /* are constants defined ? */
		{
			while( regs[index].enu[i].name )
			{
				if( strcasecmp( regs[index].enu[i].name, constant ) == 0 )
				{
					return( regs[index].enu[i].value );  /* return enumerated name */
				}
				++i;
			}
		}
	}
	return m_atol(constant);  /* return numeric value */

}



/* -------------------------------------------------------------------------------------
   read parameter from inverter
   -------------------------------------------------------------------------------------
*/

void read_parameter( ac_inv_AxIdent *ax_ident )
{

	for(;;)
	{
		switch( ax_ident->sdo_read_step )
		{
		case 0: /* wait for command */
			ax_ident->fub_sdoread.enable = 0;
			break;

		case 1: /* start read */
			if( find_parameter( ax_ident->sdo_read_par_name, &ax_ident->fub_sdoread.index, &ax_ident->fub_sdoread.subindex, ax_ident->drive_type ) < 0 )
			{
				ax_ident->sdo_read_step = 3;
				ax_ident->sdo_read_status = ac_invlibERR_PARNOTFOUND;
				ax_ident->sdo_read_errorinfo = 0;
				continue; /* save on cycle */
			}
			else
			{
				/* fill the fub structure */
				ax_ident->sdo_read_value = 0;
				ax_ident->fub_sdoread.enable = 1;
				ax_ident->fub_sdoread.pData = (UDINT) &ax_ident->sdo_read_value;
				ax_ident->fub_sdoread.datalen = sizeof(ax_ident->sdo_read_value);
				ax_ident->sdo_read_step = 2;
				ax_ident->sdo_read_status = 65535;
				ax_ident->sdo_read_errorinfo = 0;

			}
			break;

		case 2: /* wait until read */
			if( ax_ident->fub_sdoread.status != 65535 )  /* value read */
			{
				ax_ident->fub_sdoread.enable = 0; /* disable fub */
				ax_ident->sdo_read_status = ax_ident->fub_sdoread.status;
				ax_ident->sdo_read_errorinfo = ax_ident->fub_sdoread.errorinfo;
				ax_ident->sdo_read_step = 3;
				continue; /* save on cycle */
			}
			break;


		case 3: /* write into log */
		{
			char tempstring[20];
			const char *ret = find_value_constant( ax_ident->sdo_read_par_name, ax_ident->sdo_read_value, ax_ident->drive_type );
			strcpy( ax_ident->sdo_read_value_constant, ret );
			strcpy( ax_ident->log_info, ax_ident->interface );
			strcat( ax_ident->log_info, "." );
			m_ltoa( ax_ident->node_number, tempstring, 10 );
			strcat( ax_ident->log_info, tempstring );
			strcat( ax_ident->log_info, "  " );
			strcat( ax_ident->log_info, ax_ident->sdo_read_par_name );
			strcat( ax_ident->log_info, " -->#" );
			strcat( ax_ident->log_info, ax_ident->sdo_read_value_constant );
			if( ax_ident->sdo_read_status != 0 )
			{
				ax_ident->fub_log_write.logLevel = arlogLEVEL_FATAL;
				if( ax_ident->sdo_read_status == ERR_ASEPL_ACCESS_FAILED )
				{
					strcat( ax_ident->log_info, ":errorinfo=" );
					strcat( ax_ident->log_info, "/0x" );
					m_ltoa( ax_ident->sdo_read_errorinfo, tempstring, 16 );
					strcat( ax_ident->log_info, tempstring );
				}
				else if( ax_ident->sdo_read_status == ac_invlibERR_PARNOTFOUND )
				{
					strcat( ax_ident->log_info, ":parameter not found" );
				}
			}
			else
			{
				ax_ident->fub_log_write.logLevel = arlogLEVEL_INFO;
			}
			ax_ident->fub_log_write.errornr = ax_ident->sdo_read_status;
			ax_ident->fub_log_write.mem = (UDINT) &ax_ident->node_number;
			ax_ident->fub_log_write.len = sizeof(ax_ident->node_number);
			ax_ident->fub_log_write.asciiString = (UDINT) ax_ident->log_info;
			AsArLogWrite( &ax_ident->fub_log_write );
			ax_ident->sdo_read_step = 4;
		}
		break;


		case 4:  /* wait until log entry written */
			if( ax_ident->fub_log_write.status != 65535 )
			{
				ax_ident->sdo_read_step = 0;
			}
			else
			{
				AsArLogWrite( &ax_ident->fub_log_write );
			}
			break;


			/* start reading without writing to log file in case of success (for fub inside use ! */
		case 10:
			if( find_parameter( ax_ident->sdo_read_par_name, &ax_ident->fub_sdoread.index, &ax_ident->fub_sdoread.subindex, ax_ident->drive_type ) < 0 )
			{
				ax_ident->sdo_read_step = 3;
				ax_ident->sdo_read_status = ac_invlibERR_PARNOTFOUND;
				ax_ident->sdo_read_errorinfo = 0;
				continue; /* save on cycle */
			}
			else
			{
				/* fill the fub structure */
				ax_ident->sdo_read_value = 0;
				ax_ident->fub_sdoread.enable = 1;
				ax_ident->fub_sdoread.pData = (UDINT) &ax_ident->sdo_read_value;
				ax_ident->fub_sdoread.datalen = sizeof(ax_ident->sdo_read_value);
				ax_ident->sdo_read_step = 11;
				ax_ident->sdo_read_status = 65535;
				ax_ident->sdo_read_errorinfo = 0;
			}
			break;


		case 11: /* wait until read */
			if( ax_ident->fub_sdoread.status != 65535 )  /* value read */
			{
				ax_ident->fub_sdoread.enable = 0; /* disable fub */
				ax_ident->sdo_read_status = ax_ident->fub_sdoread.status;
				ax_ident->sdo_read_errorinfo = ax_ident->fub_sdoread.errorinfo;
				ax_ident->sdo_read_step = 0;
			}
			break;


			/* use SDO read directly (for fub inside use !) */
		case 100:
			ax_ident->fub_sdoread.enable = 1;
			ax_ident->sdo_read_step = 101;
			break;

		case 101:
			if( ax_ident->fub_sdoread.status != 65535 )  /* value read */
			{
				ax_ident->fub_sdoread.enable = 0; /* disable fub */
				ax_ident->sdo_read_status = ax_ident->fub_sdoread.status;
				ax_ident->sdo_read_errorinfo = ax_ident->fub_sdoread.errorinfo;
				ax_ident->sdo_read_step = 0;
			}
			break;


		}
		break;  /* exit for(;;) */
	}

	if( ax_ident->isCANopen )
	{
		/* FUB- Eingaenge umkopieren */
		ax_ident->fub_canopen_sdoread.enable = ax_ident->fub_sdoread.enable;
		ax_ident->fub_canopen_sdoread.index = ax_ident->fub_sdoread.index;
		ax_ident->fub_canopen_sdoread.subindex = ax_ident->fub_sdoread.subindex;
		ax_ident->fub_canopen_sdoread.transfertype = ax_ident->sdo_read_transfertype;
		ax_ident->fub_canopen_sdoread.pRxdata = ax_ident->fub_sdoread.pData;
		ax_ident->fub_canopen_sdoread.maxlength = ax_ident->fub_sdoread.datalen;
		CANopenSDOReadData( &ax_ident->fub_canopen_sdoread );
		/* FUB- Ausgaenge umkopieren */
		ax_ident->fub_sdoread.status = ax_ident->fub_canopen_sdoread.status;
		ax_ident->fub_sdoread.errorinfo = ax_ident->fub_canopen_sdoread.errorinfo;
		ax_ident->sdo_read_transfertype = coSDO_TYPE_AUTO_BEST_CASE;
	}
	else
		EplSDORead( &ax_ident->fub_sdoread );

}



/* -------------------------------------------------------------------------------------
   write parameter to inverter via EPL
   -------------------------------------------------------------------------------------
*/

void write_parameter( ac_inv_AxIdent *ax_ident )
{

	for(;;)
	{
		switch( ax_ident->sdo_write_step )
		{
		case 0: /* wait for command */
			ax_ident->fub_sdowrite.enable = 0;
			break;

		case 1: /* start write */
			if( find_parameter( ax_ident->sdo_write_par_name, &ax_ident->fub_sdowrite.index, &ax_ident->fub_sdowrite.subindex, ax_ident->drive_type ) < 0 )
			{
				ax_ident->sdo_write_step = 3;
				ax_ident->sdo_write_status = ac_invlibERR_PARNOTFOUND;
				ax_ident->sdo_write_errorinfo = 0;
				continue; /* save on cycle */
			}
			else
			{
				/* fill the fub structure */
				ax_ident->sdo_write_value = find_numeric_value( ax_ident->sdo_write_par_name, ax_ident->sdo_write_value_constant, ax_ident->drive_type );
				ax_ident->fub_sdowrite.enable = 1;
				ax_ident->sdo_write_step = 2;
				ax_ident->sdo_write_status = 65535;
				ax_ident->sdo_write_errorinfo = 0;
			}
			break;

		case 2: /* wait until written */
			if( ax_ident->fub_sdowrite.status != 65535 )
			{
				ax_ident->sdo_write_status = ax_ident->fub_sdowrite.status;
				ax_ident->sdo_write_errorinfo = ax_ident->fub_sdowrite.errorinfo;
				ax_ident->fub_sdowrite.enable = 0; /* disable fub */
				ax_ident->sdo_write_step = 3;
				continue; /* save on cycle */
			}
			break;


		case 3: /* write into log */
		{
			char tempstring[20];

			strcpy( ax_ident->log_info, ax_ident->interface );
			strcat( ax_ident->log_info, "." );
			m_ltoa( ax_ident->node_number, tempstring, 10 );
			strcat( ax_ident->log_info, tempstring );
			strcat( ax_ident->log_info, " #" );
			strcat( ax_ident->log_info, ax_ident->sdo_write_value_constant );
			strcat( ax_ident->log_info, " -->" );
			strcat( ax_ident->log_info, ax_ident->sdo_write_par_name );
			if( ax_ident->sdo_write_status != 0 )
			{
				if( ax_ident->sdo_write_status == ERR_ASEPL_ACCESS_FAILED )
				{
					ax_ident->fub_log_write.logLevel = arlogLEVEL_FATAL;
					strcat( ax_ident->log_info, " :errorinfo=" );
					strcat( ax_ident->log_info, "/0x" );
					m_ltoa( ax_ident->sdo_write_errorinfo, tempstring, 16 );
					strcat( ax_ident->log_info, tempstring );
				}
				else if( ax_ident->sdo_write_status == ac_invlibERR_PARNOTFOUND )
				{
					strcat( ax_ident->log_info, ":parameter not found" );
				}
			}
			else
			{
				ax_ident->fub_log_write.logLevel = arlogLEVEL_INFO;
			}
			ax_ident->fub_log_write.errornr = ax_ident->sdo_write_status;
			ax_ident->fub_log_write.mem = (UDINT) &ax_ident->node_number;
			ax_ident->fub_log_write.len = sizeof(ax_ident->node_number);
			ax_ident->fub_log_write.asciiString = (UDINT) ax_ident->log_info;
			AsArLogWrite( &ax_ident->fub_log_write );
			ax_ident->sdo_write_step = 4;
			continue; /* save on cycle */
		}
		break;


		case 4:  /* wait until log entry written */
			if( ax_ident->fub_log_write.status != 65535 )
			{
				ax_ident->sdo_write_step = 0;
			}
			else
			{
				AsArLogWrite( &ax_ident->fub_log_write );
			}
			break;

		}
		break; /* exit for(;;) */
	}

	if( ax_ident->isCANopen )
	{
		/* FUB- Eingaenge umkopieren */
		ax_ident->fub_canopen_sdowrite.enable = ax_ident->fub_sdowrite.enable;
		ax_ident->fub_canopen_sdowrite.index = ax_ident->fub_sdowrite.index;
		ax_ident->fub_canopen_sdowrite.subindex = ax_ident->fub_sdowrite.subindex;
		CANopenSDOWriteData( &ax_ident->fub_canopen_sdowrite );
		/* FUB- Ausgaenge umkopieren */
		ax_ident->fub_sdowrite.status = ax_ident->fub_canopen_sdowrite.status;
		ax_ident->fub_sdowrite.errorinfo = ax_ident->fub_canopen_sdowrite.errorinfo;
	}
	else
		EplSDOWrite( &ax_ident->fub_sdowrite );

}




/* -------------------------------------------------------------------------------------
   write parameter from parameter list to inverter
   -------------------------------------------------------------------------------------
*/

void write_parameterlist( ac_inv_AxIdent *ax_ident )
{
	char tempstring[80];
	char *source, *dest;
	int i;

	switch( ax_ident->write_parameterlist_step )
	{
	case 0:
		break;

	case 1: /* download started - write header to log */
		if( ax_ident->p_alloc->pcfgpar[0] || ax_ident->p_alloc->pcfgpar[1] || ax_ident->p_alloc->pcfgpar[2] )
		{
			ax_ident->parameterlist_index = 0;
			ax_ident->sdo_write_status = 0; /* clear last SDO write error */
			strcpy( ax_ident->log_info, ax_ident->interface );
			strcat( ax_ident->log_info, "." );
			m_ltoa( ax_ident->node_number, tempstring, 10 );
			strcat( ax_ident->log_info, tempstring );
			strcat( ax_ident->log_info, " download " );
			for( i = 0; i < 3; ++i )
			{
				if( ax_ident->p_alloc->pcfgpar[i] )
				{
					strcat( ax_ident->log_info, " \"" );
					strcat( ax_ident->log_info, (char*)	ax_ident->p_alloc->pcfgpar[i] );
					strcat( ax_ident->log_info, "\" " );
				}
			}
			ax_ident->fub_log_write.logLevel = arlogLEVEL_INFO;
			ax_ident->fub_log_write.errornr = 0;
			ax_ident->fub_log_write.mem = (UDINT) &ax_ident->node_number;
			ax_ident->fub_log_write.len = sizeof(ax_ident->node_number);
			ax_ident->fub_log_write.asciiString = (UDINT) ax_ident->log_info;
			AsArLogWrite( &ax_ident->fub_log_write );
			ax_ident->write_parameterlist_step	= 2;
		}
		else
		{
			ax_ident->write_parameterlist_step	= 0;
		}
		break;


	case 2:  /* wait until log entry written */
		if( ax_ident->fub_log_write.status == 0 )
		{
			ax_ident->write_parameterlist_step = 3;
		}
		else if( ax_ident->fub_log_write.status != 65535 )  /* error */
		{
			ax_ident->write_parameterlist_step = 0;
		}
		else
		{
			AsArLogWrite( &ax_ident->fub_log_write );
		}
		break;


	case 3: /* read next row */
		if( ax_ident->sdo_write_step == 0 )   /* service channel free ? */
		{
			source = (char*) ax_ident->p_sorted_parameters[ax_ident->parameterlist_index];
			dest = tempstring;
			memset( tempstring, 0, sizeof(tempstring) );
			if( ax_ident->sdo_write_status != 0 )  /* error after writing the last parameter */
			{
				ax_ident->write_parameterlist_status = ax_ident->sdo_write_status;
				ax_ident->write_parameterlist_step = 0;
				break;
			}
			else if( ax_ident->parameterlist_index >= ax_ident->number_of_parameters )  /* end of list */
			{
				strcpy( ax_ident->log_info, ax_ident->interface );
				strcat( ax_ident->log_info, "." );
				m_ltoa( ax_ident->node_number, tempstring, 10 );
				strcat( ax_ident->log_info, tempstring );
				strcat( ax_ident->log_info, " end of " );
				for( i = 0; i < 3; ++i )
				{
					if( ax_ident->p_alloc->pcfgpar[i] )
					{
						strcat( ax_ident->log_info, " \"" );
						strcat( ax_ident->log_info, (char*)	ax_ident->p_alloc->pcfgpar[i] );
						strcat( ax_ident->log_info, "\" " );
					}
				}
				ax_ident->fub_log_write.logLevel = arlogLEVEL_INFO;
				ax_ident->fub_log_write.errornr = 0;
				ax_ident->fub_log_write.mem = (UDINT) &ax_ident->node_number;
				ax_ident->fub_log_write.len = sizeof(ax_ident->node_number);
				ax_ident->fub_log_write.asciiString = (UDINT) ax_ident->log_info;
				AsArLogWrite( &ax_ident->fub_log_write );
				ax_ident->write_parameterlist_step	= 4;
				break;
			}
			else
			{
				while( ax_ident->parameterlist_index < ax_ident->number_of_parameters )
				{
					if( *source == 0 )   /* end of a row ? */
					{
						strncpy( ax_ident->sdo_write_value_constant, tempstring, sizeof(ax_ident->sdo_write_value_constant) - 1 );
						ax_ident->sdo_write_step = 1;  /* write parameter to inverter */
						++ax_ident->parameterlist_index;
						break;
					}
					else if( !isprint(*source) || *source == ' ' )   /* ignore control chars and spaces */
					{
						++source;
					}
					else if( *source == '=' )
					{
						++source;
						strncpy( ax_ident->sdo_write_par_name, tempstring, sizeof(ax_ident->sdo_write_par_name) - 1 );
						memset( tempstring, 0, sizeof(tempstring) );
						dest = tempstring;
					}
					else
					{
						*dest++ = *source++; /* copy to tempstring */
					}
				}
			}
		}
		break;


	case 4: /* wait until tail is written */
		if( ax_ident->fub_log_write.status != 65535 )
		{
			ax_ident->write_parameterlist_step = 0;
		}
		else
		{
			AsArLogWrite( &ax_ident->fub_log_write );
		}
		break;






	}


}



/* -------------------------------------------------------------------------------------
   compare parameter from parameter list with inverter
   -------------------------------------------------------------------------------------
*/


void compare_parameterlist( ac_inv_AxIdent *ax_ident )
{
	char tempstring[80];
	char *source, *dest;

	switch( ax_ident->compare_parameterlist_step )
	{
	case 0:

		break;

	case 1: /* start comparing */
		ax_ident->parameterlist_index = 0;
		ax_ident->compare_parameterlist_step = 2;
		break;

		/* compare next parameter */
	case 2:
		if( ax_ident->parameterlist_index >= ax_ident->number_of_parameters )  /* end of list */
		{
			ax_ident->compare_parameterlist_step	= 0;
			break;
		}
		else
		{
			source = (char*) ax_ident->p_sorted_parameters[ax_ident->parameterlist_index];
			dest = tempstring;
			memset( tempstring, 0, sizeof(tempstring) );
			while( ax_ident->parameterlist_index < ax_ident->number_of_parameters )
			{
				if( *source == 0 )   /* end of a row ? */
				{
					*dest++ = *source++;
					strncpy( ax_ident->compare_value_constant, tempstring, sizeof(ax_ident->compare_value_constant) - 1 );
					ax_ident->sdo_read_step = 10; /* read without logger entry */
					++ax_ident->parameterlist_index;
					ax_ident->compare_parameterlist_step = 3;
					break;
				}
				else if( !isprint(*source) || *source == ' ' )   /* ignore control chars and spaces */
				{
					++source;
				}
				else if( *source == '=' )
				{
					++source;
					strncpy( ax_ident->sdo_read_par_name, tempstring, sizeof(ax_ident->sdo_read_par_name) - 1 );
					memset( tempstring, 0, sizeof(tempstring) );
					dest = tempstring;
				}
				else
				{
					*dest++ = *source++; /* copy to tempstring */
				}

			}
		}
		break;


		case 3: /* wait for sdo read value */
			if( ax_ident->sdo_read_step == 0 )   /* service channel free ? */
			{
				const char *ret = find_value_constant( ax_ident->sdo_read_par_name, ax_ident->sdo_read_value, ax_ident->drive_type );
				strcpy( ax_ident->sdo_read_value_constant, ret );
				if( strcasecmp( ax_ident->sdo_read_value_constant, ax_ident->compare_value_constant) )  /* different to set value ? */
				{
					ax_ident->compare_parameterlist_step = 4;
				}
				else   /* equal -> ok */
				{
					ax_ident->compare_parameterlist_step = 2;
				}
			}
			break;


		case 4:  /* write into log */
		{
			char tempstring[20];

			strcpy( ax_ident->log_info, ax_ident->interface );
			strcat( ax_ident->log_info, "." );
			m_ltoa( ax_ident->node_number, tempstring, 10 );
			strcat( ax_ident->log_info, tempstring );
			strcat( ax_ident->log_info, "  " );
			strcat( ax_ident->log_info, ax_ident->sdo_read_par_name );
			strcat( ax_ident->log_info, " -->#" );
			strcat( ax_ident->log_info, ax_ident->sdo_read_value_constant );
			strcat( ax_ident->log_info, " (#" );
			strcat( ax_ident->log_info, ax_ident->compare_value_constant );
			strcat( ax_ident->log_info, ")" );
			ax_ident->fub_log_write.logLevel = arlogLEVEL_WARNING;
			ax_ident->fub_log_write.errornr = ac_invlibERR_CFI;
			ax_ident->fub_log_write.mem = (UDINT) &ax_ident->node_number;
			ax_ident->fub_log_write.len = sizeof(ax_ident->node_number);
			ax_ident->fub_log_write.asciiString = (UDINT) ax_ident->log_info;
			AsArLogWrite( &ax_ident->fub_log_write );
			ax_ident->compare_parameterlist_step = 5;
			break;


			case 5:  /* wait until log entry written */
				if( ax_ident->fub_log_write.status != 65535 )
				{
					ax_ident->compare_parameterlist_step = 0;
				}
				else
				{
					AsArLogWrite( &ax_ident->fub_log_write );
				}
			}
			break;



		}


	}


/* -------------------------------------------------------------------------------------
   create a list of parameters from the data modules
   -------------------------------------------------------------------------------------
*/

void create_parameterlist( ac_inv_AxIdent *ax_ident )
{
	int index_module = 0;
	ax_ident->number_of_parameters = 0;
	memset( &ax_ident->p_sorted_parameters, 0, sizeof(ax_ident->p_sorted_parameters) );
	while( ax_ident->p_alloc->pcfgpar[index_module] )
	{
		ax_ident->fub_datobjinfo.enable = 1;
		ax_ident->fub_datobjinfo.pName = ax_ident->p_alloc->pcfgpar[index_module];
		DatObjInfo( &ax_ident->fub_datobjinfo );
		if( ax_ident->fub_datobjinfo.status == 0 )
		{
			char *source = (char*) ax_ident->fub_datobjinfo.pDatObjMem;
			while( ax_ident->fub_datobjinfo.len ){					
				if( *source == 0 ){  /* end of a row ? */
					++ax_ident->number_of_parameters;	
					while( *source == 0 && ax_ident->fub_datobjinfo.len ){  /* ignore filling zeros */
						++source;
						--ax_ident->fub_datobjinfo.len;	
					}
				}
				else if( ax_ident->p_sorted_parameters[ax_ident->number_of_parameters] == 0 ) {  /* store pointer to parameter row */
					ax_ident->p_sorted_parameters[ax_ident->number_of_parameters] = (UDINT) source++;							
					ax_ident->fub_datobjinfo.len--;
				}
				else {
					source++;
					ax_ident->fub_datobjinfo.len--;
				}
			}
		}
		if( ++index_module >= 3	)  /* no more data modules */
			break;
	}
}


/* -------------------------------------------------------------------------------------
   compare function for qsort()
   -------------------------------------------------------------------------------------
*/

int compare_download_index_P84 (const void * a, const void * b)
{
	char name[20];
	char *s, *d;
	int index_a=0, index_b=0;
	char **list;

	/* copy parameter name a */
	s = *(char**) a; d= name;
	while( *s != ' ' && *s != 0 && *s != '=')
		*d++ = *s++;
	*d = 0;
	
	list = P84_download_index;
	while( list[index_a] )
	{
		if( strcasecmp(  list[index_a], name ) == 0 )   /* found ? */
			break;
		++index_a;
	}

	/* copy parameter name b */
	s = *(char**) b; d= name;
	while( *s != ' ' && *s != 0 && *s != '=')
		*d++ = *s++;
	*d = 0;
	
	list = P84_download_index;
	while( list[index_b] )
	{
		if( strcasecmp(  list[index_b], name ) == 0 )   /* found ? */
			break;
		++index_b;
	}

	if ( index_a <  index_b ) return -1;
	if ( index_a >  index_b ) return 1;

	return 0;
}



int compare_download_index_P74 (const void * a, const void * b)
{
	char name[20];
	char *s, *d;
	int index_a=0, index_b=0;
	char **list;

	/* copy parameter name a */
	s = *(char**) a; d= name;
	while( *s != ' ' && *s != 0 && *s != '=')
		*d++ = *s++;
	*d = 0;
	
	list = P74_download_index;
	while( list[index_a] )
	{
		if( strcasecmp(  list[index_a], name ) == 0 )   /* found ? */
			break;
		++index_a;
	}

	/* copy parameter name b */
	s = *(char**) b; d= name;
	while( *s != ' ' && *s != 0 && *s != '=')
		*d++ = *s++;
	*d = 0;
	
	list = P74_download_index;
	while( list[index_b] )
	{
		if( strcasecmp(  list[index_b], name ) == 0 )   /* found ? */
			break;
		++index_b;
	}

	if ( index_a <  index_b ) return -1;
	if ( index_a >  index_b ) return 1;

	return 0;
}




int compare_download_index_P76 (const void * a, const void * b)
{
	char name[20];
	char *s, *d;
	int index_a=0, index_b=0;
	char **list;

	/* copy parameter name a */
	s = *(char**) a; d= name;
	while( *s != ' ' && *s != 0 && *s != '=')
		*d++ = *s++;
	*d = 0;
	
	list = P76_download_index;
	while( list[index_a] )
	{
		if( strcasecmp(  list[index_a], name ) == 0 )   /* found ? */
			break;
		++index_a;
	}

	/* copy parameter name b */
	s = *(char**) b; d= name;
	while( *s != ' ' && *s != 0 && *s != '=')
		*d++ = *s++;
	*d = 0;
	
	list = P76_download_index;
	while( list[index_b] )
	{
		if( strcasecmp(  list[index_b], name ) == 0 )   /* found ? */
			break;
		++index_b;
	}

	if ( index_a <  index_b ) return -1;
	if ( index_a >  index_b ) return 1;

	return 0;
}





/* -------------------------------------------------------------------------------------
   sorts the parameter list
   -------------------------------------------------------------------------------------
*/


void sort_parameterlist( ac_inv_AxIdent *ax_ident )
{
	switch( ax_ident->drive_type )
	{
		default:
		qsort( (void*) &ax_ident->p_sorted_parameters, ax_ident->number_of_parameters, sizeof(UDINT), compare_download_index_P84 );
		break;

		case ACPiDriveType_P74:
		qsort( (void*) &ax_ident->p_sorted_parameters, ax_ident->number_of_parameters, sizeof(UDINT), compare_download_index_P74 );
		break;

		case ACPiDriveType_P76:
		case ACPiDriveType_P66:
		qsort( (void*) &ax_ident->p_sorted_parameters, ax_ident->number_of_parameters, sizeof(UDINT), compare_download_index_P76 );
		break;
	}
}

