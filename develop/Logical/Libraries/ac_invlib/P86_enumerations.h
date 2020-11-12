/********************************************************************
* COPYRIGHT -- Bernecker + Rainer
* File:     P86_enumerations.h
* Created:  19.06.2020
********************************************************************/

#include <bur/plctypes.h>


acpienumeration en_P86_ABMF[] = {
	{ "150K",	15	}, /* 150 kHz */
	{ "300K",	30	}, /* 300 kHz */
	{ "500K",	50	}, /* 500 kHz */
	{ "1M",	100	}, /* 1000 kHz */
	{ 0, 0 }
};

acpienumeration en_P86_ACT[] = {
	{ "tAb",	0	}, /* Not done */
	{ "PEnd",	1	}, /* Test is pending */
	{ "PrOG",	2	}, /* Test in progress */
	{ "FAIL",	3	}, /* Error detected */
	{ "dOnE",	4	}, /* Autotuning Done */
	{ 0, 0 }
};

acpienumeration en_P86_ACTION[] = {
	{ "nO",	0	}, /* No action */
	{ "YES",	1	}, /* Apply autotuning */
	{ "CLr",	2	}, /* Erase autotuning */
	{ 0, 0 }
};

acpienumeration en_P86_ADC[] = {
	{ "nO",	0	}, /* No DC injection */
	{ "YES",	1	}, /* DC injection */
	{ "Ct",	2	}, /* Continuous DC injection */
	{ 0, 0 }
};

acpienumeration en_P86_AIOL[] = {
	{ "POS",	0	}, /* Positive only */
	{ "POSnEG",	1	}, /* Positive and negative */
	{ 0, 0 }
};

acpienumeration en_P86_AIOT[] = {
	{ "10U",	1	}, /* Voltage */
	{ "0A",	2	}, /* Current */
	{ "n10U",	5	}, /* AI bipolar volts selected */
	{ "PtC",	7	}, /* PTC MANAGEMENT */
	{ "KtY",	8	}, /* KTY */
	{ "1Pt3",	9	}, /* PT1000 */
	{ "1Pt2",	10	}, /* PT100 */
	{ "3Pt3",	12	}, /* 3 PT1000 */
	{ "3Pt2",	13	}, /* 3 PT100 */
	{ "1Pt33",	14	}, /* PT1000 in 3 wires */
	{ "1Pt23",	15	}, /* PT100 in 3 wires */
	{ "3Pt33",	16	}, /* 3 PT1000 in 3 wires */
	{ "3Pt23",	17	}, /* 3 PT100 in 3 wires */
	{ 0, 0 }
};

acpienumeration en_P86_ALR[] = {
	{ "nOA",	0	}, /* No Warning stored */
	{ "FrF",	1	}, /* Fallback Frequency reaction */
	{ "rLS",	2	}, /* Speed maintained */
	{ "Stt",	3	}, /* Type of stop */
	{ "SrA",	4	}, /* Reference Frequency Warning */
	{ "PEE",	18	}, /* PID error Warning */
	{ "PFA",	19	}, /* PID feedback Warning */
	{ "PFAH",	20	}, /* PID High Feedback Warning */
	{ "PFAL",	21	}, /* PID Low Feedback Warning */
	{ "PISH",	22	}, /* Regulation Warning */
	{ "LSA",	23	}, /* Limit switch reached */
	{ "rSdA",	24	}, /* Slack rope Warning */
	{ "dLdA",	25	}, /* Dynamic load warning */
	{ "tP3A",	27	}, /* AI3 thermal sensor warning */
	{ "tP4A",	28	}, /* AI4 thermal sensor warning */
	{ "tP5A",	29	}, /* AI5 thermal sensor warning */
	{ "AP1",	30	}, /* AI1 4-20 loss Warning */
	{ "AP3",	32	}, /* AI3 4-20 loss Warning */
	{ "AP4",	33	}, /* AI4 4-20 loss Warning */
	{ "AP5",	34	}, /* AI5 4-20 loss Warning */
	{ "tHA",	35	}, /* Drive thermal state Warning */
	{ "tJA",	36	}, /* IGBT thermal Warning */
	{ "FCtA",	37	}, /* Fan Counter Warning */
	{ "bOA",	39	}, /* Braking resistor thermal warning */
	{ "EFA",	40	}, /* External error warning */
	{ "USA",	41	}, /* Undervoltage Warning */
	{ "UPA",	42	}, /* Preventive undervoltage active */
	{ "FtA",	44	}, /* Motor frequency high threshold reached */
	{ "FtAL",	45	}, /* Motor frequency low threshold reached */
	{ "FqLA",	46	}, /* Pulse warning threshold reached */
	{ "F2AL",	47	}, /* Motor frequency low threshold 2 reached */
	{ "FLA",	48	}, /* High Speed Reached */
	{ "rtAH",	49	}, /* Reference frequency high threshold reached */
	{ "rtAL",	50	}, /* Reference frequency low threshold reached */
	{ "F2A",	51	}, /* 2nd Frequency Threshold Reached */
	{ "CtA",	52	}, /* Current Threshold Reached */
	{ "CtAL",	53	}, /* Low Current Threshold Reached */
	{ "ttHA",	54	}, /* High torque Warning */
	{ "ttLA",	55	}, /* Low torque Warning */
	{ "ULA",	56	}, /* Process underload Warning */
	{ "OLA",	57	}, /* Process Overload Warning */
	{ "SSA",	58	}, /* Torque Limit Reached */
	{ "rtA",	59	}, /* Torque control Warning */
	{ "tAd",	60	}, /* Drive thermal threshold reached */
	{ "tSA",	61	}, /* Motor thermal threshold reached */
	{ "tS2",	62	}, /* Motor 2 thermal threshold reached */
	{ "tS3",	63	}, /* Motor 3 thermal threshold reached */
	{ "tS4",	64	}, /* Motor 4 thermal threshold reached */
	{ "PtHA",	65	}, /* Power high threshold reached */
	{ "PtHL",	66	}, /* Power Low threshold reached */
	{ "CAS1",	67	}, /* Customer Warning 1 */
	{ "CAS2",	68	}, /* Customer Warning 2 */
	{ "CAS3",	69	}, /* Customer Warning 3 */
	{ "CAS4",	70	}, /* Customer Warning 4 */
	{ "CAS5",	71	}, /* Customer Warning 5 */
	{ "POWd",	73	}, /* Power Consumption Warning */
	{ "AnA",	83	}, /* Slipping warning */
	{ "bSA",	85	}, /* Load movement warning */
	{ "bCA",	86	}, /* Brake contact warning */
	{ "tP1A",	87	}, /* AI1 thermal sensor warning */
	{ "tLOW",	89	}, /* Current reduction warning */
	{ "MSdA",	124	}, /* M/S device warning */
	{ "bSqA",	125	}, /* Backlash warning */
	{ "tPEA",	126	}, /* Encoder module thermal warning */
	{ "tS1A",	133	}, /* Temperature sensor AI1 warning */
	{ "tS3A",	135	}, /* Temperature sensor AI3 warning */
	{ "tS4A",	136	}, /* Temperature sensor AI4 warning */
	{ "tS5A",	137	}, /* Temperature sensor AI5 warning */
	{ "dCrW",	138	}, /* DC bus ripple warning */
	{ 0, 0 }
};

acpienumeration en_P86_APPS[] = {
	{ "rUn",	0	}, /* Running  */
	{ "StOP",	1	}, /* Stop */
	{ "LOCAL",	2	}, /* Local mode is active */
	{ "OVEr",	3	}, /* Channel 2 Active */
	{ "MAnU",	4	}, /* Manual mode is active */
	{ "AUtO",	5	}, /* PID Active */
	{ "bOOSt",	10	}, /* Boost is in progress */
	{ "SLEEP",	11	}, /* Sleep mode is active */
	{ "bqS",	14	}, /* Backlash in progress */
	{ 0, 0 }
};

acpienumeration en_P86_APPT[] = {
	{ "GPMP",	0	}, /* Generic Pump Control */
	{ "MACH",	6	}, /* Machine */
	{ 0, 0 }
};

acpienumeration en_P86_ASA[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* Yes */
	{ "dOnE",	2	}, /* Done */
	{ 0, 0 }
};

acpienumeration en_P86_AST[] = {
	{ "IPMA",	3	}, /* IPM alignment */
	{ "SPMA",	4	}, /* SPM alignment */
	{ "PSI",	5	}, /* Pulse Signal Injection */
	{ "PSIO",	6	}, /* Pulse Signal Injection - Optimized */
	{ "rCI",	7	}, /* Rotational Current Injection */
	{ "nO",	254	}, /* NO alignment */
	{ 0, 0 }
};

acpienumeration en_P86_ASTS[] = {
	{ "tAb",	0	}, /* Not done */
	{ "PEnd",	1	}, /* Pending */
	{ "PrOG",	2	}, /* In progress */
	{ "FAIL",	3	}, /* Error detected */
	{ "dOnE",	4	}, /* Done */
	{ "CUS",	5	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P86_ATA[] = {
	{ "nO",	0	}, /* No */
	{ "POn",	1	}, /* Power On */
	{ "AUtO",	2	}, /* Run command */
	{ 0, 0 }
};

acpienumeration en_P86_AUT[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* Yes */
	{ 0, 0 }
};

acpienumeration en_P86_AVOT[] = {
	{ "InEG",	0	}, /* +/- 8192 */
	{ "PnEG",	1	}, /* +/- 100% */
	{ 0, 0 }
};

acpienumeration en_P86_BDCO[] = {
	{ "50K",	38	}, /* Baud rate 50kbps */
	{ "125K",	52	}, /* Baud rate 125kbps */
	{ "250K",	60	}, /* Baud rate 250kbps */
	{ "500K",	68	}, /* Baud rate 500kbps */
	{ "1M",	76	}, /* Baud rate 1Mbps */
	{ 0, 0 }
};

acpienumeration en_P86_BFR[] = {
	{ "50",	0	}, /* 50Hz Motor frequency */
	{ "50Hz",	0	}, /* 50Hz Motor frequency */
	{ "60",	1	}, /* 60Hz Motor frequency */
	{ "60Hz",	1	}, /* 60Hz Motor frequency */	
	{ 0, 0 }
};

acpienumeration en_P86_BIP[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* Brake impulse Fwd */
	{ "2Ibr",	2	}, /* Brake impulse Fwd/Rev */
	{ 0, 0 }
};

acpienumeration en_P86_BLC[] = {
	{ "nO",	0	}, /* No */
	{ "r2",	2	}, /* Relay R2 */
	{ "r3",	3	}, /* Relay R3 */
	{ "r4",	4	}, /* Relay R4 */
	{ "r5",	5	}, /* Relay R5 */
	{ "r6",	6	}, /* Relay R6 */
	{ "dO1",	64	}, /* DQ1 Digital Output */
	{ "dO2",	65	}, /* DQ2 Digital Output */
	{ "dO11",	66	}, /* DQ11 Digital Output  */
	{ "dO12",	67	}, /* DQ12 Digital Output  */
	{ 0, 0 }
};

acpienumeration en_P86_BMP[] = {
	{ "StOP",	0	}, /* Cmd/ref clear on c/over */
	{ "bUMP",	1	}, /* Cmd/ref copied on c/over */
	{ "dIS",	2	}, /* Disabled */
	{ 0, 0 }
};

acpienumeration en_P86_BOA[] = {
	{ "nO",	0	}, /* Inactive */
	{ "dYnA",	1	}, /* Dynamic */
	{ "StAt",	2	}, /* Static */
	{ "CStE",	3	}, /* Constant */
	{ "CMOt",	4	}, /* Conical motor */
	{ 0, 0 }
};

acpienumeration en_P86_BQM[] = {
	{ "nO",	0	}, /* Not configured */
	{ "StArt",	1	}, /* On start */
	{ "CHGdIr",	2	}, /* On Start + direction change */
	{ "MS",	3	}, /* On Master request */
	{ 0, 0 }
};

acpienumeration en_P86_BQMM[] = {
	{ "SEq",	0	}, /* Sequential */
	{ "SIMUL",	1	}, /* Simultaneous */
	{ 0, 0 }
};

acpienumeration en_P86_BRA[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* Yes */
	{ "dYnA",	2	}, /* High torque */
	{ 0, 0 }
};

acpienumeration en_P86_BRO[] = {
	{ "nO",	0	}, /* Ignore monitoring */
	{ "YES",	1	}, /* Warning triggered */
	{ "FLt",	2	}, /* Error triggered */
	{ 0, 0 }
};

acpienumeration en_P86_BSP[] = {
	{ "bSd",	0	}, /* Standard ref template */
	{ "bLS",	1	}, /* Pedestal at LSP */
	{ "bnS",	2	}, /* Deadband at LSP */
	{ "bnS0",	4	}, /* Deadband at 0 speed */
	{ 0, 0 }
};

acpienumeration en_P86_BST[] = {
	{ "HOr",	0	}, /* Cross traverse motion */
	{ "VEr",	1	}, /* Hoisting motion */
	{ 0, 0 }
};

acpienumeration en_P86_CAR[] = {
	{ "nO",	0	}, /* No Warning clearing */
	{ "rA1",	1	}, /* Clear Event 1 Warning */
	{ "rA2",	2	}, /* Clear Event 2 Warning */
	{ "rA3",	3	}, /* Clear Event 3 Warning */
	{ "rA4",	4	}, /* Clear Event 4 Warning */
	{ "rA5",	5	}, /* Clear Event 5 Warning */
	{ 0, 0 }
};

acpienumeration en_P86_CCA[] = {
	{ "nO",	0	}, /* Not Configured */
	{ "CPt",	1	}, /* Counter */
	{ "dt",	2	}, /* Date and Time */
	{ 0, 0 }
};

acpienumeration en_P86_CCS[] = {
	{ "0",	0	}, /* Mains or Control Supply ON */
	{ "1",	1	}, /* Mains Supply ON */
	{ "2",	2	}, /* Drive in Running State */
	{ 0, 0 }
};

acpienumeration en_P86_CDX[] = {
	{ "tEr",	1	}, /* Terminal block */
	{ "LCC",	3	}, /* Local HMI */
	{ "Mdb",	10	}, /* Modbus communication */
	{ "CAn",	20	}, /* CANopen communication */
	{ "nEt",	30	}, /* Ext. communication Module */
	{ "EtH",	40	}, /* Ethernet */
	{ 0, 0 }
};

acpienumeration en_P86_CFPS[] = {
	{ "nO",	0	}, /* Not Assigned */
	{ "CFP1",	1	}, /* Parameter set 1 */
	{ "CFP2",	2	}, /* Parameter set 2 */
	{ "CFP3",	3	}, /* Parameter set 3 */
	{ 0, 0 }
};

acpienumeration en_P86_CHCF[] = {
	{ "SIM",	1	}, /* Combined channel mode */
	{ "SEP",	2	}, /* Separated channel mode */
	{ "IO",	3	}, /* I/O mode */
	{ 0, 0 }
};

acpienumeration en_P86_CINR[] = {
	{ "0001",	20	}, /* 0.001 */
	{ "001",	30	}, /* 0.01 */
	{ "01",	40	}, /* 0.1 */
	{ "1",	50	}, /* 1 */
	{ "10",	60	}, /* 10 */
	{ 0, 0 }
};

acpienumeration en_P86_CIOA[] = {
	{ "20",	0	}, /* 20/70 */
	{ "21",	1	}, /* 21/71 */
	{ "100",	2	}, /* 100/101 */
	{ "UnCG",	3	}, /* Unconfigured */
	{ 0, 0 }
};

acpienumeration en_P86_CNFS[] = {
	{ "nO",	0	}, /* In progress */
	{ "CnF0",	1	}, /* Configuration set 1 */
	{ "CnF1",	2	}, /* Configuration set 2 */
	{ "CnF2",	3	}, /* Configuration set 3 */
	{ "CnF3",	4	}, /* Config 3 active */
	{ 0, 0 }
};

acpienumeration en_P86_CNL[] = {
	{ "tEr",	0	}, /* Terminal block */
	{ "LCC",	2	}, /* Local HMI */
	{ "Mdb",	3	}, /* Modbus communication 1 */
	{ "CAn",	6	}, /* CANopen communication */
	{ "nEt",	9	}, /* Ext. communication Module */
	{ "EtH",	11	}, /* Ethernet option module */
	{ "PWS",	15	}, /* PC tool */
	{ 0, 0 }
};

acpienumeration en_P86_COFM[] = {
	{ "HWCOF",	0	}, /* Measured */
	{ "SWCOF",	1	}, /* Computed */
	{ 0, 0 }
};

acpienumeration en_P86_COM1[] = {
	{ "r0t0",	0	}, /*  */
	{ "r0t1",	1	}, /*  */
	{ "r1t0",	2	}, /*  */
	{ "r1t1",	3	}, /*  */
	{ 0, 0 }
};

acpienumeration en_P86_COP[] = {
	{ "nO",	0	}, /* No copy */
	{ "SP",	1	}, /* Copy reference frequency */
	{ "Cd",	2	}, /* Copy command */
	{ "ALL",	3	}, /* Copy command & reference frequency */
	{ 0, 0 }
};

acpienumeration en_P86_CSA[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "AO1",	1	}, /* AQ1 assignment */
	{ "AO2",	2	}, /* AQ2 assignment */
	{ "PtO",	32	}, /* PTO */
	{ "PtOE",	34	}, /* Pulse output */
	{ "AIFr1",	129	}, /* Reference frequency 1 */
	{ "AIFr2",	130	}, /* Reference frequency 2 */
	{ "AISA2",	131	}, /* Reference frequency 2 Summing */
	{ "AIPIF",	132	}, /* PI controller feedback */
	{ "AItAA",	136	}, /* Torque limitation */
	{ "AIdA2",	137	}, /* Subtract Reference Frequency 2 */
	{ "AIPIM",	138	}, /* Manual PID reference */
	{ "AIFPI",	139	}, /* PID reference frequency */
	{ "AISA3",	160	}, /* Reference frequency 3 Summing */
	{ "AIFr1b",	161	}, /* Reference frequency 1B */
	{ "AIdA3",	162	}, /* Subtract Reference Frequency 3 */
	{ "AIFLOC",	163	}, /* Forced loc mode channel */
	{ "AIMA2",	164	}, /* Reference frequency 2 multiplier */
	{ "AIMA3",	165	}, /* Reference frequency 3 multiplier */
	{ "AItr1",	166	}, /* Torque reference 1 */
	{ "AIPES",	167	}, /* Weight sensor input */
	{ "AIAIC1",	168	}, /* Virtual AI1 channel  */
	{ "AItqO",	200	}, /* Torque reference offset */
	{ "AItqr",	201	}, /* Torque ref ratio */
	{ "AItAA2",	202	}, /* Torque limitation 2 */
	{ "AItr2",	203	}, /* Torque reference 2 */
	{ "FqF",	204	}, /* Frequency meter */
	{ "AItEFF",	205	}, /* External feed forward */
	{ "MSSI",	345	}, /* M/S Master speed reference input */
	{ "MStI",	346	}, /* M/S Master torque reference input */
	{ 0, 0 }
};

acpienumeration en_P86_CSLFN[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "FnJOG",	180	}, /* Jog */
	{ "FnPS1",	181	}, /* Preset Speed 1 */
	{ "FnPS2",	182	}, /* Preset Speed 2 */
	{ "FnPr1",	183	}, /* PID reference frequency 1 */
	{ "FnPr2",	184	}, /* PID reference frequency 2 */
	{ "FnUSP",	185	}, /* Increase speed */
	{ "FndSP",	186	}, /* Decrease speed */
	{ 0, 0 }
};

acpienumeration en_P86_CSLOUT[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "r2",	146	}, /* Relay R2 */
	{ "r3",	147	}, /* Relay R3 */
	{ "r4",	148	}, /* Relay R4 */
	{ "r5",	149	}, /* Relay R5 */
	{ "r6",	150	}, /* Relay R6 */
	{ "dO1",	161	}, /* DQ1 Digital Output */
	{ "dO2",	228	}, /* DQ2 Digital Output */
	{ "dO11",	163	}, /* DQ11 Digital Output  */
	{ "dO12",	164	}, /* DQ12 Digital Output  */
	{ 0, 0 }
};

acpienumeration en_P86_CTT[] = {
	{ "VVC",	0	}, /* Sensorless flux vector V */
	{ "FVC",	2	}, /* Full flux vector */
	{ "UF5",	4	}, /* U/F VC 5 point voltage/frequency */
	{ "SYn",	5	}, /* Synchronous motor */
	{ "nLd",	7	}, /* Energy Saving */
	{ "FSY",	9	}, /* Sync.CL */
	{ "SYnU",	10	}, /* SYN_U VC law */
	{ "SrVC",	12	}, /* Reluctance Motor */
	{ 0, 0 }
};

acpienumeration en_P86_DCRC[] = {
	{ "nO",	0	}, /* Ignore monitoring */
	{ "WArn",	1	}, /* Warning triggered */
	{ "FLt",	2	}, /* Error triggered */
	{ 0, 0 }
};

acpienumeration en_P86_DLR[] = {
	{ "dLr0",	0	}, /* Drive Locked */
	{ "dLr1",	1	}, /* Drive unlocked */
	{ "dLr2",	2	}, /* Download not allowed */
	{ "dLr3",	3	}, /* Combined Lock/Unlock */
	{ 0, 0 }
};

acpienumeration en_P86_DOTD[] = {
	{ "nSt",	0	}, /* Drive freewheel stop */
	{ "rMP",	1	}, /* Ramp stop */
	{ 0, 0 }
};

acpienumeration en_P86_DPMA[] = {
	{ "1",	1	}, /* Master 1 */
	{ "2",	2	}, /* Master 2 */
	{ 0, 0 }
};

acpienumeration en_P86_DRT[] = {
	{ "nOrMAL",	0	}, /* Normal duty */
	{ "HIGH",	1	}, /* High duty */
	{ 0, 0 }
};

acpienumeration en_P86_DSF[] = {
	{ "Std",	0	}, /* Standard */
	{ "OPt",	1	}, /* Optimized */
	{ 0, 0 }
};

acpienumeration en_P86_DUR[] = {
	{ "5",	0	}, /* 5 minutes */
	{ "10",	1	}, /* 10 minutes */
	{ "30",	2	}, /* 30 minutes */
	{ "1H",	3	}, /* 1 hour */
	{ "2H",	4	}, /* 2 hours */
	{ "3H",	5	}, /* 3 hours */
	{ "Ct",	6	}, /* Unlimited */
	{ 0, 0 }
};

acpienumeration en_P86_ECFG[] = {
	{ "nO",	0	}, /* Ignore */
	{ "YES",	1	}, /* Freewheel stop */
	{ "Stt",	2	}, /* Per STT */
	{ "LFF",	4	}, /* Fallback speed */
	{ "rLS",	5	}, /* Speed maintained */
	{ "rMP",	6	}, /* Ramp stop */
	{ "FSt",	7	}, /* Fast stop */
	{ "dCI",	8	}, /* DC injection */
	{ 0, 0 }
};

acpienumeration en_P86_EECP[] = {
	{ "nOnE",	0	}, /* None */
	{ "Ab",	1	}, /* AB */
	{ "SC",	2	}, /* SinCos */
	{ 0, 0 }
};

acpienumeration en_P86_EECV[] = {
	{ "5V",	5	}, /* 5 Vdc */
	{ "12V",	12	}, /* 12 Vdc */
	{ "24V",	24	}, /* 24 Vdc */
	{ 0, 0 }
};

acpienumeration en_P86_EFDR[] = {
	{ "nO",	0	}, /* No error */
	{ "tOUt",	1	}, /* Server timeout */
	{ "SnF",	2	}, /* Server no file */
	{ "CrPt",	3	}, /* Server corrupt file */
	{ "EPtY",	4	}, /* Server empty file */
	{ "HInV",	5	}, /* Drive invalid file */
	{ "CrC",	6	}, /* CRC error */
	{ "VrM",	7	}, /* Version incompatibility */
	{ "HnF",	9	}, /* Drive no file */
	{ "SIZE",	10	}, /* Server reading Size */
	{ "OPEn",	11	}, /* Drive opening file */
	{ "rEAd",	12	}, /* Drive reading file */
	{ "SCnt",	13	}, /* Incompatibility */
	{ "nInV",	14	}, /* Drive invalid name */
	{ "FSIZ",	15	}, /* Server incorrect file size */
	{ "HWF",	16	}, /* Drive writing file */
	{ "SWF",	17	}, /* Server writing file */
	{ 0, 0 }
};

acpienumeration en_P86_EMDT[] = {
	{ "KWCt",	0	}, /* KW Counter */
	{ "CVE",	1	}, /* Instantaneous kW trend */
	{ "HSd",	2	}, /* Daily kWh report */
	{ "HSW",	3	}, /* Weekly kWh report */
	{ "HSM",	4	}, /* Monthly kWh report */
	{ "HSY",	5	}, /* Yearly kWh report */
	{ 0, 0 }
};

acpienumeration en_P86_ENC[] = {
	{ "nO",	0	}, /* Encoder check not done */
	{ "YES",	1	}, /* Encoder check requested */
	{ "dOnE",	2	}, /* Encoder check completed */
	{ 0, 0 }
};

acpienumeration en_P86_ENS[] = {
	{ "AAbb",	1	}, /* For signals A/A-/B/B- */
	{ "Ab",	2	}, /* For signals A/B */
	{ "A",	3	}, /* For signal A */
	{ 0, 0 }
};

acpienumeration en_P86_ENSP[] = {
	{ "200k",	1	}, /* 200 kHz */
	{ "1M",	9	}, /* 1 MHz */
	{ 0, 0 }
};

acpienumeration en_P86_ENU[] = {
	{ "nO",	0	}, /* Inactive */
	{ "SEC",	1	}, /* Speed feedback monitoring */
	{ "rEG",	2	}, /* Speed feedback regulation */
	{ "PGr",	3	}, /* Encoder as speed ref */
	{ 0, 0 }
};

acpienumeration en_P86_ETST[] = {
	{ "InIt",	1	}, /* Init */
	{ "PrOP",	2	}, /* PreOp */
	{ "bOOt",	3	}, /* Boot */
	{ "SFOP",	4	}, /* SafeOp */
	{ "OP",	8	}, /* Op */
	{ 0, 0 }
};

acpienumeration en_P86_FCS[] = {
	{ "nO",	0	}, /* No */
	{ "rEC0",	1	}, /* Recall customer parameter set 0 */
	{ "rEC1",	2	}, /* Recall customer parameter set 1 */
	{ "rEC2",	3	}, /* Recall customer parameter set 2 */
	{ "rEC3",	4	}, /* Recall customer parameter set 3 */
	{ "InI",	64	}, /* Recall default parameter set */
	{ "InI1",	71	}, /* Recall OEM default parameter set */
	{ 0, 0 }
};

acpienumeration en_P86_FCSI[] = {
	{ "InI",	0	}, /* Macro configuration */
	{ "CFG1",	2	}, /* Configuration 1 */
	{ "CFG2",	3	}, /* Configuration 2 */
	{ "CFG3",	4	}, /* Config 3 */
	{ 0, 0 }
};

acpienumeration en_P86_FDRA[] = {
	{ "IdLE",	0	}, /* NOT ACTIVE */
	{ "SAVE",	1	}, /* SAVE */
	{ "rESt",	2	}, /* REST */
	{ 0, 0 }
};

acpienumeration en_P86_FFM[] = {
	{ "Std",	0	}, /* Standard */
	{ "rUn",	1	}, /* Always */
	{ "StP",	2	}, /* Never */
	{ "ECO",	3	}, /* Economy */
	{ 0, 0 }
};

acpienumeration en_P86_FLR[] = {
	{ "nO",	0	}, /* Not configured */
	{ "YES",	1	}, /* Yes on freewheel */
	{ "ALL",	2	}, /* Yes always */
	{ 0, 0 }
};

acpienumeration en_P86_FLU[] = {
	{ "FnC",	0	}, /* Not continuous */
	{ "FCt",	1	}, /* Continuous */
	{ "FnO",	2	}, /* No */
	{ 0, 0 }
};

acpienumeration en_P86_FOR[] = {
	{ "8O1",	2	}, /* 8bit odd parity 1stop bit */
	{ "8E1",	3	}, /* 8 bits even parity 1 stop bit */
	{ "8n1",	4	}, /* 8bit no parity 1stop bit */
	{ "8n2",	5	}, /* 8bit no parity 2stop bits */
	{ 0, 0 }
};

acpienumeration en_P86_FWER[] = {
	{ "nO",	0	}, /* No error */
	{ "LOCK",	1	}, /* Lock error */
	{ "Md5",	2	}, /* Package error */
	{ "COMP",	3	}, /* Package compatibility error */
	{ "ASK",	4	}, /* Ask error */
	{ "rESEt",	5	}, /* Reset drive error */
	{ "SAVE",	6	}, /* Configuration saving warning */
	{ "LOAd",	7	}, /* Conf loading  warning */
	{ "SCP",	8	}, /* Post Script warning */
	{ "dES",	9	}, /* Package Description error */
	{ "PKG",	10	}, /* Package not found */
	{ "SPWr",	11	}, /* Power Supply error */
	{ "btM3",	12	}, /* Boot M3 error */
	{ "btC28",	13	}, /* Boot C28 error */
	{ "M3",	14	}, /* M3 error */
	{ "C28",	15	}, /* C28 error */
	{ "CPLd",	16	}, /* CPLD error */
	{ "PWr",	17	}, /* Boot power error */
	{ "EMbt",	18	}, /* Embedded ethernet boot error */
	{ "EMIL",	19	}, /* Embedded ethernet error */
	{ "EMWb",	20	}, /* Embedded ethernet WebServer error */
	{ "OPtbt",	21	}, /* Module ethernet boot error */
	{ "OPtIL",	22	}, /* Module ethernet error */
	{ "OPtWb",	23	}, /* Module ethernet WebServer error */
	{ "PSWd",	24	}, /* Password enabled */
	{ "MEM",	25	}, /* Flash error */
	{ "IFO",	26	}, /* Package error */
	{ "WAIt",	27	}, /* Wait */
	{ 0, 0 }
};

acpienumeration en_P86_FWST[] = {
	{ "CHECK",	0	}, /* Firmware update  inactive */
	{ "POWEr",	1	}, /* Power update in progress */
	{ "PEnd",	2	}, /* Power update pending */
	{ "rdY",	3	}, /* Firmware update ready */
	{ "nO",	4	}, /* Firmware update  inactive */
	{ "SUCCd",	5	}, /* Firmware update succeded */
	{ "FAILEd",	6	}, /* Update Error */
	{ "PrOG",	7	}, /* Firmware update in progress */
	{ "rqStd",	8	}, /* Firmware update requested */
	{ "trLd",	9	}, /* Transfer In Progress */
	{ "trOK",	10	}, /* Transfer Done */
	{ "CLEAr",	11	}, /* Package cleared */
	{ "SUCWr",	12	}, /* Firmware update succeded with warnings */
	{ "FLStA",	13	}, /* Drive State Error */
	{ "FLPKG",	14	}, /* Package Error */
	{ "SAVE",	15	}, /* Saving current configuration */
	{ "POSt",	16	}, /* Post Script */
	{ 0, 0 }
};

acpienumeration en_P86_HMIS[] = {
	{ "tUn",	0	}, /* Drive automatic tuning */
	{ "dCb",	1	}, /* DC injection */
	{ "rdY",	2	}, /* Ready */
	{ "nSt",	3	}, /* Freewheel stop */
	{ "rUn",	4	}, /* Running */
	{ "ACC",	5	}, /* Accelerating */
	{ "dEC",	6	}, /* Decelerating */
	{ "CLI",	7	}, /* In current limitation */
	{ "FSt",	8	}, /* Fast stop */
	{ "FLU",	9	}, /* Motor fluxing  */
	{ "nLP",	11	}, /* No Mains voltage */
	{ "CtL",	13	}, /* Control stopping */
	{ "Obr",	14	}, /* Dec ramp adaptation */
	{ "SOC",	15	}, /* Output cut */
	{ "USA",	17	}, /* Undervoltage Warning */
	{ "tC",	18	}, /* TC Mode active */
	{ "St",	19	}, /* In autotest */
	{ "FA",	20	}, /* Autotest error */
	{ "OK",	21	}, /* Autotest OK */
	{ "EP",	22	}, /* EEprom test */
	{ "FLt",	23	}, /* Operating state "Fault" */
	{ "dCP",	25	}, /* DCP Flashing Mode */
	{ "StO",	30	}, /* STO active */
	{ "FWUP",	36	}, /* Firmware Update */
	{ "ASA",	38	}, /* Angle test */
	{ 0, 0 }
};

acpienumeration en_P86_HSO[] = {
	{ "nO",	0	}, /* Inactive */
	{ "SSO",	1	}, /* Reference frequency  */
	{ "CSO",	2	}, /* Current limit */
	{ 0, 0 }
};

acpienumeration en_P86_INCPER[] = {
	{ "001",	0	}, /* 0.01% */
	{ "01",	1	}, /* 0.1% */
	{ "1",	2	}, /* 1% */
	{ 0, 0 }
};

acpienumeration en_P86_INR[] = {
	{ "001",	0	}, /* hundredths of seconds */
	{ "01",	1	}, /* Tenths of seconds */
	{ "1",	2	}, /* seconds */
	{ 0, 0 }
};

acpienumeration en_P86_IPAE[] = {
	{ "IdLE",	0	}, /* Idle State */
	{ "InIt",	1	}, /* Init */
	{ "COnF",	2	}, /* Configuration */
	{ "rdY",	3	}, /* Ready */
	{ "OPE",	4	}, /* Operational */
	{ "UCFG",	5	}, /* Not Configured */
	{ "UrEC",	6	}, /* Unrecoverable error */
	{ 0, 0 }
};

acpienumeration en_P86_IPM[] = {
	{ "MAnU",	0	}, /* Fixed address */
	{ "bOOtP",	1	}, /* BOOTP */
	{ "dHCP",	2	}, /* DHCP */
	{ "dCP",	3	}, /* DCP */
	{ 0, 0 }
};

acpienumeration en_P86_LAC[] = {
	{ "bAS",	0	}, /* Basic access */
	{ "Std",	1	}, /* Standard access */
	{ "EPr",	3	}, /* Expert access */
	{ "SEr",	4	}, /* Services */
	{ 0, 0 }
};

acpienumeration en_P86_LDD[] = {
	{ "nO",	0	}, /* Distribution logging disable */
	{ "rFr",	1	}, /* Motor frequency */
	{ "LCr",	2	}, /* Motor current */
	{ "SPd",	3	}, /* Motor Speed */
	{ "UOP",	4	}, /* Motor voltage */
	{ "OPrW",	5	}, /* Motor mechanical power */
	{ "IPrW",	6	}, /* Input Electrical Power */
	{ "EPrW",	7	}, /* Output Electrical Power */
	{ "Otr",	8	}, /* Motor torque */
	{ "ULn",	9	}, /* Mains Voltage */
	{ "VbUS",	10	}, /* DC BUS Voltage */
	{ "rPF",	11	}, /* PID Feedback */
	{ "tH2V",	12	}, /* AI2 thermal value */
	{ "tH3V",	13	}, /* AI3 thermal value */
	{ "tH4V",	14	}, /* AI4 thermal value */
	{ "tH5V",	15	}, /* AI5 thermal value */
	{ "tHd",	16	}, /* Drive Thermal State */
	{ "tHr",	17	}, /* Motor Thermal State */
	{ "FS1V",	18	}, /* Installation Flow */
	{ "FS2V",	19	}, /* Pump Flow */
	{ "PS1V",	20	}, /* Inlet Pressure */
	{ "PS2V",	21	}, /* Outlet Pressure */
	{ "ECI",	22	}, /* Energy consumption indicator */
	{ "EFY",	23	}, /* Pump efficiency */
	{ "EPI",	24	}, /* Energy Performance Indicator */
	{ "ILn",	25	}, /* Mains Current */
	{ "IqrW",	26	}, /* Input reactive power */
	{ "PWF",	27	}, /* Input power factor */
	{ "tH1V",	28	}, /* AI1 thermal value */
	{ "tHb",	29	}, /* DBR thermal state */
	{ 0, 0 }
};

acpienumeration en_P86_LDEN[] = {
	{ "StOP",	0	}, /* Stop */
	{ "StArt",	1	}, /* Start */
	{ "ALWAYS",	2	}, /* Always */
	{ "rESEt",	3	}, /* Reset */
	{ "CLEAr",	4	}, /* Clear */
	{ "ErrOr",	5	}, /* Error */
	{ 0, 0 }
};

acpienumeration en_P86_LDST[] = {
	{ "200MS",	2	}, /* 200 ms */
	{ "1S",	10	}, /* 1 second */
	{ "2S",	20	}, /* 2 seconds */
	{ "5S",	50	}, /* 5 seconds */
	{ 0, 0 }
};	

acpienumeration en_P86_LFT[] = {
	{ "nOF",	0	}, /* No error detected */
	{ "EEF1",	2	}, /* EEPROM control */
	{ "CFF",	3	}, /* Incorrect configuration */
	{ "CFI",	4	}, /* Invalid configuration */
	{ "SLF1",	5	}, /* Modbus communication interruption */
	{ "ILF",	6	}, /* Internal communication interruption with option module  */
	{ "CnF",	7	}, /* Fieldbus communication interruption */
	{ "EPF1",	8	}, /* External detected error */
	{ "OCF",	9	}, /* Overcurrent */
	{ "CrF1",	10	}, /* Precharge capacitor */
	{ "SPF",	11	}, /* Encoder feedback loss */
	{ "AnF",	12	}, /* Load slipping */
	{ "IHF",	15	}, /* Input Overheating */
	{ "OHF",	16	}, /* Drive overheating */
	{ "OLF",	17	}, /* Motor overload */
	{ "ObF",	18	}, /* DC bus overvoltage */
	{ "OSF",	19	}, /* Supply mains overvoltage */
	{ "OPF1",	20	}, /* Single output phase loss */
	{ "PHF",	21	}, /* Input phase loss */
	{ "USF",	22	}, /* Supply mains undervoltage */
	{ "SCF1",	23	}, /* Motor short circuit */
	{ "SOF",	24	}, /* Motor overspeed */
	{ "tnF",	25	}, /* Autotuning detected error */
	{ "InF1",	26	}, /* Internal Error 1 (Rating) */
	{ "InF2",	27	}, /* Internal Error 2 (Soft) */
	{ "InF3",	28	}, /* Internal Error 3 (Intern Comm) */
	{ "InF4",	29	}, /* Internal Error 4 (Manufacturing) */
	{ "EEF2",	30	}, /* EEPROM power */
	{ "SCF3",	32	}, /* Ground short circuit */
	{ "OPF2",	33	}, /* Output phase loss */
	{ "COF",	34	}, /* CANopen communication interruption */
	{ "bLF",	35	}, /* Brake control */
	{ "InF7",	37	}, /* Internal Error 7 (Init) */
	{ "EPF2",	38	}, /* External error detected by Fieldbus */
	{ "InF8",	40	}, /* Internal error 8 (Switching Supply) */
	{ "brF",	41	}, /* Brake feedback */
	{ "SLF2",	42	}, /* PC communication interruption */
	{ "ECF",	43	}, /* Encoder coupling */
	{ "SSF",	44	}, /* Torque limitation error */
	{ "SLF3",	45	}, /* HMI communication interruption */
	{ "InF9",	51	}, /* Internal Error 9 (Measure) */
	{ "InFA",	52	}, /* Internal Error 10 (Mains) */
	{ "InFb",	53	}, /* Internal Error 11 (Temperature) */
	{ "tJF",	54	}, /* IGBT overheating */
	{ "SCF4",	55	}, /* IGBT short circuit */
	{ "SCF5",	56	}, /* Motor short circuit */
	{ "SrF",	57	}, /* Torque timeout */
	{ "FCF1",	58	}, /* Output contactor closed error */
	{ "FCF2",	59	}, /* Output contactor opened error */
	{ "InFC",	60	}, /* Internal Error 12 (Internal current supply) */
	{ "EnF",	62	}, /* Encoder */
	{ "LCF",	64	}, /* input contactor */
	{ "bUF",	65	}, /* DB unit sh. circuit */
	{ "InF6",	68	}, /* Internal Error 6 (Option) */
	{ "InFE",	69	}, /* Internal Error 14 (CPU) */
	{ "bOF",	70	}, /* Braking resistor overload */
	{ "LFF3",	71	}, /* AI3 4-20mA loss */
	{ "LFF4",	72	}, /* AI4 4-20mA loss */
	{ "HCF",	73	}, /* Boards compatibility */
	{ "dLF",	76	}, /* Dynamic load detected error */
	{ "CFI2",	77	}, /* Configuration transfer error */
	{ "LFF5",	79	}, /* AI5 4-20 mA loss */
	{ "CSF",	99	}, /* Channel switching detected error */
	{ "ULF",	100	}, /* Process Underload */
	{ "OLC",	101	}, /* Process overload */
	{ "ASF",	105	}, /* Angle error */
	{ "LFF1",	106	}, /* AI1 4-20 mA loss */
	{ "SAFF",	107	}, /* Safety function detected error */
	{ "tH3F",	112	}, /* AI3 thermal level error */
	{ "t3CF",	113	}, /* Thermal sensor error on AI3 */
	{ "tH4F",	120	}, /* AI4 thermal level error */
	{ "t4CF",	121	}, /* Thermal sensor error on AI4 */
	{ "tH5F",	122	}, /* AI5 thermal level error */
	{ "t5CF",	123	}, /* Thermal sensor error on AI5 */
	{ "PGLF",	128	}, /* Program loading detected error */
	{ "PGrF",	129	}, /* Program running detected error */
	{ "InFG",	142	}, /* Internal Error 16 (IO Module - Relay) */
	{ "InFH",	143	}, /* Internal Error 17 (IO Module - Standard) */
	{ "InF0",	144	}, /* Internal Error 0 (IPC) */
	{ "InFd",	146	}, /* Internal Error 13 (Diff Current) */
	{ "StF",	148	}, /* Motor stall detected error */
	{ "InFL",	149	}, /* Internal Error 21 (RTC) */
	{ "EtHF",	150	}, /* Embedded Ethernet communication interruption */
	{ "InFF",	151	}, /* Internal Error 15 (Flash) */
	{ "FWEr",	152	}, /* Firmware Update Error */
	{ "InFM",	153	}, /* Internal Error 22 (Embedded Ethernet) */
	{ "InFP",	154	}, /* Internal Error 25 (Incompatibility CB & SW) */
	{ "InFK",	155	}, /* Internal Error 20 (option interface PCBA) */
	{ "InFJ",	156	}, /* Internal Error 19 (Encoder module) */
	{ "InFr",	157	}, /* Internal Error 27 (Diagnostics CPLD) */
	{ "InFn",	158	}, /* Internal Error 23 (Module link) */
	{ "SCF6",	159	}, /* AFE ShortCircuit error */
	{ "ObF2",	160	}, /* AFE Bus unbalancing  */
	{ "InFS",	161	}, /* Internal Error 28 (AFE) */
	{ "CHF",	173	}, /* Cabinet overheat  error */
	{ "InFV",	175	}, /* Internal Error 31 (Missing brick) */
	{ "InFt",	176	}, /* Internal Error 29 (Inverter) */
	{ "InFU",	177	}, /* Internal Error 30 (Rectifier) */
	{ "tJF2",	179	}, /* AFE IGBT over-heat error */
	{ "CrF3",	180	}, /* AFE contactor feedback error */
	{ "CFI3",	181	}, /* Pre-settings transfer error */
	{ "CbF",	182	}, /* Circuit breaker error */
	{ "bUFO",	184	}, /* DB unit open circuit */
	{ "tLOF",	185	}, /* Drive overload */
	{ "MdLF",	186	}, /* MultiDrive Link Error */
	{ "tH1F",	187	}, /* AI1 thermal level error */
	{ "t1CF",	188	}, /* Thermal sensor error on AI1 */
	{ "bSqF",	189	}, /* Backlash error */
	{ "MSdF",	190	}, /* M/S device error */
	{ "tHEF",	194	}, /* Encoder module thermal level error */
	{ "tECF",	195	}, /* Thermal sensor error on encoder module */
	{ "CFI4",	196	}, /* Empty configuration */
	{ "Fdr1",	200	}, /* FDR Eth embedded error */
	{ "Fdr2",	201	}, /* FDR Eth module error */
	{ "dCrE",	206	}, /* DC Bus ripple error */
	{ "IdLF",	208	}, /* Idle mode exit error */
	{ "MdCF",	209	}, /* Load movement error */
	{ 0, 0 }
};

acpienumeration en_P86_MDT[] = {
	{ "dEC",	0	}, /* Digital values */
	{ "bAr",	1	}, /* Bar graph */
	{ "LISt",	2	}, /* List of values */
	{ "VUMEt",	3	}, /* Vu Meter */
	{ 0, 0 }
};

acpienumeration en_P86_MPC[] = {
	{ "nPr",	0	}, /* Nominal motor Power */
	{ "COS",	1	}, /* Nominal motor cosinus Phi */
	{ 0, 0 }
};

acpienumeration en_P86_MSCM[] = {
	{ "nO",	0	}, /* Inactive */
	{ "MdL",	1	}, /* MultiDrive link */
	{ "AnA",	2	}, /* Analog */
	{ 0, 0 }
};

acpienumeration en_P86_MSCT[] = {
	{ "trqd",	1	}, /* Direct torque control   */
	{ "trqr",	2	}, /* Reverse torque control  */
	{ "trqC",	3	}, /* Custom torque control */
	{ "SPdd",	4	}, /* Direct speed control   */
	{ "SPdr",	5	}, /* Reverse speed control  */
	{ 0, 0 }
};

acpienumeration en_P86_MSDT[] = {
	{ "MStEr",	0	}, /* Master */
	{ "SLAVE",	1	}, /* Slave */
	{ 0, 0 }
};

acpienumeration en_P86_MSID[] = {
	{ "MStEr",	1	}, /* Master */
	{ "SLV1",	2	}, /* Slave 1 */
	{ "SLV2",	3	}, /* Slave 2 */
	{ "SLV3",	4	}, /* Slave 3 */
	{ "SLV4",	5	}, /* Slave 4 */
	{ "SLV5",	6	}, /* Slave 5 */
	{ "SLV6",	7	}, /* Slave 6 */
	{ "SLV7",	8	}, /* Slave 7 */
	{ "SLV8",	9	}, /* Slave 8 */
	{ "SLV9",	10	}, /* Slave 9 */
	{ "SLV10",	11	}, /* Slave 10 */
	{ 0, 0 }
};

acpienumeration en_P86_MSMC[] = {
	{ "rIGId",	1	}, /* Rigid coupling */
	{ "ELASt",	2	}, /* Elastic coupling */
	{ 0, 0 }
};

acpienumeration en_P86_MSS[] = {
	{ "nOnE",	0	}, /* Not configured */
	{ "nACt",	1	}, /* M/S local control */
	{ "nrdY",	2	}, /* M/S not ready */
	{ "rEAdY",	3	}, /* M/S ready */
	{ "rUn",	4	}, /* M/S running */
	{ "ALArM",	5	}, /* M/S warning */
	{ 0, 0 }
};

acpienumeration en_P86_MSSS[] = {
	{ "nO",	0	}, /* Not applied */
	{ "brMP",	1	}, /* Before Ramp */
	{ "ArMP",	2	}, /* After Ramp */
	{ "bCtrL",	3	}, /* Before speed control loop */
	{ 0, 0 }
};

acpienumeration en_P86_MSTS[] = {
	{ "nO",	0	}, /* Not applied */
	{ "bFILt",	1	}, /* Before advanced filter */
	{ "AFILt",	2	}, /* After advanced filter */
	{ 0, 0 }
};

acpienumeration en_P86_NCV[] = {
	{ "nO",	0	}, /* Unknown rating */
	{ "U010",	1	}, /* 0.10kW - 0.2HP */
	{ "U018",	2	}, /* 0.18 kW / 0.25 Hp */
	{ "U025",	3	}, /* 0.25kW - 0.37HP */
	{ "U037",	4	}, /* 0.37 kW / 0.5 Hp */
	{ "U055",	5	}, /* 0.55 kW / 0.75 Hp */
	{ "U075",	6	}, /* 0.75 kW / 1 Hp */
	{ "U090",	7	}, /* 5.5kW - 7.5HP */
	{ "U110",	8	}, /* 1.1 kW / 1.5 Hp */
	{ "U150",	9	}, /* 1.5 kW / 2 Hp */
	{ "U185",	10	}, /* 1.85kW - 3HP */
	{ "U220",	11	}, /* 2.2 kW / 3 Hp */
	{ "U300",	12	}, /* 3 kW / 4HP */
	{ "U370",	13	}, /* 3.7kW - 5HP */
	{ "U400",	14	}, /* 4kW - 5HP */
	{ "U550",	15	}, /* 5.5 kW / 7.5 Hp */
	{ "U750",	16	}, /* 7.5 kW / 10 Hp */
	{ "U900",	17	}, /* 9kW - 11HP */
	{ "d110",	18	}, /* 11 kW / 15 HP */
	{ "d150",	19	}, /* 15 kW / 20 HP */
	{ "d185",	20	}, /* 18.5kW - 25HP */
	{ "d220",	21	}, /* 22kW - 30HP */
	{ "d300",	22	}, /* 30kW - 40HP */
	{ "d370",	23	}, /* 37kW - 50HP */
	{ "d450",	24	}, /* 45kW - 60HP */
	{ "d550",	25	}, /* 55kW - 75HP */
	{ "d750",	26	}, /* 75kW - 100HP */
	{ "d900",	27	}, /* 90kW - 125HP */
	{ "C110",	28	}, /* 110kW - 150HP */
	{ "C132",	29	}, /* 132kW - 200HP */
	{ "C160",	30	}, /* 160kW - 250HP */
	{ "C200",	31	}, /* 200kW - 300HP */
	{ "C220",	32	}, /* 220kW - 350HP */
	{ "C250",	33	}, /* 250kW - 400HP */
	{ "C280",	34	}, /* 280kW - 450HP */
	{ "C315",	35	}, /* 315kW - 500HP */
	{ "C355",	36	}, /* 355kW - 450HP */
	{ "C400",	37	}, /* 400kW - 600HP */
	{ "C450",	38	}, /* 450kW - 750HP */
	{ "C500",	39	}, /* 500kW - 800HP */
	{ "C560",	40	}, /* 560kW - 850HP */
	{ "C630",	41	}, /* 630kW -900HP */
	{ "C710",	42	}, /* 710kW -950HP */
	{ "C800",	43	}, /* 800kW - 1000HP */
	{ 0, 0 }
};

acpienumeration en_P86_NFL[] = {
	{ "nO",	0	}, /* No */
	{ "1St",	1	}, /* First */
	{ "2nd",	2	}, /* Second */
	{ "ALL",	3	}, /* All */
	{ 0, 0 }
};

acpienumeration en_P86_NMTS[] = {
	{ "bOOt",	0	}, /* On boot up */
	{ "StOP",	2	}, /* Stopped */
	{ "OPE",	1	}, /* Operational */
	{ "POPE",	4	}, /* Pre operation */
	{ 0, 0 }
};

acpienumeration en_P86_NPL[] = {
	{ "POS",	0	}, /* 1 */
	{ "nEG",	1	}, /* 0 */
	{ 0, 0 }
};

acpienumeration en_P86_N_Y[] = {
	{ "nO",	0	}, /* No */
	{ "YES",	1	}, /* Yes */
	{ 0, 0 }
};

acpienumeration en_P86_OPL[] = {
	{ "nO",	0	}, /* Function inactive */
	{ "YES",	1	}, /* OPF error Triggered */
	{ "OAC",	2	}, /* No error triggered */
	{ 0, 0 }
};

acpienumeration en_P86_OVMA[] = {
	{ "dEFAULt",	0	}, /* Default */
	{ "FULL",	255	}, /* Full */
	{ 0, 0 }
};

acpienumeration en_P86_PGA[] = {
	{ "EnC",	0	}, /* Encoder */
	{ "PtG",	1	}, /* Frequency generator */
	{ 0, 0 }
};

acpienumeration en_P86_PHR[] = {
	{ "AbC",	0	}, /* A  - B - C phase rotation */
	{ "ACb",	1	}, /* A  - C - B phase rotation */
	{ 0, 0 }
};

acpienumeration en_P86_PKTP[] = {
	{ "Prd",	0	}, /* Product package */
	{ "OPt",	1	}, /* Module package */
	{ "SPr",	2	}, /* Spare parts package */
	{ "CUS",	3	}, /* Customized package */
	{ "Ind",	4	}, /* Indus package */
	{ 0, 0 }
};

acpienumeration en_P86_PRFL[] = {
	{ "UnCG",	0	}, /* Not configured */
	{ "1",	1	}, /* 1 */
	{ "100",	100	}, /* 100 */
	{ "101",	101	}, /* 101 */
	{ "102",	102	}, /* 102 */
	{ "106",	106	}, /* 106 */
	{ "107",	107	}, /* 107 */
	{ 0, 0 }
};

acpienumeration en_P86_PSA[] = {
	{ "nO",	0	}, /* Not configured */
	{ "AI1",	1	}, /* AI1 Analog input */
	{ "AI2",	2	}, /* AI2 Analog input */
	{ "AI3",	3	}, /* AI3 Analog input */
	{ "AI4",	4	}, /* AI4 Analog input */
	{ "AI5",	5	}, /* AI5 Analog input */
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
	{ "OPr",	139	}, /* Motor power  */
	{ "tHr",	140	}, /* Motor thermal state */
	{ "tHd",	141	}, /* Drive thermal state */
	{ "tr4q",	142	}, /* Torque 4Q */
	{ "OFrr",	143	}, /* Measured motor frequency */
	{ "UPdt",	160	}, /* Reference frequency via DI */
	{ "LCC",	163	}, /* Reference Frequency via remote terminal */
	{ "Mdb",	164	}, /* Reference Frequency via Modbus */
	{ "CAn",	167	}, /* Reference Frequency via CANopen */
	{ "nEt",	169	}, /* Reference Frequency via Com Module */
	{ "EtH",	171	}, /* Embedded Ethernet */
	{ "OFS",	173	}, /* Signed output frequency */
	{ "tHr2",	174	}, /* Motor thermal 2 state */
	{ "tHr3",	175	}, /* Motor thermal 3 state */
	{ "tHr4",	176	}, /* Motor thermal 4 state */
	{ "Utr",	177	}, /* Unsigned torque reference */
	{ "Str",	178	}, /* Signed torque reference */
	{ "tqL",	179	}, /* Torque limit */
	{ "UOP",	180	}, /* Motor voltage */
	{ "AIV1",	183	}, /* AI Virtual 1 */
	{ "dO1",	184	}, /* Digital output 1 */
	{ "PI7",	188	}, /* DI7 PulseInput */
	{ "PI8",	189	}, /* DI8 PulseInput */
	{ "PI",	181	}, /* Pulse input */
	{ "PG",	182	}, /* Encoder reference */
	{ "MSSO",	344	}, /* M/S output speed reference */
	{ "MStO",	345	}, /* M/S output torque reference */
	{ 0, 0 }
};

acpienumeration en_P86_PSL[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "FLt",	1	}, /* Drive in operating state "Fault" */
	{ "rUn",	2	}, /* Drive running */
	{ "OCC",	3	}, /* Ouput contactor control */
	{ "FtA",	4	}, /* Motor frequency high threshold reached */
	{ "FLA",	5	}, /* High speed reached */
	{ "CtA",	6	}, /* Current threshold reached */
	{ "SrA",	7	}, /* Reference frequency  reached */
	{ "tSA",	8	}, /* Motor thermal threshold reached */
	{ "bLC",	9	}, /* Brake sequence */
	{ "PEE",	10	}, /* PID error Warning */
	{ "PFA",	11	}, /* PID feedback Warning */
	{ "F2A",	13	}, /* Motor frequency high threshold 2 reached */
	{ "tAd",	14	}, /* Drive thermal threshold reached */
	{ "rtAH",	16	}, /* Reference frequency high threshold reached */
	{ "rtAL",	17	}, /* Reference frequency low threshold reached */
	{ "FtAL",	18	}, /* Motor frequency low threshold reached */
	{ "F2AL",	19	}, /* Motor frequency low threshold 2 reached */
	{ "CtAL",	20	}, /* Low Current Threshold Reached */
	{ "ULA",	21	}, /* Process underload Warning */
	{ "OLA",	22	}, /* Process Overload Warning */
	{ "PFAH",	23	}, /* PID High Feedback Warning */
	{ "PFAL",	24	}, /* PID Low Feedback Warning */
	{ "PISH",	25	}, /* Regulation Warning */
	{ "rSdA",	27	}, /* Slack rope Warning */
	{ "ttHA",	28	}, /* High torque Warning */
	{ "ttLA",	29	}, /* Low torque Warning */
	{ "MFrd",	30	}, /* Run forward */
	{ "MrrS",	31	}, /* Run reverse */
	{ "rP2",	34	}, /* Ramp switching */
	{ "tS2",	37	}, /* Motor 2 thermal threshold reached */
	{ "tS3",	38	}, /* Motor 3 thermal threshold reached */
	{ "tS4",	39	}, /* Motor 4 thermal threshold reached */
	{ "bMP",	42	}, /* HMI command */
	{ "AtS",	47	}, /* Negative torque */
	{ "CnF0",	48	}, /* Configuration 0 active */
	{ "CnF1",	49	}, /* Configuration 1 active */
	{ "CnF2",	50	}, /* Configuration 2 active */
	{ "CnF3",	51	}, /* Configuration 3 active */
	{ "CFP1",	52	}, /* Parameter set 1 active */
	{ "CFP2",	53	}, /* Parameter set 2 active */
	{ "CFP3",	54	}, /* Parameter set 3 active */
	{ "dbL",	64	}, /* DC bus charged */
	{ "brS",	65	}, /* In braking sequence */
	{ "PrM",	66	}, /* Power Removal state */
	{ "FqLA",	72	}, /* Pulse warning threshold reached */
	{ "LLC",	73	}, /* Mains contactor control */
	{ "MCP",	77	}, /* I present */
	{ "LSA",	78	}, /* Limit switch reached */
	{ "dLdA",	79	}, /* Dynamic load warning */
	{ "AG1",	80	}, /* Warning group 1 */
	{ "AG2",	81	}, /* Warning group 2 */
	{ "AG3",	82	}, /* Warning group 3 */
	{ "EFA",	87	}, /* External error warning */
	{ "USA",	88	}, /* Undervoltage Warning  */
	{ "UPA",	89	}, /* Preventive undervoltage active */
	{ "AnA",	90	}, /* Slipping warning */
	{ "tHA",	91	}, /* Drive thermal state Warning */
	{ "bSA",	93	}, /* Load movement warning */
	{ "bCA",	94	}, /* Brake contact warning */
	{ "SSA",	95	}, /* Limit torque / I reached */
	{ "Fr1",	96	}, /* Reference frequency channel 1 */
	{ "Fr2",	97	}, /* Reference frequency channel 2 */
	{ "Cd1",	98	}, /* Command channel 1 */
	{ "Cd2",	99	}, /* Command channel 1 */
	{ "Fr1b",	100	}, /* Command ch = ch 1B */
	{ "rtA",	103	}, /* Torque control timeout warning */
	{ "tJA",	104	}, /* IGBT thermal Warning */
	{ "bOA",	105	}, /* Braking resistor thermal warning */
	{ "AP3",	107	}, /* AI3 4-20 Loss Warning */
	{ "AP4",	108	}, /* AI4 4-20 Loss Warning */
	{ "dCO",	109	}, /* DC charging */
	{ "Fn1",	116	}, /* Graphic display Terminal function key 1 */
	{ "Fn2",	117	}, /* Graphic display Terminal function key 2 */
	{ "Fn3",	118	}, /* Graphic display Terminal function key 3 */
	{ "Fn4",	119	}, /* Graphic display Terminal function key 4 */
	{ "AP1",	123	}, /* AI1 4-20 loss Warning */
	{ "rdY",	127	}, /* Ready */
	{ "YES",	128	}, /* Yes */
	{ "LI1",	129	}, /* Digital Input 1 */
	{ "LI2",	130	}, /* Digital Input 2 */
	{ "LI3",	131	}, /* Digital Input 3 */
	{ "LI4",	132	}, /* Digital Input 4 */
	{ "LI5",	133	}, /* Digital Input 5 */
	{ "LI6",	134	}, /* Digital Input 6 */
	{ "LI7",	135	}, /* Digital input 7 */
	{ "LI8",	136	}, /* Digital input 8 */
	{ "LI11",	139	}, /* Digital Input 11 */
	{ "LI12",	140	}, /* Digital Input 12 */
	{ "LI13",	141	}, /* Digital Input 13 */
	{ "LI14",	142	}, /* Digital Input 14 */
	{ "LI15",	143	}, /* Digital Input 15 */
	{ "LI16",	144	}, /* Digital Input 16 */
	{ "Cd00",	160	}, /* Bit 0 digital input ctrl word */
	{ "Cd01",	161	}, /* Bit 1 digital input ctrl word */
	{ "Cd02",	162	}, /* Bit 2 digital input ctrl word */
	{ "Cd03",	163	}, /* Bit 3 digital input ctrl word */
	{ "Cd04",	164	}, /* Bit 4 digital input ctrl word */
	{ "Cd05",	165	}, /* Bit 5 digital input ctrl word */
	{ "Cd06",	166	}, /* Bit 6 digital input ctrl word */
	{ "Cd07",	167	}, /* Bit 7 digital input ctrl word */
	{ "Cd08",	168	}, /* Bit 8 digital input ctrl word */
	{ "Cd09",	169	}, /* Bit 9 digital input ctrl word */
	{ "Cd10",	170	}, /* Bit10 digital input ctrl word */
	{ "Cd11",	171	}, /* Bit11 digital input ctrl word */
	{ "Cd12",	172	}, /* Bit12 digital input ctrl word */
	{ "Cd13",	173	}, /* Bit13 digital input ctrl word */
	{ "Cd14",	174	}, /* Bit14 digital input ctrl word */
	{ "Cd15",	175	}, /* Bit15 digital input ctrl word */
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
	{ "C300",	208	}, /* Bit 0 Com Module ctrl word */
	{ "C301",	209	}, /* Bit 1 Com Module ctrl word */
	{ "C302",	210	}, /* Bit 2 Com Module ctrl word */
	{ "C303",	211	}, /* Bit 3 Com Module ctrl word */
	{ "C304",	212	}, /* Bit 4 Com Module ctrl word */
	{ "C305",	213	}, /* Bit 5 Com Module ctrl word */
	{ "C306",	214	}, /* Bit 6 Com Module ctrl word */
	{ "C307",	215	}, /* Bit 7 Com Module ctrl word */
	{ "C308",	216	}, /* Bit 8 Com Module ctrl word */
	{ "C309",	217	}, /* Bit 9 Com Module ctrl word */
	{ "C310",	218	}, /* Bit 10 Com Module ctrl word */
	{ "C311",	219	}, /* Bit 11 Com Module ctrl word */
	{ "C312",	220	}, /* Bit 12 Com Module ctrl word */
	{ "C313",	221	}, /* Bit 13 Com Module ctrl word */
	{ "C314",	222	}, /* Bit 14 Com Module ctrl word */
	{ "C315",	223	}, /* Bit 15 Com Module ctrl word */
	{ "C500",	240	}, /* C500 */
	{ "C501",	241	}, /* C501 */
	{ "C502",	242	}, /* C502 */
	{ "C503",	243	}, /* C503 */
	{ "C504",	244	}, /* C504 */
	{ "C505",	245	}, /* C505 */
	{ "C506",	246	}, /* C506 */
	{ "C507",	247	}, /* C507 */
	{ "C508",	248	}, /* C508 */
	{ "C509",	249	}, /* C509 */
	{ "C510",	250	}, /* C510 */
	{ "C511",	251	}, /* C511 */
	{ "C512",	252	}, /* C512 */
	{ "C513",	253	}, /* C513 */
	{ "C514",	254	}, /* C514 */
	{ "C515",	255	}, /* C515 */
	{ "L1L",	272	}, /* Digital input DI1 (low level) */
	{ "L2L",	273	}, /* Digital input DI2 (low level) */
	{ "L3L",	274	}, /* Digital input DI3 (low level) */
	{ "L4L",	275	}, /* Digital input DI4 (low level) */
	{ "L5L",	276	}, /* Digital input DI5 (low level) */
	{ "L6L",	277	}, /* Digital input DI6 (low level) */
	{ "L7L",	278	}, /* Digital input DI7 (low level) */
	{ "L8L",	279	}, /* Digital input DI8 (low level) */
	{ "L11L",	282	}, /* Digital input DI1 (low level) */
	{ "L12L",	283	}, /* Digital input DI12 (low level) */
	{ "L13L",	284	}, /* Digital input DI13 (low level) */
	{ "L14L",	285	}, /* Digital input DI14 (low level) */
	{ "L15L",	286	}, /* Digital input DI15 (low level) */
	{ "L16L",	287	}, /* Digital input DI16 (low level) */
	{ "dCrW",	336	}, /* DC bus ripple warning */
	{ "MSdA",	369	}, /* M/S device warning */
	{ "tS1A",	474	}, /* Temperature sensor AI1 warning */
	{ "tS3A",	476	}, /* Temperature sensor AI3 warning */
	{ "tS4A",	477	}, /* Temperature sensor AI4 warning */
	{ "tS5A",	478	}, /* Temperature sensor AI5 warning */
	{ "CAS5",	484	}, /* Customer Warning 5 */
	{ "tP1A",	485	}, /* AI1 thermal sensor warning */
	{ "tr1",	486	}, /* Torque reference channel */
	{ "tr2",	487	}, /* Torque reference channel 2 */
	{ "POWd",	491	}, /* Power Consumption Warning */
	{ "AG4",	492	}, /* Warning group 4 */
	{ "AG5",	493	}, /* Warning group 5 */
	{ "FrF",	494	}, /* Fallback speed */
	{ "rLS",	495	}, /* Speed maintained */
	{ "Stt",	496	}, /* Per type of stop */
	{ "tP3A",	500	}, /* AI3 thermal sensor warning */
	{ "tP4A",	501	}, /* AI4 thermal sensor warning */
	{ "tP5A",	502	}, /* AI5 thermal sensor warning */
	{ "AP5",	503	}, /* AI5 4-20 Loss Warning */
	{ "FCtA",	504	}, /* Fan Counter Warning */
	{ "PtHA",	506	}, /* Power High Threshold */
	{ "PtHL",	507	}, /* Power Low Threshold */
	{ "CAS1",	508	}, /* Customer Warning 1 */
	{ "CAS2",	509	}, /* Customer Warning 2 */
	{ "CAS3",	510	}, /* Customer Warning 3 */
	{ "CAS4",	511	}, /* Customer Warning 4 */
	{ 0, 0 }
};

acpienumeration en_P86_PSLIN[] = {
	{ "nO",	0	}, /* Not assigned */
	{ "AP1",	123	}, /* AI1 4-20 loss Warning */
	{ "AP3",	107	}, /* AI3 4-20 Loss Warning */
	{ "AP4",	108	}, /* AI4 4-20 Loss Warning */
	{ "AP5",	503	}, /* AI5 4-20 Loss Warning */
	{ "FLt",	1	}, /* Drive in operating state "Fault" */
	{ "Fr1",	96	}, /* Reference frequency channel 1 */
	{ "Fr2",	97	}, /* Reference frequency channel 2 */
	{ "Fr1b",	100	}, /* Command ch = ch 1B */
	{ "tr1",	486	}, /* Torque reference channel */
	{ "tr2",	487	}, /* Torque reference channel 2 */
	{ "Cd1",	98	}, /* Command channel 1 */
	{ "Cd2",	99	}, /* Command channel 1 */
	{ "YES",	128	}, /* Yes */
	{ "FtA",	4	}, /* Motor frequency high threshold reached */
	{ "F2A",	13	}, /* Motor frequency high threshold 2 reached */
	{ "FtAL",	18	}, /* Motor frequency low threshold reached */
	{ "F2AL",	19	}, /* Motor frequency low threshold 2 reached */
	{ "LI1",	129	}, /* Digital Input 1 */
	{ "LI2",	130	}, /* Digital Input 2 */
	{ "LI3",	131	}, /* Digital Input 3 */
	{ "LI4",	132	}, /* Digital Input 4 */
	{ "LI5",	133	}, /* Digital Input 5 */
	{ "LI6",	134	}, /* Digital Input 6 */
	{ "LI7",	135	}, /* Digital input 7 */
	{ "LI8",	136	}, /* Digital input 8 */
	{ "LI11",	139	}, /* Digital Input 11 */
	{ "LI12",	140	}, /* Digital Input 12 */
	{ "LI13",	141	}, /* Digital Input 13 */
	{ "LI14",	142	}, /* Digital Input 14 */
	{ "LI15",	143	}, /* Digital Input 15 */
	{ "LI16",	144	}, /* Digital Input 16 */
	{ "L1L",	272	}, /* Digital input DI1 (low level) */
	{ "L2L",	273	}, /* Digital input DI2 (low level) */
	{ "L3L",	274	}, /* Digital input DI3 (low level) */
	{ "L4L",	275	}, /* Digital input DI4 (low level) */
	{ "L5L",	276	}, /* Digital input DI5 (low level) */
	{ "L6L",	277	}, /* Digital input DI6 (low level) */
	{ "L7L",	278	}, /* Digital input DI7 (low level) */
	{ "L8L",	279	}, /* Digital input DI8 (low level) */
	{ "L11L",	282	}, /* Digital input DI1 (low level) */
	{ "L12L",	283	}, /* Digital input DI12 (low level) */
	{ "L13L",	284	}, /* Digital input DI13 (low level) */
	{ "L14L",	285	}, /* Digital input DI14 (low level) */
	{ "L15L",	286	}, /* Digital input DI15 (low level) */
	{ "L16L",	287	}, /* Digital input DI16 (low level) */
	{ "Cd00",	160	}, /* Bit 0 digital input ctrl word */
	{ "Cd01",	161	}, /* Bit 1 digital input ctrl word */
	{ "Cd02",	162	}, /* Bit 2 digital input ctrl word */
	{ "Cd03",	163	}, /* Bit 3 digital input ctrl word */
	{ "Cd04",	164	}, /* Bit 4 digital input ctrl word */
	{ "Cd05",	165	}, /* Bit 5 digital input ctrl word */
	{ "Cd06",	166	}, /* Bit 6 digital input ctrl word */
	{ "Cd07",	167	}, /* Bit 7 digital input ctrl word */
	{ "Cd08",	168	}, /* Bit 8 digital input ctrl word */
	{ "Cd09",	169	}, /* Bit 9 digital input ctrl word */
	{ "Cd10",	170	}, /* Bit10 digital input ctrl word */
	{ "Cd11",	171	}, /* Bit11 digital input ctrl word */
	{ "Cd12",	172	}, /* Bit12 digital input ctrl word */
	{ "Cd13",	173	}, /* Bit13 digital input ctrl word */
	{ "Cd14",	174	}, /* Bit14 digital input ctrl word */
	{ "Cd15",	175	}, /* Bit15 digital input ctrl word */
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
	{ "C301",	209	}, /* Bit 1 Com Module ctrl word */
	{ "C302",	210	}, /* Bit 2 Com Module ctrl word */
	{ "C303",	211	}, /* Bit 3 Com Module ctrl word */
	{ "C304",	212	}, /* Bit 4 Com Module ctrl word */
	{ "C305",	213	}, /* Bit 5 Com Module ctrl word */
	{ "C306",	214	}, /* Bit 6 Com Module ctrl word */
	{ "C307",	215	}, /* Bit 7 Com Module ctrl word */
	{ "C308",	216	}, /* Bit 8 Com Module ctrl word */
	{ "C309",	217	}, /* Bit 9 Com Module ctrl word */
	{ "C310",	218	}, /* Bit 10 Com Module ctrl word */
	{ "C311",	219	}, /* Bit 11 Com Module ctrl word */
	{ "C312",	220	}, /* Bit 12 Com Module ctrl word */
	{ "C313",	221	}, /* Bit 13 Com Module ctrl word */
	{ "C314",	222	}, /* Bit 14 Com Module ctrl word */
	{ "C315",	223	}, /* Bit 15 Com Module ctrl word */
	{ "C501",	241	}, /* C501 */
	{ "C502",	242	}, /* C502 */
	{ "C503",	243	}, /* C503 */
	{ "C504",	244	}, /* C504 */
	{ "C505",	245	}, /* C505 */
	{ "C506",	246	}, /* C506 */
	{ "C507",	247	}, /* C507 */
	{ "C508",	248	}, /* C508 */
	{ "C509",	249	}, /* C509 */
	{ "C510",	250	}, /* C510 */
	{ "C511",	251	}, /* C511 */
	{ "C512",	252	}, /* C512 */
	{ "C513",	253	}, /* C513 */
	{ "C514",	254	}, /* C514 */
	{ "C515",	255	}, /* C515 */
	{ 0, 0 }
};

acpienumeration en_P86_PSS[] = {
	{ "nACt",	0	}, /* Pre-settings not locked */
	{ "ACt",	1	}, /* Pre-settings locked */
	{ 0, 0 }
};

acpienumeration en_P86_PSST[] = {
	{ "nO",	0	}, /* No password defined */
	{ "ULK",	1	}, /* Password is unlocked */
	{ "LOCK",	2	}, /* Password is locked */
	{ 0, 0 }
};

acpienumeration en_P86_PST[] = {
	{ "nO",	0	}, /* Stop key no priority */
	{ "YES",	1	}, /* Stop key priority */
	{ "ALL",	2	}, /* Stop key priority all CMD channels */
	{ 0, 0 }
};

acpienumeration en_P86_PTII[] = {
	{ "OFF",	0	}, /* Inversion direction OFF */
	{ "On",	1	}, /* Inversion direction ON */
	{ 0, 0 }
};

acpienumeration en_P86_PTIM[] = {
	{ "Ab",	0	}, /* A/B signals */
	{ "Pd",	1	}, /* Pulse/Direction signals */
	{ "CWCCW",	2	}, /* Clockwise/Counter Clockwise input signals */
	{ 0, 0 }
};

acpienumeration en_P86_PTOM[] = {
	{ "OFF",	0	}, /* Not configured */
	{ "PtI",	1	}, /* PTI signal */
	{ "COnS",	2	}, /* PTO assigned parameter */
	{ 0, 0 }
};

acpienumeration en_P86_PVIS[] = {
	{ "ACt",	0	}, /* Active parameters */
	{ "ALL",	1	}, /* All parameters */
	{ 0, 0 }
};

acpienumeration en_P86_QSTD[] = {
	{ "FSt2",	2	}, /* Fast stop then disable voltage */
	{ "FSt6",	6	}, /* Fast stop then stay in quick stop state */
	{ 0, 0 }
};

acpienumeration en_P86_RDS[] = {
	{ "AUtO",	0	}, /* Auto detected */
	{ "10F",	1	}, /* 10Mbps full duplex */
	{ "10H",	2	}, /* 10Mbps half duplex */
	{ "100F",	3	}, /* 100Mbps full duplex */
	{ "100H",	4	}, /* 100Mbps half duplex */
	{ 0, 0 }
};

acpienumeration en_P86_REFQ[] = {
	{ "3K",	3	}, /* 3 kHz */
	{ "4K",	4	}, /* 4 kHz */
	{ "5K",	5	}, /* 5 kHz */
	{ "6K",	6	}, /* 6 kHz */
	{ "7K",	7	}, /* 7 kHz */
	{ "8K",	8	}, /* 8 kHz */
	{ "9K",	9	}, /* 9 kHz */
	{ "10K",	10	}, /* 10 kHz */
	{ "11K",	11	}, /* 11 kHz */
	{ "12K",	12	}, /* 12 kHz */
	{ 0, 0 }
};

acpienumeration en_P86_RPPN[] = {
	{ "2P",	0	}, /* 2 poles */
	{ "4P",	1	}, /* 4 poles */
	{ "6P",	2	}, /* 6 poles */
	{ "8P",	3	}, /* 8 poles */
	{ 0, 0 }
};

acpienumeration en_P86_RPR[] = {
	{ "nO",	0	}, /* No */
	{ "rtH",	2	}, /* Run time reset */
	{ "rtHI",	3	}, /* Internal runtime reset */
	{ "PtH",	4	}, /* Power ON time reset */
	{ "FtH",	7	}, /* Reset fan counter */
	{ "PtHI",	8	}, /* Internal Power ON Time Reset */
	{ "GtHI",	9	}, /* Clear GTHI */
	{ "LtHI",	10	}, /* Clear LTHI */
	{ "nSM",	11	}, /* Clear NSM */
	{ "nSMI",	12	}, /* Clear NSMI */
	{ "FCt",	14	}, /* Clear cabinet fan operation time */
	{ "ALL",	64	}, /* Reset all counters */
	{ 0, 0 }
};

acpienumeration en_P86_RPT[] = {
	{ "LIn",	0	}, /* Linear ramp */
	{ "S",	1	}, /* S-Ramp */
	{ "U",	2	}, /* U-Ramp */
	{ "CUS",	3	}, /* Ramp customized */
	{ 0, 0 }
};

acpienumeration en_P86_RSD[] = {
	{ "nO",	0	}, /* No */
	{ "drI",	1	}, /* Weight estimation */
	{ "PES",	2	}, /* External weight sensor */
	{ 0, 0 }
};

acpienumeration en_P86_SCS[] = {
	{ "nO",	0	}, /* No */
	{ "Str0",	1	}, /* Save configuration 0 */
	{ "Str1",	2	}, /* Save configuration 1 */
	{ "Str2",	3	}, /* Save configuration 2 */
	{ "Str3",	4	}, /* Config 3 */
	{ 0, 0 }
};

acpienumeration en_P86_SFDR[] = {
	{ "InIt",	0	}, /* Initialization */
	{ "IdLE",	1	}, /* Not active */
	{ "OPE",	2	}, /* Operational */
	{ "rdY",	4	}, /* Ready */
	{ "IPC",	5	}, /* IP configuration */
	{ "UnCF",	7	}, /* Not configured */
	{ "GEt",	8	}, /* Reading configuration */
	{ "SEt",	9	}, /* Writing Configuration */
	{ "APP",	10	}, /* Applying configuration */
	{ 0, 0 }
};

acpienumeration en_P86_SFT[] = {
	{ "HF1",	1	}, /* Switch.frequency type 1 */
	{ "HF2",	2	}, /* Switch.frequency type 2 */
	{ 0, 0 }
};

acpienumeration en_P86_SMOT[] = {
	{ "nO",	0	}, /* No information */
	{ "LLS",	1	}, /* Low saliency */
	{ "MLS",	2	}, /* Medium saliency */
	{ "HLS",	3	}, /* High saliency */
	{ 0, 0 }
};

acpienumeration en_P86_SOP[] = {
	{ "6",	6	}, /* 6 µs */
	{ "8",	8	}, /* 8 µs */
	{ "10",	10	}, /* 10 µs */
	{ 0, 0 }
};

acpienumeration en_P86_SSCD[] = {
	{ "Und",	0	}, /* Undefined */
	{ "bIn",	1	}, /* Binary code */
	{ "GrAY",	2	}, /* Gray code */
	{ 0, 0 }
};

acpienumeration en_P86_SSCP[] = {
	{ "Und",	0	}, /* Undefined */
	{ "nO",	1	}, /* No parity */
	{ "EVEn",	3	}, /* Even parity */
	{ 0, 0 }
};

acpienumeration en_P86_SSL[] = {
	{ "Std",	0	}, /* Standard */
	{ "HPF",	1	}, /* High performance */
	{ 0, 0 }
};

acpienumeration en_P86_STOS[] = {
	{ "IdLE",	0	}, /* Not active */
	{ "StO",	1	}, /* Active */
	{ "FLt",	2	}, /* Error */
	{ 0, 0 }
};

acpienumeration en_P86_STP[] = {
	{ "nO",	0	}, /* Inactive */
	{ "MMS",	1	}, /* Maintain DC Bus  */
	{ "rMP",	2	}, /* Ramp Stop */
	{ "LnF",	4	}, /* Locked in freewheel stop without error */
	{ 0, 0 }
};

acpienumeration en_P86_STR[] = {
	{ "nO",	0	}, /* No save */
	{ "rAM",	1	}, /* Save to RAM */
	{ "EEP",	2	}, /* Save to EEPROM */
	{ 0, 0 }
};

acpienumeration en_P86_STT[] = {
	{ "rMP",	0	}, /* On ramp */
	{ "FSt",	1	}, /* Fast stop */
	{ "nSt",	2	}, /* Freewheel stop */
	{ "dCI",	3	}, /* DC injection */
	{ 0, 0 }
};

acpienumeration en_P86_STUN[] = {
	{ "tAb",	0	}, /* Default */
	{ "MEAS",	1	}, /* Measure */
	{ "CUS",	2	}, /* Custom */
	{ 0, 0 }
};

acpienumeration en_P86_SUCU[] = {
	{ "EUrO",	0	}, /* Euro */
	{ "dOLLAr",	1	}, /* $ */
	{ "POUnd",	2	}, /* £ */
	{ "Kr",	3	}, /* Krone */
	{ "rMb",	4	}, /* Renminbi */
	{ "OtHEr",	5	}, /* Other */
	{ 0, 0 }
};

acpienumeration en_P86_SUTP[] = {
	{ "01C",	0	}, /* 0.1°C */
	{ "01F",	1	}, /* 0.1°F */
	{ 0, 0 }
};

acpienumeration en_P86_TBR[] = {
	{ "AUtO",	4	}, /* Automatic */
	{ "300",	8	}, /* 300 bps */
	{ "600",	12	}, /* 600 bps */
	{ "1200",	16	}, /* 1.2 Kbps */
	{ "2400",	20	}, /* 2.4 Kbps */
	{ "4800",	24	}, /* 4800 bps */
	{ "9600",	28	}, /* 9600 bps */
	{ "10000",	30	}, /* 10 Kbps */
	{ "19200",	32	}, /* 19200 bps */
	{ "20000",	34	}, /* 20 Kbps */
	{ "28800",	35	}, /* 28.8 Kbps */
	{ "38400",	36	}, /* 38.4 Kbps */
	{ "45450",	37	}, /* 45.45 Kbps */
	{ "50000",	38	}, /* 50 Kbps */
	{ "57600",	40	}, /* 57.6 Kbps */
	{ "76800",	41	}, /*  */
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

acpienumeration en_P86_TCC[] = {
	{ "2C",	0	}, /* 2-wire control */
	{ "3C",	1	}, /* 3-wire control */
	{ 0, 0 }
};

acpienumeration en_P86_TCT[] = {
	{ "LEL",	0	}, /* Level */
	{ "trn",	1	}, /* Transition */
	{ "PFO",	2	}, /* Level with Forward priority */
	{ 0, 0 }
};

acpienumeration en_P86_THET[] = {
	{ "nOnE",	0	}, /* None */
	{ "PtC",	1	}, /* PTC */
	{ "1Pt2",	2	}, /* PT100 */
	{ "1Pt3",	3	}, /* PT1000 */
	{ "KtY",	4	}, /* KTY */
	{ "KLIX",	5	}, /* Klixon */
	{ 0, 0 }
};

acpienumeration en_P86_THT[] = {
	{ "nO",	0	}, /* No thermal monitoring */
	{ "ACL",	1	}, /* Self cooled motor */
	{ "FCL",	2	}, /* Force cooled motor */
	{ 0, 0 }
};

acpienumeration en_P86_TLOL[] = {
	{ "dIS",	0	}, /* Disabled */
	{ "trIP",	1	}, /* Error triggered */
	{ "LIM",	2	}, /* Reduce to drive nominal current */
	{ "I2t",	3	}, /* I2t current reduction */
	{ 0, 0 }
};

acpienumeration en_P86_TOB[] = {
	{ "ALrM",	0	}, /* Warning */
	{ "FLt",	1	}, /* Error */
	{ 0, 0 }
};

acpienumeration en_P86_TOCT[] = {
	{ "nA",	0	}, /* NA */
	{ "OtHEr",	3	}, /* OTHER */
	{ 0, 0 }
};

acpienumeration en_P86_TRES[] = {
	{ "03",	0	}, /* 0.3 */
	{ "05",	1	}, /* 0.5 */
	{ "08",	2	}, /* 0.8 */
	{ "10",	3	}, /* 1.0 */
	{ 0, 0 }
};

acpienumeration en_P86_TST[] = {
	{ "SPd",	0	}, /* Speed */
	{ "nSt",	1	}, /* Freewheel stop */
	{ "SPn",	2	}, /* Spin */
	{ 0, 0 }
};

acpienumeration en_P86_TUNT[] = {
	{ "Std",	2	}, /* Standard */
	{ "rOt",	3	}, /* Rotation */
	{ 0, 0 }
};

acpienumeration en_P86_TUNU[] = {
	{ "nO",	0	}, /* No */
	{ "tM",	1	}, /* Use the motor thermal evolution */
	{ 0, 0 }
};

acpienumeration en_P86_TWO[] = {
	{ "LOW",	0	}, /* ModBus Word Order OFF */
	{ "HIGH",	1	}, /* Modbus Word Order ON */
	{ 0, 0 }
};

acpienumeration en_P86_UECP[] = {
	{ "Und",	0	}, /* Undefined */
	{ "SCHP",	2	}, /* SinCos Hiperface */
	{ "SC",	3	}, /* SinCos */
	{ "SSI",	4	}, /* SSI */
	{ "Ab",	8	}, /* AB */
	{ "rES",	9	}, /* Resolver */
	{ "bISS",	10	}, /* BiSS */
	{ "En22",	11	}, /* EnDat 2.2 */
	{ "HtL",	12	}, /* HTL encoder */
	{ 0, 0 }
};

acpienumeration en_P86_UECV[] = {
	{ "Und",	0	}, /* Undefined */
	{ "5V",	5	}, /* 5 Vdc */
	{ "12V",	12	}, /* 12 Vdc */
	{ "15V",	15	}, /* 15 Vdc */
	{ "24V",	24	}, /* 24 Vdc */
	{ 0, 0 }
};

acpienumeration en_P86_ULR[] = {
	{ "ULr0",	0	}, /* Upload access allowed */
	{ "ULr1",	1	}, /* Upload access not allow */
	{ 0, 0 }
};

acpienumeration en_P86_URES[] = {
	{ "200",	20	}, /* 200 Vac */
	{ "220",	22	}, /* 220 Vac */
	{ "230",	23	}, /* 230 Vac */
	{ "240",	24	}, /* 240 Vac */
	{ "380",	38	}, /* 380 Vac */
	{ "400",	40	}, /* 400 Vac */
	{ "440",	44	}, /* 440 Vac */
	{ "460",	46	}, /* 460 Vac */
	{ "480",	48	}, /* 480 Vac */
	{ "500",	50	}, /* 500Vac */
	{ "525",	52	}, /* 525 Vac */
	{ "575",	57	}, /* 575 Vac */
	{ "600",	60	}, /* 600 Vac */
	{ "690",	69	}, /* 690 Vac */
	{ 0, 0 }
};

acpienumeration en_P86_USB[] = {
	{ "0",	0	}, /* Error triggered */
	{ "1",	1	}, /* Error triggered w/o relay */
	{ "2",	2	}, /* Warning Triggered */
	{ 0, 0 }
};

acpienumeration en_P86_VCAL[] = {
	{ "nO",	0	}, /* Unkown voltage */
	{ "110M",	1	}, /* 100-120 V single phase */
	{ "110t",	2	}, /* 100-120 V three phase */
	{ "220M",	3	}, /* 200-240 V single */
	{ "220t",	4	}, /* 200-240 V three phase */
	{ "480M",	5	}, /* 380-500 V single phase */
	{ "480t",	6	}, /* 380-500 V three phase */
	{ "690M",	7	}, /* 500-690 V single phase */
	{ "690t",	8	}, /* 500-690 V three phase */
	{ "600M",	9	}, /* 600 V single phase */
	{ "600t",	10	}, /* 600 V three phase */
	{ 0, 0 }
};

