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

#include "P76_enumerations.h"

acpireg p76reg[] = {
	{ "CMI",	0x2037,	0x05,	'u',	0			},	/* Extended control word */
	{ "CMD",	0x2037,	0x02,	'u',	0			},	/* DrivecomCmdReg */
	{ "RPR",	0x2001,	0x15,	'u',	en_P76_RPR	},	/* Operating time reset */
	{ "LFRD",	0x2038,	0x03,	's',	0			},	/* Speed setpoint */
	{ "LFR",	0x2037,	0x03,	's',	0			},	/* Frequency reference */
	{ "PISP",	0x2037,	0x04,	'u',	0			},	/* PID set point */
	{ "AIV1",	0x2016,	0x52,	'u',	0			},	/* Image input AIV1 */
	{ "MFR",	0x2058,	0x20,	'u',	0			},	/* Multiplying coefficient */
	{ "ETA",	0x2002,	0x02,	'u',	0			},	/* Drivecom state register */
	{ "HMIS",	0x2002,	0x29,	'u',	en_P76_HMIS	},	/* Drive state */
	{ "ETI",	0x2002,	0x07,	'u',	0			},	/* Extended state register */
	{ "CRC",	0x2036,	0x2A,	'u',	0			},	/* Reference channel */
	{ "CCC",	0x2036,	0x2B,	'u',	0			},	/* Active command channel */
	{ "CNFS",	0x2032,	0x15,	'u',	en_P76_CNFS	},	/* Active configuration */
	{ "STUN",	0x2042,	0x12,	'u',	en_P76_STUN	},	/* Tune selection */
	{ "SMOT",	0x2042,	0x2E,	'u',	en_P76_SMOT	},	/* Status of motor tune in term of saliency */
	{ "ECSS",	0x2024,	0x5B,	'u',	en_P76_ETST	},	/* EtherCAT slave status */
	{ "ECAA",	0x2024,	0x5D,	'u',	0			},	/* EtherCAT address */
	{ "RFRD",	0x2038,	0x05,	's',	0			},	/* Output velocity */
	{ "RFR",	0x2002,	0x03,	's',	0			},	/* Output frequency */
	{ "OTR",	0x2002,	0x06,	's',	0			},	/* Motor torque */
	{ "LCR",	0x2002,	0x05,	'u',	0			},	/* Motor current */
	{ "UOP",	0x2002,	0x09,	'u',	0			},	/* Motor voltage */
	{ "OPR",	0x2002,	0x0C,	's',	0			},	/* Motor power */
	{ "FRHD",	0x2038,	0x06,	's',	0			},	/* Speed reference before ramp */
	{ "FROD",	0x2038,	0x2A,	's',	0			},	/* Speed reference after ramp */
	{ "FRH",	0x2002,	0x04,	's',	0			},	/* Freq. ref. before ramp */
	{ "FRO",	0x203C,	0x16,	's',	0			},	/* Frequency reference after ramp */
	{ "RPC",	0x2059,	0x53,	'u',	0			},	/* PID reference */
	{ "RPF",	0x2059,	0x52,	'u',	0			},	/* PID feedback */
	{ "RPE",	0x2059,	0x51,	's',	0			},	/* PID error */
	{ "RPO",	0x2059,	0x54,	's',	0			},	/* PID Output */
	{ "ULN",	0x2002,	0x08,	'u',	0			},	/* Line mains voltage */
	{ "THD",	0x2002,	0x0A,	'u',	0			},	/* Drive thermal state */
	{ "THR",	0x2042,	0x1F,	'u',	0			},	/* Motor thermal state */
	{ "RTH",	0x2002,	0x20,	'u',	0			},	/* Motor run time */
	{ "PTH",	0x2002,	0x22,	'u',	0			},	/* Power on time */
	{ "IL1R",	0x2016,	0x03,	'u',	0			},	/* Logic inputs states */
	{ "OL1R",	0x2016,	0x0D,	'u',	0			},	/* Logic outputs states */
	{ "AI1C",	0x2016,	0x2B,	's',	0			},	/* Physical value AI1 */
	{ "AI1R",	0x2016,	0x21,	's',	0			},	/* Analog input 1 standardized value */
	{ "AI2C",	0x2016,	0x2C,	's',	0			},	/* Physical value AI2 */
	{ "AI2R",	0x2016,	0x22,	's',	0			},	/* Analog input 2 standardized value */
	{ "AI3C",	0x2016,	0x2D,	's',	0			},	/* Physical value AI3 */
	{ "AI3R",	0x2016,	0x23,	's',	0			},	/* Analog input 3 standardized value */
	{ "AO1C",	0x2016,	0x48,	's',	0			},	/* AO1 physical value */
	{ "FQS",	0x2074,	0x04,	'u',	0			},	/* Pulse input working freq. */
	{ "AO1R",	0x2016,	0x3E,	's',	0			},	/* Analog output 1 standardized value */
	{ "ERRD",	0x2038,	0x07,	'u',	en_P76_ERRD	},	/* CiA402 fault code */
	{ "LFT",	0x2029,	0x16,	'u',	en_P76_LFT	},	/* Last fault occurred */
	{ "CIC",	0x2029,	0x1F,	'u',	0			},	/* Incorrect configuration */
	{ "CNF",	0x2029,	0x21,	'u',	0			},	/* Comm. option fault */
	{ "ILF1",	0x2029,	0x23,	'u',	0			},	/* Internal link fault 1 */
	{ "FNB",	0x202B,	0x5E,	'u',	0			},	/* Fault counter */
	{ "DP0",	0x202A,	0x01,	'u',	en_P76_LFT	},	/* Fault code on last fault */
	{ "ULP0",	0x202A,	0x47,	'u',	0			},	/* Mains voltage */
	{ "LCP0",	0x202A,	0x29,	's',	0			},	/* Motor current */
	{ "RFP0",	0x202A,	0x33,	's',	0			},	/* Output frequency */
	{ "THP0",	0x202A,	0x51,	'u',	0			},	/* Motor thermal state */
	{ "EP0",	0x202A,	0x0B,	'u',	0			},	/* State word */
	{ "IP0",	0x202A,	0x15,	'u',	0			},	/* ETI state word */
	{ "CMP0",	0x202A,	0x1F,	'u',	0			},	/* Cmd word */
	{ "CRP0",	0x202A,	0x5B,	'u',	0			},	/* Channels active on last fault */
	{ "RTP0",	0x202A,	0x3D,	'u',	0			},	/* Elapsed time */
	{ "OTP0",	0x202B,	0x1F,	's',	0			},	/* Estimated motor torque value of actual fault */
	{ "TDP0",	0x202B,	0x29,	'u',	0			},	/* Mesured drive thermal state of actual fault */
	{ "TJP0",	0x202B,	0x33,	'u',	0			},	/* Estimated TJ value of actual fault */
	{ "SFP0",	0x202B,	0x3D,	'u',	0			},	/* Switching frequency really applied by MotorControl of actual fault */
	{ "DP1",	0x202A,	0x02,	'u',	en_P76_LFT	},	/* Fault code on fault n-1 */
	{ "ULP1",	0x202A,	0x48,	'u',	0			},	/* Mains voltage */
	{ "LCP1",	0x202A,	0x2A,	's',	0			},	/* Motor current */
	{ "RFP1",	0x202A,	0x34,	's',	0			},	/* Output frequency */
	{ "THP1",	0x202A,	0x52,	'u',	0			},	/* Motor thermal state */
	{ "EP1",	0x202A,	0x0C,	'u',	0			},	/* State word */
	{ "IP1",	0x202A,	0x16,	'u',	0			},	/* ETI state word */
	{ "CMP1",	0x202A,	0x20,	'u',	0			},	/* Cmd word */
	{ "CRP1",	0x202A,	0x5C,	'u',	0			},	/* Active channels on fault n-1 */
	{ "RTP1",	0x202A,	0x3E,	'u',	0			},	/* Elapsed time */
	{ "OTP1",	0x202B,	0x20,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP1",	0x202B,	0x2A,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP1",	0x202B,	0x34,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP1",	0x202B,	0x3E,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "DP2",	0x202A,	0x03,	'u',	en_P76_LFT	},	/* Fault code on fault n-2 */
	{ "ULP2",	0x202A,	0x49,	'u',	0			},	/* Mains voltage */
	{ "LCP2",	0x202A,	0x2B,	's',	0			},	/* Motor current */
	{ "RFP2",	0x202A,	0x35,	's',	0			},	/* Output frequency */
	{ "THP2",	0x202A,	0x53,	'u',	0			},	/* Motor thermal state */
	{ "EP2",	0x202A,	0x0D,	'u',	0			},	/* State word */
	{ "IP2",	0x202A,	0x17,	'u',	0			},	/* ETI state word */
	{ "CMP2",	0x202A,	0x21,	'u',	0			},	/* Cmd word */
	{ "CRP2",	0x202A,	0x5D,	'u',	0			},	/* Active channels on fault n-2 */
	{ "RTP2",	0x202A,	0x3F,	'u',	0			},	/* Elapsed time */
	{ "OTP2",	0x202B,	0x21,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP2",	0x202B,	0x2B,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP2",	0x202B,	0x35,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP2",	0x202B,	0x3F,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "DP3",	0x202A,	0x04,	'u',	en_P76_LFT	},	/* Fault code on fault n-3 */
	{ "ULP3",	0x202A,	0x4A,	'u',	0			},	/* Mains voltage */
	{ "LCP3",	0x202A,	0x2C,	's',	0			},	/* Motor current */
	{ "RFP3",	0x202A,	0x36,	's',	0			},	/* Output frequency */
	{ "THP3",	0x202A,	0x54,	'u',	0			},	/* Motor thermal state */
	{ "EP3",	0x202A,	0x0E,	'u',	0			},	/* State word */
	{ "IP3",	0x202A,	0x18,	'u',	0			},	/* ETI state word */
	{ "CMP3",	0x202A,	0x22,	'u',	0			},	/* Cmd word */
	{ "CRP3",	0x202A,	0x5E,	'u',	0			},	/* Active channels on fault n-3 */
	{ "RTP3",	0x202A,	0x40,	'u',	0			},	/* Elapsed time */
	{ "OTP3",	0x202B,	0x22,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP3",	0x202B,	0x2C,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP3",	0x202B,	0x36,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP3",	0x202B,	0x40,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "DP4",	0x202A,	0x05,	'u',	en_P76_LFT	},	/* Fault code on fault n-4 */
	{ "ULP4",	0x202A,	0x4B,	'u',	0			},	/* Mains voltage */
	{ "LCP4",	0x202A,	0x2D,	's',	0			},	/* Motor current */
	{ "RFP4",	0x202A,	0x37,	's',	0			},	/* Output frequency */
	{ "THP4",	0x202A,	0x55,	'u',	0			},	/* Motor thermal state */
	{ "EP4",	0x202A,	0x0F,	'u',	0			},	/* State word */
	{ "IP4",	0x202A,	0x19,	'u',	0			},	/* ETI state word */
	{ "CMP4",	0x202A,	0x23,	'u',	0			},	/* Cmd word */
	{ "CRP4",	0x202A,	0x5F,	'u',	0			},	/* Active channels on fault n-4 */
	{ "RTP4",	0x202A,	0x41,	'u',	0			},	/* Elapsed time */
	{ "OTP4",	0x202B,	0x23,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP4",	0x202B,	0x2D,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP4",	0x202B,	0x37,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP4",	0x202B,	0x41,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "DP5",	0x202A,	0x06,	'u',	en_P76_LFT	},	/* Fault code on fault n-5 */
	{ "ULP5",	0x202A,	0x4C,	'u',	0			},	/* Mains voltage */
	{ "LCP5",	0x202A,	0x2E,	's',	0			},	/* Motor current */
	{ "RFP5",	0x202A,	0x38,	's',	0			},	/* Output frequency */
	{ "THP5",	0x202A,	0x56,	'u',	0			},	/* Motor thermal state */
	{ "EP5",	0x202A,	0x10,	'u',	0			},	/* State word */
	{ "IP5",	0x202A,	0x1A,	'u',	0			},	/* ETI state word */
	{ "CMP5",	0x202A,	0x24,	'u',	0			},	/* Cmd word */
	{ "CRP5",	0x202A,	0x60,	'u',	0			},	/* Active channels on fault n-5 */
	{ "RTP5",	0x202A,	0x42,	'u',	0			},	/* Elapsed time */
	{ "OTP5",	0x202B,	0x24,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP5",	0x202B,	0x2E,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP5",	0x202B,	0x38,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP5",	0x202B,	0x42,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "DP6",	0x202A,	0x07,	'u',	en_P76_LFT	},	/* Fault code on fault n-6 */
	{ "ULP6",	0x202A,	0x4D,	'u',	0			},	/* Mains voltage */
	{ "LCP6",	0x202A,	0x2F,	's',	0			},	/* Motor current */
	{ "RFP6",	0x202A,	0x39,	's',	0			},	/* Output frequency */
	{ "THP6",	0x202A,	0x57,	'u',	0			},	/* Motor thermal state */
	{ "EP6",	0x202A,	0x11,	'u',	0			},	/* State word */
	{ "IP6",	0x202A,	0x1B,	'u',	0			},	/* ETI state word */
	{ "CMP6",	0x202A,	0x25,	'u',	0			},	/* Cmd word */
	{ "CRP6",	0x202A,	0x61,	'u',	0			},	/* Active channels on fault n-6 */
	{ "RTP6",	0x202A,	0x43,	'u',	0			},	/* Elapsed time */
	{ "OTP6",	0x202B,	0x25,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP6",	0x202B,	0x2F,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP6",	0x202B,	0x39,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP6",	0x202B,	0x43,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "DP7",	0x202A,	0x08,	'u',	en_P76_LFT	},	/* Fault code on fault n-7 */
	{ "ULP7",	0x202A,	0x4E,	'u',	0			},	/* Mains voltage */
	{ "LCP7",	0x202A,	0x30,	's',	0			},	/* Motor current */
	{ "RFP7",	0x202A,	0x3A,	's',	0			},	/* Output frequency */
	{ "THP7",	0x202A,	0x58,	'u',	0			},	/* Motor thermal state */
	{ "EP7",	0x202A,	0x12,	'u',	0			},	/* State word */
	{ "IP7",	0x202A,	0x1C,	'u',	0			},	/* ETI state word */
	{ "CMP7",	0x202A,	0x26,	'u',	0			},	/* Cmd word  */
	{ "CRP7",	0x202A,	0x62,	'u',	0			},	/* Active channels on fault n-7 */
	{ "RTP7",	0x202A,	0x44,	'u',	0			},	/* Elapsed time */
	{ "OTP7",	0x202B,	0x26,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP7",	0x202B,	0x30,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP7",	0x202B,	0x3A,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP7",	0x202B,	0x44,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "DP8",	0x202A,	0x09,	'u',	en_P76_LFT	},	/* Fault code on fault n-8 */
	{ "ULP8",	0x202A,	0x4F,	'u',	0			},	/* Mains voltage */
	{ "LCP8",	0x202A,	0x31,	's',	0			},	/* Motor current */
	{ "RFP8",	0x202A,	0x3B,	's',	0			},	/* Output frequency */
	{ "THP8",	0x202A,	0x59,	'u',	0			},	/* Motor thermal state */
	{ "EP8",	0x202A,	0x13,	'u',	0			},	/* State word */
	{ "IP8",	0x202A,	0x1D,	'u',	0			},	/* ETI state word */
	{ "CMP8",	0x202A,	0x27,	'u',	0			},	/* Cmd word */
	{ "CRP8",	0x202A,	0x63,	'u',	0			},	/* Active channels on fault n-8 */
	{ "RTP8",	0x202A,	0x45,	'u',	0			},	/* Elapsed time */
	{ "OTP8",	0x202B,	0x27,	's',	0			},	/* Estimated motor torque value of fault record x (1 is last) */
	{ "TDP8",	0x202B,	0x31,	'u',	0			},	/* Mesured drive thermal state of fault record x (1 is last) */
	{ "TJP8",	0x202B,	0x3B,	'u',	0			},	/* Estimated TJ value of fault record x (1 is last) */
	{ "SFP8",	0x202B,	0x45,	'u',	0			},	/* Switching frequency really applied by MotorControl of fault record x (1 is last) */
	{ "NCV",	0x2000,	0x0C,	'u',	en_P76_NCV	},	/* Drive nominal rating */
	{ "VCAL",	0x2000,	0x0D,	'u',	en_P76_VCAL	},	/* Drive mains voltage */
	{ "INV",	0x2000,	0x12,	'u',	0			},	/* Drive nominal current */
	{ "VDP",	0x2003,	0x03,	'u',	0			},	/* Drive software version */
	{ "PAN0",	0x2003,	0x29,	'u',	0			},	/* Device name (char 1 and 2) */
	{ "PAN1",	0x2003,	0x2A,	'u',	0			},	/* Device name (char 3 and 4) */
	{ "PAN2",	0x2003,	0x2B,	'u',	0			},	/* Device name (char 5 and 6) */
	{ "PAN3",	0x2003,	0x2C,	'u',	0			},	/* Device name (char 7 and 8) */
	{ "PAN4",	0x2003,	0x2D,	'u',	0			},	/* Device name (char 9 and 10) */
	{ "PAN5",	0x2003,	0x2E,	'u',	0			},	/* Device name (char 11 and 12) */
	{ "PAN6",	0x2003,	0x2F,	'u',	0			},	/* Device name (char 13 and 14) */
	{ "PAN7",	0x2003,	0x30,	'u',	0			},	/* Device name (char 15 and 16) */
	{ "NC1",	0x2061,	0x3E,	'u',	0			},	/* Com scan output 1 value */
	{ "NC2",	0x2061,	0x3F,	'u',	0			},	/* Com scan output 2 value */
	{ "NC3",	0x2061,	0x40,	'u',	0			},	/* Com scan output 3 value */
	{ "NC4",	0x2061,	0x41,	'u',	0			},	/* Com scan output 4 value */
	{ "NC5",	0x2061,	0x42,	'u',	0			},	/* Com scan output 5 value */
	{ "NC6",	0x2061,	0x43,	'u',	0			},	/* Com scan output 6 value */
	{ "NC7",	0x2061,	0x44,	'u',	0			},	/* Com scan output 7 value */
	{ "NC8",	0x2061,	0x45,	'u',	0			},	/* Com scan output 8 value */
	{ "NM1",	0x2061,	0x2A,	'u',	0			},	/* Com scan input 1 value */
	{ "NM2",	0x2061,	0x2B,	'u',	0			},	/* Com scan input 2 value */
	{ "NM3",	0x2061,	0x2C,	'u',	0			},	/* Com scan input 3 value */
	{ "NM4",	0x2061,	0x2D,	'u',	0			},	/* Com scan input 4 value */
	{ "NM5",	0x2061,	0x2E,	'u',	0			},	/* Com scan input 5 value */
	{ "NM6",	0x2061,	0x2F,	'u',	0			},	/* Com scan input 6 value */
	{ "NM7",	0x2061,	0x30,	'u',	0			},	/* Com scan input 7 value */
	{ "NM8",	0x2061,	0x31,	'u',	0			},	/* Com scan input 8 value */
	{ "SMAL",	0x2038,	0x0A,	'u',	0			},	/* Velocity min amount */
	{ "SMIL",	0x2038,	0x08,	'u',	0			},	/* Velocity max amount */
	{ "SPAL",	0x2038,	0x0C,	'u',	0			},	/* Acceleration delta speed */
	{ "SPAT",	0x2038,	0x0E,	'u',	0			},	/* Acceleration delta time */
	{ "SPDL",	0x2038,	0x0F,	'u',	0			},	/* Deceleration delta speed */
	{ "SPFN",	0x2038,	0x2B,	'u',	0			},	/* Setpoint factor numerator */
	{ "SPFD",	0x2038,	0x2C,	'u',	0			},	/* Setpoint factor denominator */
	{ "DOTD",	0x2038,	0x35,	'u',	en_P76_DOTD	},	/* Dis. operation opt code */
	{ "QSTD",	0x2038,	0x34,	'u',	en_P76_QSTD	},	/* Quick stop option code */
	{ "SCS",	0x2032,	0x02,	'u',	en_P76_SCS	},	/* Save configuration */
	{ "FCS",	0x2032,	0x03,	'u',	en_P76_FCS	},	/* Restore configuration */
	{ "FRY",	0x2000,	0x17,	'u',	0			},	/* Factory setting group */
	{ "CHA1",	0x2063,	0x03,	'u',	en_P76_PSLIN	},	/* Parameter set sel 1 */
	{ "CHA2",	0x2063,	0x04,	'u',	en_P76_PSLIN	},	/* Parameter set sel 2 */
	{ "CFPS",	0x2063,	0x01,	'u',	en_P76_CFPS	},	/* Used parameter set */
	{ "VAL",	0x2063,	0x02,	'u',	0			},	/* Load parameter set command */
	{ "AD01",	0x2063,	0x0C,	'u',	0			},	/* Parameter set address 1 */
	{ "AD02",	0x2063,	0x0D,	'u',	0			},	/* Parameter set address 2 */
	{ "AD03",	0x2063,	0x0E,	'u',	0			},	/* Parameter set address 3 */
	{ "AD04",	0x2063,	0x0F,	'u',	0			},	/* Parameter set address 4 */
	{ "AD05",	0x2063,	0x10,	'u',	0			},	/* Parameter set address 5 */
	{ "AD06",	0x2063,	0x11,	'u',	0			},	/* Parameter set address 6 */
	{ "AD07",	0x2063,	0x12,	'u',	0			},	/* Parameter set address 7 */
	{ "AD08",	0x2063,	0x13,	'u',	0			},	/* Parameter set address 8 */
	{ "AD09",	0x2063,	0x14,	'u',	0			},	/* Parameter set address 9 */
	{ "AD10",	0x2063,	0x15,	'u',	0			},	/* Parameter set address 10 */
	{ "AD11",	0x2063,	0x16,	'u',	0			},	/* Parameter set address 11 */
	{ "AD12",	0x2063,	0x17,	'u',	0			},	/* Parameter set address 12 */
	{ "AD13",	0x2063,	0x18,	'u',	0			},	/* Parameter set address 13 */
	{ "AD14",	0x2063,	0x19,	'u',	0			},	/* Parameter set address 14 */
	{ "AD15",	0x2063,	0x1A,	'u',	0			},	/* Parameter set address 15 */
	{ "S101",	0x2063,	0x20,	'u',	0			},	/* Parameter set 1 value 1 */
	{ "S102",	0x2063,	0x21,	'u',	0			},	/* Parameter set 1 value 2 */
	{ "S103",	0x2063,	0x22,	'u',	0			},	/* Parameter set 1 value 3 */
	{ "S104",	0x2063,	0x23,	'u',	0			},	/* Parameter set 1 value 4 */
	{ "S105",	0x2063,	0x24,	'u',	0			},	/* Parameter set 1 value 5 */
	{ "S106",	0x2063,	0x25,	'u',	0			},	/* Parameter set 1 value 6 */
	{ "S107",	0x2063,	0x26,	'u',	0			},	/* Parameter set 1 value 7 */
	{ "S108",	0x2063,	0x27,	'u',	0			},	/* Parameter set 1 value 8 */
	{ "S109",	0x2063,	0x28,	'u',	0			},	/* Parameter set 1 value 9 */
	{ "S110",	0x2063,	0x29,	'u',	0			},	/* Parameter set 1 value 10 */
	{ "S111",	0x2063,	0x2A,	'u',	0			},	/* Parameter set 1 value 11 */
	{ "S112",	0x2063,	0x2B,	'u',	0			},	/* Parameter set 1 value 12 */
	{ "S113",	0x2063,	0x2C,	'u',	0			},	/* Parameter set 1 value 13 */
	{ "S114",	0x2063,	0x2D,	'u',	0			},	/* Parameter set 1 value 14 */
	{ "S115",	0x2063,	0x2E,	'u',	0			},	/* Parameter set 1 value 15 */
	{ "S201",	0x2063,	0x34,	'u',	0			},	/* Parameter set 2 value 1 */
	{ "S202",	0x2063,	0x35,	'u',	0			},	/* Parameter set 2 value 2 */
	{ "S203",	0x2063,	0x36,	'u',	0			},	/* Parameter set 2 value 3 */
	{ "S204",	0x2063,	0x37,	'u',	0			},	/* Parameter set 2 value 4 */
	{ "S205",	0x2063,	0x38,	'u',	0			},	/* Parameter set 2 value 5 */
	{ "S206",	0x2063,	0x39,	'u',	0			},	/* Parameter set 2 value 6 */
	{ "S207",	0x2063,	0x3A,	'u',	0			},	/* Parameter set 2 value 7 */
	{ "S208",	0x2063,	0x3B,	'u',	0			},	/* Parameter set 2 value 8 */
	{ "S209",	0x2063,	0x3C,	'u',	0			},	/* Parameter set 2 value 9 */
	{ "S210",	0x2063,	0x3D,	'u',	0			},	/* Parameter set 2 value 10 */
	{ "S211",	0x2063,	0x3E,	'u',	0			},	/* Parameter set 2 value 11 */
	{ "S212",	0x2063,	0x3F,	'u',	0			},	/* Parameter set 2 value 12 */
	{ "S213",	0x2063,	0x40,	'u',	0			},	/* Parameter set 2 value 13 */
	{ "S214",	0x2063,	0x41,	'u',	0			},	/* Parameter set 2 value 14 */
	{ "S215",	0x2063,	0x42,	'u',	0			},	/* Parameter set 2 value 15 */
	{ "S301",	0x2063,	0x48,	'u',	0			},	/* Parameter set 3 value 1 */
	{ "S302",	0x2063,	0x49,	'u',	0			},	/* Parameter set 3 value 2 */
	{ "S303",	0x2063,	0x4A,	'u',	0			},	/* Parameter set 3 value 3 */
	{ "S304",	0x2063,	0x4B,	'u',	0			},	/* Parameter set 3 value 4 */
	{ "S305",	0x2063,	0x4C,	'u',	0			},	/* Parameter set 3 value 5 */
	{ "S306",	0x2063,	0x4D,	'u',	0			},	/* Parameter set 3 value 6 */
	{ "S307",	0x2063,	0x4E,	'u',	0			},	/* Parameter set 3 value 7 */
	{ "S308",	0x2063,	0x4F,	'u',	0			},	/* Parameter set 3 value 8 */
	{ "S309",	0x2063,	0x50,	'u',	0			},	/* Parameter set 3 value 9 */
	{ "S310",	0x2063,	0x51,	'u',	0			},	/* Parameter set 3 value 10 */
	{ "S311",	0x2063,	0x52,	'u',	0			},	/* Parameter set 3 value 11 */
	{ "S312",	0x2063,	0x53,	'u',	0			},	/* Parameter set 3 value 12 */
	{ "S313",	0x2063,	0x54,	'u',	0			},	/* Parameter set 3 value 13 */
	{ "S314",	0x2063,	0x55,	'u',	0			},	/* Parameter set 3 value 14 */
	{ "S315",	0x2063,	0x56,	'u',	0			},	/* Parameter set 3 value 15 */
	{ "LSP",	0x2001,	0x06,	'u',	0			},	/* Low speed */
	{ "HSP",	0x2001,	0x05,	'u',	0			},	/* High Speed */
	{ "HSP2",	0x2079,	0x0B,	'u',	0			},	/* High speed 2 */
	{ "HSP3",	0x2079,	0x0C,	'u',	0			},	/* High speed 3 */
	{ "HSP4",	0x2079,	0x0D,	'u',	0			},	/* High speed 4 */
	{ "SH2",	0x2079,	0x02,	'u',	en_P76_PSLIN	},	/* 2 High speed assign. */
	{ "SH4",	0x2079,	0x03,	'u',	en_P76_PSLIN	},	/* 4 High speed assign. */
	{ "ITH",	0x2042,	0x17,	'u',	0			},	/* Motor thermal current */
	{ "SPGU",	0x2042,	0x1E,	'u',	0			},	/* Inertia factor UF law */
	{ "SPG",	0x203D,	0x04,	'u',	0			},	/* Speed proportional gain */
	{ "SIT",	0x203D,	0x05,	'u',	0			},	/* Speed time integral */
	{ "SFC",	0x203D,	0x06,	'u',	0			},	/* K speed loop filter */
	{ "FFH",	0x203D,	0x10,	'u',	0			},	/* Filter time of the estimated speed */
	{ "CRTF",	0x203D,	0x11,	'u',	0			},	/* Filter time of the reference currents */
	{ "CTD",	0x2050,	0x02,	'u',	0			},	/* Motor current detection */
	{ "TTH",	0x2050,	0x11,	's',	0			},	/* High torque threshold */
	{ "TTL",	0x2050,	0x10,	's',	0			},	/* Low torque threshold */
	{ "FQL",	0x2074,	0x0A,	'u',	0			},	/* Pulse warning threshold */
	{ "FTD",	0x2050,	0x04,	'u',	0			},	/* Motor freq. threshold */
	{ "F2D",	0x2050,	0x05,	'u',	0			},	/* Frequency threshold 2 */
	{ "JF2",	0x2053,	0x03,	'u',	0			},	/* Skip frequency 2 */
	{ "JPF",	0x2053,	0x02,	'u',	0			},	/* Skip frequency */
	{ "JFH",	0x2053,	0x0C,	'u',	0			},	/* Skip Freq. Hysteresis */
	{ "JF3",	0x2053,	0x04,	'u',	0			},	/* 3rd Skip Frequency */
	{ "BFR",	0x2000,	0x10,	'u',	en_P76_BFR	},	/* Std. motor frequency */
	{ "NPR",	0x2042,	0x0E,	'u',	0			},	/* Rated motor power */
	{ "COS",	0x2042,	0x07,	'u',	0			},	/* Motor 1 Cosine Phi */
	{ "UNS",	0x2042,	0x02,	'u',	0			},	/* Nominal motor voltage */
	{ "NCR",	0x2042,	0x04,	'u',	0			},	/* Nominal motor current */
	{ "FRS",	0x2042,	0x03,	'u',	0			},	/* Nominal motor frequency */
	{ "NSP",	0x2042,	0x05,	'u',	0			},	/* Nominal motor speed */
	{ "TFR",	0x2001,	0x04,	'u',	0			},	/* Max. output frequency */
	{ "TUN",	0x2042,	0x09,	'u',	en_P76_ACTION	},	/* Automatic tuning */
	{ "AUT",	0x2042,	0x10,	'u',	en_P76_AUT	},	/* Automatic autotune */
	{ "TUS",	0x2042,	0x0A,	'u',	en_P76_ACT	},	/* Auto-tuning state */
	{ "CTT",	0x2042,	0x08,	'u',	en_P76_CTT	},	/* Motor control type */
	{ "U1",	0x205E,	0x04,	'u',	0			},	/* Volt point 1 on 5pt V/F */
	{ "F1",	0x205E,	0x05,	'u',	0			},	/* Freq point 1on 5pt V/F */
	{ "U2",	0x205E,	0x06,	'u',	0			},	/* Volt point 2 on 5pt V/F */
	{ "F2",	0x205E,	0x07,	'u',	0			},	/* Freq point 2 on 5pt V/F */
	{ "U3",	0x205E,	0x08,	'u',	0			},	/* Volt point 3 on 5pt V/F */
	{ "F3",	0x205E,	0x09,	'u',	0			},	/* Freq point 3 on 5pt V/F */
	{ "U4",	0x205E,	0x0A,	'u',	0			},	/* Volt point 4 on 5pt V/F */
	{ "F4",	0x205E,	0x0B,	'u',	0			},	/* Freq point 4 on 5pt V/F */
	{ "U5",	0x205E,	0x0C,	'u',	0			},	/* Volt point 5 on 5pt V/F */
	{ "F5",	0x205E,	0x0D,	'u',	0			},	/* Freq point 5 on 5pt V/F */
	{ "NCRS",	0x2042,	0x47,	'u',	0			},	/* Nominal sync current */
	{ "NSPS",	0x2042,	0x48,	'u',	0			},	/* Nominal sync mot speed */
	{ "PPNS",	0x2042,	0x49,	'u',	0			},	/* Pole pairs number (sync) */
	{ "TQS",	0x2042,	0x55,	'u',	0			},	/* Motor torque */
	{ "PHS",	0x2042,	0x4A,	'u',	0			},	/* Sync. EMF constant */
	{ "LDS",	0x2042,	0x4B,	'u',	0			},	/* Sync motor d inductance */
	{ "LQS",	0x2042,	0x4C,	'u',	0			},	/* Sync motor q inductance */
	{ "RSAS",	0x2042,	0x53,	'u',	0			},	/* Cust. stator resist. (sync) */
	{ "UFR",	0x2042,	0x18,	'u',	0			},	/* IR compensation */
	{ "SLP",	0x2042,	0x1A,	'u',	0			},	/* Slip Compensation */
	{ "PPN",	0x2042,	0x13,	'u',	0			},	/* Number of pairs of poles calculated */
	{ "RSA",	0x2042,	0x2B,	'u',	0			},	/* Cust stator resistance */
	{ "IDA",	0x2042,	0x35,	'u',	0			},	/* Cust adjust magn. current */
	{ "LFA",	0x2042,	0x3F,	'u',	0			},	/* Cust leakage inductance */
	{ "TRA",	0x2042,	0x44,	'u',	0			},	/* Custom rotor t constant */
	{ "FRSS",	0x2042,	0x50,	'u',	0			},	/* Nominal sync. motor freq. */
	{ "SFR",	0x2001,	0x03,	'u',	0			},	/* Drive switching freq. */
	{ "CLI",	0x203E,	0x02,	'u',	0			},	/* Internal current limit */
	{ "SFT",	0x2001,	0x02,	'u',	en_P76_SFT	},	/* Switch. freq type */
	{ "NRD",	0x2001,	0x08,	'u',	en_P76_N_Y	},	/* Motor noise reduction */
	{ "BOA",	0x206D,	0x0B,	'u',	en_P76_BOA	},	/* Boost activation */
	{ "SVL",	0x2060,	0x02,	'u',	en_P76_N_Y	},	/* Motor surge limitation */
	{ "SOP",	0x2060,	0x03,	'u',	en_P76_SOP	},	/* Optimize limit - volt surge */
	{ "VBR",	0x206F,	0x02,	'u',	0			},	/* Braking level */
	{ "LBA",	0x2071,	0x02,	'u',	en_P76_N_Y	},	/* Load sharing */
	{ "LBC",	0x2071,	0x03,	'u',	0			},	/* Load correction */
	{ "LBC1",	0x2071,	0x04,	'u',	0			},	/* Correction min speed */
	{ "LBC2",	0x2071,	0x05,	'u',	0			},	/* Correction max speed */
	{ "LBC3",	0x2071,	0x06,	'u',	0			},	/* Torque offset */
	{ "LBF",	0x2071,	0x07,	'u',	0			},	/* Sharing filter */
	{ "FFM",	0x2001,	0x1F,	'u',	en_P76_FFM	},	/* Fan mode */
	{ "TCC",	0x2051,	0x02,	'u',	en_P76_TCC	},	/* 2 / 3 wire control */
	{ "TCT",	0x2051,	0x03,	'u',	en_P76_TCT	},	/* Type of 2 wire control */
	{ "RRS",	0x2051,	0x06,	'u',	en_P76_PSLIN	},	/* Reverse input assignment */
	{ "BSP",	0x2001,	0x07,	'u',	en_P76_BSP	},	/* Ref. template selection */
	{ "AI1T",	0x200E,	0x03,	'u',	en_P76_AIOT	},	/* Configuration of  AI1 */
	{ "UIL1",	0x200E,	0x0D,	'u',	0			},	/* AI1 minimum value */
	{ "UIH1",	0x200E,	0x17,	'u',	0			},	/* AI1 maximum value */
	{ "AI1F",	0x200E,	0x35,	'u',	0			},	/* AI1 filter */
	{ "AI1E",	0x200E,	0x3F,	'u',	0			},	/* AI1 intermediate point X */
	{ "AI1S",	0x200E,	0x49,	'u',	0			},	/* AI1 intermediate point Y */
	{ "AI2T",	0x200E,	0x04,	'u',	en_P76_AIOT	},	/* Configuration of  AI2 */
	{ "UIL2",	0x200E,	0x0E,	'u',	0			},	/* AI2 minimum value */
	{ "UIH2",	0x200E,	0x18,	'u',	0			},	/* AI2 maximum value */
	{ "AI2F",	0x200E,	0x36,	'u',	0			},	/* AI2 filter */
	{ "AI2E",	0x200E,	0x40,	'u',	0			},	/* AI2 intermediate point X */
	{ "AI2S",	0x200E,	0x4A,	'u',	0			},	/* AI2 intermediate point Y */
	{ "AI3T",	0x200E,	0x05,	'u',	en_P76_AIOT	},	/* Configuration of  AI3 */
	{ "CRL3",	0x200E,	0x23,	'u',	0			},	/* AI3 minimum value */
	{ "CRH3",	0x200E,	0x2D,	'u',	0			},	/* AI3 maximum value */
	{ "AI3F",	0x200E,	0x37,	'u',	0			},	/* AI3 filter */
	{ "AI3E",	0x200E,	0x41,	'u',	0			},	/* AI3 intermediate point X */
	{ "AI3S",	0x200E,	0x4B,	'u',	0			},	/* AI3 intermediate point Y */
	{ "AO1",	0x2014,	0x16,	'u',	en_P76_PSA	},	/* AO1 assignment */
	{ "AO1T",	0x2010,	0x02,	'u',	en_P76_AIOT	},	/* Configuration of  AO1 */
	{ "AOF1",	0x200C,	0x5E,	'u',	en_P76_N_Y	},	/* Enable AQ1 fallback */
	{ "AOL1",	0x2010,	0x2A,	'u',	0			},	/* AO1 min output value */
	{ "AOH1",	0x2010,	0x34,	'u',	0			},	/* AO1 max output value */
	{ "UOL1",	0x2010,	0x16,	'u',	0			},	/* AO1 minimum output */
	{ "UOH1",	0x2010,	0x20,	'u',	0			},	/* AO1 maximum output */
	{ "ASL1",	0x2010,	0x3E,	'u',	0			},	/* Scaling AO1 min */
	{ "ASH1",	0x2010,	0x48,	'u',	0			},	/* Scaling AO1 max */
	{ "AO1F",	0x2010,	0x0C,	'u',	0			},	/* AO1 filter */
	{ "FR1",	0x2036,	0x0E,	'u',	en_P76_PSA	},	/* Configuration reference 1 */
	{ "RIN",	0x2001,	0x09,	'u',	en_P76_N_Y	},	/* Reverse direction inhibit. */
	{ "CHCF",	0x2036,	0x02,	'u',	en_P76_CHCF	},	/* Channel mode config. */
	{ "CCS",	0x2036,	0x16,	'u',	en_P76_PSLIN	},	/* Cmd channel switch */
	{ "CD1",	0x2036,	0x18,	'u',	en_P76_CDX	},	/* Control channel 1 config. */
	{ "CD2",	0x2036,	0x19,	'u',	en_P76_CDX	},	/* Control channel 2 config. */
	{ "RFC",	0x2036,	0x0C,	'u',	en_P76_PSLIN	},	/* Select switching (1 to 2) */
	{ "FR2",	0x2036,	0x0F,	'u',	en_P76_PSA	},	/* Configuration reference 2 */
	{ "COP",	0x2036,	0x03,	'u',	en_P76_COP	},	/* Copy Ch.1 <-> Ch. 2 */
	{ "FN1",	0x2069,	0x02,	'u',	en_P76_CSLFN	},	/* F1 key assignment */
	{ "FN2",	0x2069,	0x03,	'u',	en_P76_CSLFN	},	/* F2 key assignment */
	{ "FN3",	0x2069,	0x04,	'u',	en_P76_CSLFN	},	/* F3 key assignment */
	{ "FN4",	0x2069,	0x05,	'u',	en_P76_CSLFN	},	/* F4 key assignment */
	{ "BMP",	0x2069,	0x1E,	'u',	en_P76_BMP	},	/* HMI command */
	{ "RCB",	0x2036,	0x0D,	'u',	en_P76_PSLIN	},	/* Select switching (1 to 1B) */
	{ "FR1B",	0x2036,	0x10,	'u',	en_P76_PSA	},	/* Configuration ref. 1B */
	{ "SA2",	0x2058,	0x02,	'u',	en_P76_PSA	},	/* Summing input 2 */
	{ "SA3",	0x2058,	0x03,	'u',	en_P76_PSA	},	/* Summing input 3 */
	{ "DA2",	0x2058,	0x0C,	'u',	en_P76_PSA	},	/* Subtract reference 2 */
	{ "DA3",	0x2058,	0x0D,	'u',	en_P76_PSA	},	/* Subtract reference 3 */
	{ "MA2",	0x2058,	0x16,	'u',	en_P76_PSA	},	/* Multiplier reference 2 */
	{ "MA3",	0x2058,	0x17,	'u',	en_P76_PSA	},	/* Multiplier reference 3 */
	{ "RPT",	0x203C,	0x05,	'u',	en_P76_RPT	},	/* Type of reference ramp */
	{ "INR",	0x203C,	0x15,	'u',	en_P76_INR	},	/* Ramp increment */
	{ "ACC",	0x203C,	0x02,	'u',	0			},	/* Acceleration ramp time */
	{ "DEC",	0x203C,	0x03,	'u',	0			},	/* Deceleration ramp time */
	{ "TA1",	0x203C,	0x06,	'u',	0			},	/* Start  ACC ramp rounding */
	{ "TA2",	0x203C,	0x07,	'u',	0			},	/* End ACC ramp rounding */
	{ "TA3",	0x203C,	0x08,	'u',	0			},	/* Start DEC ramp rounding */
	{ "TA4",	0x203C,	0x09,	'u',	0			},	/* End DEC rounding coeff. */
	{ "FRT",	0x203C,	0x0C,	'u',	0			},	/* Ramp 2 freq. threshold */
	{ "RPS",	0x203C,	0x0B,	'u',	en_P76_PSLIN	},	/* Ramp switching input */
	{ "AC2",	0x203C,	0x0D,	'u',	0			},	/* Acceleration 2 ramp time */
	{ "DE2",	0x203C,	0x0E,	'u',	0			},	/* Deceleration 2 ramp time */
	{ "BRA",	0x203C,	0x04,	'u',	en_P76_BRA	},	/* Decel ramp adaptation */
	{ "STT",	0x2052,	0x02,	'u',	en_P76_STT	},	/* Normal stop mode */
	{ "FFT",	0x2052,	0x15,	'u',	0			},	/* Freewheel stop threshold */
	{ "NST",	0x2052,	0x03,	'u',	en_P76_PSLIN	},	/* Freewheel stop input */
	{ "FST",	0x2052,	0x05,	'u',	en_P76_PSLIN	},	/* Fast stop input assign. */
	{ "DCF",	0x2052,	0x1F,	'u',	0			},	/* Fast stop ramp coefficient */
	{ "DCI",	0x2052,	0x04,	'u',	en_P76_PSLIN	},	/* DC brake via logic input */
	{ "IDC",	0x2052,	0x0B,	'u',	0			},	/* DC injection current 1 */
	{ "TDI",	0x2052,	0x0E,	'u',	0			},	/* DC injection time 1 */
	{ "IDC2",	0x2052,	0x0D,	'u',	0			},	/* DC injection current 2 */
	{ "TDC",	0x2052,	0x0C,	'u',	0			},	/* DC injection time 2 */
	{ "ADC",	0x204A,	0x02,	'u',	en_P76_ADC	},	/* Automatic DC injection */
	{ "SDC1",	0x204A,	0x04,	'u',	0			},	/* Auto DC injection level 1 */
	{ "TDC1",	0x204A,	0x03,	'u',	0			},	/* Auto DC injection time 1 */
	{ "SDC2",	0x204A,	0x06,	'u',	0			},	/* Auto DC injection level 2 */
	{ "TDC2",	0x204A,	0x05,	'u',	0			},	/* Auto DC injection time 2 */
	{ "JOG",	0x2051,	0x0B,	'u',	en_P76_PSLIN	},	/* Jog assignment */
	{ "JGF",	0x2051,	0x0C,	'u',	0			},	/* Jog frequency */
	{ "JGT",	0x2051,	0x0D,	'u',	0			},	/* Jog Delay */
	{ "PS2",	0x2054,	0x02,	'u',	en_P76_PSLIN	},	/* 2 preset speeds assign. */
	{ "PS4",	0x2054,	0x03,	'u',	en_P76_PSLIN	},	/* 4 preset speeds assign. */
	{ "PS8",	0x2054,	0x04,	'u',	en_P76_PSLIN	},	/* 8 preset speeds assign. */
	{ "PS16",	0x2054,	0x05,	'u',	en_P76_PSLIN	},	/* 16 preset speeds assign. */
	{ "SP2",	0x2054,	0x0B,	'u',	0			},	/* Preset speed 2 */
	{ "SP3",	0x2054,	0x0C,	'u',	0			},	/* Preset speed 3 */
	{ "SP4",	0x2054,	0x0D,	'u',	0			},	/* Preset speed 4 */
	{ "SP5",	0x2054,	0x0E,	'u',	0			},	/* Preset speed 5 */
	{ "SP6",	0x2054,	0x0F,	'u',	0			},	/* Preset speed 6 */
	{ "SP7",	0x2054,	0x10,	'u',	0			},	/* Preset speed 7 */
	{ "SP8",	0x2054,	0x11,	'u',	0			},	/* Preset speed 8 */
	{ "SP9",	0x2054,	0x12,	'u',	0			},	/* Preset speed 9 */
	{ "SP10",	0x2054,	0x13,	'u',	0			},	/* Preset speed 10 */
	{ "SP11",	0x2054,	0x14,	'u',	0			},	/* Preset speed 11 */
	{ "SP12",	0x2054,	0x15,	'u',	0			},	/* Preset speed 12 */
	{ "SP13",	0x2054,	0x16,	'u',	0			},	/* Preset speed 13 */
	{ "SP14",	0x2054,	0x17,	'u',	0			},	/* Preset speed 14 */
	{ "SP15",	0x2054,	0x18,	'u',	0			},	/* Preset speed 15 */
	{ "SP16",	0x2054,	0x19,	'u',	0			},	/* Preset speed 16 */
	{ "USP",	0x2055,	0x02,	'u',	en_P76_PSLIN	},	/* Increase spd input assign */
	{ "DSP",	0x2055,	0x03,	'u',	en_P76_PSLIN	},	/* Down spd input assign. */
	{ "STR",	0x2055,	0x04,	'u',	en_P76_STR	},	/* Freq. reference stored */
	{ "USI",	0x2055,	0x15,	'u',	en_P76_PSLIN	},	/* Increase spd input assign */
	{ "DSI",	0x2055,	0x16,	'u',	en_P76_PSLIN	},	/* Down spd input assign. */
	{ "SRP",	0x2055,	0x06,	'u',	0			},	/* +/-Speed limitation */
	{ "SPM",	0x2036,	0x5C,	'u',	en_P76_PSLIN	},	/* Reference memory input */
	{ "FLU",	0x206D,	0x03,	'u',	en_P76_FLU	},	/* Motor fluxing configure */
	{ "FLI",	0x206D,	0x02,	'u',	en_P76_PSLIN	},	/* Fluxing input assignment */
	{ "AST",	0x206D,	0x1A,	'u',	en_P76_AST	},	/* Auto angle setting type */
	{ "HFI",	0x207E,	0x01,	'u',	en_P76_N_Y	},	/* Activation of HF injection */
	{ "HIR",	0x207E,	0x03,	'u',	0			},	/* Current level of the HF injection signal */
	{ "SPB",	0x207E,	0x04,	'u',	0			},	/* Bandwidth of the HF PLL */
	{ "ILR",	0x207E,	0x06,	'u',	0			},	/* Current level of the HF alignment */
	{ "SIR",	0x207E,	0x07,	'u',	0			},	/* Boost level for IPMA alignment */
	{ "MCR",	0x207E,	0x08,	'u',	0			},	/* Maximum current of PSI alignment */
	{ "PEC",	0x207E,	0x09,	'u',	0			},	/* Angle position error compensation */
	{ "BST",	0x2046,	0x09,	'u',	en_P76_BST	},	/* Motion type selection */
	{ "BCI",	0x2046,	0x0A,	'u',	en_P76_PSLIN	},	/* Brake contact input */
	{ "BIP",	0x2046,	0x08,	'u',	en_P76_BIP	},	/* Brake release pulse */
	{ "IBR",	0x2046,	0x07,	'u',	0			},	/* Brake release current */
	{ "IRD",	0x2046,	0x0C,	'u',	0			},	/* Rev. brake release curr. */
	{ "BRT",	0x2046,	0x05,	'u',	0			},	/* Brake release time */
	{ "BIR",	0x2046,	0x0D,	's',	0			},	/* Brake release frequency */
	{ "BEN",	0x2046,	0x04,	's',	0			},	/* Brake engage frequency */
	{ "TBE",	0x2046,	0x0B,	'u',	0			},	/* Brake engage delay */
	{ "BET",	0x2046,	0x06,	'u',	0			},	/* Brake engage time */
	{ "BED",	0x2046,	0x15,	'u',	en_P76_N_Y	},	/* Brake engage at reversal */
	{ "JDC",	0x2046,	0x0E,	's',	0			},	/* Jump at reversal */
	{ "TTR",	0x2046,	0x17,	'u',	0			},	/* Time to restart */
	{ "BRH",	0x2046,	0x33,	'u',	0			},	/* Brake hidden */
	{ "BRR",	0x2046,	0x10,	'u',	0			},	/* Current ramp time */
	{ "BLC",	0x2046,	0x02,	'u',	en_P76_BLC	},	/* Brake logic assignment */
	{ "HSO",	0x205D,	0x02,	'u',	en_P76_HSO	},	/* High speed hoisting */
	{ "COF",	0x205D,	0x04,	'u',	0			},	/* Motor speed coefficient */
	{ "COR",	0x205D,	0x05,	'u',	0			},	/* Generator speed coefficient */
	{ "TOS",	0x205D,	0x08,	'u',	0			},	/* Load measuring time */
	{ "OSP",	0x205D,	0x06,	'u',	0			},	/* Measurement speed */
	{ "CLO",	0x205D,	0x03,	'u',	0			},	/* High speed I Limit */
	{ "SCL",	0x205D,	0x07,	'u',	0			},	/* Current limit. frequency */
	{ "RSTL",	0x205D,	0x17,	'u',	0			},	/* Rope slack torque level */
	{ "RSD",	0x205D,	0x16,	'u',	en_P76_RSD	},	/* Rope slack configuration */
	{ "PIF",	0x2059,	0x02,	'u',	en_P76_PSA	},	/* PI fdbk assignment */
	{ "PIF1",	0x2059,	0x05,	'u',	0			},	/* Minimum PID feedback */
	{ "PIF2",	0x2059,	0x06,	'u',	0			},	/* Maximum PID feedback */
	{ "PIP1",	0x2059,	0x07,	'u',	0			},	/* Minimum PID reference */
	{ "PIP2",	0x2059,	0x08,	'u',	0			},	/* Maximum PID reference */
	{ "PII",	0x2059,	0x09,	'u',	en_P76_N_Y	},	/* Internal reference PI */
	{ "RPI",	0x2059,	0x15,	'u',	0			},	/* Internal PI reference */
	{ "RPG",	0x2059,	0x2A,	'u',	0			},	/* PI Proportional gain  */
	{ "RIG",	0x2059,	0x2B,	'u',	0			},	/* Integral gain PI regulator */
	{ "RDG",	0x2059,	0x2C,	'u',	0			},	/* PID derivative gain */
	{ "PRP",	0x2059,	0x55,	'u',	0			},	/* PID ramp */
	{ "PIC",	0x2059,	0x29,	'u',	en_P76_N_Y	},	/* PID correction reverse */
	{ "POL",	0x2059,	0x35,	's',	0			},	/* PID regulator min. output */
	{ "POH",	0x2059,	0x36,	's',	0			},	/* Max PID output */
	{ "PAL",	0x2059,	0x3E,	'u',	0			},	/* Minimum fdbk alarm */
	{ "PAH",	0x2059,	0x3F,	'u',	0			},	/* Maximum fdbk alarm */
	{ "PER",	0x2059,	0x40,	'u',	0			},	/* PID error alarm */
	{ "PIS",	0x2059,	0x2D,	'u',	en_P76_PSLIN	},	/* PID integral reset */
	{ "FPI",	0x2059,	0x33,	'u',	en_P76_PSA	},	/* Speed ref. assignment */
	{ "PSR",	0x2059,	0x34,	'u',	0			},	/* PID speed input % ref */
	{ "PAU",	0x2059,	0x47,	'u',	en_P76_PSLIN	},	/* Auto/Manual select input */
	{ "PIM",	0x2059,	0x37,	'u',	en_P76_PSA	},	/* Manual reference */
	{ "TLS",	0x2057,	0x02,	'u',	0			},	/* Low speed time out */
	{ "PR2",	0x2059,	0x0A,	'u',	en_P76_PSLIN	},	/* 2 preset PID ref assign. */
	{ "PR4",	0x2059,	0x0B,	'u',	en_P76_PSLIN	},	/* 4 preset PID ref assign. */
	{ "RP2",	0x2059,	0x16,	'u',	0			},	/* 2nd PI preset reference */
	{ "RP3",	0x2059,	0x17,	'u',	0			},	/* 3rd PI preset reference */
	{ "RP4",	0x2059,	0x18,	'u',	0			},	/* 4th PI preset reference */
	{ "TLA",	0x203E,	0x0B,	'u',	en_P76_PSLIN	},	/* Torque limit. activation */
	{ "INTP",	0x203E,	0x10,	'u',	en_P76_INCPER	},	/* Torque increment */
	{ "TLIM",	0x203E,	0x0C,	'u',	0			},	/* Motoring torque limit */
	{ "TLIG",	0x203E,	0x0D,	'u',	0			},	/* Generator torque limit */
	{ "TAA",	0x203E,	0x0F,	'u',	en_P76_PSA	},	/* Torque reference assign. */
	{ "TLC",	0x203E,	0x0E,	'u',	en_P76_PSLIN	},	/* Torque analog limit. activ */
	{ "LC2",	0x203E,	0x03,	'u',	en_P76_PSLIN	},	/* I limit 2 input assign. */
	{ "CL2",	0x203E,	0x04,	'u',	0			},	/* Internal current limit 2 */
	{ "LLC",	0x206A,	0x03,	'u',	en_P76_CSLOUT	},	/* Line contactor control */
	{ "LES",	0x206A,	0x02,	'u',	en_P76_PSLIN	},	/* E stop assignment */
	{ "LCT",	0x206A,	0x04,	'u',	0			},	/* Time-out after cont. activ. */
	{ "SAF",	0x205F,	0x02,	'u',	en_P76_PSLIN	},	/* Fwd stop limit input assig */
	{ "SAR",	0x205F,	0x03,	'u',	en_P76_PSLIN	},	/* RV stop limit input assign */
	{ "DAF",	0x205F,	0x04,	'u',	en_P76_PSLIN	},	/* Forward slowdown limit */
	{ "DAR",	0x205F,	0x05,	'u',	en_P76_PSLIN	},	/* Reverse slowdown limit */
	{ "CLS",	0x205F,	0x08,	'u',	en_P76_PSLIN	},	/* Disable limit switch */
	{ "PAS",	0x205F,	0x07,	'u',	en_P76_STT	},	/* Stop type */
	{ "DSF",	0x205F,	0x06,	'u',	en_P76_DSF	},	/* Deceleration type */
	{ "STD",	0x205F,	0x16,	'u',	0			},	/* Stop distance */
	{ "NLS",	0x205F,	0x0C,	'u',	0			},	/* Rated linear speed */
	{ "SFD",	0x205F,	0x17,	'u',	0			},	/* Distance stop corrector */
	{ "CHM",	0x2032,	0x1A,	'u',	en_P76_N_Y	},	/* Multimotors selection */
	{ "CNF1",	0x2032,	0x16,	'u',	en_P76_PSLIN	},	/* 2 configurations assignt. */
	{ "CNF2",	0x2032,	0x17,	'u',	en_P76_PSLIN	},	/* 3 configurations assignt. */
	{ "TUL",	0x2042,	0x0B,	'u',	en_P76_PSLIN	},	/* Auto-tune input assign. */
	{ "RSF",	0x2029,	0x19,	'u',	en_P76_PSLIN	},	/* Fault reset input assign. */
	{ "RP",	0x2029,	0x1D,	'u',	en_P76_N_Y	},	/* Product reset */
	{ "RPA",	0x2029,	0x1E,	'u',	en_P76_PSLIN	},	/* Product reset assignment */
	{ "ATR",	0x2029,	0x17,	'u',	en_P76_N_Y	},	/* Automatic restart */
	{ "TAR",	0x2029,	0x18,	'u',	en_P76_DUR	},	/* Max. restart duration */
	{ "FLR",	0x2001,	0x0B,	'u',	en_P76_N_Y	},	/* Catch a spinning load */
	{ "THT",	0x2042,	0x0D,	'u',	en_P76_THT	},	/* Thermal protection type */
	{ "TTD",	0x2050,	0x03,	'u',	0			},	/* Motor thermal threshold */
	{ "TTD2",	0x2050,	0x07,	'u',	0			},	/* Motor 2 thermal threshold */
	{ "TTD3",	0x2050,	0x08,	'u',	0			},	/* Motor 3 thermal threshold */
	{ "OLL",	0x2028,	0x0A,	'u',	en_P76_ECFG	},	/* Stop type - motor o/load */
	{ "OPL",	0x2042,	0x0C,	'u',	en_P76_OPL	},	/* Output phase loss */
	{ "ODT",	0x2028,	0x52,	'u',	0			},	/* Output ph detection time */
	{ "IPL",	0x2028,	0x03,	'u',	en_P76_ECFG	},	/* Stop type - I/P phase loss */
	{ "OHL",	0x2028,	0x09,	'u',	en_P76_ECFG	},	/* Stop type - drive o/temp */
	{ "THA",	0x2050,	0x0A,	'u',	0			},	/* Drive therm. state alarm */
	{ "ETF",	0x2029,	0x20,	'u',	en_P76_PSLIN	},	/* External fault input */
	{ "EPL",	0x2028,	0x07,	'u',	en_P76_ECFG	},	/* Stop type - external fault */
	{ "USB",	0x206C,	0x04,	'u',	en_P76_USB	},	/* Undervolt fault manage */
	{ "URES",	0x206C,	0x02,	'u',	en_P76_URES	},	/* Evacuation mains voltage */
	{ "USL",	0x206C,	0x03,	'u',	0			},	/* Undervoltage level */
	{ "UST",	0x206C,	0x05,	'u',	0			},	/* Undervoltage time out */
	{ "STP",	0x2028,	0x05,	'u',	en_P76_STP	},	/* Ctrld stop on power loss */
	{ "TSM",	0x206C,	0x0E,	'u',	0			},	/* Undervolt. restart time */
	{ "UPL",	0x206C,	0x0C,	'u',	0			},	/* Under V prevention level */
	{ "SDD",	0x2028,	0x06,	'u',	en_P76_N_Y	},	/* Load slip detection */
	{ "STM",	0x206C,	0x0F,	'u',	0			},	/* Maximum stop time */
	{ "TBS",	0x206C,	0x0D,	'u',	0			},	/* DC bus maintain time */
	{ "STRT",	0x2001,	0x0D,	'u',	en_P76_N_Y	},	/* IGBT test */
	{ "LFL3",	0x2028,	0x0E,	'u',	en_P76_ECFG	},	/* Stop type - loss AI3 */
	{ "INH",	0x2029,	0x1A,	'u',	en_P76_PSLIN	},	/* Fault inhibit input */
	{ "CLL",	0x2028,	0x10,	'u',	en_P76_ECFG	},	/* Stop type - network fault */
	{ "COL",	0x2028,	0x0C,	'u',	en_P76_ECFG	},	/* Stop type - CANopen fault */
	{ "SLL",	0x2028,	0x0B,	'u',	en_P76_ECFG	},	/* Stop type - Modbus SLF */
	{ "SSB",	0x203E,	0x29,	'u',	en_P76_ECFG	},	/* Stop type - Torque/I limit */
	{ "STO",	0x203E,	0x2A,	'u',	0			},	/* Torque/I limit. time out */
	{ "TNL",	0x2028,	0x0D,	'u',	en_P76_ECFG	},	/* Auto-tuning fault config. */
	{ "PPI",	0x206E,	0x02,	'u',	0			},	/* Pairing password */
	{ "LFF",	0x2028,	0x51,	'u',	0			},	/* Fall back speed */
	{ "FQF",	0x2074,	0x02,	'u',	en_P76_N_Y	},	/* Frequency meter */
	{ "FQC",	0x2074,	0x03,	'u',	0			},	/* Pulse scaling divisor */
	{ "FQA",	0x2074,	0x05,	'u',	0			},	/* Overspd. pulse threshold */
	{ "TDS",	0x2074,	0x06,	'u',	0			},	/* Pulse Overspeed delay */
	{ "FDT",	0x2074,	0x07,	'u',	0			},	/* Level freq. pulse ctrl */
	{ "FQT",	0x2074,	0x08,	'u',	0			},	/* Pulse threshold wo Run */
	{ "TLD",	0x205D,	0x0D,	's',	0			},	/* Dynamic load time */
	{ "DLD",	0x205D,	0x0C,	'u',	0			},	/* Dynamic load threshold */
	{ "DLB",	0x205D,	0x0E,	'u',	en_P76_ECFG	},	/* Dynamic load Mgt. */
	{ "NCA1",	0x2061,	0x16,	'u',	0			},	/* Scan output 1 address */
	{ "NCA2",	0x2061,	0x17,	'u',	0			},	/* Scan output 2 address */
	{ "NCA3",	0x2061,	0x18,	'u',	0			},	/* Scan output 3 address */
	{ "NCA4",	0x2061,	0x19,	'u',	0			},	/* Scan output 4 address */
	{ "NCA5",	0x2061,	0x1A,	'u',	0			},	/* Scan output 5 address */
	{ "NCA6",	0x2061,	0x1B,	'u',	0			},	/* Scan output 6 address */
	{ "NCA7",	0x2061,	0x1C,	'u',	0			},	/* Scan output 7 address */
	{ "NCA8",	0x2061,	0x1D,	'u',	0			},	/* Scan output 8 address */
	{ "NMA1",	0x2061,	0x02,	'u',	0			},	/* Scan input 1 address */
	{ "NMA2",	0x2061,	0x03,	'u',	0			},	/* Scan input 2 address */
	{ "NMA3",	0x2061,	0x04,	'u',	0			},	/* Scan input 3 address */
	{ "NMA4",	0x2061,	0x05,	'u',	0			},	/* Scan input 4 address */
	{ "NMA5",	0x2061,	0x06,	'u',	0			},	/* Scan input 5 address */
	{ "NMA6",	0x2061,	0x07,	'u',	0			},	/* Scan input 6 address */
	{ "NMA7",	0x2061,	0x08,	'u',	0			},	/* Scan input 7 address */
	{ "NMA8",	0x2061,	0x09,	'u',	0			},	/* Scan input 8 address */
	{ "OMA1",	0x207C,	0x02,	'u',	0			},	/* Scan input 1 address */
	{ "OMA2",	0x207C,	0x03,	'u',	0			},	/* Scan input 2 address */
	{ "OMA3",	0x207C,	0x04,	'u',	0			},	/* Scan input 3 address */
	{ "OMA4",	0x207C,	0x05,	'u',	0			},	/* Scan input 4 address */
	{ "OMA5",	0x207C,	0x06,	'u',	0			},	/* Scan input 5 address */
	{ "OMA6",	0x207C,	0x07,	'u',	0			},	/* Scan input 6 address */
	{ "OCA1",	0x207C,	0x16,	'u',	0			},	/* Scan output 1 address */
	{ "OCA2",	0x207C,	0x17,	'u',	0			},	/* Scan output 2 address */
	{ "OCA3",	0x207C,	0x18,	'u',	0			},	/* Scan output 3 address */
	{ "OCA4",	0x207C,	0x19,	'u',	0			},	/* Scan output 4 address */
	{ "OCA5",	0x207C,	0x1A,	'u',	0			},	/* Scan output 5 address */
	{ "OCA6",	0x207C,	0x1B,	'u',	0			},	/* Scan output 6 address */
	{ "ADD",	0x201E,	0x02,	'u',	0			},	/* Drive modbus address */
	{ "AMOC",	0x2024,	0x34,	'u',	0			},	/* Mdb add comm. card */
	{ "TBR",	0x201E,	0x04,	'u',	en_P76_TBR	},	/* Modbus baud rate */
	{ "TFO",	0x201E,	0x05,	'u',	en_P76_FOR	},	/* Modbus com format */
	{ "TTO",	0x201E,	0x06,	'u',	0			},	/* Modbus time out */
	{ "ADCO",	0x201E,	0x34,	'u',	0			},	/* Drive CANopen address */
	{ "BDCO",	0x201E,	0x36,	'u',	en_P76_BDCO	},	/* CANopen baudrate */
	{ "ERCO",	0x201E,	0x39,	'u',	0			},	/* Error code CANopen */
	{ "FLO",	0x2036,	0x20,	'u',	en_P76_PSLIN	},	/* Forced local mode assign */
	{ "FLOC",	0x2036,	0x21,	'u',	en_P76_PSA	},	/* Forced local ref. assign. */
	{ "FLOT",	0x2036,	0x22,	'u',	0			},	/* Time-out forc. local */
	{ "ADRC",	0x2024,	0x02,	'u',	0			},	/* Drive address */
	{ "PRFL",	0x2024,	0x42,	'u',	en_P76_PRFL	},	/* PPO profile used */
	{ "DPMA",	0x2024,	0x43,	'u',	en_P76_DPMA	},	/* DP Master Active */
	{ "ECSA",	0x2024,	0x5C,	'u',	0			},	/* EtherCAT second address */
	{ "CIOA",	0x2024,	0x44,	'u',	en_P76_CIOA	},	/* Configured Assembly */
	{ "BDR",	0x2024,	0x04,	'u',	en_P76_TBR	},	/* Comm. option baud rate */
	{ "BDRU",	0x2024,	0x3D,	'u',	en_P76_TBR	},	/* Data rate used */
	{ "L1D",	0x200A,	0x02,	'u',	0			},	/* LI1 on delay */
	{ "R1",	0x2014,	0x02,	'u',	en_P76_PSL	},	/* Relay ouput 1 assignment */
	{ "R2",	0x2014,	0x03,	'u',	en_P76_PSL	},	/* Relay ouput 2 assignment */
	{ "L2D",	0x200A,	0x03,	'u',	0			},	/* LI2 on delay */
	{ "R1D",	0x200C,	0x2A,	'u',	0			},	/* R1 Delay time */
	{ "R2D",	0x200C,	0x2B,	'u',	0			},	/* R2 Delay time */
	{ "L3D",	0x200A,	0x04,	'u',	0			},	/* LI3 on delay */
	{ "R1S",	0x200C,	0x02,	'u',	en_P76_NPL	},	/* R1 Active level */
	{ "R2S",	0x200C,	0x03,	'u',	en_P76_NPL	},	/* R2 Active level */
	{ "L4D",	0x200A,	0x05,	'u',	0			},	/* LI4 on delay */
	{ "R1H",	0x200C,	0x16,	'u',	0			},	/* R1 Holding time */
	{ "R2H",	0x200C,	0x17,	'u',	0			},	/* R2 Holding time */
	{ "L5D",	0x200A,	0x06,	'u',	0			},	/* LI5 on delay */
	{ "L6D",	0x200A,	0x07,	'u',	0			},	/* LI6 on delay */
	{ "DO1",	0x2014,	0x20,	'u',	en_P76_PSL	},	/* DO1 assignment */
	{ "DO1D",	0x200C,	0x52,	'u',	0			},	/* DO1 delay time */
	{ "DO1H",	0x200C,	0x48,	'u',	0			},	/* DO1 holding time */
	{ "DO1S",	0x200C,	0x3E,	'u',	en_P76_NPL	},	/* DO1 active level */
	{ "FRHT",	0x2002,	0x17,	's',	0			},	/* FRH high resolution */
	{ "SLCR",	0x2002,	0x19,	'u',	0			},	/* LCR without filter */
	{ "SRFR",	0x2002,	0x1A,	's',	0			},	/* RFR without filter */
	{ "MMF",	0x2002,	0x14,	's',	0			},	/* Measured output freq. */
	{ "SOTR",	0x2002,	0x1B,	's',	0			},	/* OTR without filter */
	{ "SULN",	0x2002,	0x1E,	'u',	0			},	/* ULN without filter */
	{ "SOPR",	0x2002,	0x5B,	's',	0			},	/* OPR without filter */
	{ "SAI1",	0x2016,	0x5C,	's',	0			},	/* AI1 physical value without filter */
	{ "SAI2",	0x2016,	0x5D,	's',	0			},	/* AI2 physical value without filter */
	{ "SAI3",	0x2016,	0x5E,	's',	0			},	/* AI3 physical value without filter */
	{ "SAO1",	0x2016,	0x60,	's',	0			},	/* AO1 physical value without filter */
	{ "PGI",	0x201A,	0x05,	'u',	0			},	/* Number of pulses */
	{ "ENS",	0x201A,	0x09,	'u',	en_P76_ENS	},	/* Encoder type configure */
	{ "ENU",	0x201A,	0x07,	'u',	en_P76_ENU	},	/* Encoder usage */
	{ "ULT",	0x2072,	0x0C,	'u',	0			},	/* Underld T. Delay Detect. */
	{ "SRB",	0x2072,	0x02,	'u',	0			},	/* Hysteresis Freq.Attained */
	{ "UDL",	0x2072,	0x0D,	'u',	en_P76_ECFG	},	/* Underload Management */
	{ "RMUD",	0x2072,	0x0F,	'u',	0			},	/* Unld. Freq.Thr. Detection */
	{ "LUL",	0x2072,	0x10,	'u',	0			},	/* Unld.Thr. at O speed */
	{ "LUN",	0x2072,	0x11,	'u',	0			},	/* Unld.Thr. at Nom. speed */
	{ "TOL",	0x2072,	0x16,	'u',	0			},	/* Overload Time Detect. */
	{ "ODL",	0x2072,	0x17,	'u',	en_P76_ECFG	},	/* Ovld.Proces Management */
	{ "STOS",	0x207B,	0x17,	'u',	en_P76_STOS	},	/* Safe Torque Off Status */
	{ "AI1I",	0x2016,	0x17,	's',	0			},	/* AI1 input physical image (MAX = 8192) */
	{ "AI2I",	0x2016,	0x18,	's',	0			},	/* AI2 input physical image (MAX = 8192) */
	{ "AI3I",	0x2016,	0x19,	's',	0			},	/* AI3 input physical image (MAX = 8192) */
	{ "AO1I",	0x2016,	0x34,	's',	0			},	/* AO1 output physical image (MAX = 8192) */
	{ "ETAD",	0x2038,	0x04,	'u',	0			},	/* DRIVECOM : Status word */
	{ "FTO",	0x2072,	0x18,	'u',	0			},	/* Ovld time Before Restart */
	{ "FTU",	0x2072,	0x0E,	'u',	0			},	/* Unld Time Before Restart */
	{ "HSC",	0x2067,	0x09,	'u',	0			},	/* High Speed Counter */
	{ "IL1I",	0x2016,	0x02,	'u',	0			},	/* Logic inputs physical image (bit0 = LI1 ...) */
	{ "LOC",	0x2072,	0x1A,	'u',	0			},	/* Ovld Threshold Detection */
	{ "PFL",	0x2042,	0x19,	'u',	0			},	/* U/F Profile */
	{ "SPD",	0x205A,	0x05,	'u',	0			},	/* Motor speed */
	{ "TQB",	0x2074,	0x09,	'u',	0			},	/* Pulse without Run delay */
	{ "PUC",	0x201A,	0x0C,	'u',	0			},	/* PLC encoder pulse */
	{ "SPD1",	0x205A,	0x09,	'u',	0			},	/* Output value Customer */
	{ "MSTP",	0x205F,	0x18,	'u',	en_P76_N_Y	},	/* With or whithout Memo SToP switch */
	{ "PRST",	0x205F,	0x19,	'u',	en_P76_N_Y	},	/* Priority restart even if switch stop is activated */
	{ "INF6",	0x2006,	0x64,	'u',	0			},	/* SHI-C Communication Fault */
	{ "HS1",	0x202B,	0x16,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "HS2",	0x202B,	0x17,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "HS3",	0x202B,	0x18,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "HS4",	0x202B,	0x19,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "HS5",	0x202B,	0x1A,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "HS6",	0x202B,	0x1B,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "HS7",	0x202B,	0x1C,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "HS8",	0x202B,	0x1D,	'u',	en_P76_HMIS	},	/* HMI status */
	{ "MPC",	0x2042,	0x0F,	'u',	en_P76_MPC	},	/* Motor parameter choice */
	{ "RDAE",	0x2042,	0x4D,	's',	0			},	/* Ratio D-Axis Current Error */
	{ "TUNU",	0x2042,	0x14,	'u',	en_P76_TUNU	},	/* Auto tuning usage */
	{ "BOO",	0x206D,	0x0D,	's',	0			},	/* Boost */
	{ "FAB",	0x206D,	0x0C,	'u',	0			},	/* Action Boost */
	{ "FRI",	0x207E,	0x02,	'u',	0			},	/* Frequency of the HF injection signal */
	{ "AIV2",	0x2016,	0x54,	's',	0			},	/* Second virtual AI value */
	{ "AIC2",	0x2016,	0x55,	'u',	en_P76_PSA	},	/* AI2 network channel */
	{ "AI1L",	0x200E,	0x53,	'u',	en_P76_AIOL	},	/* Analogue input 1 range */
	{ "AI2L",	0x200E,	0x54,	'u',	en_P76_AIOL	},	/* Analogue input 2 range */
	{ "AI3L",	0x200E,	0x55,	'u',	en_P76_AIOL	},	/* Analogue input 3 range */
	{ "APH",	0x2002,	0x1F,	'u',	0			},	/* Power consumption */
	{ "BNS",	0x2077,	0x5D,	'u',	0			},	/* Program size */
	{ "BNV",	0x2077,	0x5B,	'u',	0			},	/* Program format version */
	{ "BTPI",	0x2024,	0x4A,	'u',	0			},	/* PIN code */
	{ "BTUA",	0x2024,	0x47,	'u',	en_P76_ONOFF	},	/* Bluetooth Activation */
	{ "BTUC",	0x2024,	0x48,	'u',	en_P76_PSLIN	},	/* Bluetooth Visibility */
	{ "BVER",	0x2077,	0x5E,	'u',	0			},	/* Program version */
	{ "CCFG",	0x2000,	0x36,	'u',	en_P76_N_Y	},	/* Customized macro */
	{ "CFG",	0x2000,	0x35,	'u',	en_P76_CFG	},	/* Macro config selection */
	{ "CIO2",	0x2024,	0x45,	'u',	en_P76_CIOA	},	/* Configured Assembly */
	{ "CP1",	0x2046,	0x49,	's',	0			},	/* Ext weight Point 1Y */
	{ "CP2",	0x2046,	0x4B,	's',	0			},	/* Ext weight Point 2Y */
	{ "CTV",	0x2077,	0x5C,	'u',	0			},	/* Catalogue version */
	{ "DAL",	0x205F,	0x0A,	'u',	en_P76_L_H	},	/* Slowdown limit config. */
	{ "DANF",	0x201A,	0x2C,	'u',	en_P76_DANF	},	/* Available ANF detection direction */
	{ "DAS",	0x2065,	0x03,	'u',	0			},	/* Delay to open contactor */
	{ "DBS",	0x2065,	0x02,	'u',	0			},	/* Delay to close o/p cont.  */
	{ "DCCC",	0x206C,	0x34,	'u',	en_P76_DCCC	},	/* DC Bus compatibility */
	{ "DCCM",	0x206C,	0x33,	'u',	en_P76_DCCM	},	/* DC Bus chaining mode */
	{ "DTF",	0x205C,	0x0C,	'u',	0			},	/* Decrease ref. speed */
	{ "EBHT",	0x2005,	0x3E,	'u',	en_P76_EBHT	},	/* Encoder board HW type */
	{ "EBO",	0x205C,	0x0E,	'u',	en_P76_CSLOUT	},	/* End of reel */
	{ "FANF",	0x201A,	0x2B,	'u',	0			},	/* Detection frequency of ANF detected fault */
	{ "FBCD",	0x2077,	0x3F,	'u',	en_P76_SPST	},	/* FB command */
	{ "FBDF",	0x2077,	0x42,	'u',	en_P76_SPIG	},	/* FB behaviour on drive fault */
	{ "FBFT",	0x2077,	0x3E,	'u',	en_P76_FBFT	},	/* FB fault */
	{ "FBRM",	0x2077,	0x40,	'u',	en_P76_PSLIN	},	/* FB start mode */
	{ "FBSM",	0x2077,	0x41,	'u',	en_P76_ECFG	},	/* Stop of FB stops the motor */
	{ "FBST",	0x2077,	0x3D,	'u',	en_P76_FBST	},	/* FB status */
	{ "GDLA",	0x207B,	0x5B,	'u',	en_P76_SMSA	},	/* Guard Door Locking assignment */
	{ "GDLS",	0x207B,	0x5E,	'u',	en_P76_GDLS	},	/* GDL Status */
	{ "GLB",	0x2024,	0x08,	'u',	0			},	/* Global transmit */
	{ "GLLD",	0x207B,	0x5C,	'u',	0			},	/* GDL Long delay */
	{ "GLSD",	0x207B,	0x5D,	'u',	0			},	/* GDL Short delay */
	{ "HRFC",	0x2029,	0x33,	'u',	en_P76_N_Y	},	/* Hard reset fault configuration */
	{ "I2TA",	0x2042,	0x20,	'u',	en_P76_N_Y	},	/* I2t model activation for current limitation */
	{ "I2TI",	0x2042,	0x21,	'u',	0			},	/* maximum current of I2t model */
	{ "I2TM",	0x2042,	0x23,	'u',	0			},	/* Monitoring of I2t overload level */
	{ "I2TT",	0x2042,	0x22,	'u',	0			},	/* maximum time of I2t model */
	{ "IA01",	0x2077,	0x01,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA02",	0x2077,	0x02,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA03",	0x2077,	0x03,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA04",	0x2077,	0x04,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA05",	0x2077,	0x05,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA06",	0x2077,	0x06,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA07",	0x2077,	0x07,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA08",	0x2077,	0x08,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA09",	0x2077,	0x09,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IA10",	0x2077,	0x0A,	'u',	en_P76_PSA	},	/* FB : Analog Input XX assignment */
	{ "IBRA",	0x2046,	0x4C,	'u',	0			},	/* IBR when weight loss */
	{ "IL01",	0x2077,	0x15,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL02",	0x2077,	0x16,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL03",	0x2077,	0x17,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL04",	0x2077,	0x18,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL05",	0x2077,	0x19,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL06",	0x2077,	0x1A,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL07",	0x2077,	0x1B,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL08",	0x2077,	0x1C,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL09",	0x2077,	0x1D,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "IL10",	0x2077,	0x1E,	'u',	en_P76_PSL	},	/* FB : Logical Input XX assignment */
	{ "LA01",	0x2077,	0x29,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA02",	0x2077,	0x2A,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA03",	0x2077,	0x2B,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA04",	0x2077,	0x2C,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA05",	0x2077,	0x2D,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA06",	0x2077,	0x2E,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA07",	0x2077,	0x2F,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA08",	0x2077,	0x30,	'u',	0			},	/* FB : ADL Container XX */
	{ "LA1D",	0x200A,	0x16,	'u',	0			},	/* LA1 On Delay */
	{ "LA2D",	0x200A,	0x17,	'u',	0			},	/* LA2 On Delay */
	{ "LANF",	0x201A,	0x29,	'u',	0			},	/* Detection level of ANF detected fault */
	{ "LET",	0x2028,	0x5B,	'u',	en_P76_L_H	},	/* External fault config */
	{ "LIDT",	0x207B,	0x1F,	'u',	0			},	/* LI Debounce Time */
	{ "LIRT",	0x207B,	0x20,	'u',	0			},	/* LI Response Time */
	{ "LO1",	0x2014,	0x0A,	'u',	en_P76_PSL	},	/* LO1 assignment */
	{ "LO1D",	0x200C,	0x32,	'u',	0			},	/* LO1 delay time */
	{ "LO1H",	0x200C,	0x1E,	'u',	0			},	/* LO1 holding time */
	{ "LO1S",	0x200C,	0x0A,	'u',	en_P76_NPL	},	/* LO1 active level */
	{ "LO1F",	0x200C,	0x5D,	'u',	en_P76_N_Y	},	/* Enable DQ1 fallback */
	{ "LP1",	0x2046,	0x48,	'u',	0			},	/* Ext weight point 1 X */
	{ "LP2",	0x2046,	0x4A,	'u',	0			},	/* Ext weight point 2 X */
	{ "LRS1",	0x2002,	0x33,	'u',	0			},	/* Logic result status 1 (PSL 000-015) */
	{ "LRS2",	0x2002,	0x34,	'u',	0			},	/* Logic result status 2 (PSL 016-031) */
	{ "LRS3",	0x2002,	0x35,	'u',	0			},	/* Logic result status 3 (PSL 032-047) */
	{ "LRS4",	0x2002,	0x36,	'u',	0			},	/* Logic result status 4 (PSL 048-063) */
	{ "LRS5",	0x2002,	0x37,	'u',	0			},	/* Logic result status 5 (PSL 064-079) */
	{ "LRS6",	0x2002,	0x38,	'u',	0			},	/* Logic result status 6 (PSL 080-095) */
	{ "LRS7",	0x2002,	0x39,	'u',	0			},	/* Logic result status 7 (PSL 096-111) */
	{ "LRS8",	0x2002,	0x3A,	'u',	0			},	/* Logic result status 8 (PSL 112-127) */
	{ "M001",	0x2077,	0x47,	'u',	0			},	/* FB : M0XX parameter */
	{ "M002",	0x2077,	0x48,	'u',	0			},	/* FB : M0XX parameter */
	{ "M003",	0x2077,	0x49,	'u',	0			},	/* FB : M0XX parameter */
	{ "M004",	0x2077,	0x4A,	'u',	0			},	/* FB : M0XX parameter */
	{ "M005",	0x2077,	0x4B,	'u',	0			},	/* FB : M0XX parameter */
	{ "M006",	0x2077,	0x4C,	'u',	0			},	/* FB : M0XX parameter */
	{ "M007",	0x2077,	0x4D,	'u',	0			},	/* FB : M0XX parameter */
	{ "M008",	0x2077,	0x4E,	'u',	0			},	/* FB : M0XX parameter */
	{ "NTJ",	0x2002,	0x2A,	'u',	0			},	/* IGBT alarm Nb */
	{ "OCC",	0x2065,	0x05,	'u',	en_P76_CSLOUT	},	/* Output contactor control */
	{ "PES",	0x2046,	0x47,	'u',	en_P76_PSA	},	/* Weight sensor assignt */
	{ "PFI",	0x2067,	0x05,	'u',	0			},	/* RP filter */
	{ "PFR",	0x2067,	0x04,	'u',	0			},	/* RP maximum value */
	{ "PIL",	0x2067,	0x03,	'u',	0			},	/* Minimum pulse input */
	{ "PRC",	0x2024,	0x07,	'u',	en_P76_N_Y	},	/* Peer Cop node */
	{ "PTCL",	0x2066,	0x04,	'u',	en_P76_PTCX	},	/* LI6 = PTC probe */
	{ "PWRM",	0x207B,	0x16,	'u',	en_P76_SPSL	},	/* PWRM Assignment */
	{ "QSH",	0x205C,	0x05,	'u',	0			},	/* Quick step high */
	{ "QSL",	0x205C,	0x06,	'u',	0			},	/* Quick step low */
	{ "R1F",	0x200C,	0x5B,	'u',	en_P76_N_Y	},	/* R1 FallBack Enable */
	{ "R2F",	0x200C,	0x5C,	'u',	en_P76_N_Y	},	/* R2 FallBack Enable */
	{ "RCA",	0x2065,	0x04,	'u',	en_P76_PSLIN	},	/* Output contactor fdbk */
	{ "RSL",	0x2059,	0x3D,	'u',	0			},	/* PID wake up threshold  */
	{ "RTR",	0x205C,	0x0B,	'u',	en_P76_PSLIN	},	/* Traverse control reset */
	{ "S001",	0x2077,	0x51,	'u',	0			},	/* FB system word 01 */
	{ "S002",	0x2077,	0x52,	'u',	0			},	/* FB system word 02 */
	{ "S006",	0x2077,	0x56,	'u',	0			},	/* FB system word 06 */
	{ "SAF1",	0x207B,	0x33,	'u',	0			},	/* Safety fault register 1 */
	{ "SAF2",	0x207B,	0x3C,	'u',	0			},	/* Safety fault register 2 */
	{ "SAL",	0x205F,	0x09,	'u',	en_P76_L_H	},	/* Stop limit configuration */
	{ "SAT",	0x2050,	0x16,	'u',	en_P76_N_Y	},	/* Thermal alarm stop */
	{ "SCL3",	0x2028,	0x13,	'u',	en_P76_ECFG	},	/* Ground short circuit detection */
	{ "SDS",	0x205A,	0x02,	'u',	0			},	/* Customer scale factor */
	{ "SF00",	0x207B,	0x34,	'u',	0			},	/* Safety fault subregister 0 */
	{ "SF01",	0x207B,	0x35,	'u',	0			},	/* Safety fault subregister 1 */
	{ "SF02",	0x207B,	0x36,	'u',	0			},	/* Safety fault subregister 2 */
	{ "SF03",	0x207B,	0x37,	'u',	0			},	/* Safety fault subregister 3 */
	{ "SF04",	0x207B,	0x38,	'u',	0			},	/* Safety fault subregister 4 */
	{ "SF05",	0x207B,	0x39,	'u',	0			},	/* Safety fault subregister 5 */
	{ "SF06",	0x207B,	0x3A,	'u',	0			},	/* Safety fault subregister 6 */
	{ "SF07",	0x207B,	0x3B,	'u',	0			},	/* Safety fault subregister 7 */
	{ "SF08",	0x207B,	0x3D,	'u',	0			},	/* Safety fault subregister 8 */
	{ "SF09",	0x207B,	0x3E,	'u',	0			},	/* Safety fault subregister 9 */
	{ "SF10",	0x207B,	0x3F,	'u',	0			},	/* Safety fault subregister 10 */
	{ "SF11",	0x207B,	0x40,	'u',	0			},	/* Safety fault subregister 11 */
	{ "SFTY",	0x207B,	0x2D,	'u',	en_P76_SFTY	},	/* Drive Safety status */
	{ "SLSA",	0x207B,	0x01,	'u',	en_P76_SPSL	},	/* SLS Assignment */
	{ "SLSP",	0x207B,	0x03,	'u',	0			},	/* SLS Set Point */
	{ "SLSS",	0x207B,	0x05,	'u',	en_P76_SLSS	},	/* Safe limited speed status */
	{ "SLT",	0x207B,	0x02,	'u',	en_P76_SLT	},	/* SLS Type */
	{ "SLTT",	0x207B,	0x04,	'u',	0			},	/* SLS Tolerance Threshold */
	{ "SLWT",	0x207B,	0x06,	'u',	0			},	/* SLS Wait Time */
	{ "SMLH",	0x207B,	0x53,	'u',	0			},	/* SMS Speed High Limit */
	{ "SMLL",	0x207B,	0x52,	'u',	0			},	/* SMS Speed Low Limit */
	{ "SMLS",	0x207B,	0x54,	'u',	en_P76_SPSL	},	/* SMS Speed Selection */
	{ "SMSA",	0x207B,	0x51,	'u',	en_P76_SMSA	},	/* Safely speed limiteed assignment */
	{ "SMSS",	0x207B,	0x55,	'u',	en_P76_SMSS	},	/* SMS Status */
	{ "SNC",	0x205C,	0x0D,	'u',	en_P76_PSLIN	},	/* Counter wobble */
	{ "SPD2",	0x205A,	0x0A,	'u',	0			},	/* Output value Customer */
	{ "SPD3",	0x205A,	0x0B,	'u',	0			},	/* Output value Customer */
	{ "SPDT",	0x2038,	0x11,	'u',	0			},	/* DRIVECOM : Deceleration - Time delta */
	{ "SR11",	0x202C,	0x02,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR12",	0x202C,	0x03,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR13",	0x202C,	0x04,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR14",	0x202C,	0x05,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR15",	0x202C,	0x06,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR16",	0x202C,	0x07,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR17",	0x202C,	0x08,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR18",	0x202C,	0x09,	'u',	0			},	/* SAF1 REGISTER x (1 is last) */
	{ "SR21",	0x202C,	0x0C,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SR22",	0x202C,	0x0D,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SR23",	0x202C,	0x0E,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SR24",	0x202C,	0x0F,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SR25",	0x202C,	0x10,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SR26",	0x202C,	0x11,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SR27",	0x202C,	0x12,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SR28",	0x202C,	0x13,	'u',	0			},	/* SAF2 REGISTER x (1 is last) */
	{ "SRA1",	0x202C,	0x16,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRA2",	0x202C,	0x17,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRA3",	0x202C,	0x18,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRA4",	0x202C,	0x19,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRA5",	0x202C,	0x1A,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRA6",	0x202C,	0x1B,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRA7",	0x202C,	0x1C,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRA8",	0x202C,	0x1D,	'u',	0			},	/* SF00 REGISTER x (1 is last) */
	{ "SRB1",	0x202C,	0x20,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRB2",	0x202C,	0x21,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRB3",	0x202C,	0x22,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRB4",	0x202C,	0x23,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRB5",	0x202C,	0x24,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRB6",	0x202C,	0x25,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRB7",	0x202C,	0x26,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRB8",	0x202C,	0x27,	'u',	0			},	/* SF01 REGISTER x (1 is last) */
	{ "SRC1",	0x202C,	0x2A,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRC2",	0x202C,	0x2B,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRC3",	0x202C,	0x2C,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRC4",	0x202C,	0x2D,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRC5",	0x202C,	0x2E,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRC6",	0x202C,	0x2F,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRC7",	0x202C,	0x30,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRC8",	0x202C,	0x31,	'u',	0			},	/* SF02 REGISTER x (1 is last) */
	{ "SRD1",	0x202C,	0x34,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRD2",	0x202C,	0x35,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRD3",	0x202C,	0x36,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRD4",	0x202C,	0x37,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRD5",	0x202C,	0x38,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRD6",	0x202C,	0x39,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRD7",	0x202C,	0x3A,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRD8",	0x202C,	0x3B,	'u',	0			},	/* SF03 REGISTER x (1 is last) */
	{ "SRE1",	0x202C,	0x3E,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRE2",	0x202C,	0x3F,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRE3",	0x202C,	0x40,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRE4",	0x202C,	0x41,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRE5",	0x202C,	0x42,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRE6",	0x202C,	0x43,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRE7",	0x202C,	0x44,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRE8",	0x202C,	0x45,	'u',	0			},	/* SF04 REGISTER x (1 is last) */
	{ "SRF1",	0x202C,	0x48,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRF2",	0x202C,	0x49,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRF3",	0x202C,	0x4A,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRF4",	0x202C,	0x4B,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRF5",	0x202C,	0x4C,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRF6",	0x202C,	0x4D,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRF7",	0x202C,	0x4E,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRF8",	0x202C,	0x4F,	'u',	0			},	/* SF05 REGISTER x (1 is last) */
	{ "SRG1",	0x202C,	0x52,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRG2",	0x202C,	0x53,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRG3",	0x202C,	0x54,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRG4",	0x202C,	0x55,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRG5",	0x202C,	0x56,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRG6",	0x202C,	0x57,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRG7",	0x202C,	0x58,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRG8",	0x202C,	0x59,	'u',	0			},	/* SF06 REGISTER x (1 is last) */
	{ "SRH1",	0x202C,	0x5C,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRH2",	0x202C,	0x5D,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRH3",	0x202C,	0x5E,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRH4",	0x202C,	0x5F,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRH5",	0x202C,	0x60,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRH6",	0x202C,	0x61,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRH7",	0x202C,	0x62,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRH8",	0x202C,	0x63,	'u',	0			},	/* SF07 REGISTER x (1 is last) */
	{ "SRI1",	0x202D,	0x02,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRI2",	0x202D,	0x03,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRI3",	0x202D,	0x04,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRI4",	0x202D,	0x05,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRI5",	0x202D,	0x06,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRI6",	0x202D,	0x07,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRI7",	0x202D,	0x08,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRI8",	0x202D,	0x09,	'u',	0			},	/* SF08 REGISTER x (1 is last) */
	{ "SRJ1",	0x202D,	0x0C,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRJ2",	0x202D,	0x0D,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRJ3",	0x202D,	0x0E,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRJ4",	0x202D,	0x0F,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRJ5",	0x202D,	0x10,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRJ6",	0x202D,	0x11,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRJ7",	0x202D,	0x12,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRJ8",	0x202D,	0x13,	'u',	0			},	/* SF09 REGISTER x (1 is last) */
	{ "SRK1",	0x202D,	0x16,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRK2",	0x202D,	0x17,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRK3",	0x202D,	0x18,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRK4",	0x202D,	0x19,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRK5",	0x202D,	0x1A,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRK6",	0x202D,	0x1B,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRK7",	0x202D,	0x1C,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRK8",	0x202D,	0x1D,	'u',	0			},	/* SF10 REGISTER x (1 is last) */
	{ "SRL1",	0x202D,	0x20,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SRL2",	0x202D,	0x21,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SRL3",	0x202D,	0x22,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SRL4",	0x202D,	0x23,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SRL5",	0x202D,	0x24,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SRL6",	0x202D,	0x25,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SRL7",	0x202D,	0x26,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SRL8",	0x202D,	0x27,	'u',	0			},	/* SF11 REGISTER x (1 is last) */
	{ "SS1A",	0x207B,	0x0B,	'u',	en_P76_SPSL	},	/* Safe Stop 1 Assigment */
	{ "SS1S",	0x207B,	0x10,	'u',	en_P76_SS1S	},	/* Safe stop 1 status */
	{ "SSRT",	0x207B,	0x0C,	'u',	0			},	/* SS1 Ramp Value */
	{ "SSRU",	0x207B,	0x0D,	'u',	en_P76_SSRU	},	/* SS1 Ramp unit */
	{ "SSSL",	0x207B,	0x0E,	'u',	0			},	/* SS1&SLS Standstill Level */
	{ "SSTT",	0x207B,	0x0F,	'u',	0			},	/* SS1 Trip Threshold */
	{ "STFR",	0x2002,	0x52,	's',	0			},	/* Estimated stator frequency (signed value) */
	{ "STOA",	0x207B,	0x15,	'u',	en_P76_SPSL	},	/* STO Assignement */
	{ "TAC",	0x2002,	0x24,	'u',	0			},	/* IGBT alarm counter */
	{ "TAC2",	0x2002,	0x2B,	'u',	0			},	/* Min IGBT frequency time */
	{ "TANF",	0x201A,	0x2A,	'u',	0			},	/* Detection time of ANF detected fault */
	{ "TBO",	0x205C,	0x09,	'u',	0			},	/* Time to make a reel */
	{ "TDN",	0x205C,	0x08,	'u',	0			},	/* Traverse ctrl decel time */
	{ "TRC",	0x205C,	0x02,	'u',	en_P76_PSLIN	},	/* Yarn control input */
	{ "TRH",	0x205C,	0x03,	'u',	0			},	/* Traverse frequency high */
	{ "TRL",	0x205C,	0x04,	'u',	0			},	/* Traverse frequency low */
	{ "TSY",	0x205C,	0x0F,	'u',	en_P76_CSLOUT	},	/* Sync. wobble output */
	{ "TUP",	0x205C,	0x07,	'u',	0			},	/* Traverse ctrl accel time */
	{ "UNT",	0x2002,	0x23,	'u',	0			},	/* APH, PTH, RTH and RTHI units */
	{ "NTID",	0x2024,	0x5F,	'u',	en_P76_NTID	},	/* Fieldbus identifier selection */
	{ 0, 0, 0, 0 }
};


char * P76_download_index[] = {
	"LAC",
	"INR",
	"ACC",
	"DEC",
	"AC2",
	"DE2",
	"LSP",
	"HSP",
	"ITH",
	"SFR",
	"SFT",
	"CLI",
	"FLU",
	"TLS",
	"MFR",
	"CTD",
	"TTH",
	"TTL",
	"FTD",
	"F2D",
	"FQL",
	"FFM",
	"BFR",
	"TFR",
	"CTT",
	"TUNU",
	"AUT",
	"SPG",
	"SPGU",
	"SIT",
	"SFC",
	"FFH",
	"CRTF",
	"UFR",
	"SLP",
	"U1",
	"F1",
	"U2",
	"F2",
	"U3",
	"F3",
	"U4",
	"F4",
	"U5",
	"F5",
	"NRD",
	"BOA",
	"BOO",
	"FAB",
	"SVL",
	"SOP",
	"VBR",
	"LBA",
	"LBC",
	"LBC1",
	"LBC2",
	"LBC3",
	"LBF",
	"NPR",
	"COS",
	"UNS",
	"NCR",
	"FRS",
	"NSP",
	"MPC",
	"RSA",
	"LFA",
	"IDA",
	"TRA",
	"NCRS",
	"PPNS",
	"NSPS",
	"TQS",
	"AST",
	"HFI",
	"RSAS",
	"LDS",
	"LQS",
	"PHS",
	"SPB",
	"SPF",
	"PEC",
	"FRI",
	"HIR",
	"ILR",
	"SIR",
	"TCC",
	"TCT",
	"RRS",
	"BSP",
	"L1D",
	"L2D",
	"L3D",
	"L4D",
	"L5D",
	"L6D",
	"LA1D",
	"LA2D",
	"PIL",
	"PFR",
	"PFI",
	"AI1T",
	"UIL1",
	"UIH1",
	"AI1F",
	"AI1L",
	"AI1E",
	"AI1S",
	"AI2T",
	"UIL2",
	"UIH2",
	"AI2F",
	"AI2E",
	"AI2S",
	"AI3T",
	"CRL3",
	"CRH3",
	"AI3F",
	"AI3L",
	"AI3E",
	"AI3S",
	"R1",
	"R1D",
	"R1S",
	"R1H",
	"R2",
	"R2D",
	"R2S",
	"R2H",
	"LO1",
	"LO1D",
	"LO1S",
	"LO1H",
	"DO1",
	"DO1D",
	"DO1S",
	"DO1H",
	"AO1",
	"AO1T",
	"AOL1",
	"AOH1",
	"UOL1",
	"UOH1",
	"ASL1",
	"ASH1",
	"AO1F",
	"FR1",
	"RIN",
	"PST",
	"CHCF",
	"CCS",
	"CD1",
	"CD2",
	"RFC",
	"FR2",
	"COP",
	"FN1",
	"FN2",
	"FN3",
	"FN4",
	"BMP",
	"RCB",
	"FR1B",
	"SA2",
	"SA3",
	"DA2",
	"DA3",
	"MA2",
	"MA3",
	"RPT",
	"TA1",
	"TA2",
	"TA3",
	"TA4",
	"FRT",
	"RPS",
	"BRA",
	"STT",
	"FFT",
	"NST",
	"FST",
	"DCF",
	"DCI",
	"IDC",
	"TDI",
	"IDC2",
	"TDC",
	"DOTD",
	"QSTD",
	"ADC",
	"SDC1",
	"TDC1",
	"SDC2",
	"TDC2",
	"JOG",
	"JGF",
	"JGT",
	"PS2",
	"PS4",
	"PS8",
	"PS16",
	"SP2",
	"SP3",
	"SP4",
	"SP5",
	"SP6",
	"SP7",
	"SP8",
	"SP9",
	"SP10",
	"SP11",
	"SP12",
	"SP13",
	"SP14",
	"SP15",
	"SP16",
	"JPF",
	"JF2",
	"JF3",
	"JFH",
	"USP",
	"DSP",
	"STR",
	"USI",
	"DSI",
	"SRP",
	"SPM",
	"FLI",
	"BLC",
	"BST",
	"BCI",
	"BIP",
	"IBR",
	"IRD",
	"BRT",
	"BIR",
	"BEN",
	"TBE",
	"BET",
	"BED",
	"JDC",
	"TTR",
	"BRR",
	"PES",
	"LP1",
	"CP1",
	"LP2",
	"CP2",
	"IBRA",
	"HSO",
	"COF",
	"COR",
	"TOS",
	"OSP",
	"CLO",
	"SCL",
	"RSD",
	"RSTL",
	"PIF",
	"AI2T",
	"PIF1",
	"PIF2",
	"PIP1",
	"PIP2",
	"PII",
	"RPI",
	"RPG",
	"RIG",
	"RDG",
	"PRP",
	"PIC",
	"POL",
	"POH",
	"PAL",
	"PAH",
	"PER",
	"PIS",
	"FPI",
	"PSR",
	"PAU",
	"PIM",
	"RSL",
	"PR2",
	"PR4",
	"RP2",
	"RP3",
	"RP4",
	"TLA",
	"INTP",
	"TLIM",
	"TLIG",
	"TAA",
	"TLC",
	"LC2",
	"CL2",
	"LLC",
	"LES",
	"LCT",
	"OCC",
	"RCA",
	"DBS",
	"DAS",
	"SAF",
	"SAR",
	"SAL",
	"DAF",
	"DAR",
	"DAL",
	"CLS",
	"PAS",
	"DSF",
	"STD",
	"NLS",
	"SFD",
	"TUL",
	"TRC",
	"TRH",
	"TRL",
	"QSH",
	"QSL",
	"TUP",
	"TDN",
	"TBO",
	"EBO",
	"SNC",
	"TSY",
	"DTF",
	"RTR",
	"SH2",
	"SH4",
	"HSP2",
	"HSP3",
	"HSP4",
	"PTCL",
	"RSF",
	"RPA",
	"ATR",
	"TAR",
	"FLR",
	"THT",
	"TTD",
	"TTD",
	"TTD3",
	"OLL",
	"MTM",
	"OPL",
	"ODT",
	"IPL",
	"OHL",
	"THA",
	"SAT",
	"ETF",
	"LET",
	"EPL",
	"USB",
	"URES",
	"USL",
	"UST",
	"STP",
	"TSM",
	"UPL",
	"STM",
	"TBS",
	"STRT",
	"LFL3 ",
	"INH  ",
	"CLL  ",
	"SSB  ",
	"STO  ",
	"FQF  ",
	"FQC  ",
	"FQA  ",
	"TDS  ",
	"FDT  ",
	"FQT  ",
	"TQB  ",
	"TLD  ",
	"DLD  ",
	"DLB  ",
	"TNL  ",
	"ULT  ",
	"LUN  ",
	"LUL  ",
	"RMUD ",
	"SRB  ",
	"UDL  ",
	"FTU  ",
	"TOL  ",
	"LUN  ",
	"ODL  ",
	"FTO  ",
	"LFF  ",
	"FLO  ",
	"FLOC ",
	"FLOT ",
	0
};
