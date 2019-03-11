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

acpienumeration en_P76_ACT[] = {
	{ "tAb",	0	}, /* Default stator resistance */
	{ "PEnd",	1	}, /* Test is pending */
	{ "PrOG",	2	}, /* Test in progress */
	{ "FAIL",	3	}, /* Test has failed. */
	{ "dOnE",	4	}, /* Measured R.stator is used */
	{ 0, 0 }
};

acpienumeration en_P76_ACTION[] = {
	{ "nO",	0	}, /* No action */
	{ "YES",	1	}, /* Do tune */
	{ "CLr",	2	}, /* Erase tune */
	{ 0, 0 }
};

acpienumeration en_P76_ADC[] = {
	{ "nO",	0	}, /* No DC injected current */
	{ "YES",	1	}, /* DC inj braking selected  */
	{ "Ct",	2	}, /* Continuous DC inj brake */
	{ 0, 0 }
};

acpienumeration en_P76_AIOL[] = {
	{ "POS",	0	}, /* Positive only */
	{ "POSnEG",	1	}, /* Positive and negative */
	{ 0, 0 }
};

acpienumeration en_P76_AIOT[] = {
	{ "10U",	1	}, /* AI in voltage selected */
	{ "0A",	2	}, /* AI in current selected */
	{ "n10U",	5	}, /* AI bipolar volts selected */
	{ 0, 0 }
};

acpienumeration en_P76_AST[] = {
	{ "IPMA",	3	}, /* IPM alignment */
	{ "SPMA",	4	}, /* SPM alignment */
	{ "PSI",	5	}, /* Pulse Signal Injection */
	{ "PSIO",	6	}, /* Pulse Signal Injection - Optimized */
	{ "nO",	254	}, /* NO alignment */
	{ 0, 0 }
};

acpienumeration en_P76_AUT[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* At each power on */
	{ "OnE",	2	}, /* At first run order */
	{ 0, 0 }
};

acpienumeration en_P76_BDCO[] = {
	{ "50",	38	}, /* Baud rate 50kbps */
	{ "125",	52	}, /* Baud rate 125kbps */
	{ "250",	60	}, /* Baud rate 250kbps */
	{ "500",	68	}, /* Baud rate 500kbps */
	{ "1M",	76	}, /* Baud rate 1Mbps */
	{ 0, 0 }
};

acpienumeration en_P76_BFR[] = {
	{ "50",	0	}, /* 50Hz Motor frequency */
	{ "60",	1	}, /* 60Hz Motor frequency */
	{ 0, 0 }
};

acpienumeration en_P76_BIP[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* Brake impulse Fwd */
	{ "2Ibr",	2	}, /* Brake impulse Fwd/Rev */
	{ 0, 0 }
};

acpienumeration en_P76_BLC[] = {
	{ "nO",	0	}, /* No */
	{ "r2",	2	}, /* Relay R2 */
	{ "LO1",	17	}, /* Logic output 1 */
	{ "dO1",	64	}, /* Logic output on AO1 */
	{ 0, 0 }
};

acpienumeration en_P76_BMP[] = {
	{ "StOP",	0	}, /* Cmd/ref clear on c/over */
	{ "bUMP",	1	}, /* Cmd/ref copied on c/over */
	{ 0, 0 }
};

acpienumeration en_P76_BOA[] = {
	{ "nO",	0	}, /* Inactive */
	{ "dYnA",	1	}, /* Dynamic */
	{ "StAt",	2	}, /* Static */
	{ 0, 0 }
};

acpienumeration en_P76_BRA[] = {
	{ "nO",	0	}, /* Braking cmd transistor */
	{ "YES",	1	}, /* Dec ramp adapt assigned */
	{ "dYnA",	2	}, /* Dynamic high torque A */
	{ 0, 0 }
};

acpienumeration en_P76_BSP[] = {
	{ "bSd",	0	}, /* Standard ref template */
	{ "bLS",	1	}, /* Pedestal at LSP */
	{ "bnS",	2	}, /* Deadband at LSP */
	{ "bnS0",	4	}, /* Deadband at 0 speed */
	{ 0, 0 }
};

acpienumeration en_P76_BST[] = {
	{ "HOr",	0	}, /* Cross traverse motion */
	{ "VEr",	1	}, /* Hoisting motion */
	{ 0, 0 }
};

acpienumeration en_P76_CDX[] = {
	{ "tEr",	1	}, /* Terminal block */
	{ "LOC",	2	}, /* Local control */
	{ "LCC",	3	}, /* Local HMI */
	{ "Mdb",	10	}, /* Modbus communication */
	{ "CAn",	20	}, /* CANopen communication */
	{ "nEt",	30	}, /* Ext. communication card */
	{ 0, 0 }
};

acpienumeration en_P76_CFG[] = {
	{ "StS",	0	}, /* Standard Start/Stop */
	{ "HdG",	1	}, /* Material handling */
	{ "HSt",	2	}, /* Hoisting */
	{ "GEn",	3	}, /* General use */
	{ "PId",	4	}, /* PID regulation */
	{ "nEt",	5	}, /* Network communications */
	{ 0, 0 }
};

acpienumeration en_P76_CFPS[] = {
	{ "nO",	0	}, /* Not Assigned */
	{ "CFP1",	1	}, /* Parameter set 1 */
	{ "CFP2",	2	}, /* Parameter set 2 */
	{ "CFP3",	3	}, /* Parameter set 3 */
	{ 0, 0 }
};

acpienumeration en_P76_CHCF[] = {
	{ "SIM",	1	}, /* Combined channel mode */
	{ "SEP",	2	}, /* Separated channel mode */
	{ "IO",	3	}, /* I/O mode */
	{ 0, 0 }
};

acpienumeration en_P76_CIOA[] = {
	{ "20",	0	}, /* 20/70 */
	{ "21",	1	}, /* 21/71 */
	{ "100",	2	}, /* 100/101 */
	{ "UnCG",	3	}, /* Unconfigured */
	{ 0, 0 }
};

acpienumeration en_P76_CNFS[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "CnF0",	1	}, /* Configuration set 1 */
	{ "CnF1",	2	}, /* Configuration set 2 */
	{ "CnF2",	3	}, /* Configuration set 3 */
	{ 0, 0 }
};

acpienumeration en_P76_CNL[] = {
	{ "tEr",	0	}, /* Terminal block */
	{ "LOC",	1	}, /* Local */
	{ "LCC",	2	}, /* Local HMI */
	{ "Mdb",	3	}, /* Modbus communication 1 */
	{ "CAn",	6	}, /* CANopen communication */
	{ "tUd",	7	}, /* Increase/Decrease speed */
	{ "LUd",	8	}, /* LUD->NotDef */
	{ "nEt",	9	}, /* Ext. communication card */
	{ "Ind",	14	}, /* Indus */
	{ "PWS",	15	}, /* PC tool */
	{ 0, 0 }
};

acpienumeration en_P76_COP[] = {
	{ "nO",	0	}, /* No copy */
	{ "SP",	1	}, /* Copy reference */
	{ "Cd",	2	}, /* Copy control */
	{ "ALL",	3	}, /* Copy control & reference */
	{ 0, 0 }
};

acpienumeration en_P76_CSLFN[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "FnJOG",	180	}, /* Jog */
	{ "FnPS1",	181	}, /* Speed reference 1 */
	{ "FnPS2",	182	}, /* Speed reference 2 */
	{ "FnPr1",	183	}, /* PID reference 1 */
	{ "FnPr2",	184	}, /* PID reference 2 */
	{ "FnUSP",	185	}, /* Increase speed */
	{ "FndSP",	186	}, /* Decrease speed */
	{ "FntK",	187	}, /* Terminal keypad */
	{ 0, 0 }
};

acpienumeration en_P76_CSLOUT[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "r2",	146	}, /* Relay R2 */
	{ "LO1",	129	}, /* Logical output LO1 */
	{ "dO1",	161	}, /* Logic output on AO1 */
	{ 0, 0 }
};

acpienumeration en_P76_CTT[] = {
	{ "VVC",	0	}, /* Sensorless flux vector V */
	{ "Std",	3	}, /* Standard motor law */
	{ "UF5",	4	}, /* 5 point voltage/frequency */
	{ "SYn",	5	}, /* Synchronous motor */
	{ "UFq",	6	}, /* V/F Quadratic */
	{ "nLd",	7	}, /* Energy Saving */
	{ 0, 0 }
};

acpienumeration en_P76_DANF[] = {
	{ "OVEr",	0	}, /* Trip in case of overspeed */
	{ "bOtH",	1	}, /* Trip in case of overspeed or underspeed */
	{ 0, 0 }
};

acpienumeration en_P76_DCCC[] = {
	{ "AtV",	0	}, /* Altivar compatibility */
	{ "LHM",	1	}, /* Lexium compatibility */
	{ 0, 0 }
};

acpienumeration en_P76_DCCM[] = {
	{ "nO",	0	}, /* No */
	{ "MAIn",	1	}, /* Bus and Main */
	{ "bUS",	2	}, /* Only Bus */
	{ 0, 0 }
};

acpienumeration en_P76_DOTD[] = {
	{ "nSt",	0	}, /* Drive freewheel stopping */
	{ "rMP",	1	}, /* Ramp stop on fault */
	{ 0, 0 }
};

acpienumeration en_P76_DPMA[] = {
	{ "1",	1	}, /* MCL1 */
	{ "2",	2	}, /* MCL2 */
	{ 0, 0 }
};

acpienumeration en_P76_DSF[] = {
	{ "Std",	0	}, /* Standard */
	{ "OPt",	1	}, /* Optimized */
	{ 0, 0 }
};

acpienumeration en_P76_DUR[] = {
	{ "5",	0	}, /* 5 minutes */
	{ "10",	1	}, /* 10 minutes */
	{ "30",	2	}, /* 30 minutes */
	{ "1H",	3	}, /* 1 hour */
	{ "2H",	4	}, /* 2 hours */
	{ "3H",	5	}, /* 3 hours */
	{ "Ct",	6	}, /* Unlimited */
	{ 0, 0 }
};

acpienumeration en_P76_EBHT[] = {
	{ "nO",	0	}, /* Not configured */
	{ "rS05",	1	}, /* RS422 5V */
	{ "PP24",	2	}, /* Push Pull 24V */
	{ "OC15",	3	}, /* Open collector 15V */
	{ "OC12",	4	}, /* Open collector 12V */
	{ "rS15",	5	}, /* RS422 15V */
	{ "PP15",	6	}, /* Push Pull 15V */
	{ "PP12",	7	}, /* Push Pull 12V */
	{ 0, 0 }
};

acpienumeration en_P76_ECFG[] = {
	{ "nO",	0	}, /* Ignore phase loss */
	{ "YES",	1	}, /* Freewheel stop on fault */
	{ "Stt",	2	}, /* Per STT */
	{ "LFF",	4	}, /* Fallback speed on fault */
	{ "rLS",	5	}, /* Maintain speed at fault */
	{ "rMP",	6	}, /* Ramp stop on fault */
	{ "FSt",	7	}, /* Fast stop on fault */
	{ "dCI",	8	}, /* DC injection on fault */
	{ 0, 0 }
};

acpienumeration en_P76_ENS[] = {
	{ "AAbb",	1	}, /* For signals A/A-/B/B- */
	{ "Ab",	2	}, /* For signals A/B */
	{ 0, 0 }
};

acpienumeration en_P76_ENU[] = {
	{ "nO",	0	}, /* Inactive */
	{ "SEC",	1	}, /* Speed feedback monitor */
	{ 0, 0 }
};

acpienumeration en_P76_ETHM[] = {
	{ "MbtP",	0	}, /* ModbusTCP */
	{ "EtIP",	1	}, /* EthernetIP */
	{ 0, 0 }
};

acpienumeration en_P76_ETST[] = {
	{ "InIt",	1	}, /* Init */
	{ "PrOP",	2	}, /* PreOp */
	{ "bOOt",	3	}, /* Boot */
	{ "SFOP",	4	}, /* SafeOp */
	{ "OP",	8	}, /* Op */
	{ 0, 0 }
};

acpienumeration en_P76_FBFT[] = {
	{ "nO",	0	}, /* No */
	{ "Int",	1	}, /* Internal */
	{ "bIn",	2	}, /* Binary file */
	{ "InP",	3	}, /* Internal parameters */
	{ "PAr",	4	}, /* Parameter access on read or write */
	{ "CAL",	5	}, /* Calculation */
	{ "tOAU",	6	}, /* TimeOut AUX task */
	{ "tOPP",	7	}, /* TimeOut in synchronous tasks */
	{ "AdL",	8	}, /* ADLC with bad parameter */
	{ "In",	9	}, /* Inputs assignment */
	{ 0, 0 }
};

acpienumeration en_P76_FBST[] = {
	{ "IdLE",	0	}, /* Idle */
	{ "CHEC",	1	}, /* Check program */
	{ "StOP",	2	}, /* Stop */
	{ "InIt",	3	}, /* Init */
	{ "rUn",	4	}, /* Run */
	{ "Err",	5	}, /* Error */
	{ 0, 0 }
};

acpienumeration en_P76_FCS[] = {
	{ "nO",	0	}, /* No */
	{ "rEC1",	2	}, /* Restore internal conf. 1 */
	{ "rEC2",	3	}, /*  */
	{ "InI",	64	}, /* Factory settings */
	{ "InI1",	71	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_FFM[] = {
	{ "Std",	0	}, /* Standard */
	{ "rUn",	1	}, /* Always */
	{ "StP",	2	}, /* Never */
	{ 0, 0 }
};

acpienumeration en_P76_FLU[] = {
	{ "FnC",	0	}, /* Flux on run signal */
	{ "FCt",	1	}, /* Pre flux on power up */
	{ "FnO",	2	}, /* No Pre fluxing */
	{ 0, 0 }
};

acpienumeration en_P76_FOR[] = {
	{ "nO",	0	}, /* Not configured */
	{ "AUtO",	1	}, /* Automatic format */
	{ "8O1",	2	}, /* 8bit odd parity 1stop bit */
	{ "8E1",	3	}, /* 8bit even parity 1stop bit */
	{ "8n1",	4	}, /* 8bit no parity 1stop bit */
	{ "8n2",	5	}, /* 8bit no parity 2stop bits */
	{ "7O1",	6	}, /* 7bit odd parity 1stop bit */
	{ "7E1",	7	}, /* 7bit even parity 1stop bit */
	{ "7O2",	8	}, /* 7bit odd parity 2stop bits */
	{ "7E2",	9	}, /* 7bit even parity 2stop bits */
	{ 0, 0 }
};

acpienumeration en_P76_GDLS[] = {
	{ "nO",	0	}, /*  */
	{ "OFF",	1	}, /*  */
	{ "Std",	2	}, /*  */
	{ "LGd",	3	}, /*  */
	{ "On",	4	}, /*  */
	{ "FLt",	5	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_HMIS[] = {
	{ "tUn",	0	}, /* Drive automatic tuning */
	{ "dCb",	1	}, /* Drive DC inj braking */
	{ "rdY",	2	}, /* Drive ready */
	{ "nSt",	3	}, /* Drive freewheel stopping */
	{ "rUn",	4	}, /* Drive running */
	{ "ACC",	5	}, /* Drive accelerating */
	{ "dEC",	6	}, /* Drive decelerating */
	{ "CLI",	7	}, /* Drive in current limit */
	{ "FSt",	8	}, /* Drive fast stopping */
	{ "FLU",	9	}, /* Drive fluxing motor */
	{ "nLP",	11	}, /* Drive no line voltage */
	{ "PrA",	12	}, /* Drive in power removal */
	{ "CtL",	13	}, /* Drive control stopping */
	{ "Obr",	14	}, /* Drive dec ramp adaption */
	{ "SOC",	15	}, /* Drive cutting output */
	{ "USA",	17	}, /* Drive undervoltage alarm */
	{ "tC",	18	}, /* Drive test in progress */
	{ "St",	19	}, /* In autotest */
	{ "FA",	20	}, /* Autotest err */
	{ "OK",	21	}, /* Autotest OK */
	{ "EP",	22	}, /* Eeprom test */
	{ "FLt",	23	}, /* Product in fault */
	{ "dCP",	25	}, /* DCP */
	{ "SS1",	28	}, /* SS1 active */
	{ "SLS",	29	}, /* SLS active */
	{ "StO",	30	}, /* STO active */
	{ "SMS",	31	}, /*  */
	{ "GdL",	32	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_HSO[] = {
	{ "nO",	0	}, /* Inactive */
	{ "SSO",	1	}, /* Speed reference mode */
	{ "CSO",	2	}, /* Current limit mode */
	{ 0, 0 }
};

acpienumeration en_P76_INCPER[] = {
	{ "001",	0	}, /* 0,01% */
	{ "01",	1	}, /* 0,1% */
	{ "1",	2	}, /* 1% */
	{ 0, 0 }
};

acpienumeration en_P76_INR[] = {
	{ "001",	0	}, /* hundreds of seconds */
	{ "01",	1	}, /* tenths of seconds */
	{ "1",	2	}, /* seconds */
	{ 0, 0 }
};

acpienumeration en_P76_IPAE[] = {
	{ "IdLE",	0	}, /* idle state */
	{ "InIt",	1	}, /* initialization */
	{ "COnF",	2	}, /* configuration */
	{ "rdY",	3	}, /* ready */
	{ "OPE",	4	}, /* operationnal */
	{ "UCFG",	5	}, /* not configured */
	{ "UrEC",	6	}, /* Unrecoverable fault */
	{ 0, 0 }
};

acpienumeration en_P76_IPM[] = {
	{ "MAnU",	0	}, /* Fixed address */
	{ "bOOtP",	1	}, /* BOOTP */
	{ "dHCP",	2	}, /* DHCP */
	{ "dCP",	3	}, /* DCP */
	{ 0, 0 }
};

acpienumeration en_P76_LFT[] = {
	{ "nOF",	0	}, /* No fault saved */
	{ "EEF1",	2	}, /* EEprom control fault */
	{ "CFF",	3	}, /* Incorrect configuration */
	{ "CFI",	4	}, /* Invalid config parameters */
	{ "SLF1",	5	}, /* Modbus coms fault */
	{ "ILF",	6	}, /* Com Internal link fault */
	{ "CnF",	7	}, /* Network fault */
	{ "EPF1",	8	}, /* External fault logic input */
	{ "OCF",	9	}, /* Overcurrent fault */
	{ "CrF1",	10	}, /* Precharge */
	{ "SPF",	11	}, /* Speed feedback loss */
	{ "AnF",	12	}, /* Output speed <> ref */
	{ "OHF",	16	}, /* Drive overheating fault */
	{ "OLF",	17	}, /* Motor overload fault */
	{ "ObF",	18	}, /* DC bus overvoltage fault */
	{ "OSF",	19	}, /* Supply overvoltage fault */
	{ "OPF1",	20	}, /* 1 motor phase loss fault */
	{ "PHF",	21	}, /* Supply phase loss fault */
	{ "USF",	22	}, /* Supply undervolt fault */
	{ "SCF1",	23	}, /* Motor short circuit */
	{ "SOF",	24	}, /* Motor overspeed fault */
	{ "tnF",	25	}, /* Auto-tuning fault */
	{ "InF1",	26	}, /* Rating error */
	{ "InF2",	27	}, /* Incompatible control card */
	{ "InF3",	28	}, /* Internal coms link fault */
	{ "InF4",	29	}, /* Internal manu zone fault */
	{ "EEF2",	30	}, /* EEprom power fault */
	{ "SCF3",	32	}, /* Ground short circuit */
	{ "OPF2",	33	}, /* 3 motor phase loss fault */
	{ "COF",	34	}, /* Comms fault CANopen */
	{ "bLF",	35	}, /* Brake control fault */
	{ "EPF2",	38	}, /* External fault comms */
	{ "brF",	41	}, /* Brake feedback fault */
	{ "SLF2",	42	}, /* PC coms fault */
	{ "SSF",	44	}, /* Torque/current limit fault */
	{ "SLF3",	45	}, /* HMI coms fault */
	{ "PtFL",	49	}, /* LI6=PTC failed */
	{ "OtFL",	50	}, /* LI6=PTC overheat fault */
	{ "InF9",	51	}, /* Internal I measure fault */
	{ "InFA",	52	}, /* Internal i/p volt circuit flt */
	{ "InFb",	53	}, /* Internal temperature fault */
	{ "tJF",	54	}, /* IGBT overheat fault */
	{ "SCF4",	55	}, /* IGBT short circuit fault */
	{ "SCF5",	56	}, /* motor short circuit */
	{ "FCF1",	58	}, /* Output cont close fault */
	{ "FCF2",	59	}, /* Output cont open fault */
	{ "LCF",	64	}, /* input contactor */
	{ "HdF",	67	}, /* IGBT desaturation */
	{ "InF6",	68	}, /* Internal option fault */
	{ "InFE",	69	}, /* internal- CPU  */
	{ "LFF3",	71	}, /* AI3 4-20mA loss */
	{ "HCF",	73	}, /* Cards pairing */
	{ "dLF",	76	}, /* Dynamic load fault */
	{ "CFI2",	77	}, /* Interrupted config. */
	{ "CSF",	99	}, /* Channel switching fault */
	{ "ULF",	100	}, /* Process Underlaod Fault */
	{ "OLC",	101	}, /* Process Overload Fault */
	{ "ASF",	105	}, /* Angle error */
	{ "SAFF",	107	}, /* Safety fault */
	{ "FbE",	108	}, /* FB fault */
	{ "FbES",	109	}, /* FB stop fault */
	{ 0, 0 }
};

acpienumeration en_P76_L_H[] = {
	{ "LO",	0	}, /* Active low */
	{ "HIG",	1	}, /* Active high */
	{ 0, 0 }
};

acpienumeration en_P76_MPC[] = {
	{ "nPr",	0	}, /* Nominal motor Power */
	{ "COS",	1	}, /* Nominal motor cos Phi */
	{ 0, 0 }
};

acpienumeration en_P76_NCV[] = {
	{ "nO",	0	}, /* Unknown rating */
	{ "U010",	1	}, /* 0.10kW - 0.2HP */
	{ "U018",	2	}, /* 0.18kW - 0.25HP */
	{ "U025",	3	}, /* 0.25kW - 0.37HP */
	{ "U037",	4	}, /* 0.37kW - 0.5HP */
	{ "U055",	5	}, /* 0.55kW - 0.75HP */
	{ "U075",	6	}, /* 0.75kW - 1HP */
	{ "U090",	7	}, /* 5.5kW - 7.5HP */
	{ "U110",	8	}, /* 1.1kW - 1.5HP */
	{ "U150",	9	}, /* 1.5kW - 2HP */
	{ "U185",	10	}, /* 1.85kW - 3HP */
	{ "U220",	11	}, /* 2.2kW - 3HP */
	{ "U300",	12	}, /* 3kW - 4HP */
	{ "U370",	13	}, /* 3.7kW - 5HP */
	{ "U400",	14	}, /* 4kW - 5HP */
	{ "U550",	15	}, /* 5.5kW - 7.5HP */
	{ "U750",	16	}, /* 7.5kW - 10HP */
	{ "U900",	17	}, /* 9kW - 11HP */
	{ "d110",	18	}, /* 11kW - 15 Hp */
	{ "d150",	19	}, /* 15kW - 20 HP */
	{ "d185",	20	}, /* 18.5kW - 25HP */
	{ "d220",	21	}, /* 22kW - 30HP */
	{ "d300",	22	}, /* 30kW - 40HP */
	{ 0, 0 }
};

acpienumeration en_P76_NPL[] = {
	{ "POS",	0	}, /* 1 */
	{ "nEG",	1	}, /* 0 */
	{ 0, 0 }
};

acpienumeration en_P76_NTID[] = {
	{ "AtV320",	0	}, /* ATV320 identifier */
	{ "AtV32",	1	}, /* ATV32 identifier */
	{ 0, 0 }
};

acpienumeration en_P76_N_Y[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* Yes */
	{ 0, 0 }
};

acpienumeration en_P76_ONOFF[] = {
	{ "OFF",	0	}, /* OFF */
	{ "On",	1	}, /* ON */
	{ 0, 0 }
};

acpienumeration en_P76_OPL[] = {
	{ "nO",	0	}, /* Inactive */
	{ "YES",	1	}, /* OPF fault */
	{ "OAC",	2	}, /* No fault triggered */
	{ 0, 0 }
};

acpienumeration en_P76_PRFL[] = {
	{ "UnCG",	0	}, /* Unconfigured */
	{ "1",	1	}, /* 1 */
	{ "2",	2	}, /* 2 */
	{ "7",	7	}, /* 7 */
	{ "9",	9	}, /* 9 */
	{ "100",	100	}, /* 100 */
	{ "101",	101	}, /* 101 */
	{ "102",	102	}, /* 102 */
	{ 0, 0 }
};

acpienumeration en_P76_PSA[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "AI1",	1	}, /* Analog input AI1 */
	{ "AI2",	2	}, /* Analog input AI2 */
	{ "AI3",	3	}, /* Analog input AI3 */
	{ "OCr",	129	}, /* Motor current */
	{ "OFr",	130	}, /* Motor frequency */
	{ "OrP",	131	}, /* Ramp output */
	{ "trq",	132	}, /* Motor torque */
	{ "Stq",	133	}, /* Signed torque */
	{ "OrS",	134	}, /* Signed ramp */
	{ "OPS",	135	}, /* PID reference */
	{ "OPF",	136	}, /* PID feedback */
	{ "OPE",	137	}, /* PID error  */
	{ "OPI",	138	}, /* PID output */
	{ "OPr",	139	}, /* Drive output power  */
	{ "tHr",	140	}, /* Motor thermal state */
	{ "tHd",	141	}, /* Drive thermal state */
	{ "tqMS",	142	}, /* Master / Slave torque */
	{ "UPdt",	160	}, /* INC/DEC speed via LI */
	{ "UPdH",	161	}, /* INC/DEC speed via HMI */
	{ "LCC",	163	}, /* Ref. via remote terminal */
	{ "Mdb",	164	}, /* Reference via Modbus */
	{ "CAn",	167	}, /* Reference via CANopen */
	{ "nEt",	169	}, /* Reference via Com card */
	{ "OFS",	173	}, /* Signed output frequency */
	{ "tHr2",	174	}, /* Motor thermal 2 state */
	{ "tHr3",	175	}, /* Motor thermal 3 state */
	{ "tqL",	179	}, /* Torque limit */
	{ "UOP",	180	}, /* Motor voltage */
	{ "PI",	181	}, /* Pulse input */
	{ "AIV1",	183	}, /* AI Virtual 1 */
	{ "dO1",	184	}, /* Logic output on AO1 */
	{ "AIV2",	185	}, /* AI Virtual 2 */
	{ "OA01",	240	}, /* OA01 */
	{ "OA02",	241	}, /* OA02 */
	{ "OA03",	242	}, /* OA03 */
	{ "OA04",	243	}, /* OA04 */
	{ "OA05",	244	}, /* OA05 */
	{ "OA06",	245	}, /* OA06 */
	{ "OA07",	246	}, /* OA07 */
	{ "OA08",	247	}, /* OA08 */
	{ "OA09",	248	}, /* OA09 */
	{ "OA10",	249	}, /* OA10 */
	{ 0, 0 }
};

acpienumeration en_P76_PSL[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "FLt",	1	}, /* No drive flt */
	{ "rUn",	2	}, /* Drive running */
	{ "OCC",	3	}, /* Ouput contactor control */
	{ "FtA",	4	}, /* Freq. threshold reached */
	{ "FLA",	5	}, /* High speed reached */
	{ "CtA",	6	}, /* I threshold reached */
	{ "SrA",	7	}, /* Freq. reference reached */
	{ "tSA",	8	}, /* Mot. therm thres reach */
	{ "bLC",	9	}, /* Brake control command */
	{ "PEE",	10	}, /* PID error alarm */
	{ "PFA",	11	}, /* PID feedback alarm */
	{ "F2A",	13	}, /* FreqTh.att.2 */
	{ "tAd",	14	}, /* Drive thermal attained */
	{ "ULA",	21	}, /* Process underload alarm */
	{ "OLA",	22	}, /* Overload Process Alarm */
	{ "rSdA",	27	}, /* Rope slack alarm */
	{ "ttHA",	28	}, /* High torque alarm */
	{ "ttLA",	29	}, /* Low torque alarm */
	{ "MFrd",	30	}, /* Run forward */
	{ "MrrS",	31	}, /* Run reverse */
	{ "tS2",	37	}, /* Mot. therm thres 2 reach */
	{ "tS3",	38	}, /* Mot. therm thres 3 reach */
	{ "AtS",	47	}, /* Negative torque */
	{ "CnF0",	48	}, /* Configuration 0 active */
	{ "CnF1",	49	}, /* Configuration 1 active */
	{ "CnF2",	50	}, /* Configuration 2 active */
	{ "CFP1",	52	}, /* Parameter set 1 active */
	{ "CFP2",	53	}, /* Parameter set 2 active */
	{ "CFP3",	54	}, /* Parameter set 3 active */
	{ "dbL",	64	}, /* DC bus charged */
	{ "brS",	65	}, /* In braking sequence */
	{ "PrM",	66	}, /* Power Removal state */
	{ "FqLA",	72	}, /* Frequency meter Alarm */
	{ "LLC",	73	}, /* Line contactor control */
	{ "MCP",	77	}, /* I present */
	{ "LSA",	78	}, /* FDC limit attained */
	{ "dLdA",	79	}, /* Dynamic load alarm */
	{ "AG1",	80	}, /* Alarm group 1 */
	{ "AG2",	81	}, /* Alarm group 2 */
	{ "AG3",	82	}, /* Alarm group 3 */
	{ "PLA",	85	}, /* LI6=PTC al. */
	{ "EFA",	87	}, /* External fault alarm */
	{ "USA",	88	}, /* Under voltage alarm  */
	{ "UPA",	89	}, /* Under volt warn alarm */
	{ "tHA",	91	}, /* Drive thermal alarm */
	{ "SSA",	95	}, /* Limit torque / I attained */
	{ "Fr1",	96	}, /* Command ch = ch 1 */
	{ "Fr2",	97	}, /* Command ch = ch 1B */
	{ "Cd1",	98	}, /* Control ch. = Channel 1 */
	{ "Cd2",	99	}, /* Control ch. = Channel 2 */
	{ "Fr1b",	100	}, /* Command ch = ch 1B */
	{ "EbO",	101	}, /* Spool end */
	{ "tSY",	102	}, /* Sync wobbl */
	{ "tJA",	104	}, /* IGBT transistor alarm */
	{ "AP3",	107	}, /* 4-20 loss AI3 */
	{ "Fn1",	116	}, /* Function key 1 */
	{ "Fn2",	117	}, /* Function key 2 */
	{ "Fn3",	118	}, /* Function key 3 */
	{ "Fn4",	119	}, /* Function key 4 */
	{ "rdY",	127	}, /* Ready */
	{ "YES",	128	}, /* Yes */
	{ "LI1",	129	}, /* Logic input LI1 */
	{ "LI2",	130	}, /* Logic input LI2 */
	{ "LI3",	131	}, /* Logic input LI3 */
	{ "LI4",	132	}, /* Logic input LI4 */
	{ "LI5",	133	}, /* Logic input LI5 */
	{ "LI6",	134	}, /* Logic input LI6 */
	{ "LAI1",	143	}, /* Logic input AI1 */
	{ "LAI2",	144	}, /* Logic input AI2 */
	{ "Cd00",	160	}, /* Bit 0 logic input ctrl word */
	{ "Cd01",	161	}, /* Bit 1 logic input ctrl word */
	{ "Cd02",	162	}, /* Bit 2 logic input ctrl word */
	{ "Cd03",	163	}, /* Bit 3 logic input ctrl word */
	{ "Cd04",	164	}, /* Bit 4 logic input ctrl word */
	{ "Cd05",	165	}, /* Bit 5 logic input ctrl word */
	{ "Cd06",	166	}, /* Bit 6 logic input ctrl word */
	{ "Cd07",	167	}, /* Bit 7 logic input ctrl word */
	{ "Cd08",	168	}, /* Bit 8 logic input ctrl word */
	{ "Cd09",	169	}, /* Bit 9 logic input ctrl word */
	{ "Cd10",	170	}, /* Bit10 logic input ctrl word */
	{ "Cd11",	171	}, /* Bit11 logic input ctrl word */
	{ "Cd12",	172	}, /* Bit12 logic input ctrl word */
	{ "Cd13",	173	}, /* Bit13 logic input ctrl word */
	{ "Cd14",	174	}, /* Bit14 logic input ctrl word */
	{ "Cd15",	175	}, /* Bit15 logic input ctrl word */
	{ "C100",	176	}, /* Bit 0 Modbus ctrl word */
	{ "C101",	177	}, /* Bit 1 Modbus ctrl word */
	{ "C102",	178	}, /* Bit 2 Modbus ctrl word */
	{ "C103",	179	}, /* Bit 3 Modbus ctrl word */
	{ "C104",	180	}, /* Bit 4 Modbus ctrl word */
	{ "C105",	181	}, /* Bit 5 Modbus ctrl word */
	{ "C106",	182	}, /* Bit 6 Modbus ctrl word */
	{ "C107",	183	}, /* Bit 7 Modbus ctrl word */
	{ "C108",	184	}, /* Bit 8 Modbus ctrl word */
	{ "C109",	185	}, /* Bit 9 Modbus ctrl word */
	{ "C110",	186	}, /* Bit 10 Modbus ctrl word */
	{ "C111",	187	}, /* Bit 11 Modbus ctrl word */
	{ "C112",	188	}, /* Bit 12 Modbus ctrl word */
	{ "C113",	189	}, /* Bit 13 Modbus ctrl word */
	{ "C114",	190	}, /* Bit 14 Modbus ctrl word */
	{ "C115",	191	}, /* Bit 15 Modbus ctrl word */
	{ "C200",	192	}, /* Bit 0 CANopen ctrl word */
	{ "C201",	193	}, /* Bit 1 CANopen ctrl word */
	{ "C202",	194	}, /* Bit 2 CANopen ctrl word */
	{ "C203",	195	}, /* Bit 3 CANopen ctrl word */
	{ "C204",	196	}, /* Bit 4 CANopen ctrl word */
	{ "C205",	197	}, /* Bit 5 CANopen ctrl word */
	{ "C206",	198	}, /* Bit 6 CANopen ctrl word */
	{ "C207",	199	}, /* Bit 7 CANopen ctrl word */
	{ "C208",	200	}, /* Bit 8 CANopen ctrl word */
	{ "C209",	201	}, /* Bit 9 CANopen ctrl word */
	{ "C210",	202	}, /* Bit 10 CANopen ctrl word */
	{ "C211",	203	}, /* Bit 11 CANopen ctrl word */
	{ "C212",	204	}, /* Bit 12 CANopen ctrl word */
	{ "C213",	205	}, /* Bit 13 CANopen ctrl word */
	{ "C214",	206	}, /* Bit 14 CANopen ctrl word */
	{ "C215",	207	}, /* Bit 15 CANopen ctrl word */
	{ "C300",	208	}, /* Bit 0 Com card ctrl word */
	{ "C301",	209	}, /* Bit 1 Com card ctrl word */
	{ "C302",	210	}, /* Bit 2 Com card ctrl word */
	{ "C303",	211	}, /* Bit 3 Com card ctrl word */
	{ "C304",	212	}, /* Bit 4 Com card ctrl word */
	{ "C305",	213	}, /* Bit 5 Com card ctrl word */
	{ "C306",	214	}, /* Bit 6 Com card ctrl word */
	{ "C307",	215	}, /* Bit 7 Com card ctrl word */
	{ "C308",	216	}, /* Bit 8 Com card ctrl word */
	{ "C309",	217	}, /* Bit 9 Com card ctrl word */
	{ "C310",	218	}, /* Bit 10 Com card ctrl word */
	{ "C311",	219	}, /* Bit 11 Com card ctrl word */
	{ "C312",	220	}, /* Bit 12 Com card ctrl word */
	{ "C313",	221	}, /* Bit 13 Com card ctrl word */
	{ "C314",	222	}, /* Bit 14 Com card ctrl word */
	{ "C315",	223	}, /* Bit 15 Com card ctrl word */
	{ "OL01",	240	}, /* OL01 */
	{ "OL02",	241	}, /* OL02 */
	{ "OL03",	242	}, /* OL03 */
	{ "OL04",	243	}, /* OL04 */
	{ "OL05",	244	}, /* OL05 */
	{ "OL06",	245	}, /* OL06 */
	{ "OL07",	246	}, /* OL07 */
	{ "OL08",	247	}, /* OL08 */
	{ "OL09",	248	}, /* OL09 */
	{ "OL10",	249	}, /* OL10 */
	{ "GdL",	250	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_PSLIN[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "FLt",	1	}, /* No drive flt */
	{ "Fr1",	96	}, /* Command ch = ch 1 */
	{ "Fr2",	97	}, /* Command ch = ch 1B */
	{ "Fr1b",	100	}, /* Command ch = ch 1B */
	{ "Cd1",	98	}, /* Control ch. = Channel 1 */
	{ "Cd2",	99	}, /* Control ch. = Channel 2 */
	{ "YES",	128	}, /* Yes */
	{ "FtA",	4	}, /* Freq. threshold reached */
	{ "F2A",	13	}, /* FreqTh.att.2 */
	{ "LI1",	129	}, /* Logic input LI1 */
	{ "LI2",	130	}, /* Logic input LI2 */
	{ "LI3",	131	}, /* Logic input LI3 */
	{ "LI4",	132	}, /* Logic input LI4 */
	{ "LI5",	133	}, /* Logic input LI5 */
	{ "LI6",	134	}, /* Logic input LI6 */
	{ "LAI1",	143	}, /* Logic input AI1 */
	{ "LAI2",	144	}, /* Logic input AI2 */
	{ "Cd00",	160	}, /* Bit 0 logic input ctrl word */
	{ "Cd01",	161	}, /* Bit 1 logic input ctrl word */
	{ "Cd02",	162	}, /* Bit 2 logic input ctrl word */
	{ "Cd03",	163	}, /* Bit 3 logic input ctrl word */
	{ "Cd04",	164	}, /* Bit 4 logic input ctrl word */
	{ "Cd05",	165	}, /* Bit 5 logic input ctrl word */
	{ "Cd06",	166	}, /* Bit 6 logic input ctrl word */
	{ "Cd07",	167	}, /* Bit 7 logic input ctrl word */
	{ "Cd08",	168	}, /* Bit 8 logic input ctrl word */
	{ "Cd09",	169	}, /* Bit 9 logic input ctrl word */
	{ "Cd10",	170	}, /* Bit10 logic input ctrl word */
	{ "Cd11",	171	}, /* Bit11 logic input ctrl word */
	{ "Cd12",	172	}, /* Bit12 logic input ctrl word */
	{ "Cd13",	173	}, /* Bit13 logic input ctrl word */
	{ "Cd14",	174	}, /* Bit14 logic input ctrl word */
	{ "Cd15",	175	}, /* Bit15 logic input ctrl word */
	{ "C101",	177	}, /* Bit 1 Modbus ctrl word */
	{ "C102",	178	}, /* Bit 2 Modbus ctrl word */
	{ "C103",	179	}, /* Bit 3 Modbus ctrl word */
	{ "C104",	180	}, /* Bit 4 Modbus ctrl word */
	{ "C105",	181	}, /* Bit 5 Modbus ctrl word */
	{ "C106",	182	}, /* Bit 6 Modbus ctrl word */
	{ "C107",	183	}, /* Bit 7 Modbus ctrl word */
	{ "C108",	184	}, /* Bit 8 Modbus ctrl word */
	{ "C109",	185	}, /* Bit 9 Modbus ctrl word */
	{ "C110",	186	}, /* Bit 10 Modbus ctrl word */
	{ "C111",	187	}, /* Bit 11 Modbus ctrl word */
	{ "C112",	188	}, /* Bit 12 Modbus ctrl word */
	{ "C113",	189	}, /* Bit 13 Modbus ctrl word */
	{ "C114",	190	}, /* Bit 14 Modbus ctrl word */
	{ "C115",	191	}, /* Bit 15 Modbus ctrl word */
	{ "C201",	193	}, /* Bit 1 CANopen ctrl word */
	{ "C202",	194	}, /* Bit 2 CANopen ctrl word */
	{ "C203",	195	}, /* Bit 3 CANopen ctrl word */
	{ "C204",	196	}, /* Bit 4 CANopen ctrl word */
	{ "C205",	197	}, /* Bit 5 CANopen ctrl word */
	{ "C206",	198	}, /* Bit 6 CANopen ctrl word */
	{ "C207",	199	}, /* Bit 7 CANopen ctrl word */
	{ "C208",	200	}, /* Bit 8 CANopen ctrl word */
	{ "C209",	201	}, /* Bit 9 CANopen ctrl word */
	{ "C210",	202	}, /* Bit 10 CANopen ctrl word */
	{ "C211",	203	}, /* Bit 11 CANopen ctrl word */
	{ "C212",	204	}, /* Bit 12 CANopen ctrl word */
	{ "C213",	205	}, /* Bit 13 CANopen ctrl word */
	{ "C214",	206	}, /* Bit 14 CANopen ctrl word */
	{ "C215",	207	}, /* Bit 15 CANopen ctrl word */
	{ "C301",	209	}, /* Bit 1 Com card ctrl word */
	{ "C302",	210	}, /* Bit 2 Com card ctrl word */
	{ "C303",	211	}, /* Bit 3 Com card ctrl word */
	{ "C304",	212	}, /* Bit 4 Com card ctrl word */
	{ "C305",	213	}, /* Bit 5 Com card ctrl word */
	{ "C306",	214	}, /* Bit 6 Com card ctrl word */
	{ "C307",	215	}, /* Bit 7 Com card ctrl word */
	{ "C308",	216	}, /* Bit 8 Com card ctrl word */
	{ "C309",	217	}, /* Bit 9 Com card ctrl word */
	{ "C310",	218	}, /* Bit 10 Com card ctrl word */
	{ "C311",	219	}, /* Bit 11 Com card ctrl word */
	{ "C312",	220	}, /* Bit 12 Com card ctrl word */
	{ "C313",	221	}, /* Bit 13 Com card ctrl word */
	{ "C314",	222	}, /* Bit 14 Com card ctrl word */
	{ "C315",	223	}, /* Bit 15 Com card ctrl word */
	{ "OL01",	240	}, /* OL01 */
	{ "OL02",	241	}, /* OL02 */
	{ "OL03",	242	}, /* OL03 */
	{ "OL04",	243	}, /* OL04 */
	{ "OL05",	244	}, /* OL05 */
	{ "OL06",	245	}, /* OL06 */
	{ "OL07",	246	}, /* OL07 */
	{ "OL08",	247	}, /* OL08 */
	{ "OL09",	248	}, /* OL09 */
	{ "OL10",	249	}, /* OL10 */
	{ 0, 0 }
};

acpienumeration en_P76_PTCX[] = {
	{ "nO",	0	}, /* No management */
	{ "AS",	1	}, /* Always */
	{ "rdS",	2	}, /* Power ON */
	{ "rS",	3	}, /* Motor ON */
	{ 0, 0 }
};

acpienumeration en_P76_QSTD[] = {
	{ "FSt2",	2	}, /*  */
	{ "FSt6",	6	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_RDS[] = {
	{ "AUtO",	0	}, /* Auto detected */
	{ "10F",	1	}, /* 10Mbps full duplex */
	{ "10H",	2	}, /* 10Mbps half duplex */
	{ "100F",	3	}, /* 100Mbps full duplex */
	{ "100H",	4	}, /* 100Mbps half duplex */
	{ 0, 0 }
};

acpienumeration en_P76_RPR[] = {
	{ "nO",	0	}, /* No */
	{ "APH",	1	}, /* reset kWh counters */
	{ "rtH",	2	}, /* Operate time reset - zero */
	{ "rtHI",	3	}, /* Reset runtime internal */
	{ "PtH",	4	}, /* Reset power on time */
	{ "ALL",	64	}, /* Reset all counters */
	{ 0, 0 }
};

acpienumeration en_P76_RPT[] = {
	{ "LIn",	0	}, /* Linear ramp */
	{ "S",	1	}, /* S-Ramp */
	{ "U",	2	}, /* U-Ramp */
	{ "CUS",	3	}, /* Ramp customized */
	{ 0, 0 }
};

acpienumeration en_P76_RSD[] = {
	{ "nO",	0	}, /* No */
	{ "drI",	1	}, /* Drive estimation */
	{ "PES",	2	}, /* Extern weight sensor */
	{ 0, 0 }
};

acpienumeration en_P76_SCS[] = {
	{ "nO",	0	}, /* No */
	{ "Str0",	1	}, /* Save configuration 0 */
	{ "Str1",	2	}, /* Save configuration 1 */
	{ "Str2",	3	}, /* Save configuration 2 */
	{ 0, 0 }
};

acpienumeration en_P76_SFT[] = {
	{ "HF1",	1	}, /* Switch.frequency type 1 */
	{ "HF2",	2	}, /* Switch.frequency type 2 */
	{ 0, 0 }
};

acpienumeration en_P76_SFTY[] = {
	{ "Std",	0	}, /* Standard drive */
	{ "SAFE",	1	}, /* Safe drive */
	{ 0, 0 }
};

acpienumeration en_P76_SLSS[] = {
	{ "nO",	0	}, /* Not configured */
	{ "IdLE",	1	}, /* No activated */
	{ "SS1",	2	}, /* Safe ramp */
	{ "SLS",	3	}, /* Speed limited */
	{ "StO",	4	}, /* Safe stop */
	{ "FLt",	5	}, /* Fault */
	{ "WAIt",	6	}, /*  */
	{ "Strt",	7	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_SLT[] = {
	{ "tYP1",	0	}, /*  */
	{ "tYP2",	1	}, /*  */
	{ "tYP3",	2	}, /*  */
	{ "tYP4",	3	}, /*  */
	{ "tYP5",	4	}, /*  */
	{ "tYP6",	5	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_SMOT[] = {
	{ "nO",	0	}, /* No information */
	{ "LLS",	1	}, /* Low saliency */
	{ "MLS",	2	}, /* Medium saliency */
	{ "HLS",	3	}, /* High saliency */
	{ 0, 0 }
};

acpienumeration en_P76_SMSA[] = {
	{ "nO",	0	}, /*  */
	{ "YES",	1	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_SMSS[] = {
	{ "nO",	0	}, /*  */
	{ "SMS",	1	}, /*  */
	{ "FtI",	2	}, /*  */
	{ "FtO",	3	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_SOP[] = {
	{ "6",	6	}, /* 6 µs */
	{ "8",	8	}, /* 8 µs */
	{ "10",	10	}, /* 10 µs */
	{ 0, 0 }
};

acpienumeration en_P76_SPIG[] = {
	{ "StOP",	0	}, /* Stop */
	{ "IGn",	1	}, /* Ignore */
	{ 0, 0 }
};

acpienumeration en_P76_SPSL[] = {
	{ "nO",	0	}, /*  */
	{ "L34",	1	}, /*  */
	{ "L56",	2	}, /*  */
	{ "L3PW",	3	}, /*  */
	{ "PWrM",	4	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_SPST[] = {
	{ "StOP",	0	}, /* Stop */
	{ "Strt",	1	}, /* Start */
	{ 0, 0 }
};

acpienumeration en_P76_SS1S[] = {
	{ "nO",	0	}, /* Not configured */
	{ "IdLE",	1	}, /* No activated */
	{ "SS1",	2	}, /* Safe ramp */
	{ "StO",	3	}, /* Safe stop */
	{ "FLt",	4	}, /* Fault */
	{ 0, 0 }
};

acpienumeration en_P76_SSRU[] = {
	{ "1H",	0	}, /*  */
	{ "10H",	1	}, /*  */
	{ "100H",	2	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P76_STOS[] = {
	{ "IdLE",	0	}, /* No activated */
	{ "StO",	1	}, /* Safe stop */
	{ "FLt",	2	}, /* Fault */
	{ 0, 0 }
};

acpienumeration en_P76_STP[] = {
	{ "nO",	0	}, /* Freewheel stop with fault */
	{ "MMS",	1	}, /* Maintain DC bus  */
	{ "rMP",	2	}, /* Stop with valid ramp  */
	{ "LnF",	4	}, /* Freewheel stop no fault */
	{ 0, 0 }
};

acpienumeration en_P76_STR[] = {
	{ "nO",	0	}, /* No save */
	{ "rAM",	1	}, /* Save to RAM */
	{ "EEP",	2	}, /* Save to EEPROM */
	{ 0, 0 }
};

acpienumeration en_P76_STT[] = {
	{ "rMP",	0	}, /* Stop on decel. ramp */
	{ "FSt",	1	}, /* Fast stop */
	{ "nSt",	2	}, /* Freewheel stop */
	{ "dCI",	3	}, /* DC injection stop */
	{ 0, 0 }
};

acpienumeration en_P76_STUN[] = {
	{ "tAb",	0	}, /* Default */
	{ "MEAS",	1	}, /* Measure */
	{ "CUS",	2	}, /* Custom */
	{ 0, 0 }
};

acpienumeration en_P76_TBR[] = {
	{ "nO",	0	}, /* Not configured */
	{ "AUtO",	4	}, /* Automatic */
	{ "300",	8	}, /* 300 bps */
	{ "600",	12	}, /* 600 bps */
	{ "1200",	16	}, /* 1.2 Kbps */
	{ "2400",	20	}, /* 2.4 Kbps */
	{ "4800",	24	}, /* 4.8 Kbps */
	{ "9600",	28	}, /* 9.6 Kbps */
	{ "10000",	30	}, /* 10 Kbps */
	{ "19200",	32	}, /* 19.2 Kbps */
	{ "20000",	34	}, /* 20 Kbps */
	{ "28800",	35	}, /* 28.8 Kbps */
	{ "38400",	36	}, /* 38.4 Kbps */
	{ "45450",	37	}, /* 45.45 Kbps */
	{ "50000",	38	}, /* 50 Kbps */
	{ "57600",	40	}, /* 57.6 Kbps */
	{ "93750",	42	}, /* 93.75 Kbps */
	{ "100K",	44	}, /* 100 Kbps */
	{ "115K2",	48	}, /* 115.2 Kbps */
	{ "125K",	52	}, /* 125 Kbps */
	{ "156K",	53	}, /* 156 Kbps */
	{ "187K5",	54	}, /* 187.5 Kbps */
	{ "230K4",	56	}, /* 230.4 Kbps */
	{ "250K",	60	}, /* 250 Kbps */
	{ "460K8",	64	}, /* 460.8 Kbps */
	{ "500K",	68	}, /* 500 Kbps */
	{ "625K",	69	}, /* 625 Kbps */
	{ "800K",	70	}, /* 800 Kbps */
	{ "921K6",	72	}, /* 921.6 Kbps */
	{ "1M",	76	}, /* 1 Mbps */
	{ "1M5",	80	}, /* 1.5 Mbps */
	{ "2M5",	81	}, /* 2.5 Mbps */
	{ "3M",	82	}, /* 3 Mbps */
	{ "6M",	83	}, /* 6 Mbps */
	{ "10M",	84	}, /* 10 Mbps */
	{ "5M",	86	}, /* 5 Mbps */
	{ "12M",	88	}, /* 12 Mbps */
	{ "100M",	92	}, /* 100 Mbps */
	{ 0, 0 }
};

acpienumeration en_P76_TCC[] = {
	{ "2C",	0	}, /* 2-wire control */
	{ "3C",	1	}, /* 3-wire control */
	{ 0, 0 }
};

acpienumeration en_P76_TCT[] = {
	{ "LEL",	0	}, /* Level triggered */
	{ "trn",	1	}, /* Edge triggered */
	{ "PFO",	2	}, /* Level trigger fwd priority */
	{ 0, 0 }
};

acpienumeration en_P76_THT[] = {
	{ "nO",	0	}, /* No thermal protection */
	{ "ACL",	1	}, /* Self cooled motor */
	{ "FCL",	2	}, /* Force cooled motor */
	{ 0, 0 }
};

acpienumeration en_P76_TUNU[] = {
	{ "nO",	0	}, /* No */
	{ "tM",	1	}, /* Use the motor thermal evolution */
	{ "Ct",	2	}, /* Use the cold tune values */
	{ 0, 0 }
};

acpienumeration en_P76_URES[] = {
	{ "200",	20	}, /* 200V ac */
	{ "220",	22	}, /* 220V ac */
	{ "230",	23	}, /* 230V ac */
	{ "240",	24	}, /* 240V ac */
	{ "380",	38	}, /* 380V ac */
	{ "400",	40	}, /* 400V ac */
	{ "440",	44	}, /* 440V ac */
	{ "460",	46	}, /* 460V ac */
	{ "500",	50	}, /* 500V ac */
	{ "525",	53	}, /*  */
	{ "600",	60	}, /* 600V ac */
	{ "LHM",	254	}, /* Lexium compatibility level */
	{ 0, 0 }
};

acpienumeration en_P76_USB[] = {
	{ "0",	0	}, /* Standard fault */
	{ "1",	1	}, /* Fault without Relay action */
	{ "2",	2	}, /* Alarm only */
	{ 0, 0 }
};

acpienumeration en_P76_VCAL[] = {
	{ "nO",	0	}, /* Unknown drive rate volt. */
	{ "110M",	1	}, /* 100-120 V single phase */
	{ "110t",	2	}, /* 100-120 V three phase */
	{ "220M",	3	}, /* 200-240 V single phase */
	{ "220t",	4	}, /* 200-240 V three phase */
	{ "480M",	5	}, /* 380-500 V single phase */
	{ "480t",	6	}, /* 380-500 V three phase */
	{ "690M",	7	}, /* 525-600 V single phase */
	{ "690t",	8	}, /* 525-600 V three phase */
	{ "600M",	9	}, /* 600V single-phase */
	{ "600t",	10	}, /* 600V three-phase */
	{ 0, 0 }
};

