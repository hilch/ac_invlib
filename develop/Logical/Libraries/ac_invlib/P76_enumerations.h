/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Bibliothek: ac_invlib
 * Datei: P76_enumerations.h
 * Autor: hilchenbachc
 * Erstellt: 29. November 2018
 *******************************************************************/

#include <bur/plctypes.h>

acpienumeration en_P76_ACT[] = {
	{	"tAb"		,	    0	},	/* [Not done]  */
	{	"PEnd"		,	    1	},	/* [Pending]  */
	{	"PrOG"		,	    2	},	/* [In Progress]  */
	{	"FAIL"		,	    3	},	/* [Failed]  */
	{	"dOnE"		,	    4	},	/* [Done]  */
	{ 0,  0 }
};

acpienumeration en_P76_ACTION[] = {
	{	"nO"		,	    0	},	/* [No action]  */
	{	"YES"		,	    1	},	/* [Do tune]  */
	{	"CLr"		,	    2	},	/* [Erase tune]  */
	{ 0,  0 }
};

acpienumeration en_P76_ADC[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"YES"		,	    1	},	/* [Yes]  */
	{	"Ct"		,	    2	},	/* [Continuous]  */
	{ 0,  0 }
};

acpienumeration en_P76_AIOL[] = {
	{	"POS"		,	    0	},	/* [0 - 100%]  */
	{	"nEG"		,	    1	},	/* [+/- 100%]  */
	{ 0,  0 }
};

acpienumeration en_P76_AIOT[] = {
	{	"10U"		,	    1	},	/* [Voltage]  */
	{	"0A"		,	    2	},	/* [Current]  */
	{	"n10U"		,	    5	},	/* [Voltage +/-]  */
	{ 0,  0 }
};

acpienumeration en_P76_AST[] = {
	{	"IPMA"		,	    3	},	/* [IPM align.]  */
	{	"SPMA"		,	    4	},	/* [SPM align]  */
	{	"PSI"		,	    5	},	/* [PSI align.]  */
	{	"PSIO"		,	    6	},	/* [PSIO align.]  */
	{	"nO"		,	  254	},	/* [No align.]  */
	{ 0,  0 }
};

acpienumeration en_P76_BDCO[] = {
	{	"50 "		,	   38	},	/* [50 kbps]  */
	{	"125 "		,	   52	},	/* [125 kbps]  */
	{	"250 "		,	   60	},	/* [250 kbps]  */
	{	"500 "		,	   68	},	/* [500 kbps]  */
	{	"1M"		,	   76	},	/* [1 Mbps]  */
	{ 0,  0 }
};

acpienumeration en_P76_BFR[] = {
	{	"50"		,	    0	},	/* [50Hz IEC]  */
	{	"60"		,	    1	},	/* [60Hz NEMA]  */
	{ 0,  0 }
};

acpienumeration en_P76_BIP[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"YES"		,	    1	},	/* [Yes]  */
	{	"2Ibr"		,	    2	},	/* [2 IBR]  */
	{ 0,  0 }
};

acpienumeration en_P76_BLC[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"r2"		,	    2	},	/* [R2]  */
	{	"LO1"		,	   17	},	/* [LO1]  */
	{	"dO1"		,	   64	},	/* [DO1]  */
	{ 0,  0 }
};

acpienumeration en_P76_BMP[] = {
	{	"StOP"		,	    0	},	/* [Stop]  */
	{	"bUMP"		,	    1	},	/* [Bumpless]  */
	{ 0,  0 }
};

acpienumeration en_P76_BOA[] = {
	{	"nO"		,	    0	},	/* [Inactive]  */
	{	"dYnA"		,	    1	},	/* [Dynamic]  */
	{	"StAt"		,	    2	},	/* [Static]  */
	{ 0,  0 }
};

acpienumeration en_P76_BRA[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"YES"		,	    1	},	/* [Yes]  */
	{	"dYnA"		,	    2	},	/* [High torq. A]  */
	{ 0,  0 }
};

acpienumeration en_P76_BSP[] = {
	{	"bSd"		,	    0	},	/* [Standard]  */
	{	"bLS"		,	    1	},	/* [Pedestal]  */
	{	"bnS"		,	    2	},	/* [Deadband]  */
	{	"bnS0"		,	    4	},	/* [Deadband 0]  */
	{ 0,  0 }
};

acpienumeration en_P76_BST[] = {
	{	"HOr"		,	    0	},	/* [Traveling]  */
	{	"UEr"		,	    1	},	/* [Hoisting]  */
	{ 0,  0 }
};

acpienumeration en_P76_CDX[] = {
	{	"tEr"		,	    1	},	/* [Terminals]  */
	{	"LOC"		,	    2	},	/* [Local]  */
	{	"LCC"		,	    3	},	/* [HMI]  */
	{	"Mdb"		,	   10	},	/* [Modbus]  */
	{	"CAn"		,	   20	},	/* [CANopen]  */
	{	"nEt"		,	   30	},	/* [Com. card]  */
	{ 0,  0 }
};

acpienumeration en_P76_CFG[] = {
	{	"StS"		,	    0	},	/* [Start/Stop]  */
	{	"HdG"		,	    1	},	/* [M. handling]  */
	{	"HSt"		,	    2	},	/* [Hoisting]  */
	{	"GEn"		,	    3	},	/* [Gen. Use]  */
	{	"PId"		,	    4	},	/* [PID regul.]  */
	{	"nEt"		,	    5	},	/* [Network C.]  */
	{ 0,  0 }
};

acpienumeration en_P76_CFPS[] = {
	{	"nO"		,	    0	},	/* [None]  */
	{	"CFP1"		,	    1	},	/* [Set no1]  */
	{	"CFP2"		,	    2	},	/* [Set no2]  */
	{	"CFP3"		,	    3	},	/* [Set no3]  */
	{ 0,  0 }
};

acpienumeration en_P76_CHCF[] = {
	{	"SIM"		,	    1	},	/* [Not separ.]  */
	{	"SEP"		,	    2	},	/* [Separate]  */
	{	"IO"		,	    3	},	/* [I/O profile]  */
	{ 0,  0 }
};

acpienumeration en_P76_CIOA[] = {
	{	"20"		,	    0	},	/* [20/70]  */
	{	"21"		,	    1	},	/* [21/71]  */
	{	"100"		,	    2	},	/* [100/101]  */
	{	"UnCG"		,	    3	},	/* [Unconfig.]  */
	{ 0,  0 }
};

acpienumeration en_P76_CNFS[] = {
	{	"nO"		,	    0	},	/* [In progress]  */
	{	"CnF0"		,	    1	},	/* [Config. nø0]  */
	{	"CnF1"		,	    2	},	/* [Config. nø1]  */
	{	"CnF2"		,	    3	},	/* [Config. nø2]  */
	{ 0,  0 }
};

acpienumeration en_P76_CNL[] = {
	{	"tErM"		,	    0	},	/* [Terminals]  */
	{	"LOC"		,	    1	},	/* [Local]  */
	{	"HMI"		,	    2	},	/* [HMI]  */
	{	"Mdb"		,	    3	},	/* [Modbus]  */
	{	"CAn"		,	    6	},	/* [CANopen]  */
	{	"tUd"		,	    7	},	/* [+/- speed]  */
	{	"LUd"		,	    8	},	/* [LUD->NotDef]  */
	{	"nEt"		,	    9	},	/* [Com. card]  */
	{	"Ind"		,	   14	},	/* [Mfg]  */
	{	"PWS"		,	   15	},	/* [PC tool]  */
	{ 0,  0 }
};

acpienumeration en_P76_COP[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"SP"		,	    1	},	/* [Reference]  */
	{	"Cd"		,	    2	},	/* [Command]  */
	{	"ALL"		,	    3	},	/* [Cmd + ref.]  */
	{ 0,  0 }
};

acpienumeration en_P76_CSLFN[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"FJOG"		,	  180	},	/* [Jog]  */
	{	"FPS1"		,	  181	},	/* [Preset spd2]  */
	{	"FPS2"		,	  182	},	/* [Preset spd3]  */
	{	"FPr1"		,	  183	},	/* [PID ref. 2]  */
	{	"FPr2"		,	  184	},	/* [PID ref. 3]  */
	{	"FUSP"		,	  185	},	/* [+Speed]  */
	{	"FdSP"		,	  186	},	/* [-Speed]  */
	{	"Ft "		,	  187	},	/* [T/K]  */
	{ 0,  0 }
};

acpienumeration en_P76_CSLOUT[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"LO1"		,	  129	},	/* [LO1]  */
	{	"r2"		,	  146	},	/* [R2]  */
	{	"dO1"		,	  161	},	/* [DO1]  */
	{ 0,  0 }
};

acpienumeration en_P76_CTT[] = {
	{	"UUC"		,	    0	},	/* [SVC V]  */
	{	"Std"		,	    3	},	/* [Standard]  */
	{	"UF5"		,	    4	},	/* [V/F 5pts]  */
	{	"SYn"		,	    5	},	/* [Sync. mot.]  */
	{	"UFq"		,	    6	},	/* [V/F Quad.]  */
	{	"nLd"		,	    7	},	/* [Energy Sav.]  */
	{ 0,  0 }
};

acpienumeration en_P76_DOTD[] = {
	{	"nSt"		,	    0	},	/* [Freewheel]  */
	{	"rMP"		,	    1	},	/* [Ramp stop]  */
	{ 0,  0 }
};

acpienumeration en_P76_DPMA[] = {
	{	"1"		,	    1	},	/* [MCL1]  */
	{	"2"		,	    2	},	/* [MCL2]  */
	{ 0,  0 }
};

acpienumeration en_P76_DSF[] = {
	{	"Std"		,	    0	},	/* [Standard]  */
	{	"OPt"		,	    1	},	/* [Optimized]  */
	{ 0,  0 }
};

acpienumeration en_P76_DUR[] = {
	{	"5"		,	    0	},	/* [5 minutes]  */
	{	"10"		,	    1	},	/* [10 minutes]  */
	{	"30"		,	    2	},	/* [30 minutes]  */
	{	"1H"		,	    3	},	/* [1 hour]  */
	{	"2H"		,	    4	},	/* [2 hours]  */
	{	"3H"		,	    5	},	/* [3 hours]  */
	{	"Ct"		,	    6	},	/* [Unlimited]  */
	{ 0,  0 }
};

acpienumeration en_P76_ECFG[] = {
	{	"nO"		,	    0	},	/* [Ignore]  */
	{	"YES"		,	    1	},	/* [Freewheel]  */
	{	"Stt"		,	    2	},	/* [Per STT]  */
	{	"LFF"		,	    4	},	/* [fallback spd]  */
	{	"rLS"		,	    5	},	/* [Spd maint.]  */
	{	"rMP"		,	    6	},	/* [Ramp stop]  */
	{	"FSt"		,	    7	},	/* [Fast stop]  */
	{	"dCI"		,	    8	},	/* [DC injection]  */
	{ 0,  0 }
};

acpienumeration en_P76_ERRD[] = {
	{	"nOF"		,	0x0000	},	/* [No fault]  */
	{	"CrF"		,	0x1000	},	/* [Precharge]  */
	{	"OLF"		,	0x1000	},	/* [Motor overload]  */
	{	"SOF"		,	0x1000	},	/* [Overspeed]  */
	{	"dCF"		,	0x1000	},	/* [Diff. I fault]  */
	{	"HdF"		,	0x1000	},	/* [IGBT desaturation]  */
	{	"InFE"		,	0x1000	},	/* [internal- CPU]  */
	{	"CSF"		,	0x1000	},	/* [Ch.sw. fault]  */
	{	"ASF"		,	0x1000	},	/* [Angle error]  */
	{	"SCF4"		,	0x2230	},	/* [IGBT short circuit]  */
	{	"OCF"		,	0x2310	},	/* [Overcurrent]  */
	{	"OLC"		,	0x2311	},	/* [Proc.Overload Flt]  */
	{	"SCF1"		,	0x2320	},	/* [Motor short circuit]  */
	{	"SCF2"		,	0x2320	},	/* [Impedant sh. circuit]  */
	{	"SCF5"		,	0x2320	},	/* [Motor short circuit]  */
	{	"SCF3"		,	0x2330	},	/* [Ground short circuit]  */
	{	"OSF"		,	0x3110	},	/* [Mains overvoltage]  */
	{	"USF"		,	0x3120	},	/* [Undervoltage]  */
	{	"PHF"		,	0x3130	},	/* [Input phase loss]  */
	{	"ObF"		,	0x3310	},	/* [Overbraking]  */
	{	"OPF1"		,	0x3310	},	/* [1 output phase loss]  */
	{	"OPF2"		,	0x3310	},	/* [3out ph loss]  */
	{	"OHF"		,	0x4210	},	/* [Drive overheat]  */
	{	"tJF"		,	0x4210	},	/* [IGBT overheat]  */
	{	"OtFL"		,	0x4310	},	/* [PTC fault]  */
	{	"FCF1"		,	0x5000	},	/* [Out. contact. stuck]  */
	{	"FCF2"		,	0x5000	},	/* [Out. contact. open.]  */
	{	"LCF"		,	0x5000	},	/* [input contactor]  */
	{	"InF9"		,	0x5210	},	/* [Internal- I measure]  */
	{	"InFA"		,	0x5210	},	/* [Internal-mains circuit]  */
	{	"InFb"		,	0x5210	},	/* [Internal- th. sensor]  */
	{	"EEF1"		,	0x5530	},	/* [Control Eeprom]  */
	{	"EEF2"		,	0x5530	},	/* [Power Eeprom]  */
	{	"InF"		,	0x6100	},	/* [Calibration error]  */
	{	"InF1"		,	0x6100	},	/* [Rating error]  */
	{	"InF2"		,	0x6100	},	/* [PWR Calib.]  */
	{	"InF3"		,	0x6100	},	/* [Int.serial link]  */
	{	"InF4"		,	0x6100	},	/* [Int.Mfg area]  */
	{	"HCF"		,	0x6100	},	/* [Cards pairing]  */
	{	"CFF"		,	0x6300	},	/* [Incorrect config.]  */
	{	"CFI"		,	0x6300	},	/* [Invalid config.]  */
	{	"CFI2"		,	0x6300	},	/* [Bad conf]  */
	{	"InF6"		,	0x7000	},	/* [Internal-option]  */
	{	"brF"		,	0x7110	},	/* [Brake feedback]  */
	{	"PtFL"		,	0x7300	},	/* [LI6=PTC probe]  */
	{	"AI2F"		,	0x7300	},	/* [AI2 input]  */
	{	"LFF3"		,	0x7300	},	/* [AI3 4-20mA loss]  */
	{	"SPF"		,	0x7310	},	/* [Speed fdback loss]  */
	{	"ECF"		,	0x7310	},	/* [Enc. coupl.]  */
	{	"FbE"		,	0x7400	},	/* [FB fault]  */
	{	"FbES"		,	0x7400	},	/* [FB stop flt.]  */
	{	"SLF1"		,	0x7510	},	/* [Modbus com.]  */
	{	"SLF3"		,	0x7510	},	/* [HMI com.]  */
	{	"ILF"		,	0x7520	},	/* [int. com.link]  */
	{	"CnF"		,	0x7520	},	/* [Com. network]  */
	{	"SLF2"		,	0x7530	},	/* [PC com.]  */
	{	"COF"		,	0x8100	},	/* [CAN com.]  */
	{	"EPF1"		,	0x9000	},	/* [External flt-LI/Bit]  */
	{	"EPF2"		,	0x9000	},	/* [External fault com.]  */
	{	"tnF"		,	0xFF00	},	/* [Auto-tuning]  */
	{	"bLF"		,	0xFF01	},	/* [Brake control]  */
	{	"SSF"		,	0xFF02	},	/* [Torque/current lim]  */
	{	"SrF"		,	0xFF02	},	/* [Torque time-out]  */
	{	"PrF"		,	0xFF03	},	/* [Power removal]  */
	{	"ULF"		,	0xFF03	},	/* [Pr.Underload.Flt]  */
	{	"SAFF"		,	0xFF03	},	/* [Safety fault]  */
	{	"dLF"		,	0xFF80	},	/* [Load fault]  */
	{ 0,  0 }
};

acpienumeration en_P76_ETHM[] = {
	{	"MbtP"		,	    0	},	/* [ModbusTCP]  */
	{	"EtIP"		,	    1	},	/* [EthernetIP]  */
	{ 0,  0 }
};

acpienumeration en_P76_FBFT[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"Int"		,	    1	},	/* [Internal]  */
	{	"bIn"		,	    2	},	/* [Binary file]  */
	{	"InP"		,	    3	},	/* [Intern para.]  */
	{	"PAr"		,	    4	},	/* [Para. RW]  */
	{	"CAL"		,	    5	},	/* [Calculation]  */
	{	"tOAU"		,	    6	},	/* [TO AUX]  */
	{	"tOPP"		,	    7	},	/* [TO synch]  */
	{	"AdL"		,	    8	},	/* [Bad ADLC]  */
	{	"In"		,	    9	},	/* [Input assig.]  */
	{ 0,  0 }
};

acpienumeration en_P76_FBST[] = {
	{	"IdLE"		,	    0	},	/* [Idle]  */
	{	"CHEC"		,	    1	},	/* [Check prog.]  */
	{	"StOP"		,	    2	},	/* [Stop]  */
	{	"InIt"		,	    3	},	/* [Init]  */
	{	"rUn"		,	    4	},	/* [Run]  */
	{	"Err"		,	    5	},	/* [Error]  */
	{ 0,  0 }
};

acpienumeration en_P76_FCS[] = {
	{	"nO"		,	    0	},	/* [NO]  */
	{	"rEC1"		,	    2	},	/* [Internal 1]  */
	{	"rEC2"		,	    3	},	/*   */
	{	"InI"		,	   64	},	/* [Factory set.]  */
	{	"InI1"		,	   71	},	/*   */
	{ 0,  0 }
};

acpienumeration en_P76_FFM[] = {
	{	"Std"		,	    0	},	/* [Standard]  */
	{	"rUn"		,	    1	},	/* [Always]  */
	{	"StP"		,	    2	},	/* [Never]  */
	{ 0,  0 }
};

acpienumeration en_P76_FLU[] = {
	{	"FnC"		,	    0	},	/* [Not cont.]  */
	{	"FCt"		,	    1	},	/* [Continuous]  */
	{	"FnO"		,	    2	},	/* [No]  */
	{ 0,  0 }
};

acpienumeration en_P76_FOR[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"AUtO"		,	    1	},	/* [AUTO]  */
	{	"8o1"		,	    2	},	/* [8-O-1]  */
	{	"8E1"		,	    3	},	/* [8-E-1]  */
	{	"8n1"		,	    4	},	/* [8-N-1]  */
	{	"8n2"		,	    5	},	/* [8-N-2]  */
	{	"7o1"		,	    6	},	/* [7-O-1]  */
	{	"7E1"		,	    7	},	/* [7-E-1]  */
	{	"7o2"		,	    8	},	/* [7-O-2]  */
	{	"7E2"		,	    9	},	/* [7-E-2]  */
	{ 0,  0 }
};

acpienumeration en_P76_HMIS[] = {
	{	"tUn"		,	    0	},	/* [Auto-tuning]  */
	{	"dCb"		,	    1	},	/* [In DC inject.]  */
	{	"rdY"		,	    2	},	/* [Ready]  */
	{	"nSt"		,	    3	},	/* [Freewheel]  */
	{	"rUn"		,	    4	},	/* [Drv running]  */
	{	"ACC"		,	    5	},	/* [In accel.]  */
	{	"dEC"		,	    6	},	/* [In decel.]  */
	{	"CLI"		,	    7	},	/* [Current lim.]  */
	{	"FSt"		,	    8	},	/* [Fast stop]  */
	{	"FLU"		,	    9	},	/* [Mot. fluxing]  */
	{	"nLP"		,	   11	},	/* [no mains V.]  */
	{	"PrA"		,	   12	},	/* [Active PWR]  */
	{	"CtL"		,	   13	},	/* [control.stop]  */
	{	"Obr"		,	   14	},	/* [Dec. adapt.]  */
	{	"SOC"		,	   15	},	/* [Output cut]  */
	{	"USA"		,	   17	},	/* [UnderV. al.]  */
	{	"tC"		,	   18	},	/* [In mfg. test]  */
	{	"St"		,	   19	},	/* [in autotest]  */
	{	"FA"		,	   20	},	/* [autotest err]  */
	{	"YES"		,	   21	},	/* [Autotest OK]  */
	{	"EP"		,	   22	},	/* [eeprom test]  */
	{	"FLt"		,	   23	},	/* [In fault]  */
	{	"SS1"		,	   28	},	/* [SS1 active]  */
	{	"SLS"		,	   29	},	/* [SLS active]  */
	{	"StO"		,	   30	},	/* [STO active]  */
	{ 0,  0 }
};

acpienumeration en_P76_HSO[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"SSO"		,	    1	},	/* [Speed ref]  */
	{	"CSO"		,	    2	},	/* [I Limit]  */
	{ 0,  0 }
};

acpienumeration en_P76_INCPER[] = {
	{	"0.01"		,	    0	},	/* [0,01%]  */
	{	"0.1"		,	    1	},	/* [0,1%]  */
	{	"1"		,	    2	},	/* [1%]  */
	{ 0,  0 }
};

acpienumeration en_P76_INR[] = {
	{	"0.01"		,	    0	},	/* [0.01]  */
	{	"0.1"		,	    1	},	/* [0.1]  */
	{	"1"		,	    2	},	/* [1]  */
	{ 0,  0 }
};

acpienumeration en_P76_IPM[] = {
	{	"MAnU"		,	    0	},	/* [Fixed]  */
	{	"bOOtP"		,	    1	},	/* [BOOTP]  */
	{	"dHCP"		,	    2	},	/* [DHCP]  */
	{ 0,  0 }
};

acpienumeration en_P76_L_H[] = {
	{	"LO"		,	    0	},	/* [Active low]  */
	{	"HIG"		,	    1	},	/* [Active high]  */
	{ 0,  0 }
};

acpienumeration en_P76_LFT[] = {
	{	"nOF"		,	    0	},	/* [No fault]  */
	{	"InF"		,	    1	},	/* [Calibration error]  */
	{	"EEF1"		,	    2	},	/* [Control Eeprom]  */
	{	"CFF"		,	    3	},	/* [Incorrect config.]  */
	{	"CFI"		,	    4	},	/* [Invalid config.]  */
	{	"SLF1"		,	    5	},	/* [Modbus com.]  */
	{	"ILF"		,	    6	},	/* [int. com.link]  */
	{	"CnF"		,	    7	},	/* [Com. network]  */
	{	"EPF1"		,	    8	},	/* [External flt-LI/Bit]  */
	{	"OCF"		,	    9	},	/* [Overcurrent]  */
	{	"CrF"		,	   10	},	/* [Precharge]  */
	{	"SPF"		,	   11	},	/* [Speed fdback loss]  */
	{	"OHF"		,	   16	},	/* [Drive overheat]  */
	{	"OLF"		,	   17	},	/* [Motor overload]  */
	{	"ObF"		,	   18	},	/* [Overbraking]  */
	{	"OSF"		,	   19	},	/* [Mains overvoltage]  */
	{	"OPF1"		,	   20	},	/* [1 output phase loss]  */
	{	"PHF"		,	   21	},	/* [Input phase loss]  */
	{	"USF"		,	   22	},	/* [Undervoltage]  */
	{	"SCF1"		,	   23	},	/* [Motor short circuit]  */
	{	"SOF"		,	   24	},	/* [Overspeed]  */
	{	"tnF"		,	   25	},	/* [Auto-tuning]  */
	{	"InF1"		,	   26	},	/* [Rating error]  */
	{	"InF2"		,	   27	},	/* [PWR Calib.]  */
	{	"InF3"		,	   28	},	/* [Int.serial link]  */
	{	"InF4"		,	   29	},	/* [Int.Mfg area]  */
	{	"EEF2"		,	   30	},	/* [Power Eeprom]  */
	{	"SCF2"		,	   31	},	/* [Impedant sh. circuit]  */
	{	"SCF3"		,	   32	},	/* [Ground short circuit]  */
	{	"OPF2"		,	   33	},	/* [3out ph loss]  */
	{	"COF"		,	   34	},	/* [CAN com.]  */
	{	"bLF"		,	   35	},	/* [Brake control]  */
	{	"EPF2"		,	   38	},	/* [External fault com.]  */
	{	"brF"		,	   41	},	/* [Brake feedback]  */
	{	"SLF2"		,	   42	},	/* [PC com.]  */
	{	"ECF"		,	   43	},	/* [Enc. coupl.]  */
	{	"SSF"		,	   44	},	/* [Torque/current lim]  */
	{	"SLF3"		,	   45	},	/* [HMI com.]  */
	{	"PrF"		,	   46	},	/* [Power removal]  */
	{	"PtFL"		,	   49	},	/* [LI6=PTC probe]  */
	{	"OtFL"		,	   50	},	/* [PTC fault]  */
	{	"InF9"		,	   51	},	/* [Internal- I measure]  */
	{	"InFA"		,	   52	},	/* [Internal-mains circuit]  */
	{	"InFb"		,	   53	},	/* [Internal- th. sensor]  */
	{	"tJF"		,	   54	},	/* [IGBT overheat]  */
	{	"SCF4"		,	   55	},	/* [IGBT short circuit]  */
	{	"SCF5"		,	   56	},	/* [Motor short circuit]  */
	{	"SrF"		,	   57	},	/* [Torque time-out]  */
	{	"FCF1"		,	   58	},	/* [Out. contact. stuck]  */
	{	"FCF2"		,	   59	},	/* [Out. contact. open.]  */
	{	"AI2F"		,	   61	},	/* [AI2 input]  */
	{	"LCF"		,	   64	},	/* [input contactor]  */
	{	"dCF"		,	   66	},	/* [Diff. I fault]  */
	{	"HdF"		,	   67	},	/* [IGBT desaturation]  */
	{	"InF6"		,	   68	},	/* [Internal-option]  */
	{	"InFE"		,	   69	},	/* [internal- CPU]  */
	{	"LFF3"		,	   71	},	/* [AI3 4-20mA loss]  */
	{	"HCF"		,	   73	},	/* [Cards pairing]  */
	{	"dLF"		,	   76	},	/* [Load fault]  */
	{	"CFI2"		,	   77	},	/* [Bad conf]  */
	{	"CSF"		,	   99	},	/* [Ch.sw. fault]  */
	{	"ULF"		,	  100	},	/* [Pr.Underload.Flt]  */
	{	"OLC"		,	  101	},	/* [Proc.Overload Flt]  */
	{	"ASF"		,	  105	},	/* [Angle error]  */
	{	"SAFF"		,	  107	},	/* [Safety fault]  */
	{	"FbE"		,	  108	},	/* [FB fault]  */
	{	"FbES"		,	  109	},	/* [FB stop flt.]  */
	{ 0,  0 }
};

acpienumeration en_P76_N_Y[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"YES"		,	    1	},	/* [Yes]  */
	{ 0,  0 }
};

acpienumeration en_P76_NCV[] = {
	{	"nO"		,	    0	},	/* [Unknown rating]  */
	{	"010"		,	    1	},	/* [0,12kW]  */
	{	"018"		,	    2	},	/* [0,18kW / 0.25HP]  */
	{	"025"		,	    3	},	/* [0,25kW]  */
	{	"037"		,	    4	},	/* [0,37kW / 0.5HP]  */
	{	"055"		,	    5	},	/* [0,55kW / 0.75HP]  */
	{	"075"		,	    6	},	/* [0,75kW / 1HP]  */
	{	"090"		,	    7	},	/* [5,5kW / 7.5HP]  */
	{	"U11"		,	    8	},	/* [1,1kW / 1.5HP]  */
	{	"U15"		,	    9	},	/* [1,5kW / 2HP]  */
	{	"U18"		,	   10	},	/* [1,85kW]  */
	{	"U22"		,	   11	},	/* [2,2kW / 3HP]  */
	{	"U30"		,	   12	},	/* [3kW]  */
	{	"U37"		,	   13	},	/* [4kW / 5HP]  */
	{	"U40"		,	   14	},	/* [4kW / 5HP]  */
	{	"U55"		,	   15	},	/* [5,5kW / 7.5HP]  */
	{	"U75"		,	   16	},	/* [7,5kW / 10HP]  */
	{	"U90"		,	   17	},	/* [9kW]  */
	{	"d11"		,	   18	},	/* [11kW / 15HP]  */
	{	"d15"		,	   19	},	/* [15kW / 20HP]  */
	{	"d18"		,	   20	},	/* [18,5kW / 25HP]  */
	{	"d22"		,	   21	},	/* [22kW / 30HP]  */
	{	"d30"		,	   22	},	/* [30kW / 40HP]  */
	{ 0,  0 }
};

acpienumeration en_P76_NPL[] = {
	{	"POS"		,	    0	},	/* [1]  */
	{	"nEG"		,	    1	},	/* [0]  */
	{ 0,  0 }
};

acpienumeration en_P76_ONOFF[] = {
	{	"OFF"		,	    0	},	/* [OFF]  */
	{	"On"		,	    1	},	/* [ON]  */
	{ 0,  0 }
};

acpienumeration en_P76_OPL[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"YES"		,	    1	},	/* [Yes]  */
	{	"OAC"		,	    2	},	/* [Output cut]  */
	{ 0,  0 }
};

acpienumeration en_P76_PRFL[] = {
	{	"UnCG"		,	    0	},	/*   */
	{	"1"		,	    1	},	/*  */
	{	"100"		,	  100	},	/*  */
	{	"101"		,	  101	},	/*  */
	{	"102"		,	  102	},	/*  */
	{ 0,  0 }
};

acpienumeration en_P76_PSA[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"AI1"		,	    1	},	/* [AI1]  */
	{	"AI2"		,	    2	},	/* [AI2]  */
	{	"AI3"		,	    3	},	/* [AI3]  */
	{	"OCr"		,	  129	},	/* [I motor]  */
	{	"OFr"		,	  130	},	/* [Motor freq.]  */
	{	"OrP"		,	  131	},	/* [Ramp out.]  */
	{	"trq"		,	  132	},	/* [Motor torq.]  */
	{	"Stq"		,	  133	},	/* [Sign. torque]  */
	{	"OrS"		,	  134	},	/* [sign ramp]  */
	{	"OPS"		,	  135	},	/* [PID ref.]  */
	{	"OPF"		,	  136	},	/* [PID feedbk]  */
	{	"OPE"		,	  137	},	/* [PID error]  */
	{	"OPI"		,	  138	},	/* [PID output]  */
	{	"OPr"		,	  139	},	/* [Mot. power]  */
	{	"tHr"		,	  140	},	/* [Mot thermal]  */
	{	"tHd"		,	  141	},	/* [Drv thermal]  */
	{	"tqMS"		,	  142	},	/* [Torque 4Q]  */
	{	"UPdt"		,	  160	},	/* [+/-Speed]  */
	{	"UPdH"		,	  161	},	/* [+/-spd HMI]  */
	{	"LCC"		,	  163	},	/* [HMI]  */
	{	"Mdb"		,	  164	},	/* [Modbus]  */
	{	"CAn"		,	  167	},	/* [CANopen]  */
	{	"nEt"		,	  169	},	/* [Com. card]  */
	{	"OFS"		,	  173	},	/* [Sig. o/p frq.]  */
	{	"tHr2"		,	  174	},	/* [Mot therm2]  */
	{	"tHr3"		,	  175	},	/* [Mot therm3]  */
	{	"tqL"		,	  179	},	/* [Torque lim.]  */
	{	"UOP"		,	  180	},	/* [Motor volt.]  */
	{	"PI"		,	  181	},	/* [RP]  */
	{	"AIU1"		,	  183	},	/* [AI Virtual 1]  */
	{	"dO1"		,	  184	},	/* [DO1]  */
	{	"AIU2"		,	  185	},	/* [AI Virtual 2]  */
	{	"OA01"		,	  240	},	/* [OA01]  */
	{	"OA02"		,	  241	},	/* [OA02]  */
	{	"OA03"		,	  242	},	/* [OA03]  */
	{	"OA04"		,	  243	},	/* [OA04]  */
	{	"OA05"		,	  244	},	/* [OA05]  */
	{	"OA06"		,	  245	},	/* [OA06]  */
	{	"OA07"		,	  246	},	/* [OA07]  */
	{	"OA08"		,	  247	},	/* [OA08]  */
	{	"OA09"		,	  248	},	/* [OA09]  */
	{	"OA10"		,	  249	},	/* [OA10]  */
	{ 0,  0 }
};

acpienumeration en_P76_PSL[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"FLt"		,	    1	},	/* [No drive flt]  */
	{	"rUn"		,	    2	},	/* [Drv running]  */
	{	"OCC"		,	    3	},	/* [Output cont]  */
	{	"FtA"		,	    4	},	/* [Freq.Th.att.]  */
	{	"FLA"		,	    5	},	/* [HSP attain.]  */
	{	"CtA"		,	    6	},	/* [I attained]  */
	{	"SrA"		,	    7	},	/* [Freq.ref.att]  */
	{	"tSA"		,	    8	},	/* [Th.mot. att.]  */
	{	"bLC"		,	    9	},	/* [Brk control]  */
	{	"PEE"		,	   10	},	/* [PID error al.]  */
	{	"PFA"		,	   11	},	/* [PID fdbk al.]  */
	{	"F2A"		,	   13	},	/* [FreqTh.att.2]  */
	{	"tAd"		,	   14	},	/* [Th. drv. att.]  */
	{	"ULA"		,	   21	},	/* [Pro.Undload]  */
	{	"OLA"		,	   22	},	/* [Ovld.P.Alrm]  */
	{	"rSdA"		,	   27	},	/* [Rope slack]  */
	{	"ttHA"		,	   28	},	/* [High tq. att.]  */
	{	"ttLA"		,	   29	},	/* [Low tq. att.]  */
	{	"MFrd"		,	   30	},	/* [Forward]  */
	{	"MrrS"		,	   31	},	/* [Reverse]  */
	{	"tS2"		,	   37	},	/* [Th.mot2 att]  */
	{	"tS3"		,	   38	},	/* [Th.mot3 att]  */
	{	"AtS"		,	   47	},	/* [Neg Torque]  */
	{	"CnF0"		,	   48	},	/* [Cnfg.0 act.]  */
	{	"CnF1"		,	   49	},	/* [Cnfg.1 act.]  */
	{	"CnF2"		,	   50	},	/* [Cnfg.2 act.]  */
	{	"CFP1"		,	   52	},	/* [set 1 active]  */
	{	"CFP2"		,	   53	},	/* [set 2 active]  */
	{	"CFP3"		,	   54	},	/* [set 3 active]  */
	{	"dbL"		,	   64	},	/* [DC charged]  */
	{	"brS"		,	   65	},	/* [In braking]  */
	{	"PrM"		,	   66	},	/* [P. removed]  */
	{	"FqLA"		,	   72	},	/* [Fr.met. alar.]  */
	{	"LLC"		,	   73	},	/* [Input cont.]  */
	{	"MCP"		,	   77	},	/* [I present]  */
	{	"LSA"		,	   78	},	/* [Limit sw.att]  */
	{	"dLdA"		,	   79	},	/* [Load alarm]  */
	{	"AG1"		,	   80	},	/* [Alarm Grp 1]  */
	{	"AG2"		,	   81	},	/* [Alarm Grp 2]  */
	{	"AG3"		,	   82	},	/* [Alarm Grp 3]  */
	{	"PLA"		,	   85	},	/* [LI6=PTC al.]  */
	{	"EFA"		,	   87	},	/* [Ext. fault al]  */
	{	"USA"		,	   88	},	/* [Under V. al.]  */
	{	"UPA"		,	   89	},	/* [Uvolt warn]  */
	{	"tHA"		,	   91	},	/* [Al. øC drv.]  */
	{	"SSA"		,	   95	},	/* [Lim T/I att.]  */
	{	"Fr1"		,	   96	},	/* [ch1 active]  */
	{	"Fr2"		,	   97	},	/* [ch2 active]  */
	{	"Cd1"		,	   98	},	/* [ch1 active]  */
	{	"Cd2"		,	   99	},	/* [ch2 active]  */
	{	"Fr1b"		,	  100	},	/* [ch1B active]  */
	{	"EbO"		,	  101	},	/* [Spool end]  */
	{	"tSY"		,	  102	},	/* [Sync wobbl]  */
	{	"tJA"		,	  104	},	/* [IGBT al.]  */
	{	"AP3"		,	  107	},	/* [AI3 Al. 4-20]  */
	{	"Fn1"		,	  116	},	/* [SHORT#FN1]  */
	{	"Fn2"		,	  117	},	/* [SHORT#FN2]  */
	{	"Fn3"		,	  118	},	/* [SHORT#FN3]  */
	{	"Fn4"		,	  119	},	/* [SHORT#FN4]  */
	{	"rdY"		,	  127	},	/* [Ready]  */
	{	"YES"		,	  128	},	/* [Yes]  */
	{	"LI1"		,	  129	},	/* [LI1]  */
	{	"LI2"		,	  130	},	/* [LI2]  */
	{	"LI3"		,	  131	},	/* [LI3]  */
	{	"LI4"		,	  132	},	/* [LI4]  */
	{	"LI5"		,	  133	},	/* [LI5]  */
	{	"LI6"		,	  134	},	/* [LI6]  */
	{	"LAI1"		,	  143	},	/* [LAI1]  */
	{	"LAI2"		,	  144	},	/* [LAI2]  */
	{	"Cd00"		,	  160	},	/* [CD00]  */
	{	"Cd01"		,	  161	},	/* [CD01]  */
	{	"Cd02"		,	  162	},	/* [CD02]  */
	{	"Cd03"		,	  163	},	/* [CD03]  */
	{	"Cd04"		,	  164	},	/* [CD04]  */
	{	"Cd05"		,	  165	},	/* [CD05]  */
	{	"Cd06"		,	  166	},	/* [CD06]  */
	{	"Cd07"		,	  167	},	/* [CD07]  */
	{	"Cd08"		,	  168	},	/* [CD08]  */
	{	"Cd09"		,	  169	},	/* [CD09]  */
	{	"Cd10"		,	  170	},	/* [CD10]  */
	{	"Cd11"		,	  171	},	/* [CD11]  */
	{	"Cd12"		,	  172	},	/* [CD12]  */
	{	"Cd13"		,	  173	},	/* [CD13]  */
	{	"Cd14"		,	  174	},	/* [CD14]  */
	{	"Cd15"		,	  175	},	/* [CD15]  */
	{	"C100"		,	  176	},	/* [C100]  */
	{	"C101"		,	  177	},	/* [C101]  */
	{	"C102"		,	  178	},	/* [C102]  */
	{	"C103"		,	  179	},	/* [C103]  */
	{	"C104"		,	  180	},	/* [C104]  */
	{	"C105"		,	  181	},	/* [C105]  */
	{	"C106"		,	  182	},	/* [C106]  */
	{	"C107"		,	  183	},	/* [C107]  */
	{	"C108"		,	  184	},	/* [C108]  */
	{	"C109"		,	  185	},	/* [C109]  */
	{	"C110"		,	  186	},	/* [C110]  */
	{	"C111"		,	  187	},	/* [C111]  */
	{	"C112"		,	  188	},	/* [C112]  */
	{	"C113"		,	  189	},	/* [C113]  */
	{	"C114"		,	  190	},	/* [C114]  */
	{	"C115"		,	  191	},	/* [C115]  */
	{	"C200"		,	  192	},	/* [C200]  */
	{	"C201"		,	  193	},	/* [C201]  */
	{	"C202"		,	  194	},	/* [C202]  */
	{	"C203"		,	  195	},	/* [C203]  */
	{	"C204"		,	  196	},	/* [C204]  */
	{	"C205"		,	  197	},	/* [C205]  */
	{	"C206"		,	  198	},	/* [C206]  */
	{	"C207"		,	  199	},	/* [C207]  */
	{	"C208"		,	  200	},	/* [C208]  */
	{	"C209"		,	  201	},	/* [C209]  */
	{	"C210"		,	  202	},	/* [C210]  */
	{	"C211"		,	  203	},	/* [C211]  */
	{	"C212"		,	  204	},	/* [C212]  */
	{	"C213"		,	  205	},	/* [C213]  */
	{	"C214"		,	  206	},	/* [C214]  */
	{	"C215"		,	  207	},	/* [C215]  */
	{	"C300"		,	  208	},	/* [C300]  */
	{	"C301"		,	  209	},	/* [C301]  */
	{	"C302"		,	  210	},	/* [C302]  */
	{	"C303"		,	  211	},	/* [C303]  */
	{	"C304"		,	  212	},	/* [C304]  */
	{	"C305"		,	  213	},	/* [C305]  */
	{	"C306"		,	  214	},	/* [C306]  */
	{	"C307"		,	  215	},	/* [C307]  */
	{	"C308"		,	  216	},	/* [C308]  */
	{	"C309"		,	  217	},	/* [C309]  */
	{	"C310"		,	  218	},	/* [C310]  */
	{	"C311"		,	  219	},	/* [C311]  */
	{	"C312"		,	  220	},	/* [C312]  */
	{	"C313"		,	  221	},	/* [C313]  */
	{	"C314"		,	  222	},	/* [C314]  */
	{	"C315"		,	  223	},	/* [C315]  */
	{	"OL01"		,	  240	},	/* [OL01]  */
	{	"OL02"		,	  241	},	/* [OL02]  */
	{	"OL03"		,	  242	},	/* [OL03]  */
	{	"OL04"		,	  243	},	/* [OL04]  */
	{	"OL05"		,	  244	},	/* [OL05]  */
	{	"OL06"		,	  245	},	/* [OL06]  */
	{	"OL07"		,	  246	},	/* [OL07]  */
	{	"OL08"		,	  247	},	/* [OL08]  */
	{	"OL09"		,	  248	},	/* [OL09]  */
	{	"OL10"		,	  249	},	/* [OL10]  */
	{ 0,  0 }
};

acpienumeration en_P76_PSLIN[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"FLt"		,	    1	},	/* [No drive flt]  */
	{	"FtA"		,	    4	},	/* [Freq.Th.att.]  */
	{	"F2A"		,	   13	},	/* [FreqTh.att.2]  */
	{	"Fr1"		,	   96	},	/* [ch1 active]  */
	{	"Fr2"		,	   97	},	/* [ch2 active]  */
	{	"Cd1"		,	   98	},	/* [ch1 active]  */
	{	"Cd2"		,	   99	},	/* [ch2 active]  */
	{	"Fr1b"		,	  100	},	/* [ch1B active]  */
	{	"YES"		,	  128	},	/* [Yes]  */
	{	"LI1"		,	  129	},	/* [LI1]  */
	{	"LI2"		,	  130	},	/* [LI2]  */
	{	"LI3"		,	  131	},	/* [LI3]  */
	{	"LI4"		,	  132	},	/* [LI4]  */
	{	"LI5"		,	  133	},	/* [LI5]  */
	{	"LI6"		,	  134	},	/* [LI6]  */
	{	"LAI1"		,	  143	},	/* [LAI1]  */
	{	"LAI2"		,	  144	},	/* [LAI2]  */
	{	"Cd00"		,	  160	},	/* [CD00]  */
	{	"Cd01"		,	  161	},	/* [CD01]  */
	{	"Cd02"		,	  162	},	/* [CD02]  */
	{	"Cd03"		,	  163	},	/* [CD03]  */
	{	"Cd04"		,	  164	},	/* [CD04]  */
	{	"Cd05"		,	  165	},	/* [CD05]  */
	{	"Cd06"		,	  166	},	/* [CD06]  */
	{	"Cd07"		,	  167	},	/* [CD07]  */
	{	"Cd08"		,	  168	},	/* [CD08]  */
	{	"Cd09"		,	  169	},	/* [CD09]  */
	{	"Cd10"		,	  170	},	/* [CD10]  */
	{	"Cd11"		,	  171	},	/* [CD11]  */
	{	"Cd12"		,	  172	},	/* [CD12]  */
	{	"Cd13"		,	  173	},	/* [CD13]  */
	{	"Cd14"		,	  174	},	/* [CD14]  */
	{	"Cd15"		,	  175	},	/* [CD15]  */
	{	"C101"		,	  177	},	/* [C101]  */
	{	"C102"		,	  178	},	/* [C102]  */
	{	"C103"		,	  179	},	/* [C103]  */
	{	"C104"		,	  180	},	/* [C104]  */
	{	"C105"		,	  181	},	/* [C105]  */
	{	"C106"		,	  182	},	/* [C106]  */
	{	"C107"		,	  183	},	/* [C107]  */
	{	"C108"		,	  184	},	/* [C108]  */
	{	"C109"		,	  185	},	/* [C109]  */
	{	"C110"		,	  186	},	/* [C110]  */
	{	"C111"		,	  187	},	/* [C111]  */
	{	"C112"		,	  188	},	/* [C112]  */
	{	"C113"		,	  189	},	/* [C113]  */
	{	"C114"		,	  190	},	/* [C114]  */
	{	"C115"		,	  191	},	/* [C115]  */
	{	"C201"		,	  193	},	/* [C201]  */
	{	"C202"		,	  194	},	/* [C202]  */
	{	"C203"		,	  195	},	/* [C203]  */
	{	"C204"		,	  196	},	/* [C204]  */
	{	"C205"		,	  197	},	/* [C205]  */
	{	"C206"		,	  198	},	/* [C206]  */
	{	"C207"		,	  199	},	/* [C207]  */
	{	"C208"		,	  200	},	/* [C208]  */
	{	"C209"		,	  201	},	/* [C209]  */
	{	"C210"		,	  202	},	/* [C210]  */
	{	"C211"		,	  203	},	/* [C211]  */
	{	"C212"		,	  204	},	/* [C212]  */
	{	"C213"		,	  205	},	/* [C213]  */
	{	"C214"		,	  206	},	/* [C214]  */
	{	"C215"		,	  207	},	/* [C215]  */
	{	"C301"		,	  209	},	/* [C301]  */
	{	"C302"		,	  210	},	/* [C302]  */
	{	"C303"		,	  211	},	/* [C303]  */
	{	"C304"		,	  212	},	/* [C304]  */
	{	"C305"		,	  213	},	/* [C305]  */
	{	"C306"		,	  214	},	/* [C306]  */
	{	"C307"		,	  215	},	/* [C307]  */
	{	"C308"		,	  216	},	/* [C308]  */
	{	"C309"		,	  217	},	/* [C309]  */
	{	"C310"		,	  218	},	/* [C310]  */
	{	"C311"		,	  219	},	/* [C311]  */
	{	"C312"		,	  220	},	/* [C312]  */
	{	"C313"		,	  221	},	/* [C313]  */
	{	"C314"		,	  222	},	/* [C314]  */
	{	"C315"		,	  223	},	/* [C315]  */
	{	"OL01"		,	  240	},	/* [OL01]  */
	{	"OL02"		,	  241	},	/* [OL02]  */
	{	"OL03"		,	  242	},	/* [OL03]  */
	{	"OL04"		,	  243	},	/* [OL04]  */
	{	"OL05"		,	  244	},	/* [OL05]  */
	{	"OL06"		,	  245	},	/* [OL06]  */
	{	"OL07"		,	  246	},	/* [OL07]  */
	{	"OL08"		,	  247	},	/* [OL08]  */
	{	"OL09"		,	  248	},	/* [OL09]  */
	{	"OL10"		,	  249	},	/* [OL10]  */
	{ 0,  0 }
};

acpienumeration en_P76_PTCX[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"AS"		,	    1	},	/* [Always]  */
	{	"rdS"		,	    2	},	/* [Power ON]  */
	{	"rS"		,	    3	},	/* [Motor ON]  */
	{ 0,  0 }
};

acpienumeration en_P76_QSTD[] = {
	{	"FSt2"		,	    2	},	/*   */
	{	"FSt6"		,	    6	},	/*   */
	{ 0,  0 }
};

acpienumeration en_P76_RDS[] = {
	{	"AUtO"		,	    0	},	/* [Auto]  */
	{	"10F"		,	    1	},	/* [10M. full]  */
	{	"10H"		,	    2	},	/* [10M. half]  */
	{	"100F"		,	    3	},	/* [100M. full]  */
	{	"100H"		,	    4	},	/* [100M. half]  */
	{ 0,  0 }
};

acpienumeration en_P76_RPR[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"APH"		,	    1	},	/* [reset kWh]  */
	{	"rtH"		,	    2	},	/* [rst. runtime]  */
	{	"rtHI"		,	    3	},	/* [rst runtim I]  */
	{	"PtH"		,	    4	},	/* [rst. P On t.]  */
	{	"ALL"		,	   64	},	/* [Reset all]  */
	{ 0,  0 }
};

acpienumeration en_P76_RPT[] = {
	{	"LIn"		,	    0	},	/* [Linear]  */
	{	"S"		,	    1	},	/* [S ramp]  */
	{	"U"		,	    2	},	/* [U ramp]  */
	{	"CUS"		,	    3	},	/* [Customized]  */
	{ 0,  0 }
};

acpienumeration en_P76_RSD[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"drI"		,	    1	},	/* [Drive estim.]  */
	{	"PES"		,	    2	},	/* [Ext. sensor]  */
	{ 0,  0 }
};

acpienumeration en_P76_SCS[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"Str0"		,	    1	},	/* [Config 0]  */
	{	"Str1"		,	    2	},	/* [Config 1]  */
	{	"Str2"		,	    3	},	/* [Config 2]  */
	{ 0,  0 }
};

acpienumeration en_P76_SFT[] = {
	{	"HF1"		,	    1	},	/* [SFR type 1]  */
	{	"HF2"		,	    2	},	/* [SFR type 2]  */
	{ 0,  0 }
};

acpienumeration en_P76_SFTY[] = {
	{	"Std"		,	    0	},	/* [Standard]  */
	{	"SAFE"		,	    1	},	/* [Safe]  */
	{ 0,  0 }
};

acpienumeration en_P76_SLSS[] = {
	{	"nO"		,	    0	},	/* [Not config.]  */
	{	"IdLE"		,	    1	},	/* [Idle]  */
	{	"SS1"		,	    2	},	/* [Safe ramp]  */
	{	"SLS"		,	    3	},	/* [Spd limited]  */
	{	"StO"		,	    4	},	/* [Safe stop]  */
	{	"FLt"		,	    5	},	/* [Fault]  */
	{ 0,  0 }
};

acpienumeration en_P76_SLT[] = {
	{	"tYP1"		,	    0	},	/*   */
	{	"tYP2"		,	    1	},	/*   */
	{	"tYP3"		,	    2	},	/*   */
	{ 0,  0 }
};

acpienumeration en_P76_SMOT[] = {
	{	"nO"		,	    0	},	/* [No info.]  */
	{	"LLS"		,	    1	},	/* [Low salient]  */
	{	"MLS"		,	    2	},	/* [Med salient]  */
	{	"HLS"		,	    3	},	/* [High salient]  */
	{ 0,  0 }
};

acpienumeration en_P76_SOP[] = {
	{	"6"		,	    6	},	/* [6 æs]  */
	{	"8"		,	    8	},	/* [8 æs]  */
	{	"10"		,	   10	},	/* [10 æs]  */
	{ 0,  0 }
};

acpienumeration en_P76_SPIG[] = {
	{	"StOP"		,	    0	},	/* [Stop]  */
	{	"IGn"		,	    1	},	/* [Ignore]  */
	{ 0,  0 }
};

acpienumeration en_P76_SPSL[] = {
	{	"nO"		,	    0	},	/*   */
	{	"L34"		,	    1	},	/*   */
	{	"L56"		,	    2	},	/*   */
	{	"L3PW"		,	    3	},	/*   */
	{	"PWrM"		,	    4	},	/*   */
	{ 0,  0 }
};

acpienumeration en_P76_SPST[] = {
	{	"StOP"		,	    0	},	/* [Stop]  */
	{	"Strt"		,	    1	},	/* [Start]  */
	{ 0,  0 }
};

acpienumeration en_P76_SS1S[] = {
	{	"nO"		,	    0	},	/* [Not config.]  */
	{	"IdLE"		,	    1	},	/* [Idle]  */
	{	"SS1"		,	    2	},	/* [Safe ramp]  */
	{	"StO"		,	    3	},	/* [Safe stop]  */
	{	"FLt"		,	    4	},	/* [Fault]  */
	{ 0,  0 }
};

acpienumeration en_P76_SSRU[] = {
	{	"1H"		,	    0	},	/*   */
	{	"10H"		,	    1	},	/*   */
	{	"100H"		,	    2	},	/*   */
	{ 0,  0 }
};

acpienumeration en_P76_STOS[] = {
	{	"IdLE"		,	    0	},	/* [Idle]  */
	{	"StO"		,	    1	},	/* [Safe stop]  */
	{	"FLt"		,	    2	},	/* [Fault]  */
	{ 0,  0 }
};

acpienumeration en_P76_STP[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"MMS"		,	    1	},	/* [DC Maintain]  */
	{	"rMP"		,	    2	},	/* [Ramp stop]  */
	{	"LnF"		,	    4	},	/* [Lock-out]  */
	{ 0,  0 }
};

acpienumeration en_P76_STR[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"rAM"		,	    1	},	/* [RAM]  */
	{	"EEP"		,	    2	},	/* [EEprom]  */
	{ 0,  0 }
};

acpienumeration en_P76_STT[] = {
	{	"rMP"		,	    0	},	/* [Ramp stop]  */
	{	"FSt"		,	    1	},	/* [Fast stop]  */
	{	"nSt"		,	    2	},	/* [Freewheel]  */
	{	"dCI"		,	    3	},	/* [DC injection]  */
	{ 0,  0 }
};

acpienumeration en_P76_STUN[] = {
	{	"tAb"		,	    0	},	/* [Default]  */
	{	"MEAS"		,	    1	},	/* [Measure]  */
	{	"CUS"		,	    2	},	/* [Custom]  */
	{ 0,  0 }
};

acpienumeration en_P76_TBR[] = {
	{	"nO"		,	    0	},	/* [Not config.]  */
	{	"AUtO"		,	    4	},	/* [Automatic]  */
	{	"300"		,	    8	},	/* [300 bps]  */
	{	"600"		,	   12	},	/* [600 bps]  */
	{	"1 2"		,	   16	},	/* [1.2 Kbps]  */
	{	"2 4"		,	   20	},	/* [2.4 Kbps]  */
	{	"4 8"		,	   24	},	/* [4.8 Kbps]  */
	{	"9 6"		,	   28	},	/* [9.6 Kbps]  */
	{	"10 "		,	   30	},	/* [10 Kbps]  */
	{	"19 2"		,	   32	},	/* [19.2 Kbps]  */
	{	"20 "		,	   34	},	/* [20 Kbps]  */
	{	"28 8"		,	   35	},	/* [28.8 Kbps]  */
	{	"38 4"		,	   36	},	/* [38.4 Kbps]  */
	{	"45 4"		,	   37	},	/* [45.45 Kbps]  */
	{	"50 "		,	   38	},	/* [50 Kbps]  */
	{	"57 6"		,	   40	},	/* [57.6 Kbps]  */
	{	"93 7"		,	   42	},	/* [93.75 Kbps]  */
	{	"100 "		,	   44	},	/* [100 Kbps]  */
	{	"115 "		,	   48	},	/* [115.2 Kbps]  */
	{	"125 "		,	   52	},	/* [125 Kbps]  */
	{	"156 "		,	   53	},	/* [156 Kbps]  */
	{	"187 "		,	   54	},	/* [187.5 Kbps]  */
	{	"230 "		,	   56	},	/* [230.4 Kbps]  */
	{	"250 "		,	   60	},	/* [250 Kbps]  */
	{	"460 "		,	   64	},	/* [460.8 Kbps]  */
	{	"500 "		,	   68	},	/* [500 Kbps]  */
	{	"625 "		,	   69	},	/* [625 Kbps]  */
	{	"800 "		,	   70	},	/* [800 Kbps]  */
	{	"921 "		,	   72	},	/* [921.6 Kbps]  */
	{	"1M"		,	   76	},	/* [1 Mbps]  */
	{	"1M5"		,	   80	},	/* [1.5 Mbps]  */
	{	"2M5"		,	   81	},	/* [2.5 Mbps]  */
	{	"3M"		,	   82	},	/* [3 Mbps]  */
	{	"6M"		,	   83	},	/* [6 Mbps]  */
	{	"10M"		,	   84	},	/* [10 Mbps]  */
	{	"5M"		,	   86	},	/* [5 Mbps]  */
	{	"12M"		,	   88	},	/* [12 Mbps]  */
	{	"100M"		,	   92	},	/* [100 Mbps]  */
	{ 0,  0 }
};

acpienumeration en_P76_TCC[] = {
	{	"2C"		,	    0	},	/* [2 wire]  */
	{	"3C"		,	    1	},	/* [3 wire]  */
	{ 0,  0 }
};

acpienumeration en_P76_TCT[] = {
	{	"LEL"		,	    0	},	/* [Level]  */
	{	"trn"		,	    1	},	/* [Transition]  */
	{	"PFO"		,	    2	},	/* [Fwd priority]  */
	{ 0,  0 }
};

acpienumeration en_P76_THT[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"ACL"		,	    1	},	/* [Self cooled]  */
	{	"FCL"		,	    2	},	/* [Force-cool]  */
	{ 0,  0 }
};

acpienumeration en_P76_TUNU[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"tM"		,	    1	},	/* [Therm mot]  */
	{	"Ct"		,	    2	},	/* [Cold tun]  */
	{ 0,  0 }
};

acpienumeration en_P76_URES[] = {
	{	"200"		,	   20	},	/* [200V ac]  */
	{	"220"		,	   22	},	/* [220V ac]  */
	{	"230"		,	   23	},	/* [230V ac]  */
	{	"240"		,	   24	},	/* [240V ac]  */
	{	"380"		,	   38	},	/* [380V ac]  */
	{	"400"		,	   40	},	/* [400V ac]  */
	{	"440"		,	   44	},	/* [440V ac]  */
	{	"460"		,	   46	},	/* [460V ac]  */
	{	"500"		,	   50	},	/* [500V ac]  */
	{ 0,  0 }
};

acpienumeration en_P76_USB[] = {
	{	"0"		,	    0	},	/* [Std fault]  */
	{	"1"		,	    1	},	/* [Flt wo relay]  */
	{	"2"		,	    2	},	/* [Alarm]  */
	{ 0,  0 }
};

acpienumeration en_P76_VCAL[] = {
	{	"nO"		,	    0	},	/* [No]  */
	{	"110M"		,	    1	},	/* [100-120 1ph]  */
	{	"110t"		,	    2	},	/* [100-120 3ph]  */
	{	"M2"		,	    3	},	/* [200-240 1ph]  */
	{	"M3"		,	    4	},	/* [200-240 3ph]  */
	{	"480M"		,	    5	},	/* [380-500 1ph]  */
	{	"n4"		,	    6	},	/* [380-500 3ph]  */
	{	"690M"		,	    7	},	/* [525-600 1ph]  */
	{	"S6"		,	    8	},	/* [525-600 3ph]  */
};
