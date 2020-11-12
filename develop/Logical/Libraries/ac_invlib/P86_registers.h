/********************************************************************
* COPYRIGHT Bernecker + Rainer
* File:     P86_registers.h
* Created:  19.06.2020
********************************************************************/

#include <bur/plctypes.h>
#include "P86_enumerations.h"

acpireg p86reg[] = {
	{ "LAC",	0x2000,	0x07,	'u',	en_P86_LAC	},	/* Access Level */
	{ "DRT",	0x2000,	0x0B,	'u',	en_P86_DRT	},	/* Dual rating state */
	{ "NCV",	0x2000,	0x0C,	'u',	en_P86_NCV	},	/* Drive nominal rating */
	{ "VCAL",	0x2000,	0x0D,	'u',	en_P86_VCAL	},	/* Drive mains voltage */
	{ "BFR",	0x2000,	0x10,	'u',	en_P86_BFR	},	/* Motor Standard */
	{ "INV",	0x2000,	0x12,	'u',	0			},	/* Nominal Drive Current */
	{ "FRY",	0x2000,	0x17,	'u',	0			},	/* Factory setting group */
	{ "SFT",	0x2001,	0x02,	'u',	en_P86_SFT	},	/* Switching frequency type */
	{ "SFR",	0x2001,	0x03,	'u',	0			},	/* Switching frequency */
	{ "TFR",	0x2001,	0x04,	'u',	0			},	/* Max frequency */
	{ "HSP",	0x2001,	0x05,	'u',	0			},	/* High Speed */
	{ "LSP",	0x2001,	0x06,	'u',	0			},	/* Low Speed */
	{ "BSP",	0x2001,	0x07,	'u',	en_P86_BSP	},	/* Reference frequency template selection */
	{ "NRD",	0x2001,	0x08,	'u',	en_P86_N_Y	},	/* Motor Noise Reduction */
	{ "RIN",	0x2001,	0x09,	'u',	en_P86_N_Y	},	/* Reverse direction disable */
	{ "OFI",	0x2001,	0x0A,	'u',	en_P86_N_Y	},	/* Sinus filter activation */
	{ "FLR",	0x2001,	0x0B,	'u',	en_P86_FLR	},	/* Catch on fly */
	{ "VCB",	0x2001,	0x0C,	'u',	0			},	/* Catch on fly sensitivity */
	{ "STRT",	0x2001,	0x0D,	'u',	en_P86_N_Y	},	/* Output short circuit test */
	{ "COFM",	0x2001,	0x0E,	'u',	en_P86_COFM	},	/* Catch on fly mode */
	{ "RPR",	0x2001,	0x15,	'u',	en_P86_RPR	},	/* Time counter reset */
	{ "FFM",	0x2001,	0x1F,	'u',	en_P86_FFM	},	/* Fan mode */
	{ "ETA",	0x2002,	0x02,	'u',	0			},	/* CIA402 State Register */
	{ "RFR",	0x2002,	0x03,	's',	0			},	/* Motor frequency */
	{ "FRH",	0x2002,	0x04,	's',	0			},	/* Reference frequency before ramp */
	{ "LCR",	0x2002,	0x05,	'u',	0			},	/* Motor current */
	{ "OTR",	0x2002,	0x06,	's',	0			},	/* Motor torque */
	{ "ETI",	0x2002,	0x07,	'u',	0			},	/* Internal State Register */
	{ "ULN",	0x2002,	0x08,	'u',	0			},	/* Mains voltage */
	{ "UOP",	0x2002,	0x09,	'u',	0			},	/* Motor voltage */
	{ "THD",	0x2002,	0x0A,	'u',	0			},	/* Drive thermal state */
	{ "OPR",	0x2002,	0x0C,	's',	0			},	/* Motor power */
	{ "IPR",	0x2002,	0x13,	's',	0			},	/* Active Electrical input power estimation  (100% = drive power) */
	{ "MMF",	0x2002,	0x14,	's',	0			},	/* Measured output freq. */
	{ "FRHT",	0x2002,	0x17,	's',	0			},	/* FRH high resolution */
	{ "SLCR",	0x2002,	0x19,	'u',	0			},	/* LCR without filter */
	{ "SRFR",	0x2002,	0x1A,	's',	0			},	/* RFR without filter */
	{ "SOTR",	0x2002,	0x1B,	's',	0			},	/* OTR without filter */
	{ "SULN",	0x2002,	0x1E,	'u',	0			},	/* ULN without filter */
	{ "HMIS",	0x2002,	0x29,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "VBUS",	0x2002,	0x2C,	'u',	0			},	/* DC bus voltage */
	{ "RTH",	0x2002,	0x2D,	'u',	0			},	/* Motor run time */
	{ "PTH",	0x2002,	0x2F,	'u',	0			},	/* Power-on time */
	{ "NSM",	0x2002,	0x3D,	'u',	0			},	/* Number of motor starts */
	{ "FSPD",	0x2002,	0x40,	'u',	0			},	/* Fan speed */
	{ "FPBT",	0x2002,	0x41,	'u',	0			},	/* Fan operation time */
	{ "RFQ",	0x2002,	0x43,	's',	0			},	/* Rotor frequency */
	{ "SFQ",	0x2002,	0x44,	's',	0			},	/* Stator frequency */
	{ "OTQN",	0x2002,	0x45,	's',	0			},	/* Motor Torque in Nm */
	{ "RTHH",	0x2002,	0x4B,	'u',	0			},	/* Motor run time */
	{ "PTHH",	0x2002,	0x4D,	'u',	0			},	/* Power-on time */
	{ "OT4Q",	0x2002,	0x4F,	's',	0			},	/* 4 Quadrant Output torque value (100% = Cn motor) */
	{ "ST4Q",	0x2002,	0x50,	's',	0			},	/* 4 Quadrant Output torque value (% of Cn motor in Q12) without filter */
	{ "SOPR",	0x2002,	0x5B,	's',	0			},	/* OPR without filter */
	{ "OPRW",	0x2002,	0x5D,	's',	0			},	/* Motor mechanical power estimation */
	{ "EPRW",	0x2002,	0x5E,	's',	0			},	/* Active Electrical output power estimation */
	{ "IPRW",	0x2002,	0x5F,	's',	0			},	/* Instantaneous active input power */
	{ "EPR",	0x2002,	0x62,	's',	0			},	/* Active Electrical output power estimation */
	{ "IQRW",	0x2002,	0x63,	's',	0			},	/* Input reactive power */
	{ "VDP",	0x2003,	0x03,	'u',	0			},	/* Drive software version */
	{ "PAN0",	0x2003,	0x29,	'u',	0			},	/* Device name (char 1 and 2) */
	{ "PAN1",	0x2003,	0x2A,	'u',	0			},	/* Device name (char 3 and 4) */
	{ "PAN2",	0x2003,	0x2B,	'u',	0			},	/* Device name (char 5 and 6) */
	{ "PAN3",	0x2003,	0x2C,	'u',	0			},	/* Device name (char 7 and 8) */
	{ "PAN4",	0x2003,	0x2D,	'u',	0			},	/* Device name (char 9 and 10) */
	{ "PAN5",	0x2003,	0x2E,	'u',	0			},	/* Device name (char 11 and 12) */
	{ "PAN6",	0x2003,	0x2F,	'u',	0			},	/* Device name (char 13 and 14) */
	{ "PAN7",	0x2003,	0x30,	'u',	0			},	/* Device name (char 15 and 16) */
	{ "L1D",	0x200A,	0x02,	'u',	0			},	/* DI1 Delay */
	{ "L2D",	0x200A,	0x03,	'u',	0			},	/* DI2 Delay */
	{ "L3D",	0x200A,	0x04,	'u',	0			},	/* DI3 Delay */
	{ "L4D",	0x200A,	0x05,	'u',	0			},	/* DI4 Delay */
	{ "L5D",	0x200A,	0x06,	'u',	0			},	/* DI5 Delay */
	{ "L6D",	0x200A,	0x07,	'u',	0			},	/* DI6 Delay */
	{ "L7D",	0x200A,	0x08,	'u',	0			},	/* DI7 Delay */
	{ "L8D",	0x200A,	0x09,	'u',	0			},	/* DI8 Delay */
	{ "L11D",	0x200A,	0x0C,	'u',	0			},	/* DI11 Delay */
	{ "L12D",	0x200A,	0x0D,	'u',	0			},	/* DI12 Delay */
	{ "L13D",	0x200A,	0x0E,	'u',	0			},	/* DI13 Delay */
	{ "L14D",	0x200A,	0x0F,	'u',	0			},	/* DI14 Delay */
	{ "L15D",	0x200A,	0x10,	'u',	0			},	/* DI15 delay */
	{ "L16D",	0x200A,	0x11,	'u',	0			},	/* DI16 delay */
	{ "R1S",	0x200C,	0x02,	'u',	en_P86_NPL	},	/* R1 Active level */
	{ "R2S",	0x200C,	0x03,	'u',	en_P86_NPL	},	/* R2 Active level */
	{ "R3S",	0x200C,	0x04,	'u',	en_P86_NPL	},	/* R3 Active level */
	{ "R4S",	0x200C,	0x05,	'u',	en_P86_NPL	},	/* R4 Active level */
	{ "R5S",	0x200C,	0x06,	'u',	en_P86_NPL	},	/* R5 Active at  */
	{ "R6S",	0x200C,	0x07,	'u',	en_P86_NPL	},	/* R6 status (output active level) */
	{ "R1H",	0x200C,	0x16,	'u',	0			},	/* R1 Holding time */
	{ "R2H",	0x200C,	0x17,	'u',	0			},	/* R2 Holding time */
	{ "R3H",	0x200C,	0x18,	'u',	0			},	/* R3 Holding time */
	{ "R4H",	0x200C,	0x19,	'u',	0			},	/* R4 Holding time */
	{ "R5H",	0x200C,	0x1A,	'u',	0			},	/* R5 Holding time */
	{ "R6H",	0x200C,	0x1B,	'u',	0			},	/* R6 holding delay time */
	{ "R1D",	0x200C,	0x2A,	'u',	0			},	/* R1 Delay time */
	{ "R2D",	0x200C,	0x2B,	'u',	0			},	/* R2 Delay time */
	{ "R3D",	0x200C,	0x2C,	'u',	0			},	/* R3 Delay time */
	{ "R4D",	0x200C,	0x2D,	'u',	0			},	/* R4 Delay time */
	{ "R5D",	0x200C,	0x2E,	'u',	0			},	/* R5 Delay time */
	{ "R6D",	0x200C,	0x2F,	'u',	0			},	/* R6 activation delay time */
	{ "DO1S",	0x200C,	0x3E,	'u',	en_P86_NPL	},	/* DQ1 Active level */
	{ "DO2S",	0x200C,	0x3F,	'u',	en_P86_NPL	},	/* DQ2 Active at */
	{ "D11S",	0x200C,	0x40,	'u',	en_P86_NPL	},	/* DQ11 status (output active level) */
	{ "D12S",	0x200C,	0x41,	'u',	en_P86_NPL	},	/* DQ12 status (output active level) */
	{ "DO1H",	0x200C,	0x48,	'u',	0			},	/* DQ1 Holding time */
	{ "DO2H",	0x200C,	0x49,	'u',	0			},	/* DQ2 Holding time */
	{ "D11H",	0x200C,	0x4A,	'u',	0			},	/* DQ11 holding delay */
	{ "D12H",	0x200C,	0x4B,	'u',	0			},	/* DQ12 holding delay */
	{ "S24V",	0x200C,	0x4C,	'u',	en_P86_N_Y	},	/* 24V Supply Output */
	{ "DO1D",	0x200C,	0x52,	'u',	0			},	/* DQ1 Delay time */
	{ "DO2D",	0x200C,	0x53,	'u',	0			},	/* DQ2 Delay time */
	{ "D11D",	0x200C,	0x54,	'u',	0			},	/* DQ11 activation delay */
	{ "D12D",	0x200C,	0x55,	'u',	0			},	/* DQ12 activation delay */
	{ "R1F",	0x200C,	0x5B,	'u',	en_P86_N_Y	},	/* Enable Relay 1 fallback */
	{ "R2F",	0x200C,	0x5C,	'u',	en_P86_N_Y	},	/* Enable Relay 2 fallback */
	{ "LO1F",	0x200C,	0x5D,	'u',	en_P86_N_Y	},	/* Enable DQ1 fallback */
	{ "AOF1",	0x200C,	0x5E,	'u',	en_P86_N_Y	},	/* Enable AQ1 fallback */
	{ "AI1T",	0x200E,	0x03,	'u',	en_P86_AIOT	},	/* Configuration of  AI1 */
	{ "AI2T",	0x200E,	0x04,	'u',	en_P86_AIOT	},	/* Configuration of  AI2 */
	{ "AI3T",	0x200E,	0x05,	'u',	en_P86_AIOT	},	/* Configuration of  AI3 */
	{ "AI4T",	0x200E,	0x06,	'u',	en_P86_AIOT	},	/* Configuration of  AI4 */
	{ "AI5T",	0x200E,	0x07,	'u',	en_P86_AIOT	},	/* AI5 type */
	{ "UIL1",	0x200E,	0x0D,	'u',	0			},	/* AI1 voltage scaling parameter of 0% */
	{ "UIL2",	0x200E,	0x0E,	'u',	0			},	/* AI2 voltage scaling parameter of 0% */
	{ "UIL3",	0x200E,	0x0F,	'u',	0			},	/* AI3 voltage scaling parameter of 0% */
	{ "UIL4",	0x200E,	0x10,	'u',	0			},	/* AI4 voltage scaling parameter of 0% */
	{ "UIL5",	0x200E,	0x11,	'u',	0			},	/* AI5 voltage scaling parameter of 0% */
	{ "UIH1",	0x200E,	0x17,	'u',	0			},	/* AI1 voltage scaling parameter of 100% */
	{ "UIH2",	0x200E,	0x18,	'u',	0			},	/* AI2 voltage scaling parameter of 100% */
	{ "UIH3",	0x200E,	0x19,	'u',	0			},	/* AI3 voltage scaling parameter of 100% */
	{ "UIH4",	0x200E,	0x1A,	'u',	0			},	/* AI4 voltage scaling parameter of 100% */
	{ "UIH5",	0x200E,	0x1B,	'u',	0			},	/* AI5 voltage scaling parameter of 100% */
	{ "CRL1",	0x200E,	0x21,	'u',	0			},	/* AI1 current scaling parameter of 0% */
	{ "CRL3",	0x200E,	0x23,	'u',	0			},	/* AI3 current scaling parameter of 0% */
	{ "CRL4",	0x200E,	0x24,	'u',	0			},	/* AI4 current scaling parameter of 0% */
	{ "CRL5",	0x200E,	0x25,	'u',	0			},	/* AI5 current scaling parameter of 0% */
	{ "CRH1",	0x200E,	0x2B,	'u',	0			},	/* AI1 current scaling parameter of 100% */
	{ "CRH3",	0x200E,	0x2D,	'u',	0			},	/* AI3 current scaling parameter of 100% */
	{ "CRH4",	0x200E,	0x2E,	'u',	0			},	/* AI4 current scaling parameter of 100% */
	{ "CRH5",	0x200E,	0x2F,	'u',	0			},	/* AI5 current scaling parameter of 100% */
	{ "AI1F",	0x200E,	0x35,	'u',	0			},	/* AI1 filter */
	{ "AI2F",	0x200E,	0x36,	'u',	0			},	/* AI2 filter */
	{ "AI3F",	0x200E,	0x37,	'u',	0			},	/* AI3 filter */
	{ "AI4F",	0x200E,	0x38,	'u',	0			},	/* AI4 filter */
	{ "AI5F",	0x200E,	0x39,	'u',	0			},	/* AI5 cutoff time of the low-filter */
	{ "AI1E",	0x200E,	0x3F,	'u',	0			},	/* AI1 intermediate point X */
	{ "AI2E",	0x200E,	0x40,	'u',	0			},	/* AI2 intermediate point X */
	{ "AI3E",	0x200E,	0x41,	'u',	0			},	/* AI3 intermediate point X */
	{ "AI4E",	0x200E,	0x42,	'u',	0			},	/* AI4 intermediate point X */
	{ "AI5E",	0x200E,	0x43,	'u',	0			},	/* AI5 delinearization input level */
	{ "AI1S",	0x200E,	0x49,	'u',	0			},	/* AI1 intermediate point Y */
	{ "AI2S",	0x200E,	0x4A,	'u',	0			},	/* AI2 intermediate point Y */
	{ "AI3S",	0x200E,	0x4B,	'u',	0			},	/* AI3 intermediate point Y */
	{ "AI4S",	0x200E,	0x4C,	'u',	0			},	/* AI4 intermediate point Y */
	{ "AI5S",	0x200E,	0x4D,	'u',	0			},	/* AI5 delinearization output level */
	{ "AI1L",	0x200E,	0x53,	'u',	en_P86_AIOL	},	/* Analog input 1 range */
	{ "AI3L",	0x200E,	0x55,	'u',	en_P86_AIOL	},	/* Analog input 3 range */
	{ "AI4L",	0x200E,	0x56,	'u',	en_P86_AIOL	},	/* Analog input 4 range */
	{ "AI5L",	0x200E,	0x57,	'u',	en_P86_AIOL	},	/* AI5 Lowest Process */
	{ "AO1T",	0x2010,	0x02,	'u',	en_P86_AIOT	},	/* AQ1 Type */
	{ "AO2T",	0x2010,	0x03,	'u',	en_P86_AIOT	},	/* Configuration of  AQ2 */
	{ "AO1F",	0x2010,	0x0C,	'u',	0			},	/* AQ1 filter */
	{ "AO2F",	0x2010,	0x0D,	'u',	0			},	/* AQ2 filter */
	{ "UOL1",	0x2010,	0x16,	'u',	0			},	/* AQ1 minimum output */
	{ "UOL2",	0x2010,	0x17,	'u',	0			},	/* AQ2 minimum output */
	{ "UOH1",	0x2010,	0x20,	'u',	0			},	/* AQ1 maximum output */
	{ "UOH2",	0x2010,	0x21,	'u',	0			},	/* AQ2 maximum output */
	{ "AOL1",	0x2010,	0x2A,	'u',	0			},	/* AQ1 min output value */
	{ "AOL2",	0x2010,	0x2B,	'u',	0			},	/* AQ2 min output value */
	{ "AOH1",	0x2010,	0x34,	'u',	0			},	/* AQ1 max output value */
	{ "AOH2",	0x2010,	0x35,	'u',	0			},	/* AQ2 max output value */
	{ "ASL1",	0x2010,	0x3E,	'u',	0			},	/* Scaling AQ1 min */
	{ "ASL2",	0x2010,	0x3F,	'u',	0			},	/* Scaling AQ2 min */
	{ "ASH1",	0x2010,	0x48,	'u',	0			},	/* Scaling AQ1 max */
	{ "ASH2",	0x2010,	0x49,	'u',	0			},	/* Scaling AQ2 max */
	{ "PTOL",	0x2010,	0x59,	'u',	0			},	/* PTO min output frequency */
	{ "PTOH",	0x2010,	0x5A,	'u',	0			},	/* PTO maximum output frequency */
	{ "AOF2",	0x2010,	0x5C,	'u',	en_P86_N_Y	},	/* AO2 FallBack Enable */
	{ "AV1A",	0x2012,	0x3E,	'u',	en_P86_CSA	},	/* AIV1 assignment */
	{ "R1",	0x2014,	0x02,	'u',	en_P86_PSL	},	/* R1 Assignment */
	{ "R2",	0x2014,	0x03,	'u',	en_P86_PSL	},	/* R2 Assignment */
	{ "R3",	0x2014,	0x04,	'u',	en_P86_PSL	},	/* R3 Assignment */
	{ "R4",	0x2014,	0x05,	'u',	en_P86_PSL	},	/* R4 Assignment */
	{ "R5",	0x2014,	0x06,	'u',	en_P86_PSL	},	/* R5 Assignment */
	{ "R6",	0x2014,	0x07,	'u',	en_P86_PSL	},	/* R6 assignment */
	{ "AO1",	0x2014,	0x16,	'u',	en_P86_PSA	},	/* AQ1 assignment */
	{ "AO2",	0x2014,	0x17,	'u',	en_P86_PSA	},	/* AQ2 assignment */
	{ "DO1",	0x2014,	0x20,	'u',	en_P86_PSL	},	/* DQ1 Assignment */
	{ "DO2",	0x2014,	0x21,	'u',	en_P86_PSL	},	/* DQ2 Assignment */
	{ "DO11",	0x2014,	0x22,	'u',	en_P86_PSL	},	/* DO11 assignment */
	{ "DO12",	0x2014,	0x23,	'u',	en_P86_PSL	},	/* DO12 assignment */
	{ "PTO",	0x2014,	0x33,	'u',	en_P86_PSA	},	/* PTO assignment */
	{ "PTOE",	0x2014,	0x35,	'u',	en_P86_PSA	},	/* PTO assignment */
	{ "IL1I",	0x2016,	0x02,	'u',	0			},	/* Logic inputs physical image (bit0 = LI1 ...) */
	{ "IL1R",	0x2016,	0x03,	'u',	0			},	/* Logic inputs states */
	{ "OL1R",	0x2016,	0x0D,	'u',	0			},	/* Logic outputs states */
	{ "AI1I",	0x2016,	0x17,	's',	0			},	/* AI1 input physical image (MAX = 8192) */
	{ "AI2I",	0x2016,	0x18,	's',	0			},	/* AI2 input physical image (MAX = 8192) */
	{ "AI3I",	0x2016,	0x19,	's',	0			},	/* AI3 input physical image (MAX = 8192) */
	{ "AI4I",	0x2016,	0x1A,	's',	0			},	/* AI4 input physical image (MAX = 8192) */
	{ "AI5I",	0x2016,	0x1B,	's',	0			},	/* AI5 input physical image (MAX = 8192) */
	{ "AI1R",	0x2016,	0x21,	's',	0			},	/* Analog input 1 standardized value */
	{ "AI2R",	0x2016,	0x22,	's',	0			},	/* Analog input 2 standardized value */
	{ "AI3R",	0x2016,	0x23,	's',	0			},	/* Analog input 3 standardized value */
	{ "AI4R",	0x2016,	0x24,	's',	0			},	/* AI4 real application image (MAX = 8192) */
	{ "AI5R",	0x2016,	0x25,	's',	0			},	/* AI5 real application image (MAX = 8192) */
	{ "AI1C",	0x2016,	0x2B,	's',	0			},	/* Physical value AI1 */
	{ "AI2C",	0x2016,	0x2C,	's',	0			},	/* Physical value AI2 */
	{ "AI3C",	0x2016,	0x2D,	's',	0			},	/* Physical value AI3 */
	{ "AI4C",	0x2016,	0x2E,	's',	0			},	/* Physical value AI4 */
	{ "AI5C",	0x2016,	0x2F,	's',	0			},	/* AI5 customer image (1mV, 0.001mA) */
	{ "AO1I",	0x2016,	0x34,	's',	0			},	/* AO1 output physical image (MAX = 8192) */
	{ "AO2I",	0x2016,	0x35,	's',	0			},	/* AO2 output physical image (MAX = 8192) */
	{ "AO1R",	0x2016,	0x3E,	's',	0			},	/* Analog output 1 standardized value */
	{ "AO2R",	0x2016,	0x3F,	's',	0			},	/* AO2 real application image (MAX = 8192) */
	{ "AO1C",	0x2016,	0x48,	's',	0			},	/* AQ1 physical value */
	{ "AO2C",	0x2016,	0x49,	's',	0			},	/* AQ2 physical value */
	{ "AIV1",	0x2016,	0x52,	's',	0			},	/* AIV1 Image input  */
	{ "AIC1",	0x2016,	0x53,	'u',	en_P86_PSA	},	/* Channel assignment for virtual Analog Input AIV1  */
	{ "AV1T",	0x2016,	0x58,	'u',	en_P86_AVOT	},	/* Configuration of virtual analog input AIV1 */
	{ "PTOC",	0x2016,	0x5A,	'u',	0			},	/* PTO frequency */
	{ "SAI1",	0x2016,	0x5C,	's',	0			},	/* AI1 physical value without filter */
	{ "SAI2",	0x2016,	0x5D,	's',	0			},	/* AI2 physical value without filter */
	{ "SAI3",	0x2016,	0x5E,	's',	0			},	/* AI3 physical value without filter */
	{ "SAI4",	0x2016,	0x5F,	's',	0			},	/* AI4 customer image (1mV, 0.001mA) without filter */
	{ "SAO1",	0x2016,	0x60,	's',	0			},	/* AO1 physical value without filter */
	{ "SAO2",	0x2016,	0x61,	's',	0			},	/* AO2 customer image (1mV, 0.001mA) without filter */
	{ "SAI5",	0x2016,	0x63,	's',	0			},	/* AI5 customer image (1mV, 0.001mA) without filter */
	{ "PGI",	0x201A,	0x05,	'u',	0			},	/* Number of pulses */
	{ "ENC",	0x201A,	0x06,	'u',	en_P86_ENC	},	/* Encoder check */
	{ "ENU",	0x201A,	0x07,	'u',	en_P86_ENU	},	/* Encoder usage */
	{ "ECC",	0x201A,	0x08,	'u',	en_P86_N_Y	},	/* Encoder coupling monitoring */
	{ "ENS",	0x201A,	0x09,	'u',	en_P86_ENS	},	/* AB Encoder type configuration */
	{ "ECT",	0x201A,	0x0A,	'u',	0			},	/* Encoder check time */
	{ "PUC",	0x201A,	0x0C,	'u',	0			},	/* Encoder pulse count */
	{ "RPPN",	0x201A,	0x0E,	'u',	en_P86_RPPN	},	/* Resolver poles nbr */
	{ "UECP",	0x201A,	0x10,	'u',	en_P86_UECP	},	/* Encoder type */
	{ "UECV",	0x201A,	0x11,	'u',	en_P86_UECV	},	/* Encoder supply voltage */
	{ "UELC",	0x201A,	0x12,	'u',	0			},	/* Sincos lines count */
	{ "ENRI",	0x201A,	0x13,	'u',	en_P86_N_Y	},	/* Inversion of encoder rotation direction */
	{ "TRES",	0x201A,	0x14,	'u',	en_P86_TRES	},	/* Resolver transformation ratio */
	{ "SSCD",	0x201A,	0x15,	'u',	en_P86_SSCD	},	/* SSI code type */
	{ "SSCP",	0x201A,	0x16,	'u',	en_P86_SSCP	},	/* SSI parity */
	{ "SSFS",	0x201A,	0x17,	's',	0			},	/* SSI frame size */
	{ "ENMR",	0x201A,	0x18,	's',	0			},	/* Number of revolutions */
	{ "ENTR",	0x201A,	0x19,	's',	0			},	/* Turn bit resolution */
	{ "ENSP",	0x201A,	0x1C,	'u',	en_P86_ENSP	},	/* Clock frequency */
	{ "RPOS",	0x201A,	0x1D,	'u',	en_P86_PSLIN	},	/* Reset position assignment */
	{ "REFQ",	0x201A,	0x1E,	'u',	en_P86_REFQ	},	/* Resolver excitation frequency */
	{ "FFA",	0x201A,	0x1F,	'u',	en_P86_N_Y	},	/* Encoder  feeback filter activation */
	{ "FFR",	0x201A,	0x20,	'u',	0			},	/* Encoder feedback filter value */
	{ "ABMF",	0x201A,	0x21,	'u',	en_P86_ABMF	},	/* AB encoder maximum frequency */
	{ "THET",	0x201A,	0x3E,	'u',	en_P86_THET	},	/* Encoder thermal sensor type */
	{ "THER",	0x201A,	0x3F,	's',	0			},	/* Encoder thermal resistor value */
	{ "THEV",	0x201A,	0x40,	's',	0			},	/* Encoder thermal value */
	{ "THEA",	0x201A,	0x41,	's',	0			},	/* Thermal warning level for encoder */
	{ "THEF",	0x201A,	0x42,	's',	0			},	/* Thermal error level for encoder */
	{ "THEB",	0x201A,	0x43,	'u',	en_P86_ECFG	},	/* Response to thermal error for encoder */
	{ "PUCD",	0x201A,	0x45,	'u',	0			},	/* PLC encoder pulse 32bits */
	{ "EECP",	0x201A,	0x47,	'u',	en_P86_EECP	},	/* Emb. enc. type */
	{ "EPGI",	0x201A,	0x48,	'u',	0			},	/* Emb. enc. numb. of pulses */
	{ "EELC",	0x201A,	0x49,	'u',	0			},	/* Emb. enc. Sincos lines cnt */
	{ "EENU",	0x201A,	0x4E,	'u',	en_P86_ENU	},	/* Emb. enc. usage */
	{ "EERI",	0x201A,	0x4F,	'u',	en_P86_N_Y	},	/* Emb. enc. rotation inv. */
	{ "EECV",	0x201A,	0x50,	'u',	en_P86_EECV	},	/* Emb. enc. supply volt. */
	{ "ENCR",	0x201A,	0x63,	'u',	0			},	/* Encoder resolution characteristic */
	{ "ENCE",	0x201A,	0x64,	'u',	0			},	/* Encoder feedback error number */
	{ "ADD",	0x201E,	0x02,	'u',	0			},	/* Drive Modbus Address */
	{ "TBR",	0x201E,	0x04,	'u',	en_P86_TBR	},	/* Modbus baud rate */
	{ "TFO",	0x201E,	0x05,	'u',	en_P86_FOR	},	/* Modbus format */
	{ "TTO",	0x201E,	0x06,	'u',	0			},	/* Modbus timeout */
	{ "TWO",	0x201E,	0x07,	'u',	en_P86_TWO	},	/* Terminal Modbus: Word order */
	{ "M1EC",	0x201E,	0x0B,	'u',	0			},	/* Mdb NET CRC errors */
	{ "M1CT",	0x201E,	0x0C,	'u',	0			},	/* Mdb frame number */
	{ "TBR2",	0x201E,	0x18,	'u',	en_P86_TBR	},	/* HMI baud rate */
	{ "TFO2",	0x201E,	0x19,	'u',	en_P86_FOR	},	/* HMI format */
	{ "TWO2",	0x201E,	0x1B,	'u',	en_P86_TWO	},	/* Terminal Modbus 2: Word order */
	{ "M2EC",	0x201E,	0x1F,	'u',	0			},	/* Mdb NET CRC errors */
	{ "M2CT",	0x201E,	0x20,	'u',	0			},	/* Mdb NET frames */
	{ "ADCO",	0x201E,	0x34,	'u',	0			},	/* Drive CANopen address */
	{ "BDCO",	0x201E,	0x36,	'u',	en_P86_BDCO	},	/* CANopen baudrate */
	{ "ERCO",	0x201E,	0x39,	'u',	0			},	/* CANopen error */
	{ "NMTS",	0x201E,	0x3A,	'u',	en_P86_NMTS	},	/* Canopen NMT state */
	{ "TEC1",	0x201E,	0x3B,	'u',	0			},	/* TX Error Counter */
	{ "REC1",	0x201E,	0x3C,	'u',	0			},	/* RX Error Counter */
	{ "PEV1",	0x201E,	0x47,	'u',	0			},	/* TPDO1 Event mask */
	{ "PEV2",	0x201E,	0x48,	'u',	0			},	/* TPDO2 Event mask */
	{ "PEV3",	0x201E,	0x49,	'u',	0			},	/* TPDO3 Event mask */
	{ "PEV4",	0x201E,	0x4A,	'u',	0			},	/* TPDO4 Event mask */
	{ "MLTO",	0x201E,	0x56,	'u',	0			},	/* MultiDrive Link communication timeout */
	{ "ADRC",	0x2024,	0x02,	'u',	0			},	/* Drive address */
	{ "BDR",	0x2024,	0x04,	'u',	en_P86_TBR	},	/* Comm. option baud rate */
	{ "AMOC",	0x2024,	0x34,	'u',	0			},	/* Mdb add comm. Module */
	{ "BDRU",	0x2024,	0x3D,	'u',	en_P86_TBR	},	/* Data rate used */
	{ "PRFL",	0x2024,	0x42,	'u',	en_P86_PRFL	},	/* PPO profile used */
	{ "DPMA",	0x2024,	0x43,	'u',	en_P86_DPMA	},	/* DP Master Active */
	{ "CIOA",	0x2024,	0x44,	'u',	en_P86_CIOA	},	/* Configured Assembly */
	{ "ECSS",	0x2024,	0x5B,	'u',	en_P86_ETST	},	/* EtherCAT slave status */
	{ "ECSA",	0x2024,	0x5C,	'u',	0			},	/* EtherCAT second address */
	{ "ECAA",	0x2024,	0x5D,	'u',	0			},	/* EtherCAT address */
	{ "IPL",	0x2028,	0x03,	'u',	en_P86_ECFG	},	/* Input Phase Loss assignment */
	{ "STP",	0x2028,	0x05,	'u',	en_P86_STP	},	/* Stop type on power loss */
	{ "SDD",	0x2028,	0x06,	'u',	en_P86_N_Y	},	/* Load slip detection */
	{ "EPL",	0x2028,	0x07,	'u',	en_P86_ECFG	},	/* Drive response to external error */
	{ "OHL",	0x2028,	0x09,	'u',	en_P86_ECFG	},	/* Drive overtemp error response */
	{ "OLL",	0x2028,	0x0A,	'u',	en_P86_ECFG	},	/* Motor overtemp error response */
	{ "SLL",	0x2028,	0x0B,	'u',	en_P86_ECFG	},	/* Response to Modbus interruption */
	{ "COL",	0x2028,	0x0C,	'u',	en_P86_ECFG	},	/* Response to CANopen error */
	{ "TNL",	0x2028,	0x0D,	'u',	en_P86_ECFG	},	/* Response to Autotuning error */
	{ "LFL3",	0x2028,	0x0E,	'u',	en_P86_ECFG	},	/* Response to 4-20mA loss on AI3 */
	{ "LFL4",	0x2028,	0x0F,	'u',	en_P86_ECFG	},	/* Response to 4-20mA loss on AI4 */
	{ "CLL",	0x2028,	0x10,	'u',	en_P86_ECFG	},	/* Response to Fieldbus module communication interruption */
	{ "LFL1",	0x2028,	0x12,	'u',	en_P86_ECFG	},	/* Response to 4-20mA loss on AI1 */
	{ "LFL5",	0x2028,	0x14,	'u',	en_P86_ECFG	},	/* Response to 4-20mA loss on AI5 */
	{ "ETHL",	0x2028,	0x16,	'u',	en_P86_ECFG	},	/* Ethernet error response */
	{ "GRFL",	0x2028,	0x1F,	's',	0			},	/* Ground Fault activation */
	{ "TLOL",	0x2028,	0x20,	'u',	en_P86_TLOL	},	/* Drive overload monitoring activation */
	{ "TLOA",	0x2028,	0x23,	's',	0			},	/* I2t actual integral load value */
	{ "TLOM",	0x2028,	0x24,	's',	0			},	/* I2t mean load value */
	{ "LFF",	0x2028,	0x51,	'u',	0			},	/* Fall back speed */
	{ "ODT",	0x2028,	0x52,	'u',	0			},	/* Output Phase Loss delay */
	{ "LFT",	0x2029,	0x16,	'u',	en_P86_LFT	},	/* Last Error occurred */
	{ "ATR",	0x2029,	0x17,	'u',	en_P86_N_Y	},	/* Automatic Fault reset */
	{ "TAR",	0x2029,	0x18,	'u',	en_P86_DUR	},	/* Fault Reset Time */
	{ "RSF",	0x2029,	0x19,	'u',	en_P86_PSLIN	},	/* Fault reset input assignment */
	{ "INH",	0x2029,	0x1A,	'u',	en_P86_PSLIN	},	/* Disable Error Detection */
	{ "RP",	0x2029,	0x1D,	'u',	en_P86_N_Y	},	/* Product restart */
	{ "RPA",	0x2029,	0x1E,	'u',	en_P86_PSLIN	},	/* Product restart assignment */
	{ "CIC",	0x2029,	0x1F,	'u',	0			},	/* Incorrect configuration */
	{ "ETF",	0x2029,	0x20,	'u',	en_P86_PSLIN	},	/* External error assignment */
	{ "CNF",	0x2029,	0x21,	'u',	0			},	/* Fieldbus module Communication interruption */
	{ "ILF1",	0x2029,	0x23,	'u',	0			},	/* Internal communication interruption 1 */
	{ "ETHF",	0x2029,	0x25,	'u',	0			},	/* Ethernet embedded fault (ETHF) */
	{ "INF6",	0x2029,	0x26,	'u',	0			},	/* Module identification error (INF6) */
	{ "INFJ",	0x2029,	0x2B,	'u',	0			},	/* Internal Error 19 (Encoder) */
	{ "CIC2",	0x2029,	0x5B,	'u',	0			},	/* Incorrect configuration 2 */
	{ "DP0",	0x202A,	0x01,	'u',	en_P86_LFT	},	/* Fault code on last fault */
	{ "DP1",	0x202A,	0x02,	'u',	en_P86_LFT	},	/* Fault code on fault n-1 */
	{ "DP2",	0x202A,	0x03,	'u',	en_P86_LFT	},	/* Fault code on fault n-2 */
	{ "DP3",	0x202A,	0x04,	'u',	en_P86_LFT	},	/* Fault code on fault n-3 */
	{ "DP4",	0x202A,	0x05,	'u',	en_P86_LFT	},	/* Fault code on fault n-4 */
	{ "DP5",	0x202A,	0x06,	'u',	en_P86_LFT	},	/* Fault code on fault n-5 */
	{ "DP6",	0x202A,	0x07,	'u',	en_P86_LFT	},	/* Fault code on fault n-6 */
	{ "DP7",	0x202A,	0x08,	'u',	en_P86_LFT	},	/* Fault code on fault n-7 */
	{ "DP8",	0x202A,	0x09,	'u',	en_P86_LFT	},	/* Fault code on fault n-8 */
	{ "DP9",	0x202A,	0x0A,	'u',	en_P86_LFT	},	/* Fault record 9 (1 is last) */
	{ "EP0",	0x202A,	0x0B,	'u',	0			},	/* State word */
	{ "EP1",	0x202A,	0x0C,	'u',	0			},	/* Status of last error 1 */
	{ "EP2",	0x202A,	0x0D,	'u',	0			},	/* Status of last error 2 */
	{ "EP3",	0x202A,	0x0E,	'u',	0			},	/* Status of last error 3 */
	{ "EP4",	0x202A,	0x0F,	'u',	0			},	/* Status of last error 4 */
	{ "EP5",	0x202A,	0x10,	'u',	0			},	/* State word */
	{ "EP6",	0x202A,	0x11,	'u',	0			},	/* State word */
	{ "EP7",	0x202A,	0x12,	'u',	0			},	/* State word */
	{ "EP8",	0x202A,	0x13,	'u',	0			},	/* State word */
	{ "EP9",	0x202A,	0x14,	'u',	0			},	/* Status of last error 1 */
	{ "IP0",	0x202A,	0x15,	'u',	0			},	/* ETI state word */
	{ "IP1",	0x202A,	0x16,	'u',	0			},	/* ETI state word */
	{ "IP2",	0x202A,	0x17,	'u',	0			},	/* ETI state word */
	{ "IP3",	0x202A,	0x18,	'u',	0			},	/* ETI state word */
	{ "IP4",	0x202A,	0x19,	'u',	0			},	/* ETI state word */
	{ "IP5",	0x202A,	0x1A,	'u',	0			},	/* ETI state word */
	{ "IP6",	0x202A,	0x1B,	'u',	0			},	/* ETI state word */
	{ "IP7",	0x202A,	0x1C,	'u',	0			},	/* ETI state word */
	{ "IP8",	0x202A,	0x1D,	'u',	0			},	/* ETI state word */
	{ "IP9",	0x202A,	0x1E,	'u',	0			},	/* ETI state word */
	{ "CMP0",	0x202A,	0x1F,	'u',	0			},	/* Cmd word */
	{ "CMP1",	0x202A,	0x20,	'u',	0			},	/* Cmd word */
	{ "CMP2",	0x202A,	0x21,	'u',	0			},	/* Cmd word */
	{ "CMP3",	0x202A,	0x22,	'u',	0			},	/* Cmd word */
	{ "CMP4",	0x202A,	0x23,	'u',	0			},	/* Cmd word */
	{ "CMP5",	0x202A,	0x24,	'u',	0			},	/* Cmd word */
	{ "CMP6",	0x202A,	0x25,	'u',	0			},	/* Cmd word */
	{ "CMP7",	0x202A,	0x26,	'u',	0			},	/* Cmd word  */
	{ "CMP8",	0x202A,	0x27,	'u',	0			},	/* Cmd word */
	{ "CMP9",	0x202A,	0x28,	'u',	0			},	/* Cmd word */
	{ "LCP0",	0x202A,	0x29,	's',	0			},	/* Motor current */
	{ "LCP1",	0x202A,	0x2A,	's',	0			},	/* Motor current */
	{ "LCP2",	0x202A,	0x2B,	's',	0			},	/* Motor current */
	{ "LCP3",	0x202A,	0x2C,	's',	0			},	/* Motor current */
	{ "LCP4",	0x202A,	0x2D,	's',	0			},	/* Motor current */
	{ "LCP5",	0x202A,	0x2E,	's',	0			},	/* Motor current */
	{ "LCP6",	0x202A,	0x2F,	's',	0			},	/* Motor current */
	{ "LCP7",	0x202A,	0x30,	's',	0			},	/* Motor current */
	{ "LCP8",	0x202A,	0x31,	's',	0			},	/* Motor current */
	{ "LCP9",	0x202A,	0x32,	's',	0			},	/* Motor current */
	{ "RFP0",	0x202A,	0x33,	's',	0			},	/* Output frequency */
	{ "RFP1",	0x202A,	0x34,	's',	0			},	/* Output frequency */
	{ "RFP2",	0x202A,	0x35,	's',	0			},	/* Output frequency */
	{ "RFP3",	0x202A,	0x36,	's',	0			},	/* Output frequency */
	{ "RFP4",	0x202A,	0x37,	's',	0			},	/* Output frequency */
	{ "RFP5",	0x202A,	0x38,	's',	0			},	/* Output frequency */
	{ "RFP6",	0x202A,	0x39,	's',	0			},	/* Output frequency */
	{ "RFP7",	0x202A,	0x3A,	's',	0			},	/* Output frequency */
	{ "RFP8",	0x202A,	0x3B,	's',	0			},	/* Output frequency */
	{ "RFP9",	0x202A,	0x3C,	's',	0			},	/* Motor frequency */
	{ "RTP0",	0x202A,	0x3D,	'u',	0			},	/* Elapsed time */
	{ "RTP1",	0x202A,	0x3E,	'u',	0			},	/* Elapsed time */
	{ "RTP2",	0x202A,	0x3F,	'u',	0			},	/* Elapsed time */
	{ "RTP3",	0x202A,	0x40,	'u',	0			},	/* Elapsed time */
	{ "RTP4",	0x202A,	0x41,	'u',	0			},	/* Elapsed time */
	{ "RTP5",	0x202A,	0x42,	'u',	0			},	/* Elapsed time */
	{ "RTP6",	0x202A,	0x43,	'u',	0			},	/* Elapsed time */
	{ "RTP7",	0x202A,	0x44,	'u',	0			},	/* Elapsed time */
	{ "RTP8",	0x202A,	0x45,	'u',	0			},	/* Elapsed time */
	{ "RTP9",	0x202A,	0x46,	'u',	0			},	/* Run Elapsed time */
	{ "ULP0",	0x202A,	0x47,	'u',	0			},	/* DC bus voltage */
	{ "ULP1",	0x202A,	0x48,	'u',	0			},	/* DC bus voltage */
	{ "ULP2",	0x202A,	0x49,	'u',	0			},	/* DC bus voltage */
	{ "ULP3",	0x202A,	0x4A,	'u',	0			},	/* DC bus voltage */
	{ "ULP4",	0x202A,	0x4B,	'u',	0			},	/* DC bus voltage */
	{ "ULP5",	0x202A,	0x4C,	'u',	0			},	/* DC bus voltage */
	{ "ULP6",	0x202A,	0x4D,	'u',	0			},	/* DC bus voltage */
	{ "ULP7",	0x202A,	0x4E,	'u',	0			},	/* DC bus voltage */
	{ "ULP8",	0x202A,	0x4F,	'u',	0			},	/* DC bus voltage */
	{ "ULP9",	0x202A,	0x50,	'u',	0			},	/* Mains voltage */
	{ "THP0",	0x202A,	0x51,	'u',	0			},	/* Motor thermal state */
	{ "THP1",	0x202A,	0x52,	'u',	0			},	/* Motor thermal state */
	{ "THP2",	0x202A,	0x53,	'u',	0			},	/* Motor thermal state */
	{ "THP3",	0x202A,	0x54,	'u',	0			},	/* Motor thermal state */
	{ "THP4",	0x202A,	0x55,	'u',	0			},	/* Motor thermal state */
	{ "THP5",	0x202A,	0x56,	'u',	0			},	/* Motor thermal state */
	{ "THP6",	0x202A,	0x57,	'u',	0			},	/* Motor thermal state */
	{ "THP7",	0x202A,	0x58,	'u',	0			},	/* Motor thermal state */
	{ "THP8",	0x202A,	0x59,	'u',	0			},	/* Motor thermal state */
	{ "THP9",	0x202A,	0x5A,	'u',	0			},	/* Motor thermal state */
	{ "CRP0",	0x202A,	0x5B,	'u',	0			},	/* Channels active on last fault */
	{ "CRP1",	0x202A,	0x5C,	'u',	0			},	/* Active channels on fault n-1 */
	{ "CRP2",	0x202A,	0x5D,	'u',	0			},	/* Active channels on fault n-2 */
	{ "CRP3",	0x202A,	0x5E,	'u',	0			},	/* Active channels on fault n-3 */
	{ "CRP4",	0x202A,	0x5F,	'u',	0			},	/* Active channels on fault n-4 */
	{ "CRP5",	0x202A,	0x60,	'u',	0			},	/* Active channels on fault n-5 */
	{ "CRP6",	0x202A,	0x61,	'u',	0			},	/* Active channels on fault n-6 */
	{ "CRP7",	0x202A,	0x62,	'u',	0			},	/* Active channels on fault n-7 */
	{ "CRP8",	0x202A,	0x63,	'u',	0			},	/* Active channels on fault n-8 */
	{ "CRP9",	0x202A,	0x64,	'u',	0			},	/* Cmd & ref channel */
	{ "MD0",	0x202B,	0x01,	'u',	0			},	/* Year, month and day of actual fault */
	{ "MD1",	0x202B,	0x02,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD2",	0x202B,	0x03,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD3",	0x202B,	0x04,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD4",	0x202B,	0x05,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD5",	0x202B,	0x06,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD6",	0x202B,	0x07,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD7",	0x202B,	0x08,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD8",	0x202B,	0x09,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MD9",	0x202B,	0x0A,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "DM0",	0x202B,	0x0B,	'u',	0			},	/* Hour and minute of actual fault */
	{ "DM1",	0x202B,	0x0C,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM2",	0x202B,	0x0D,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM3",	0x202B,	0x0E,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM4",	0x202B,	0x0F,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM5",	0x202B,	0x10,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM6",	0x202B,	0x11,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM7",	0x202B,	0x12,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM8",	0x202B,	0x13,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DM9",	0x202B,	0x14,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "HS1",	0x202B,	0x16,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS2",	0x202B,	0x17,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS3",	0x202B,	0x18,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS4",	0x202B,	0x19,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS5",	0x202B,	0x1A,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS6",	0x202B,	0x1B,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS7",	0x202B,	0x1C,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS8",	0x202B,	0x1D,	'u',	en_P86_HMIS	},	/* HMI status */
	{ "HS9",	0x202B,	0x1E,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "OTP0",	0x202B,	0x1F,	's',	0			},	/* Motor torque  */
	{ "OTP1",	0x202B,	0x20,	's',	0			},	/* Motor torque  */
	{ "OTP2",	0x202B,	0x21,	's',	0			},	/* Motor torque  */
	{ "OTP3",	0x202B,	0x22,	's',	0			},	/* Motor torque  */
	{ "OTP4",	0x202B,	0x23,	's',	0			},	/* Motor torque  */
	{ "OTP5",	0x202B,	0x24,	's',	0			},	/* Motor torque  */
	{ "OTP6",	0x202B,	0x25,	's',	0			},	/* Motor torque  */
	{ "OTP7",	0x202B,	0x26,	's',	0			},	/* Motor torque  */
	{ "OTP8",	0x202B,	0x27,	's',	0			},	/* Motor torque  */
	{ "OTP9",	0x202B,	0x28,	's',	0			},	/* Motor torque  */
	{ "TDP0",	0x202B,	0x29,	'u',	0			},	/* Drive thermal state */
	{ "TDP1",	0x202B,	0x2A,	'u',	0			},	/* Drive thermal state */
	{ "TDP2",	0x202B,	0x2B,	'u',	0			},	/* Drive thermal state */
	{ "TDP3",	0x202B,	0x2C,	'u',	0			},	/* Drive thermal state */
	{ "TDP4",	0x202B,	0x2D,	'u',	0			},	/* Drive thermal state */
	{ "TDP5",	0x202B,	0x2E,	'u',	0			},	/* Drive thermal state */
	{ "TDP6",	0x202B,	0x2F,	'u',	0			},	/* Drive thermal state */
	{ "TDP7",	0x202B,	0x30,	'u',	0			},	/* Drive thermal state */
	{ "TDP8",	0x202B,	0x31,	'u',	0			},	/* Drive thermal state */
	{ "TDP9",	0x202B,	0x32,	'u',	0			},	/* Drive thermal state */
	{ "TJP0",	0x202B,	0x33,	'u',	0			},	/* IGBT junction temp */
	{ "TJP1",	0x202B,	0x34,	'u',	0			},	/* IGBT junction temp */
	{ "TJP2",	0x202B,	0x35,	'u',	0			},	/* IGBT junction temp */
	{ "TJP3",	0x202B,	0x36,	'u',	0			},	/* IGBT junction temp */
	{ "TJP4",	0x202B,	0x37,	'u',	0			},	/* IGBT junction temp */
	{ "TJP5",	0x202B,	0x38,	'u',	0			},	/* IGBT junction temp */
	{ "TJP6",	0x202B,	0x39,	'u',	0			},	/* IGBT junction temp */
	{ "TJP7",	0x202B,	0x3A,	'u',	0			},	/* IGBT junction temp */
	{ "TJP8",	0x202B,	0x3B,	'u',	0			},	/* IGBT junction temp */
	{ "TJP9",	0x202B,	0x3C,	'u',	0			},	/* IGBT junction temp */
	{ "SFP0",	0x202B,	0x3D,	'u',	0			},	/* Switching frequency */
	{ "SFP1",	0x202B,	0x3E,	'u',	0			},	/* Switching frequency */
	{ "SFP2",	0x202B,	0x3F,	'u',	0			},	/* Switching frequency */
	{ "SFP3",	0x202B,	0x40,	'u',	0			},	/* Switching frequency */
	{ "SFP4",	0x202B,	0x41,	'u',	0			},	/* Switching frequency */
	{ "SFP5",	0x202B,	0x42,	'u',	0			},	/* Switching frequency */
	{ "SFP6",	0x202B,	0x43,	'u',	0			},	/* Switching frequency */
	{ "SFP7",	0x202B,	0x44,	'u',	0			},	/* Switching frequency */
	{ "SFP8",	0x202B,	0x45,	'u',	0			},	/* Switching frequency */
	{ "SFP9",	0x202B,	0x46,	'u',	0			},	/* Switching frequency */
	{ "FNB",	0x202B,	0x5E,	'u',	0			},	/* Fault counter */
	{ "DPA",	0x202E,	0x01,	'u',	en_P86_LFT	},	/* Fault record 10 (1 is last) */
	{ "DPB",	0x202E,	0x02,	'u',	en_P86_LFT	},	/* Fault record 11 (1 is last) */
	{ "DPC",	0x202E,	0x03,	'u',	en_P86_LFT	},	/* Fault record 12 (1 is last) */
	{ "DPD",	0x202E,	0x04,	'u',	en_P86_LFT	},	/* Fault record 13 (1 is last) */
	{ "DPE",	0x202E,	0x05,	'u',	en_P86_LFT	},	/* Fault record 14 (1 is last) */
	{ "DPF",	0x202E,	0x06,	'u',	en_P86_LFT	},	/* Fault record 15 (1 is last) */
	{ "EPA",	0x202E,	0x0B,	'u',	0			},	/* Status of last error 2 */
	{ "EPB",	0x202E,	0x0C,	'u',	0			},	/* Status of last error 3 */
	{ "EPC",	0x202E,	0x0D,	'u',	0			},	/* Status of last error 4 */
	{ "EPD",	0x202E,	0x0E,	'u',	0			},	/* State word */
	{ "EPE",	0x202E,	0x0F,	'u',	0			},	/* State word */
	{ "EPF",	0x202E,	0x10,	'u',	0			},	/* State word */
	{ "IPA",	0x202E,	0x15,	'u',	0			},	/* ETI state word */
	{ "IPB",	0x202E,	0x16,	'u',	0			},	/* ETI state word */
	{ "IPC",	0x202E,	0x17,	'u',	0			},	/* ETI state word */
	{ "IPD",	0x202E,	0x18,	'u',	0			},	/* ETI state word */
	{ "IPE",	0x202E,	0x19,	'u',	0			},	/* ETI state word */
	{ "IPF",	0x202E,	0x1A,	'u',	0			},	/* ETI state word */
	{ "CMPA",	0x202E,	0x1F,	'u',	0			},	/* Cmd word */
	{ "CMPB",	0x202E,	0x20,	'u',	0			},	/* Cmd word */
	{ "CMPC",	0x202E,	0x21,	'u',	0			},	/* CMD command word */
	{ "CMPD",	0x202E,	0x22,	'u',	0			},	/* CMD command word */
	{ "CMPE",	0x202E,	0x23,	'u',	0			},	/* CMD command word */
	{ "CMPF",	0x202E,	0x24,	'u',	0			},	/* CMD command word */
	{ "LCPA",	0x202E,	0x29,	's',	0			},	/* Motor current */
	{ "LCPB",	0x202E,	0x2A,	's',	0			},	/* Motor current */
	{ "LCPC",	0x202E,	0x2B,	's',	0			},	/* Motor current */
	{ "LCPD",	0x202E,	0x2C,	's',	0			},	/* Motor current */
	{ "LCPE",	0x202E,	0x2D,	's',	0			},	/* Motor current */
	{ "LCPF",	0x202E,	0x2E,	's',	0			},	/* Motor current */
	{ "RFPA",	0x202E,	0x33,	's',	0			},	/* Motor frequency */
	{ "RFPB",	0x202E,	0x34,	's',	0			},	/* Motor frequency */
	{ "RFPC",	0x202E,	0x35,	's',	0			},	/* Motor frequency */
	{ "RFPD",	0x202E,	0x36,	's',	0			},	/* Motor frequency */
	{ "RFPE",	0x202E,	0x37,	's',	0			},	/* Motor frequency */
	{ "RFPF",	0x202E,	0x38,	's',	0			},	/* Motor frequency */
	{ "RTPA",	0x202E,	0x3D,	'u',	0			},	/* Run Elapsed time */
	{ "RTPB",	0x202E,	0x3E,	'u',	0			},	/* Run Elapsed time */
	{ "RTPC",	0x202E,	0x3F,	'u',	0			},	/* Run Elapsed time */
	{ "RTPD",	0x202E,	0x40,	'u',	0			},	/* Run Elapsed time */
	{ "RTPE",	0x202E,	0x41,	'u',	0			},	/* Run Elapsed time */
	{ "RTPF",	0x202E,	0x42,	'u',	0			},	/* Run Elapsed time */
	{ "ULPA",	0x202E,	0x47,	'u',	0			},	/* Mains voltage */
	{ "ULPB",	0x202E,	0x48,	'u',	0			},	/* Mains voltage */
	{ "ULPC",	0x202E,	0x49,	'u',	0			},	/* Mains voltage */
	{ "ULPD",	0x202E,	0x4A,	'u',	0			},	/* Mains voltage */
	{ "ULPE",	0x202E,	0x4B,	'u',	0			},	/* Mains voltage */
	{ "ULPF",	0x202E,	0x4C,	'u',	0			},	/* Mains voltage */
	{ "THPA",	0x202E,	0x51,	'u',	0			},	/* Motor thermal state */
	{ "THPB",	0x202E,	0x52,	'u',	0			},	/* Motor thermal state */
	{ "THPC",	0x202E,	0x53,	'u',	0			},	/* Motor thermal state */
	{ "THPD",	0x202E,	0x54,	'u',	0			},	/* Motor thermal state */
	{ "THPE",	0x202E,	0x55,	'u',	0			},	/* Motor thermal state */
	{ "THPF",	0x202E,	0x56,	'u',	0			},	/* Motor thermal state */
	{ "CRPA",	0x202E,	0x5B,	'u',	0			},	/* Cmd & ref channel */
	{ "CRPB",	0x202E,	0x5C,	'u',	0			},	/* Cmd & ref channel */
	{ "CRPC",	0x202E,	0x5D,	'u',	0			},	/* Cmd & ref channel */
	{ "CRPD",	0x202E,	0x5E,	'u',	0			},	/* Cmd & ref channel */
	{ "CRPE",	0x202E,	0x5F,	'u',	0			},	/* Cmd & ref channel */
	{ "CRPF",	0x202E,	0x60,	'u',	0			},	/* Cmd & ref channel */
	{ "MDA",	0x202F,	0x01,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MDB",	0x202F,	0x02,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MDC",	0x202F,	0x03,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MDD",	0x202F,	0x04,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MDE",	0x202F,	0x05,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "MDF",	0x202F,	0x06,	'u',	0			},	/* Year, month and day of fault record x (1 is last) */
	{ "DMA",	0x202F,	0x0B,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DMB",	0x202F,	0x0C,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DMC",	0x202F,	0x0D,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DMD",	0x202F,	0x0E,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DME",	0x202F,	0x0F,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "DMF",	0x202F,	0x10,	'u',	0			},	/* Hour and minute of fault record x (1 is last) */
	{ "HSA",	0x202F,	0x15,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "HSB",	0x202F,	0x16,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "HSC",	0x202F,	0x17,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "HSD",	0x202F,	0x18,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "HSE",	0x202F,	0x19,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "HSF",	0x202F,	0x1A,	'u',	en_P86_HMIS	},	/* Drive state */
	{ "OTPA",	0x202F,	0x1F,	's',	0			},	/* Motor torque  */
	{ "OTPB",	0x202F,	0x20,	's',	0			},	/* Motor torque  */
	{ "OTPC",	0x202F,	0x21,	's',	0			},	/* Motor torque  */
	{ "OTPD",	0x202F,	0x22,	's',	0			},	/* Motor torque  */
	{ "OTPE",	0x202F,	0x23,	's',	0			},	/* Motor torque  */
	{ "OTPF",	0x202F,	0x24,	's',	0			},	/* Motor torque  */
	{ "TDPA",	0x202F,	0x29,	'u',	0			},	/* Drive thermal state */
	{ "TDPB",	0x202F,	0x2A,	'u',	0			},	/* Drive thermal state */
	{ "TDPC",	0x202F,	0x2B,	'u',	0			},	/* Drive thermal state */
	{ "TDPD",	0x202F,	0x2C,	'u',	0			},	/* Drive thermal state */
	{ "TDPE",	0x202F,	0x2D,	'u',	0			},	/* Drive thermal state */
	{ "TDPF",	0x202F,	0x2E,	'u',	0			},	/* Drive thermal state */
	{ "TJPA",	0x202F,	0x33,	'u',	0			},	/* IGBT junction temp */
	{ "TJPB",	0x202F,	0x34,	'u',	0			},	/* IGBT junction temp */
	{ "TJPC",	0x202F,	0x35,	'u',	0			},	/* IGBT junction temp */
	{ "TJPD",	0x202F,	0x36,	'u',	0			},	/* IGBT junction temp */
	{ "TJPE",	0x202F,	0x37,	'u',	0			},	/* IGBT junction temp */
	{ "TJPF",	0x202F,	0x38,	'u',	0			},	/* IGBT junction temp */
	{ "SFPA",	0x202F,	0x3D,	'u',	0			},	/* Switching frequency */
	{ "SFPB",	0x202F,	0x3E,	'u',	0			},	/* Switching frequency */
	{ "SFPC",	0x202F,	0x3F,	'u',	0			},	/* Switching frequency */
	{ "SFPD",	0x202F,	0x40,	'u',	0			},	/* Switching frequency */
	{ "SFPE",	0x202F,	0x41,	'u',	0			},	/* Switching frequency */
	{ "SFPF",	0x202F,	0x42,	'u',	0			},	/* Switching frequency */
	{ "SCS",	0x2032,	0x02,	'u',	en_P86_SCS	},	/* Save configuration */
	{ "FCS",	0x2032,	0x03,	'u',	en_P86_FCS	},	/* Restore configuration */
	{ "CNFS",	0x2032,	0x15,	'u',	en_P86_CNFS	},	/* Active configuration */
	{ "CNF1",	0x2032,	0x16,	'u',	en_P86_PSLIN	},	/* 2 configurations assignt. */
	{ "CNF2",	0x2032,	0x17,	'u',	en_P86_PSLIN	},	/* 3 configurations assignt. */
	{ "CHM",	0x2032,	0x1A,	'u',	en_P86_N_Y	},	/* Multimotors selection */
	{ "ULR",	0x2032,	0x2A,	'u',	en_P86_ULR	},	/* Upload rights */
	{ "DLR",	0x2032,	0x2B,	'u',	en_P86_DLR	},	/* Download rights */
	{ "PSST",	0x2032,	0x33,	'u',	en_P86_PSST	},	/* Password status */
	{ "PSS",	0x2032,	0x3D,	'u',	en_P86_PSS	},	/* Drive Systems pre-settings status */
	{ "PSRT",	0x2032,	0x3F,	'u',	0			},	/* Drive Systems pre-settings unlock */
	{ "CHCF",	0x2036,	0x02,	'u',	en_P86_CHCF	},	/* Control mode configuration */
	{ "COP",	0x2036,	0x03,	'u',	en_P86_COP	},	/* Copy Ch.1-Ch.2 */
	{ "RFC",	0x2036,	0x0C,	'u',	en_P86_PSLIN	},	/* Freq Switching Assignment */
	{ "RCB",	0x2036,	0x0D,	'u',	en_P86_PSLIN	},	/* Select switching (1 to 1B) */
	{ "FR1",	0x2036,	0x0E,	'u',	en_P86_PSA	},	/* Configuration reference frequency 1 */
	{ "FR2",	0x2036,	0x0F,	'u',	en_P86_PSA	},	/* Configuration reference frequency 2 */
	{ "FR1B",	0x2036,	0x10,	'u',	en_P86_PSA	},	/* Configuration ref. 1B */
	{ "CCS",	0x2036,	0x16,	'u',	en_P86_PSLIN	},	/* Command switching */
	{ "CD1",	0x2036,	0x18,	'u',	en_P86_CDX	},	/* Command channel 1 assign */
	{ "CD2",	0x2036,	0x19,	'u',	en_P86_CDX	},	/* Command channel 2 assign */
	{ "FLO",	0x2036,	0x20,	'u',	en_P86_PSLIN	},	/* Forced local assignment */
	{ "FLOC",	0x2036,	0x21,	'u',	en_P86_PSA	},	/* Forced Local frequency assignment */
	{ "FLOT",	0x2036,	0x22,	'u',	0			},	/* Time-out forc. local */
	{ "CRC",	0x2036,	0x2A,	'u',	0			},	/* Channel for reference frequency */
	{ "CCC",	0x2036,	0x2B,	'u',	0			},	/* Active command channel */
	{ "SPM",	0x2036,	0x5C,	'u',	en_P86_PSLIN	},	/* Reference frequency memory assignment */
	{ "CMD",	0x2037,	0x02,	'u',	0			},	/* Command register */
	{ "LFR",	0x2037,	0x03,	's',	0			},	/* Reference frequency */
	{ "PISP",	0x2037,	0x04,	'u',	0			},	/* PIDSet Point */
	{ "CMI",	0x2037,	0x05,	'u',	0			},	/* Extended control word */
	{ "LTR",	0x2037,	0x06,	's',	0			},	/* Torque reference */
	{ "LFR1",	0x2037,	0x16,	's',	0			},	/* Modbus reference frequency */
	{ "LFR2",	0x2037,	0x17,	's',	0			},	/* CANopen reference frequency */
	{ "LFR3",	0x2037,	0x18,	's',	0			},	/* Communication module reference frequency */
	{ "LFR5",	0x2037,	0x1A,	's',	0			},	/* Embedded ethernet reference frequency */
	{ "LFRD",	0x2038,	0x03,	's',	0			},	/* Speed setpoint */
	{ "ETAD",	0x2038,	0x04,	'u',	0			},	/* DRIVECOM : Status word */
	{ "RFRD",	0x2038,	0x05,	's',	0			},	/* Output velocity */
	{ "FRHD",	0x2038,	0x06,	's',	0			},	/* Speed reference before ramp */
	{ "ERRD",	0x2038,	0x07,	'u',	0			},	/* CiA402 fault code */
	{ "SMIL",	0x2038,	0x08,	'u',	0			},	/* Velocity max amount */
	{ "SMAL",	0x2038,	0x0A,	'u',	0			},	/* Velocity min amount */
	{ "SPAL",	0x2038,	0x0C,	'u',	0			},	/* Acceleration delta speed */
	{ "SPAT",	0x2038,	0x0E,	'u',	0			},	/* Acceleration delta time */
	{ "SPDL",	0x2038,	0x0F,	'u',	0			},	/* Deceleration delta speed */
	{ "FROD",	0x2038,	0x2A,	's',	0			},	/* Speed reference after ramp */
	{ "SPFN",	0x2038,	0x2B,	's',	0			},	/* Setpoint factor numerator */
	{ "SPFD",	0x2038,	0x2C,	's',	0			},	/* Setpoint factor denominator */
	{ "QSTD",	0x2038,	0x34,	'u',	en_P86_QSTD	},	/* Quick stop option code */
	{ "DOTD",	0x2038,	0x35,	'u',	en_P86_DOTD	},	/* Type of SwitchOn Disable Stop */
	{ "ACC",	0x203C,	0x02,	'u',	0			},	/* Acceleration ramp time */
	{ "DEC",	0x203C,	0x03,	'u',	0			},	/* Deceleration ramp time */
	{ "BRA",	0x203C,	0x04,	'u',	en_P86_BRA	},	/* Decel ramp adaptation */
	{ "RPT",	0x203C,	0x05,	'u',	en_P86_RPT	},	/* Type of Ramp */
	{ "TA1",	0x203C,	0x06,	'u',	0			},	/* Start  ACC ramp rounding */
	{ "TA2",	0x203C,	0x07,	'u',	0			},	/* End ACC ramp rounding */
	{ "TA3",	0x203C,	0x08,	'u',	0			},	/* Start DEC ramp rounding */
	{ "TA4",	0x203C,	0x09,	'u',	0			},	/* End DEC ramp rounding */
	{ "RPS",	0x203C,	0x0B,	'u',	en_P86_PSLIN	},	/* Ramp switching Assignment */
	{ "FRT",	0x203C,	0x0C,	'u',	0			},	/* Ramp 2 frequency threshold */
	{ "AC2",	0x203C,	0x0D,	'u',	0			},	/* Acceleration 2 ramp time */
	{ "DE2",	0x203C,	0x0E,	'u',	0			},	/* Deceleration 2 */
	{ "INR",	0x203C,	0x15,	'u',	en_P86_INR	},	/* Ramp increment */
	{ "FRO",	0x203C,	0x16,	's',	0			},	/* Frequency reference after ramp */
	{ "SPG",	0x203D,	0x04,	'u',	0			},	/* Speed proportional gain */
	{ "SIT",	0x203D,	0x05,	'u',	0			},	/* Speed time integral */
	{ "SFC",	0x203D,	0x06,	'u',	0			},	/* K speed loop filter */
	{ "SSL",	0x203D,	0x07,	'u',	en_P86_SSL	},	/* Speed loop type */
	{ "JEST",	0x203D,	0x08,	'u',	0			},	/* Estimated application inertia */
	{ "JAPL",	0x203D,	0x09,	'u',	0			},	/* Application Inertia */
	{ "JMUL",	0x203D,	0x0A,	'u',	0			},	/* Inertia Multiplying Coefficient */
	{ "FFP",	0x203D,	0x0B,	'u',	0			},	/* Feed forward value */
	{ "FFV",	0x203D,	0x0C,	'u',	0			},	/* Feed forward bandwidth */
	{ "JACO",	0x203D,	0x0D,	'u',	0			},	/* Inertia Coefficient of the application */
	{ "FFH",	0x203D,	0x10,	'u',	0			},	/* Filter time of the estimated speed */
	{ "CRTF",	0x203D,	0x11,	'u',	0			},	/* Filter time of the current */
	{ "CRFA",	0x203D,	0x13,	'u',	0			},	/* Internal currents filter time */
	{ "NFA",	0x203D,	0x15,	'u',	en_P86_NFL	},	/* Notch Filter Activation */
	{ "NFF1",	0x203D,	0x16,	'u',	0			},	/* Notch Filter 1 - Frequency */
	{ "NFB1",	0x203D,	0x17,	'u',	0			},	/* Notch Filter 1 - Bandwidth */
	{ "NFD1",	0x203D,	0x18,	'u',	0			},	/* Notch Filter 1 - Depth */
	{ "NFF2",	0x203D,	0x19,	'u',	0			},	/* Notch Filter 2 - Frequency */
	{ "NFB2",	0x203D,	0x1A,	'u',	0			},	/* Notch Filter 2 - Bandwidth */
	{ "NFD2",	0x203D,	0x1B,	'u',	0			},	/* Notch Filter 2 - Depth */
	{ "TEFF",	0x203D,	0x1F,	'u',	en_P86_PSA	},	/* External feed forward assignment */
	{ "CLI",	0x203E,	0x02,	'u',	0			},	/* Current limitation */
	{ "LC2",	0x203E,	0x03,	'u',	en_P86_PSLIN	},	/* Current Limitation 2 */
	{ "CL2",	0x203E,	0x04,	'u',	0			},	/* Current limitation 2 value */
	{ "TASU",	0x203E,	0x09,	'u',	en_P86_PSLIN	},	/* Reference torque switch assignment */
	{ "TAA2",	0x203E,	0x0A,	'u',	en_P86_PSA	},	/* Reference torque 2 assignment */
	{ "TLA",	0x203E,	0x0B,	'u',	en_P86_PSLIN	},	/* Torque limit. activation */
	{ "TLIM",	0x203E,	0x0C,	'u',	0			},	/* Motoring torque limit */
	{ "TLIG",	0x203E,	0x0D,	'u',	0			},	/* Generator torque limit */
	{ "TLC",	0x203E,	0x0E,	'u',	en_P86_PSLIN	},	/* Torque analog limit. activ */
	{ "TAA",	0x203E,	0x0F,	'u',	en_P86_PSA	},	/* Reference torque assignment */
	{ "INTP",	0x203E,	0x10,	'u',	en_P86_INCPER	},	/* Torque increment */
	{ "TPMM",	0x203E,	0x11,	'u',	0			},	/* Maximum power in motor mode */
	{ "TPMG",	0x203E,	0x12,	'u',	0			},	/* Maximum power in generator mode */
	{ "TSS",	0x203E,	0x15,	'u',	en_P86_PSLIN	},	/* Torque/Speed switching control mode */
	{ "TR1",	0x203E,	0x16,	'u',	en_P86_PSA	},	/* Channel for torque reference */
	{ "TSD",	0x203E,	0x17,	'u',	en_P86_PSLIN	},	/* Torque reference sign switching */
	{ "DBN",	0x203E,	0x18,	'u',	0			},	/* Torque regulation negative deadband */
	{ "DBP",	0x203E,	0x19,	'u',	0			},	/* Torque regulation positive deadband */
	{ "TRT",	0x203E,	0x1A,	'u',	0			},	/* Torque ratio */
	{ "TRP",	0x203E,	0x1B,	'u',	0			},	/* Torque ramp time */
	{ "TST",	0x203E,	0x1C,	'u',	en_P86_TST	},	/* Torque control stop type */
	{ "TOB",	0x203E,	0x1D,	'u',	en_P86_TOB	},	/* Response to torque control error */
	{ "RTO",	0x203E,	0x1E,	'u',	0			},	/* Torque control time out */
	{ "SPT",	0x203E,	0x1F,	'u',	0			},	/* Spin time */
	{ "TRR",	0x203E,	0x20,	's',	0			},	/* Torque reference before ramp */
	{ "TQR",	0x203E,	0x22,	'u',	en_P86_PSA	},	/* Torque ratio assignment */
	{ "TQOP",	0x203E,	0x23,	's',	0			},	/* Torque reference offset */
	{ "TQO",	0x203E,	0x24,	'u',	en_P86_PSA	},	/* Torque offset assignment */
	{ "TRF",	0x203E,	0x25,	'u',	en_P86_N_Y	},	/* Torque filter activation */
	{ "TRW",	0x203E,	0x26,	'u',	0			},	/* Torque filter bandwidth */
	{ "TRI",	0x203E,	0x27,	'u',	en_P86_PSLIN	},	/* Torque reference assignment */
	{ "TR2",	0x203E,	0x28,	'u',	en_P86_PSA	},	/* Torque reference 2 channel */
	{ "SSB",	0x203E,	0x29,	'u',	en_P86_ECFG	},	/* Stop type - Torque/I limit */
	{ "STO",	0x203E,	0x2A,	'u',	0			},	/* Torque/I limit. timeout */
	{ "HTQ",	0x203E,	0x2B,	's',	0			},	/* High torque */
	{ "LTQ",	0x203E,	0x2C,	's',	0			},	/* Low torque */
	{ "STPC",	0x203E,	0x47,	'u',	en_P86_N_Y	},	/* Stall monitoring activation */
	{ "STP1",	0x203E,	0x48,	'u',	0			},	/* Motor stall max time */
	{ "STP2",	0x203E,	0x49,	's',	0			},	/* Stall monitoring current level */
	{ "STP3",	0x203E,	0x4A,	's',	0			},	/* Stall monitoring frequency level */
	{ "EN70",	0x2041,	0x48,	's',	0			},	/* Motor control param. 70 */
	{ "UNS",	0x2042,	0x02,	'u',	0			},	/* Nominal motor voltage */
	{ "FRS",	0x2042,	0x03,	'u',	0			},	/* Nominal Motor Frequency */
	{ "NCR",	0x2042,	0x04,	'u',	0			},	/* Nominal motor current */
	{ "NSP",	0x2042,	0x05,	'u',	0			},	/* Nominal motor speed */
	{ "NSL",	0x2042,	0x06,	'u',	0			},	/* Nominal motor slip */
	{ "COS",	0x2042,	0x07,	'u',	0			},	/* Motor 1 Cosinus Phi */
	{ "CTT",	0x2042,	0x08,	'u',	en_P86_CTT	},	/* Motor control type */
	{ "TUN",	0x2042,	0x09,	'u',	en_P86_ACTION	},	/* Autotuning */
	{ "TUS",	0x2042,	0x0A,	'u',	en_P86_ACT	},	/* Autotuning status */
	{ "TUL",	0x2042,	0x0B,	'u',	en_P86_PSLIN	},	/* Autotuning input assignment */
	{ "OPL",	0x2042,	0x0C,	'u',	en_P86_OPL	},	/* Output Phase Loss assignment */
	{ "THT",	0x2042,	0x0D,	'u',	en_P86_THT	},	/* Motor thermal monitoring mode */
	{ "NPR",	0x2042,	0x0E,	'u',	0			},	/* Nominal motor power */
	{ "MPC",	0x2042,	0x0F,	'u',	en_P86_MPC	},	/* Motor parameter choice */
	{ "AUT",	0x2042,	0x10,	'u',	en_P86_AUT	},	/* Automatic autotune */
	{ "STUN",	0x2042,	0x12,	'u',	en_P86_STUN	},	/* Tune selection */
	{ "PPN",	0x2042,	0x13,	'u',	0			},	/* Number of pairs of poles calculated */
	{ "TUNU",	0x2042,	0x14,	'u',	en_P86_TUNU	},	/* Autotuning usage */
	{ "FLG",	0x2042,	0x15,	'u',	0			},	/* Frequency loop gain */
	{ "STA",	0x2042,	0x16,	'u',	0			},	/* Frequency loop stability */
	{ "ITH",	0x2042,	0x17,	'u',	0			},	/* Motor Thermal Current */
	{ "UFR",	0x2042,	0x18,	'u',	0			},	/* IR compensation */
	{ "SLP",	0x2042,	0x1A,	'u',	0			},	/* Slip Compensation */
	{ "TUNT",	0x2042,	0x1B,	'u',	en_P86_TUNT	},	/* Autotuning type */
	{ "TCR",	0x2042,	0x1C,	'u',	0			},	/* Level of current for autotuning  */
	{ "SPGU",	0x2042,	0x1E,	'u',	0			},	/* Inertia factor */
	{ "THR",	0x2042,	0x1F,	'u',	0			},	/* Motor thermal state */
	{ "RSA",	0x2042,	0x2B,	'u',	0			},	/* AsyncMotor Stator resistance */
	{ "SMOT",	0x2042,	0x2E,	'u',	en_P86_SMOT	},	/* Status of motor tune in term of saliency */
	{ "IDA",	0x2042,	0x35,	'u',	0			},	/* Magnetizing Current */
	{ "LFA",	0x2042,	0x3F,	'u',	0			},	/* AsyncMotor Leakage inductance */
	{ "TRA",	0x2042,	0x44,	'u',	0			},	/* Rotor time constant */
	{ "TQN",	0x2042,	0x46,	'u',	0			},	/* Computed nominal motor torque */
	{ "NCRS",	0x2042,	0x47,	'u',	0			},	/* Sync motor nominal current */
	{ "NSPS",	0x2042,	0x48,	'u',	0			},	/* Nominal synchronous motor speed */
	{ "PPNS",	0x2042,	0x49,	'u',	0			},	/* Pole pairs number (sync) */
	{ "PHS",	0x2042,	0x4A,	'u',	0			},	/* Sync. EMF constant */
	{ "LDS",	0x2042,	0x4B,	'u',	0			},	/* Sync motor d inductance */
	{ "LQS",	0x2042,	0x4C,	'u',	0			},	/* Sync motor q inductance */
	{ "RDAE",	0x2042,	0x4D,	's',	0			},	/* % error EMF sync */
	{ "FRSS",	0x2042,	0x50,	'u',	0			},	/* Synchronous motor nominal freq */
	{ "RSAS",	0x2042,	0x53,	'u',	0			},	/* Calculated SyncMotor Stator R */
	{ "TQS",	0x2042,	0x55,	'u',	0			},	/* Nominal motor torque */
	{ "INRC",	0x2044,	0x02,	'u',	en_P86_CINR	},	/* NCR current scaling */
	{ "INRP",	0x2044,	0x03,	'u',	en_P86_CINR	},	/* NPR power scaling */
	{ "INRR",	0x2044,	0x04,	'u',	en_P86_CINR	},	/* RSA resistance scaling */
	{ "INRL",	0x2044,	0x05,	'u',	en_P86_CINR	},	/* LFA inductance scaling */
	{ "INRT",	0x2044,	0x06,	'u',	en_P86_CINR	},	/* Torque scaling */
	{ "INTI",	0x2044,	0x07,	'u',	en_P86_CINR	},	/* TRA time scaling */
	{ "BLC",	0x2046,	0x02,	'u',	en_P86_BLC	},	/* Brake assignment */
	{ "BEN",	0x2046,	0x04,	's',	0			},	/* Brake engage frequency */
	{ "BRT",	0x2046,	0x05,	'u',	0			},	/* Brake release time */
	{ "BET",	0x2046,	0x06,	'u',	0			},	/* Brake engage time */
	{ "IBR",	0x2046,	0x07,	'u',	0			},	/* Brake Release current */
	{ "BIP",	0x2046,	0x08,	'u',	en_P86_BIP	},	/* Brake release pulse */
	{ "BST",	0x2046,	0x09,	'u',	en_P86_BST	},	/* Motion type selection */
	{ "BCI",	0x2046,	0x0A,	'u',	en_P86_PSLIN	},	/* Brake contact input */
	{ "TBE",	0x2046,	0x0B,	'u',	0			},	/* Brake engage delay */
	{ "IRD",	0x2046,	0x0C,	'u',	0			},	/* Rev. brake release curr. */
	{ "BIR",	0x2046,	0x0D,	's',	0			},	/* Brake release frequency */
	{ "JDC",	0x2046,	0x0E,	's',	0			},	/* Jump at reversal */
	{ "BECD",	0x2046,	0x0F,	's',	0			},	/* Brake engage at 0 speed */
	{ "BRR",	0x2046,	0x10,	'u',	0			},	/* Current ramp time */
	{ "BED",	0x2046,	0x15,	'u',	en_P86_N_Y	},	/* Brake engage at reversal */
	{ "TTR",	0x2046,	0x17,	'u',	0			},	/* Time to restart */
	{ "FBCI",	0x2046,	0x1A,	'u',	0			},	/* Brake feedback filter */
	{ "BRH",	0x2046,	0x33,	'u',	0			},	/* Brake hidden */
	{ "BFTD",	0x2046,	0x34,	'u',	0			},	/* BRH_b4 frequency threshold detection */
	{ "BRI",	0x2046,	0x35,	'u',	en_P86_PSLIN	},	/* Brake relay feedback */
	{ "FBRI",	0x2046,	0x36,	'u',	0			},	/* Brake relay feedback filter */
	{ "MDFT",	0x2046,	0x37,	'u',	0			},	/* Load maintain time */
	{ "MTBF",	0x2046,	0x38,	's',	0			},	/* Load maintain remaining time */
	{ "PES",	0x2046,	0x47,	'u',	en_P86_PSA	},	/* Weight sensor assignment */
	{ "LP1",	0x2046,	0x48,	'u',	0			},	/* Ext weight point 1 X */
	{ "CP1",	0x2046,	0x49,	's',	0			},	/* Ext weight Point 1Y */
	{ "LP2",	0x2046,	0x4A,	'u',	0			},	/* Ext weight point 2 X */
	{ "CP2",	0x2046,	0x4B,	's',	0			},	/* Ext weight Point 2Y */
	{ "IBRA",	0x2046,	0x4C,	'u',	0			},	/* IBR when weight loss */
	{ "ADC",	0x204A,	0x02,	'u',	en_P86_ADC	},	/* Automatic DC Injection */
	{ "TDC1",	0x204A,	0x03,	'u',	0			},	/* Auto DC injection time 1 */
	{ "SDC1",	0x204A,	0x04,	'u',	0			},	/* Auto DC injection level 1 */
	{ "TDC2",	0x204A,	0x05,	'u',	0			},	/* Auto DC injection time 2 */
	{ "SDC2",	0x204A,	0x06,	'u',	0			},	/* Auto DC injection level 2 */
	{ "TAFI",	0x204A,	0x64,	'u',	0			},	/* DC injection angle */
	{ "ME0",	0x204C,	0x02,	'u',	0			},	/* Motor energy consumption (Wh) */
	{ "ME1",	0x204C,	0x03,	'u',	0			},	/* Motor energy consumption (kWh) */
	{ "ME2",	0x204C,	0x04,	'u',	0			},	/* Motor energy consumption (MWh) */
	{ "ME3",	0x204C,	0x05,	'u',	0			},	/* Motor energy consumption (GWh) */
	{ "ME4",	0x204C,	0x06,	'u',	0			},	/* Motor energy consumption (TWh) */
	{ "OC0",	0x204C,	0x07,	'u',	0			},	/* Electrical energy consumed by the motor (Wh) */
	{ "OC1",	0x204C,	0x08,	'u',	0			},	/* Electrical energy consumed by the motor (KWh) */
	{ "OC2",	0x204C,	0x09,	'u',	0			},	/* Electrical energy consumed by the motor (MWh) */
	{ "OC3",	0x204C,	0x0A,	'u',	0			},	/* Electrical energy consumed by the motor (GWh) */
	{ "OC4",	0x204C,	0x0B,	'u',	0			},	/* Electrical energy consumed by the motor (TWh) */
	{ "OP0",	0x204C,	0x0C,	'u',	0			},	/* Electrical energy produced by the motor (Wh) */
	{ "OP1",	0x204C,	0x0D,	'u',	0			},	/* Electrical energy produced by the motor (KWh) */
	{ "OP2",	0x204C,	0x0E,	'u',	0			},	/* Electrical energy produced by the motor (MWh) */
	{ "OP3",	0x204C,	0x0F,	'u',	0			},	/* Electrical energy produced by the motor (GWh) */
	{ "OP4",	0x204C,	0x10,	'u',	0			},	/* Electrical energy produced by the motor (TWh) */
	{ "OE0",	0x204C,	0x11,	's',	0			},	/* Real energy consumption (Wh) */
	{ "OE1",	0x204C,	0x12,	's',	0			},	/* Real energy consumption (kWh) */
	{ "OE2",	0x204C,	0x13,	's',	0			},	/* Real energy consumption (MWh) */
	{ "OE3",	0x204C,	0x14,	's',	0			},	/* Real energy consumption (GWh) */
	{ "OE4",	0x204C,	0x15,	's',	0			},	/* Real energy consumption (TWh) */
	{ "OCT",	0x204C,	0x17,	'u',	0			},	/* Electrical energy consumed TODAY by the motor (KWh) */
	{ "OCY",	0x204C,	0x19,	'u',	0			},	/* Electrical energy consumed YESTERDAY by the motor (KWh) */
	{ "IC0",	0x204C,	0x1B,	'u',	0			},	/* Input Energy (Wh) */
	{ "IC1",	0x204C,	0x1C,	'u',	0			},	/* Input Energy (kWh) */
	{ "IC2",	0x204C,	0x1D,	'u',	0			},	/* Input Energy (MWh) */
	{ "IC3",	0x204C,	0x1E,	'u',	0			},	/* Input Energy (GWh) */
	{ "IC4",	0x204C,	0x1F,	'u',	0			},	/* Input Energy (TWh) */
	{ "IE0",	0x204C,	0x25,	's',	0			},	/* Real Input Energy (Wh) */
	{ "IE1",	0x204C,	0x26,	's',	0			},	/* Real Input Energy (kWh) */
	{ "IE2",	0x204C,	0x27,	's',	0			},	/* Real Input Energy (MWh) */
	{ "IE3",	0x204C,	0x28,	's',	0			},	/* Real Input Energy (GWh) */
	{ "IE4",	0x204C,	0x29,	's',	0			},	/* Real Input Energy (TWh) */
	{ "MOEP",	0x204C,	0x2A,	'u',	0			},	/* Peak Output Power  */
	{ "PREF",	0x204E,	0x01,	'u',	0			},	/* Reference Power without drive */
	{ "ECST",	0x204E,	0x02,	'u',	0			},	/* kWh Cost */
	{ "ECO2",	0x204E,	0x03,	'u',	0			},	/* CO2 ratio */
	{ "ESAV",	0x204E,	0x05,	'u',	0			},	/* Energy Saved */
	{ "CASH",	0x204E,	0x07,	'u',	0			},	/* Money saved */
	{ "CO2S",	0x204E,	0x09,	'u',	0			},	/* Co2 Saved */
	{ "PCAH",	0x204E,	0x33,	'u',	0			},	/* Over-consumption threshold */
	{ "PCAL",	0x204E,	0x34,	'u',	0			},	/* Under-consumption threshold */
	{ "PCAT",	0x204E,	0x35,	'u',	0			},	/* Over/Under-consumption time delay */
	{ "CTD",	0x2050,	0x02,	'u',	0			},	/* High current threshold */
	{ "TTD",	0x2050,	0x03,	'u',	0			},	/* Motor thermal threshold */
	{ "FTD",	0x2050,	0x04,	'u',	0			},	/* Motor frequency threshold */
	{ "F2D",	0x2050,	0x05,	'u',	0			},	/* Frequency threshold 2 */
	{ "TTD2",	0x2050,	0x07,	'u',	0			},	/* Motor 2 thermal threshold */
	{ "TTD3",	0x2050,	0x08,	'u',	0			},	/* Motor 3 thermal threshold */
	{ "TTD4",	0x2050,	0x09,	'u',	0			},	/* Motor 4 thermal threshold */
	{ "THA",	0x2050,	0x0A,	'u',	0			},	/* Drive thermal state Warning */
	{ "CTDL",	0x2050,	0x0B,	'u',	0			},	/* Low Current Threshold  */
	{ "FTDL",	0x2050,	0x0C,	'u',	0			},	/* Low Freq. Threshold */
	{ "F2DL",	0x2050,	0x0D,	'u',	0			},	/* 2 Frequency Threshold */
	{ "RTD",	0x2050,	0x0E,	'u',	0			},	/* Reference high threshold */
	{ "RTDL",	0x2050,	0x0F,	'u',	0			},	/* Reference low threshold */
	{ "TTL",	0x2050,	0x10,	's',	0			},	/* Low torque threshold */
	{ "TTH",	0x2050,	0x11,	's',	0			},	/* High torque threshold */
	{ "TCC",	0x2051,	0x02,	'u',	en_P86_TCC	},	/* 2/3-wire control */
	{ "TCT",	0x2051,	0x03,	'u',	en_P86_TCT	},	/* Type of 2-wire control */
	{ "RRS",	0x2051,	0x06,	'u',	en_P86_PSLIN	},	/* Reverse assignment */
	{ "JOG",	0x2051,	0x0B,	'u',	en_P86_PSLIN	},	/* Jog assignment */
	{ "JGF",	0x2051,	0x0C,	'u',	0			},	/* Jog frequency */
	{ "JGT",	0x2051,	0x0D,	'u',	0			},	/* Jog delay */
	{ "STT",	0x2052,	0x02,	'u',	en_P86_STT	},	/* Type of stop */
	{ "NST",	0x2052,	0x03,	'u',	en_P86_PSLIN	},	/* Freewheel stop */
	{ "DCI",	0x2052,	0x04,	'u',	en_P86_PSLIN	},	/* DC Injection Assignment */
	{ "FST",	0x2052,	0x05,	'u',	en_P86_PSLIN	},	/* Fast stop assignment */
	{ "IDC",	0x2052,	0x0B,	'u',	0			},	/* DC injection level 1 */
	{ "TDC",	0x2052,	0x0C,	'u',	0			},	/* DC injection time 2 */
	{ "IDC2",	0x2052,	0x0D,	'u',	0			},	/* DC injection level 2 */
	{ "TDI",	0x2052,	0x0E,	'u',	0			},	/* DC injection time 1 */
	{ "FFT",	0x2052,	0x15,	'u',	0			},	/* Freewheel stop threshold */
	{ "DCF",	0x2052,	0x1F,	'u',	0			},	/* Fast Stop Ramp Divider */
	{ "TOST",	0x2052,	0x29,	'u',	en_P86_PSLIN	},	/* Stop on next top Z detection */
	{ "JPF",	0x2053,	0x02,	'u',	0			},	/* Skip frequency */
	{ "JF2",	0x2053,	0x03,	'u',	0			},	/* Skip frequency 2 */
	{ "JF3",	0x2053,	0x04,	'u',	0			},	/* 3rd Skip Frequency */
	{ "JFH",	0x2053,	0x0C,	'u',	0			},	/* Skip Freq. Hysteresis */
	{ "PS2",	0x2054,	0x02,	'u',	en_P86_PSLIN	},	/* 2 Preset Freq assignment */
	{ "PS4",	0x2054,	0x03,	'u',	en_P86_PSLIN	},	/* 4 Preset Freq assignment */
	{ "PS8",	0x2054,	0x04,	'u',	en_P86_PSLIN	},	/* 8 Preset Freq assignment */
	{ "PS16",	0x2054,	0x05,	'u',	en_P86_PSLIN	},	/* 16 Preset Freq assignment */
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
	{ "USP",	0x2055,	0x02,	'u',	en_P86_PSLIN	},	/* + speed assignment */
	{ "DSP",	0x2055,	0x03,	'u',	en_P86_PSLIN	},	/* - speed assignment */
	{ "STR",	0x2055,	0x04,	'u',	en_P86_STR	},	/* Reference frequency save */
	{ "SRP",	0x2055,	0x06,	'u',	0			},	/* +/- Speed limitation */
	{ "USI",	0x2055,	0x15,	'u',	en_P86_PSLIN	},	/* + speed assignment */
	{ "DSI",	0x2055,	0x16,	'u',	en_P86_PSLIN	},	/* - speed assignment */
	{ "LAF",	0x2056,	0x02,	'u',	en_P86_PSLIN	},	/* Stop forward limit assignment */
	{ "LAR",	0x2056,	0x03,	'u',	en_P86_PSLIN	},	/* Stop reverse limit assignment */
	{ "LAS",	0x2056,	0x04,	'u',	en_P86_STT	},	/* Stop type on limit switch */
	{ "TLS",	0x2057,	0x02,	'u',	0			},	/* Low speed timeout */
	{ "SLE",	0x2057,	0x03,	'u',	0			},	/* Sleep Offset Threshold */
	{ "SA2",	0x2058,	0x02,	'u',	en_P86_PSA	},	/* Summing input 2 */
	{ "SA3",	0x2058,	0x03,	'u',	en_P86_PSA	},	/* Summing input 3 */
	{ "DA2",	0x2058,	0x0C,	'u',	en_P86_PSA	},	/* Subtract reference frequency 2 */
	{ "DA3",	0x2058,	0x0D,	'u',	en_P86_PSA	},	/* Subtract reference frequency 3 */
	{ "MA2",	0x2058,	0x16,	'u',	en_P86_PSA	},	/* Reference frequency 2 multiply */
	{ "MA3",	0x2058,	0x17,	'u',	en_P86_PSA	},	/* Reference frequency 3 multiply */
	{ "MFR",	0x2058,	0x20,	'u',	0			},	/* Multiplying coefficient */
	{ "PIF",	0x2059,	0x02,	'u',	en_P86_PSA	},	/* PID controller feedback */
	{ "PIF1",	0x2059,	0x05,	'u',	0			},	/* Minimum PID feedback */
	{ "PIF2",	0x2059,	0x06,	'u',	0			},	/* Maximum PID feedback */
	{ "PIP1",	0x2059,	0x07,	'u',	0			},	/* Minimum PID process */
	{ "PIP2",	0x2059,	0x08,	'u',	0			},	/* Maximum PID process */
	{ "PII",	0x2059,	0x09,	'u',	en_P86_N_Y	},	/* Internal PID reference */
	{ "PR2",	0x2059,	0x0A,	'u',	en_P86_PSLIN	},	/* 2 PID Preset assignment */
	{ "PR4",	0x2059,	0x0B,	'u',	en_P86_PSLIN	},	/* 4 PID Preset assignment */
	{ "TOCT",	0x2059,	0x14,	'u',	en_P86_TOCT	},	/* Type of control */
	{ "RPI",	0x2059,	0x15,	'u',	0			},	/* Internal PID reference */
	{ "RP2",	0x2059,	0x16,	'u',	0			},	/* 2nd PID preset reference */
	{ "RP3",	0x2059,	0x17,	'u',	0			},	/* 3rd PID preset reference */
	{ "RP4",	0x2059,	0x18,	'u',	0			},	/* 4th PID preset reference */
	{ "PIC",	0x2059,	0x29,	'u',	en_P86_N_Y	},	/* PID inversion */
	{ "RPG",	0x2059,	0x2A,	'u',	0			},	/* PID Proportional gain  */
	{ "RIG",	0x2059,	0x2B,	'u',	0			},	/* PID controller integral gain */
	{ "RDG",	0x2059,	0x2C,	'u',	0			},	/* PID derivative gain */
	{ "PIS",	0x2059,	0x2D,	'u',	en_P86_PSLIN	},	/* PID integral disabled */
	{ "FPI",	0x2059,	0x33,	'u',	en_P86_PSA	},	/* Predictive speed reference */
	{ "PSR",	0x2059,	0x34,	'u',	0			},	/* PID speed input % ref */
	{ "POL",	0x2059,	0x35,	's',	0			},	/* PID controller min. output */
	{ "POH",	0x2059,	0x36,	's',	0			},	/* PID controller max. output */
	{ "PIM",	0x2059,	0x37,	'u',	en_P86_PSA	},	/* Manual PID reference */
	{ "SFS",	0x2059,	0x38,	'u',	0			},	/* PID start ref frequency */
	{ "PAL",	0x2059,	0x3E,	'u',	0			},	/* Minimum feedback level Warning */
	{ "PAH",	0x2059,	0x3F,	'u',	0			},	/* Maximum feedback level Warning */
	{ "PER",	0x2059,	0x40,	'u',	0			},	/* PID error Warning */
	{ "PAU",	0x2059,	0x47,	'u',	en_P86_PSL	},	/* Auto/Manual select input */
	{ "RPE",	0x2059,	0x51,	's',	0			},	/* PID Error */
	{ "RPF",	0x2059,	0x52,	'u',	0			},	/* PID feedback */
	{ "RPC",	0x2059,	0x53,	'u',	0			},	/* PID reference */
	{ "RPO",	0x2059,	0x54,	's',	0			},	/* PID Output */
	{ "PRP",	0x2059,	0x55,	'u',	0			},	/* PID ramp */
	{ "ACCP",	0x2059,	0x56,	'u',	0			},	/* PID acceleration time */
	{ "SPD",	0x205A,	0x05,	'u',	0			},	/* Motor speed */
	{ "SPDM",	0x205A,	0x0C,	'u',	0			},	/* Motor Mechanical speed */
	{ "SPD1",	0x205A,	0x0D,	's',	0			},	/* Signed mechanical speed */
	{ "SUTP",	0x205A,	0x19,	'u',	en_P86_SUTP	},	/* Application Temperature Unit (used as default) */
	{ "SUCU",	0x205A,	0x1A,	'u',	en_P86_SUCU	},	/* Application Currency Unit */
	{ "HSO",	0x205D,	0x02,	'u',	en_P86_HSO	},	/* High speed hoisting */
	{ "CLO",	0x205D,	0x03,	'u',	0			},	/* High speed I Limit */
	{ "COF",	0x205D,	0x04,	'u',	0			},	/* Motor speed coefficient */
	{ "COR",	0x205D,	0x05,	'u',	0			},	/* Generator speed coefficient */
	{ "OSP",	0x205D,	0x06,	'u',	0			},	/* Measurement speed */
	{ "SCL",	0x205D,	0x07,	'u',	0			},	/* Current limit. frequency */
	{ "TOS",	0x205D,	0x08,	'u',	0			},	/* Load measuring time */
	{ "DLD",	0x205D,	0x0C,	'u',	0			},	/* Dynamic load threshold */
	{ "TLD",	0x205D,	0x0D,	's',	0			},	/* Dynamic load time */
	{ "DLB",	0x205D,	0x0E,	'u',	en_P86_ECFG	},	/* Dynamic load Mgt. */
	{ "RSD",	0x205D,	0x16,	'u',	en_P86_RSD	},	/* Rope slack configuration */
	{ "RSTL",	0x205D,	0x17,	'u',	0			},	/* Rope slack torque level */
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
	{ "SAF",	0x205F,	0x02,	'u',	en_P86_PSLIN	},	/* Fwd stop limit input assig */
	{ "SAR",	0x205F,	0x03,	'u',	en_P86_PSLIN	},	/* RV stop limit input assign */
	{ "DAF",	0x205F,	0x04,	'u',	en_P86_PSLIN	},	/* Forward slowdown limit */
	{ "DAR",	0x205F,	0x05,	'u',	en_P86_PSLIN	},	/* Reverse slowdown limit */
	{ "DSF",	0x205F,	0x06,	'u',	en_P86_DSF	},	/* Deceleration type */
	{ "PAS",	0x205F,	0x07,	'u',	en_P86_STT	},	/* Stop type */
	{ "CLS",	0x205F,	0x08,	'u',	en_P86_PSLIN	},	/* Disable limit switch */
	{ "NLS",	0x205F,	0x0C,	'u',	0			},	/* Rated linear speed */
	{ "STD",	0x205F,	0x16,	'u',	0			},	/* Stop distance */
	{ "SFD",	0x205F,	0x17,	'u',	0			},	/* Distance stop corrector */
	{ "MSTP",	0x205F,	0x18,	'u',	en_P86_N_Y	},	/* Memo stop */
	{ "PRST",	0x205F,	0x19,	'u',	en_P86_N_Y	},	/* Priority restart */
	{ "MSLO",	0x205F,	0x1A,	'u',	en_P86_N_Y	},	/* With or whithout memo slowdown switch */
	{ "SVL",	0x2060,	0x02,	'u',	en_P86_N_Y	},	/* Motor surge limitation */
	{ "SOP",	0x2060,	0x03,	'u',	en_P86_SOP	},	/* Attenuation time */
	{ "NMA1",	0x2061,	0x02,	'u',	0			},	/* Scan input 1 address */
	{ "NMA2",	0x2061,	0x03,	'u',	0			},	/* Scan input 2 address */
	{ "NMA3",	0x2061,	0x04,	'u',	0			},	/* Scan input 3 address */
	{ "NMA4",	0x2061,	0x05,	'u',	0			},	/* Scan input 4 address */
	{ "NMA5",	0x2061,	0x06,	'u',	0			},	/* Scan input 5 address */
	{ "NMA6",	0x2061,	0x07,	'u',	0			},	/* Scan input 6 address */
	{ "NMA7",	0x2061,	0x08,	'u',	0			},	/* Scan input 7 address */
	{ "NMA8",	0x2061,	0x09,	'u',	0			},	/* Scan input 8 address */
	{ "NCA1",	0x2061,	0x16,	'u',	0			},	/* Scan output 1 address */
	{ "NCA2",	0x2061,	0x17,	'u',	0			},	/* Scan output 2 address */
	{ "NCA3",	0x2061,	0x18,	'u',	0			},	/* Scan output 3 address */
	{ "NCA4",	0x2061,	0x19,	'u',	0			},	/* Scan output 4 address */
	{ "NCA5",	0x2061,	0x1A,	'u',	0			},	/* Scan output 5 address */
	{ "NCA6",	0x2061,	0x1B,	'u',	0			},	/* Scan output 6 address */
	{ "NCA7",	0x2061,	0x1C,	'u',	0			},	/* Scan output 7 address */
	{ "NCA8",	0x2061,	0x1D,	'u',	0			},	/* Scan output 8 address */
	{ "NM1",	0x2061,	0x2A,	'u',	0			},	/* Com scan input 1 value */
	{ "NM2",	0x2061,	0x2B,	'u',	0			},	/* Com scan input 2 value */
	{ "NM3",	0x2061,	0x2C,	'u',	0			},	/* Com scan input 3 value */
	{ "NM4",	0x2061,	0x2D,	'u',	0			},	/* Com scan input 4 value */
	{ "NM5",	0x2061,	0x2E,	'u',	0			},	/* Com scan input 5 value */
	{ "NM6",	0x2061,	0x2F,	'u',	0			},	/* Com scan input 6 value */
	{ "NM7",	0x2061,	0x30,	'u',	0			},	/* Com scan input 7 value */
	{ "NM8",	0x2061,	0x31,	'u',	0			},	/* Com scan input 8 value */
	{ "NC1",	0x2061,	0x3E,	'u',	0			},	/* Com scan output 1 value */
	{ "NC2",	0x2061,	0x3F,	'u',	0			},	/* Com scan output 2 value */
	{ "NC3",	0x2061,	0x40,	'u',	0			},	/* Com scan output 3 value */
	{ "NC4",	0x2061,	0x41,	'u',	0			},	/* Com scan output 4 value */
	{ "NC5",	0x2061,	0x42,	'u',	0			},	/* Com scan output 5 value */
	{ "NC6",	0x2061,	0x43,	'u',	0			},	/* Com scan output 6 value */
	{ "NC7",	0x2061,	0x44,	'u',	0			},	/* Com scan output 7 value */
	{ "NC8",	0x2061,	0x45,	'u',	0			},	/* Com scan output 8 value */
	{ "LALR",	0x2062,	0x5B,	'u',	en_P86_ALR	},	/* Last Warning */
	{ "CFPS",	0x2063,	0x01,	'u',	en_P86_CFPS	},	/* Used parameter set */
	{ "VAL",	0x2063,	0x02,	'u',	0			},	/* Load parameter set command */
	{ "CHA1",	0x2063,	0x03,	'u',	en_P86_PSLIN	},	/* Parameter set sel 1 */
	{ "CHA2",	0x2063,	0x04,	'u',	en_P86_PSLIN	},	/* Parameter set sel 2 */
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
	{ "RP31",	0x2064,	0x02,	'u',	0			},	/* Receive PDO3-1 */
	{ "RP32",	0x2064,	0x03,	'u',	0			},	/* Receive PDO3-2 */
	{ "RP33",	0x2064,	0x04,	'u',	0			},	/* Receive PDO3-3 */
	{ "RP34",	0x2064,	0x05,	'u',	0			},	/* Receive PDO3-4 */
	{ "TP31",	0x2064,	0x0C,	'u',	0			},	/* Transmit PDO3-1 */
	{ "TP32",	0x2064,	0x0D,	'u',	0			},	/* Transmit PDO3-2 */
	{ "TP33",	0x2064,	0x0E,	'u',	0			},	/* Transmit PDO3-3 */
	{ "TP34",	0x2064,	0x0F,	'u',	0			},	/* Transmit PDO3-4 */
	{ "RP21",	0x2064,	0x16,	'u',	0			},	/* Receive PDO2-1 */
	{ "RP22",	0x2064,	0x17,	'u',	0			},	/* Receive PDO2-2 */
	{ "RP23",	0x2064,	0x18,	'u',	0			},	/* Receive PDO2-3 */
	{ "RP24",	0x2064,	0x19,	'u',	0			},	/* Receive PDO2-4 */
	{ "TP21",	0x2064,	0x20,	'u',	0			},	/* Transmit PDO2-1 */
	{ "TP22",	0x2064,	0x21,	'u',	0			},	/* Transmit PDO2-2 */
	{ "TP23",	0x2064,	0x22,	'u',	0			},	/* Transmit PDO2-3 */
	{ "TP24",	0x2064,	0x23,	'u',	0			},	/* Transmit PDO2-4 */
	{ "RP11",	0x2064,	0x2A,	'u',	0			},	/* Receive PDO1-1 */
	{ "RP12",	0x2064,	0x2B,	'u',	0			},	/* Receive PDO1-2 */
	{ "RP13",	0x2064,	0x2C,	'u',	0			},	/* Receive PDO1-3 */
	{ "RP14",	0x2064,	0x2D,	'u',	0			},	/* Receive PDO1-4 */
	{ "TP11",	0x2064,	0x34,	'u',	0			},	/* Transmit PDO1-1 */
	{ "TP12",	0x2064,	0x35,	'u',	0			},	/* Transmit PDO1-2 */
	{ "TP13",	0x2064,	0x36,	'u',	0			},	/* Transmit PDO1-3 */
	{ "TP14",	0x2064,	0x37,	'u',	0			},	/* Transmit PDO1-4 */
	{ "NBTP",	0x2064,	0x47,	'u',	0			},	/* Number of TX PDO */
	{ "NBRP",	0x2064,	0x48,	'u',	0			},	/* Number of RX PDO */
	{ "DBS",	0x2065,	0x02,	'u',	0			},	/* Delay to close o/p cont.  */
	{ "DAS",	0x2065,	0x03,	'u',	0			},	/* Delay to open contactor */
	{ "RCA",	0x2065,	0x04,	'u',	en_P86_PSLIN	},	/* Output contactor fdbk */
	{ "OCC",	0x2065,	0x05,	'u',	en_P86_CSLOUT	},	/* Output contactor control assignment */
	{ "TH1S",	0x2066,	0x0A,	'u',	en_P86_N_Y	},	/* Activation of the thermal monitoring on AI1 */
	{ "TH3S",	0x2066,	0x0C,	'u',	en_P86_N_Y	},	/* Activation of the thermal monitoring on AI3 */
	{ "TH4S",	0x2066,	0x0D,	'u',	en_P86_N_Y	},	/* Activation of the thermal monitoring on AI4 */
	{ "TH5S",	0x2066,	0x0E,	'u',	en_P86_N_Y	},	/* Activation of the thermal monitoring on AI5 */
	{ "TH1A",	0x2066,	0x14,	's',	0			},	/* Thermal warning level for AI1 */
	{ "TH3A",	0x2066,	0x16,	's',	0			},	/* Thermal warning level for AI3 */
	{ "TH4A",	0x2066,	0x17,	's',	0			},	/* Thermal warning level for AI4 */
	{ "TH5A",	0x2066,	0x18,	's',	0			},	/* Thermal warning level for AI5 */
	{ "TH1F",	0x2066,	0x1E,	's',	0			},	/* Thermal error level for AI1 */
	{ "TH3F",	0x2066,	0x20,	's',	0			},	/* Thermal error level for AI3 */
	{ "TH4F",	0x2066,	0x21,	's',	0			},	/* Thermal error level for AI4 */
	{ "TH5F",	0x2066,	0x22,	's',	0			},	/* Thermal error level for AI5 */
	{ "TH1B",	0x2066,	0x28,	'u',	en_P86_ECFG	},	/* Response to thermal error for AI1 */
	{ "TH3B",	0x2066,	0x2A,	'u',	en_P86_ECFG	},	/* Response to thermal error for AI3 */
	{ "TH4B",	0x2066,	0x2B,	'u',	en_P86_ECFG	},	/* Response to thermal error for AI4 */
	{ "TH5B",	0x2066,	0x2C,	'u',	en_P86_ECFG	},	/* Response to thermal error for AI5 */
	{ "TH1V",	0x2066,	0x32,	's',	0			},	/* AI1 thermal value */
	{ "TH3V",	0x2066,	0x34,	's',	0			},	/* AI3 thermal value */
	{ "TH4V",	0x2066,	0x35,	's',	0			},	/* AI4 thermal value */
	{ "TH5V",	0x2066,	0x36,	's',	0			},	/* AI5 thermal value */
	{ "PGA",	0x2067,	0x02,	'u',	en_P86_PGA	},	/* Reference type */
	{ "EFI",	0x2067,	0x0D,	'u',	0			},	/* Frequency signal filter */
	{ "PIL7",	0x2067,	0x3D,	'u',	0			},	/* DI7 PulseInput Low Frequency */
	{ "PIH7",	0x2067,	0x3F,	'u',	0			},	/* DI7 PulseInput High Frequency */
	{ "PFI7",	0x2067,	0x41,	'u',	0			},	/* DI7 Frequency filter */
	{ "PFC7",	0x2067,	0x47,	'u',	0			},	/* DI7 Frequency measured */
	{ "PIL8",	0x2067,	0x51,	'u',	0			},	/* DI8 PulseInput Low Frequency */
	{ "PIH8",	0x2067,	0x53,	'u',	0			},	/* DI8 PulseInput High Frequency */
	{ "PFI8",	0x2067,	0x55,	'u',	0			},	/* DI8 Frequency filter */
	{ "PFC8",	0x2067,	0x5B,	'u',	0			},	/* DI8 Frequency measured */
	{ "PHR",	0x2068,	0x02,	'u',	en_P86_PHR	},	/* Output phase rotation */
	{ "FN1",	0x2069,	0x02,	'u',	en_P86_CSLFN	},	/* F1 key assignment */
	{ "FN2",	0x2069,	0x03,	'u',	en_P86_CSLFN	},	/* F2 key assignment */
	{ "FN3",	0x2069,	0x04,	'u',	en_P86_CSLFN	},	/* F3 key assignment */
	{ "FN4",	0x2069,	0x05,	'u',	en_P86_CSLFN	},	/* F4 key assignment */
	{ "BMP",	0x2069,	0x1E,	'u',	en_P86_BMP	},	/* HMI command */
	{ "LES",	0x206A,	0x02,	'u',	en_P86_PSLIN	},	/* Drive lock assignment */
	{ "LLC",	0x206A,	0x03,	'u',	en_P86_CSLOUT	},	/* Mains contactor control */
	{ "LCT",	0x206A,	0x04,	'u',	0			},	/* Time-out after cont. activ. */
	{ "UL1",	0x206B,	0x30,	's',	0			},	/* Mains voltage phase 1-2 */
	{ "UL2",	0x206B,	0x31,	's',	0			},	/* Mains voltage phase 2-3 */
	{ "UL3",	0x206B,	0x32,	's',	0			},	/* Mains voltage phase 3-1 */
	{ "FAC",	0x206B,	0x33,	's',	0			},	/* Mains frequency */
	{ "URES",	0x206C,	0x02,	'u',	en_P86_URES	},	/* Evacuation mains voltage */
	{ "USL",	0x206C,	0x03,	'u',	0			},	/* Undervoltage level */
	{ "USB",	0x206C,	0x04,	'u',	en_P86_USB	},	/* Response to undervoltage */
	{ "UST",	0x206C,	0x05,	'u',	0			},	/* Undervoltage timeout */
	{ "UPL",	0x206C,	0x0C,	'u',	0			},	/* Under V prevention level */
	{ "TBS",	0x206C,	0x0D,	'u',	0			},	/* DC bus maintain time */
	{ "TSM",	0x206C,	0x0E,	'u',	0			},	/* Undervolt. restart time */
	{ "STM",	0x206C,	0x0F,	'u',	0			},	/* Maximum stop time */
	{ "DCO",	0x206C,	0x2A,	'u',	en_P86_CSLOUT	},	/* DC Bus charge assignment */
	{ "DCT",	0x206C,	0x2B,	'u',	0			},	/* DC Bus charge opt. time */
	{ "OVMA",	0x206C,	0x4D,	'u',	en_P86_OVMA	},	/* Overmodulation activation */
	{ "VLIM",	0x206C,	0x50,	'u',	0			},	/* Output voltage limitation */
	{ "DCRA",	0x206C,	0x52,	's',	0			},	/* DC bus ripple amplitude */
	{ "DCRF",	0x206C,	0x53,	's',	0			},	/* DC bus ripple estimated frequency */
	{ "DCRD",	0x206C,	0x54,	'u',	0			},	/* DC bus ripple time counter */
	{ "DCRC",	0x206C,	0x55,	'u',	en_P86_DCRC	},	/* DC bus ripple configuration */
	{ "CRB",	0x206C,	0x56,	's',	0			},	/* Current loop configured gain */
	{ "CRBA",	0x206C,	0x57,	's',	0			},	/* Current loop default gain */
	{ "CRDR",	0x206C,	0x58,	's',	0			},	/* Current loop damping coefficient */
	{ "IFI",	0x206C,	0x59,	'u',	en_P86_N_Y	},	/* Use of an input filer */
	{ "FLI",	0x206D,	0x02,	'u',	en_P86_PSLIN	},	/* Fluxing input assignment */
	{ "FLU",	0x206D,	0x03,	'u',	en_P86_FLU	},	/* Motor fluxing configure */
	{ "BOA",	0x206D,	0x0B,	'u',	en_P86_BOA	},	/* Boost activation */
	{ "FAB",	0x206D,	0x0C,	'u',	0			},	/* Frequency Boost */
	{ "BOO",	0x206D,	0x0D,	's',	0			},	/* Boost */
	{ "BOO2",	0x206D,	0x0E,	's',	0			},	/* Boost on deceleration */
	{ "ASA",	0x206D,	0x16,	'u',	en_P86_ASA	},	/* Angle auto-test */
	{ "ASV",	0x206D,	0x17,	's',	0			},	/* Offset value between motor and encoder */
	{ "ASL",	0x206D,	0x18,	'u',	en_P86_PSLIN	},	/* Angle Test assignment */
	{ "ATA",	0x206D,	0x19,	'u',	en_P86_ATA	},	/* Angle setting activation mode */
	{ "AST",	0x206D,	0x1A,	'u',	en_P86_AST	},	/* Auto angle setting type */
	{ "ASTS",	0x206D,	0x1B,	'u',	en_P86_ASTS	},	/* Auto angle setting status */
	{ "RCL",	0x206D,	0x1D,	's',	0			},	/* Alignment Rotational Current Level */
	{ "RTC",	0x206D,	0x1E,	's',	0			},	/* Alignment Rotational Torque Current */
	{ "RCIR",	0x206D,	0x1F,	'u',	en_P86_N_Y	},	/* RCI alignment with transformer */
	{ "RCSP",	0x206D,	0x20,	's',	0			},	/* RCI maximum output frequency */
	{ "RCRP",	0x206D,	0x21,	's',	0			},	/* RCI round number */
	{ "PPI",	0x206E,	0x02,	'u',	0			},	/* Pairing password */
	{ "VBR",	0x206F,	0x02,	'u',	0			},	/* Braking level */
	{ "BBA",	0x206F,	0x03,	'u',	en_P86_N_Y	},	/* Braking balance */
	{ "BRO",	0x206F,	0x0C,	'u',	en_P86_BRO	},	/* Braking resistor monitoring */
	{ "BRP",	0x206F,	0x0D,	'u',	0			},	/* Braking resistor power */
	{ "BRV",	0x206F,	0x0E,	'u',	0			},	/* Braking resistor value */
	{ "THB",	0x206F,	0x0F,	'u',	0			},	/* DBR thermal state */
	{ "BRTC",	0x206F,	0x10,	'u',	0			},	/* Braking resistor time constant */
	{ "BRC",	0x206F,	0x12,	'u',	en_P86_N_Y	},	/* Braking resistor connected */
	{ "LBA",	0x2071,	0x02,	'u',	en_P86_N_Y	},	/* Load sharing */
	{ "LBC",	0x2071,	0x03,	'u',	0			},	/* Load correction */
	{ "LBC1",	0x2071,	0x04,	'u',	0			},	/* Correction min speed */
	{ "LBC2",	0x2071,	0x05,	'u',	0			},	/* Correction max speed */
	{ "LBC3",	0x2071,	0x06,	'u',	0			},	/* Torque offset */
	{ "LBF",	0x2071,	0x07,	'u',	0			},	/* Sharing filter */
	{ "SRB",	0x2072,	0x02,	'u',	0			},	/* Hysteresis Frequency */
	{ "ULT",	0x2072,	0x0C,	'u',	0			},	/* Underld T. Delay Detect. */
	{ "UDL",	0x2072,	0x0D,	'u',	en_P86_ECFG	},	/* Underload Management */
	{ "FTU",	0x2072,	0x0E,	'u',	0			},	/* Unld Time Before Restart */
	{ "RMUD",	0x2072,	0x0F,	'u',	0			},	/* Unld. Freq.Thr. Detection */
	{ "LUL",	0x2072,	0x10,	'u',	0			},	/* Unld.Thr. at O speed */
	{ "LUN",	0x2072,	0x11,	'u',	0			},	/* Unld.Thr. at Nom. speed */
	{ "TOL",	0x2072,	0x16,	'u',	0			},	/* Overload Time Detect. */
	{ "ODL",	0x2072,	0x17,	'u',	en_P86_ECFG	},	/* Ovld.Proces Management */
	{ "FTO",	0x2072,	0x18,	'u',	0			},	/* Ovld time Before Restart */
	{ "LOC",	0x2072,	0x1A,	'u',	0			},	/* Ovld Threshold Detection */
	{ "FQF",	0x2074,	0x02,	'u',	en_P86_PSA	},	/* Frequency meter */
	{ "FQC",	0x2074,	0x03,	'u',	0			},	/* Pulse scaling divisor */
	{ "FQS",	0x2074,	0x04,	'u',	0			},	/* Pulse input measured frequency */
	{ "FQA",	0x2074,	0x05,	'u',	0			},	/* Overspd. pulse threshold */
	{ "TDS",	0x2074,	0x06,	'u',	0			},	/* Pulse Overspeed delay */
	{ "FDT",	0x2074,	0x07,	'u',	0			},	/* Level freq. pulse ctrl */
	{ "FQT",	0x2074,	0x08,	'u',	0			},	/* Pulse threshold wo Run */
	{ "TQB",	0x2074,	0x09,	'u',	0			},	/* Pulse without Run delay */
	{ "FQL",	0x2074,	0x0A,	'u',	0			},	/* Pulse warning threshold */
	{ "SH2",	0x2079,	0x02,	'u',	en_P86_PSLIN	},	/* 2 High speed assign. */
	{ "SH4",	0x2079,	0x03,	'u',	en_P86_PSLIN	},	/* 4 High speed assign. */
	{ "HSP2",	0x2079,	0x0B,	'u',	0			},	/* High speed 2 */
	{ "HSP3",	0x2079,	0x0C,	'u',	0			},	/* High speed 3 */
	{ "HSP4",	0x2079,	0x0D,	'u',	0			},	/* High speed 4 */
	{ "STOS",	0x207B,	0x17,	'u',	en_P86_STOS	},	/* Safe Torque Off function Status */
	{ "STOF",	0x207B,	0x18,	'u',	0			},	/* STOx Digital Input State */
	{ "OMA1",	0x207C,	0x02,	'u',	0			},	/* Scan input 1 address */
	{ "OMA2",	0x207C,	0x03,	'u',	0			},	/* Scan input 2 address */
	{ "OMA3",	0x207C,	0x04,	'u',	0			},	/* Scan input 3 address */
	{ "OMA4",	0x207C,	0x05,	'u',	0			},	/* Scan input 4 address */
	{ "OMA5",	0x207C,	0x06,	'u',	0			},	/* Scan input 5 address */
	{ "OMA6",	0x207C,	0x07,	'u',	0			},	/* Scan input 6 address */
	{ "OMA7",	0x207C,	0x08,	'u',	0			},	/* Scan input 7 address */
	{ "OMA8",	0x207C,	0x09,	'u',	0			},	/* Scan input 8 address */
	{ "OMA9",	0x207C,	0x0A,	'u',	0			},	/* Scan input 9 address */
	{ "OMAA",	0x207C,	0x0B,	'u',	0			},	/* Scan input 10 address */
	{ "OMAB",	0x207C,	0x0C,	'u',	0			},	/* Scan input 11 address */
	{ "OMAC",	0x207C,	0x0D,	'u',	0			},	/* Scan input 12 address */
	{ "OMAD",	0x207C,	0x0E,	'u',	0			},	/* Scan input 13 address */
	{ "OMAE",	0x207C,	0x0F,	'u',	0			},	/* Scan input 14 address */
	{ "OMAF",	0x207C,	0x10,	'u',	0			},	/* Scan input 15 address */
	{ "OMAG",	0x207C,	0x11,	'u',	0			},	/* Scan input 16 address */
	{ "OCA1",	0x207C,	0x16,	'u',	0			},	/* Scan output 1 address */
	{ "OCA2",	0x207C,	0x17,	'u',	0			},	/* Scan output 2 address */
	{ "OCA3",	0x207C,	0x18,	'u',	0			},	/* Scan output 3 address */
	{ "OCA4",	0x207C,	0x19,	'u',	0			},	/* Scan output 4 address */
	{ "OCA5",	0x207C,	0x1A,	'u',	0			},	/* Scan output 5 address */
	{ "OCA6",	0x207C,	0x1B,	'u',	0			},	/* Scan output 6 address */
	{ "OCA7",	0x207C,	0x1C,	'u',	0			},	/* Scan output 7 address */
	{ "OCA8",	0x207C,	0x1D,	'u',	0			},	/* Scan output 8 address */
	{ "OCA9",	0x207C,	0x1E,	'u',	0			},	/* Scan output 9 address */
	{ "OCAA",	0x207C,	0x1F,	'u',	0			},	/* Scan output 10 address */
	{ "OCAB",	0x207C,	0x20,	'u',	0			},	/* Scan output 11 address */
	{ "OCAC",	0x207C,	0x21,	'u',	0			},	/* Scan output 12 address */
	{ "OCAD",	0x207C,	0x22,	'u',	0			},	/* Scan output 13 address */
	{ "OCAE",	0x207C,	0x23,	'u',	0			},	/* Scan output 14 address */
	{ "OCAF",	0x207C,	0x24,	'u',	0			},	/* Scan output 15 address */
	{ "OCAG",	0x207C,	0x25,	'u',	0			},	/* Scan output 16 address */
	{ "HFI",	0x207E,	0x01,	'u',	en_P86_N_Y	},	/* Activation of HF injection */
	{ "FRI",	0x207E,	0x02,	'u',	0			},	/* Frequency of the HF injection signal */
	{ "SPB",	0x207E,	0x04,	'u',	0			},	/* Bandwidth of the HF PLL */
	{ "ILR",	0x207E,	0x06,	'u',	0			},	/* Current level of the HF alignment */
	{ "SIR",	0x207E,	0x07,	'u',	0			},	/* Boost level for IPMA alignment */
	{ "MCR",	0x207E,	0x08,	'u',	0			},	/* Maximum current of PSI alignment */
	{ "PEC",	0x207E,	0x09,	'u',	0			},	/* Angle position error compensation */
	{ "APPT",	0x207E,	0x64,	'u',	en_P86_APPT	},	/* Application selection */
	{ "APPS",	0x2081,	0x51,	'u',	en_P86_APPS	},	/* Application state */
	{ "ST00",	0x2083,	0x01,	'u',	0			},	/* Status registers 0 */
	{ "ST02",	0x2083,	0x03,	'u',	0			},	/* Status registers 2 */
	{ "ST03",	0x2083,	0x04,	'u',	0			},	/* Status registers 3 */
	{ "ST04",	0x2083,	0x05,	'u',	0			},	/* Status registers 4 */
	{ "ST05",	0x2083,	0x06,	'u',	0			},	/* Status registers 5 */
	{ "ST06",	0x2083,	0x07,	'u',	0			},	/* Status registers 6 */
	{ "ST07",	0x2083,	0x08,	'u',	0			},	/* Status registers 7 */
	{ "ST09",	0x2083,	0x0A,	'u',	0			},	/* Status registers 9 */
	{ "ST10",	0x2083,	0x0B,	'u',	0			},	/* Status registers 10 */
	{ "ST11",	0x2083,	0x0C,	'u',	0			},	/* Status registers 11 */
	{ "ST12",	0x2083,	0x0D,	'u',	0			},	/* Status registers 12 */
	{ "ST13",	0x2083,	0x0E,	'u',	0			},	/* Status registers 13 */
	{ "ST14",	0x2083,	0x0F,	'u',	0			},	/* Status registers 14 */
	{ "ST15",	0x2083,	0x10,	'u',	0			},	/* Status registers 15 */
	{ "ST16",	0x2083,	0x11,	'u',	0			},	/* Status registers 16 */
	{ "ST17",	0x2083,	0x12,	'u',	0			},	/* Status registers 17 */
	{ "ST20",	0x2083,	0x15,	'u',	0			},	/* Status registers 20 */
	{ "CCA1",	0x2084,	0x01,	'u',	en_P86_CCA	},	/* Configuration of customer Warning 1 */
	{ "CCA2",	0x2084,	0x02,	'u',	en_P86_CCA	},	/* Configuration of customer Warning 2 */
	{ "CCA3",	0x2084,	0x03,	'u',	en_P86_CCA	},	/* Configuration of customer Warning 3 */
	{ "CCA4",	0x2084,	0x04,	'u',	en_P86_CCA	},	/* Configuration of customer Warning 4 */
	{ "CCA5",	0x2084,	0x05,	'u',	en_P86_CCA	},	/* Configuration of customer Warning 5 */
	{ "CCS1",	0x2084,	0x0B,	'u',	en_P86_CCS	},	/* Configuration Counter Source 1 */
	{ "CCS2",	0x2084,	0x0C,	'u',	en_P86_CCS	},	/* Configuration Counter Source 2 */
	{ "CCS3",	0x2084,	0x0D,	'u',	en_P86_CCS	},	/* Configuration Counter Source 3 */
	{ "CCS4",	0x2084,	0x0E,	'u',	en_P86_CCS	},	/* Configuration Counter Source 4 */
	{ "CCS5",	0x2084,	0x0F,	'u',	en_P86_CCS	},	/* Configuration Counter Source 5 */
	{ "CDT1",	0x2084,	0x15,	'u',	0			},	/* Date Time Warning 1 */
	{ "CDT2",	0x2084,	0x17,	'u',	0			},	/* Date Time Warning 2 */
	{ "CDT3",	0x2084,	0x19,	'u',	0			},	/* Date Time Warning 3 */
	{ "CDT4",	0x2084,	0x1B,	'u',	0			},	/* Date Time Warning 4 */
	{ "CDT5",	0x2084,	0x1D,	'u',	0			},	/* Date Time Warning 5 */
	{ "CCL1",	0x2084,	0x29,	'u',	0			},	/* Configuration Counter Limit 1 */
	{ "CCL2",	0x2084,	0x2B,	'u',	0			},	/* Configuration Counter Limit 2 */
	{ "CCL3",	0x2084,	0x2D,	'u',	0			},	/* Configuration Counter Limit 3 */
	{ "CCL4",	0x2084,	0x2F,	'u',	0			},	/* Configuration Counter Limit 4 */
	{ "CCL5",	0x2084,	0x31,	'u',	0			},	/* Configuration Counter Limit 5 */
	{ "CC1",	0x2084,	0x3D,	'u',	0			},	/* Time Counter 1 */
	{ "CC2",	0x2084,	0x3F,	'u',	0			},	/* Time Counter 2 */
	{ "CC3",	0x2084,	0x41,	'u',	0			},	/* Time Counter 3 */
	{ "CC4",	0x2084,	0x43,	'u',	0			},	/* Time Counter 4 */
	{ "CC5",	0x2084,	0x45,	'u',	0			},	/* Time Counter 5 */
	{ "CAR",	0x2084,	0x51,	'u',	en_P86_CAR	},	/* Customer Warning clearing */
	{ "LDD1",	0x2086,	0x01,	'u',	en_P86_LDD	},	/* Log Distribution Data 1 */
	{ "LDM1",	0x2086,	0x02,	'u',	0			},	/* Distribution data max value 1 */
	{ "LDD2",	0x2086,	0x03,	'u',	en_P86_LDD	},	/* Log Distribution Data 2 */
	{ "LDM2",	0x2086,	0x04,	'u',	0			},	/* Distribution data max value 2 */
	{ "LDD3",	0x2086,	0x05,	'u',	en_P86_LDD	},	/* Log Distribution Data 3 */
	{ "LDM3",	0x2086,	0x06,	'u',	0			},	/* Distribution data max value 3 */
	{ "LDD4",	0x2086,	0x07,	'u',	en_P86_LDD	},	/* Log Distribution Data 4 */
	{ "LDM4",	0x2086,	0x08,	'u',	0			},	/* Distribution data max value 4 */
	{ "LDST",	0x2086,	0x09,	'u',	en_P86_LDST	},	/* Logging Distribution Sample Time */
	{ "LDEN",	0x2086,	0x0A,	'u',	en_P86_LDEN	},	/* Logging Distribution State */
	{ "MSCM",	0x208A,	0x01,	'u',	en_P86_MSCM	},	/* M/S communication mode */
	{ "MSID",	0x208A,	0x02,	'u',	en_P86_MSID	},	/* Master or Slave ID selection */
	{ "MSDT",	0x208A,	0x03,	'u',	en_P86_MSDT	},	/* Master or Slave selection */
	{ "MSSN",	0x208A,	0x04,	'u',	0			},	/* M/S number of slaves */
	{ "MSSI",	0x208A,	0x05,	'u',	en_P86_PSA	},	/* M/S Master speed reference input assignment */
	{ "MSSO",	0x208A,	0x06,	'u',	en_P86_CSA	},	/* M/S speed reference output assignment */
	{ "MSTI",	0x208A,	0x07,	'u',	en_P86_PSA	},	/* M/S Master torque reference input assignment */
	{ "MSTO",	0x208A,	0x08,	'u',	en_P86_CSA	},	/* M/S torque reference output assignment */
	{ "MSDI",	0x208A,	0x09,	'u',	en_P86_PSLIN	},	/* M/S local mode assignment */
	{ "MSCB",	0x208A,	0x0A,	'u',	en_P86_ECFG	},	/* M/S Response to communication error */
	{ "MSDB",	0x208A,	0x0B,	'u',	en_P86_ECFG	},	/* M/S Response to device error */
	{ "MSDD",	0x208A,	0x0C,	's',	0			},	/* M/S device error delay */
	{ "MSMC",	0x208A,	0x15,	'u',	en_P86_MSMC	},	/* M/S mechanical coupling type */
	{ "MSCT",	0x208A,	0x16,	'u',	en_P86_MSCT	},	/* M/S control type */
	{ "MSIS",	0x208A,	0x19,	'u',	en_P86_MSSS	},	/* M/S Master speed reference entry in control chain  */
	{ "MSOS",	0x208A,	0x1A,	'u',	en_P86_MSSS	},	/* M/S output speed reference selection */
	{ "MSIT",	0x208A,	0x1B,	'u',	en_P86_MSTS	},	/* M/S Master torque reference entry in control chain  */
	{ "MSOT",	0x208A,	0x1C,	'u',	en_P86_MSTS	},	/* M/S output torque reference selection */
	{ "MSIB",	0x208A,	0x1D,	'u',	en_P86_MSTS	},	/* M/S load balancing torque reference selection */
	{ "MSFE",	0x208A,	0x1F,	'u',	en_P86_N_Y	},	/* M/S advanced filter activation */
	{ "MSFF",	0x208A,	0x20,	'u',	0			},	/* M/S advanced filter frequency */
	{ "MSFB",	0x208A,	0x21,	'u',	0			},	/* M/S advanced filter bandwidth */
	{ "MSFD",	0x208A,	0x22,	'u',	0			},	/* M/S advanced filter depth */
	{ "MSFG",	0x208A,	0x23,	'u',	0			},	/* M/S advanced filter gain */
	{ "MSFC",	0x208A,	0x24,	'u',	0			},	/* M/S advanced filter coefficient */
	{ "MSS",	0x208A,	0x29,	'u',	en_P86_MSS	},	/* M/S function status */
	{ "MSMS",	0x208A,	0x2A,	's',	0			},	/* M/S Master speed reference */
	{ "MSMT",	0x208A,	0x2B,	's',	0			},	/* M/S Master torque reference */
	{ "MSSR",	0x208A,	0x2C,	's',	0			},	/* M/S Local speed reference */
	{ "MSTR",	0x208A,	0x2D,	's',	0			},	/* M/S Local torque reference */
	{ "MSDN",	0x208A,	0x2E,	'u',	en_P86_MSID	},	/* M/S device selection */
	{ "MSDS",	0x208A,	0x2F,	'u',	en_P86_MSS	},	/* M/S device status */
	{ "MSXT",	0x208A,	0x30,	's',	0			},	/* M/S device torque reference */
	{ "MSXS",	0x208A,	0x31,	's',	0			},	/* M/S device speed reference */
	{ "SSD",	0x208A,	0x32,	'u',	en_P86_PSLIN	},	/* Speed reference direction */
	{ "FMTR",	0x208A,	0x33,	's',	0			},	/* M/S Master torque reference */
	{ "FXT",	0x208A,	0x34,	's',	0			},	/* M/S Local torque reference */
	{ "FTOR",	0x208A,	0x35,	's',	0			},	/* M/S device torque reference */
	{ "BQM",	0x208A,	0x3D,	'u',	en_P86_BQM	},	/* Backlash mode */
	{ "BQFB",	0x208A,	0x3E,	'u',	en_P86_ECFG	},	/* Response to backlash error */
	{ "BQSL",	0x208A,	0x40,	'u',	0			},	/* Backlash reference frequency */
	{ "BQA",	0x208A,	0x41,	'u',	0			},	/* Backlash acceleration */
	{ "BQTL",	0x208A,	0x42,	'u',	0			},	/* Backlash torque limitation value */
	{ "BQT",	0x208A,	0x43,	'u',	0			},	/* Backlash torque limitation monitoring delay */
	{ "BQST",	0x208A,	0x44,	'u',	0			},	/* Backlash start delay */
	{ "BQFD",	0x208A,	0x45,	'u',	0			},	/* Backlash timeout */
	{ "BQMM",	0x208A,	0x47,	'u',	en_P86_BQMM	},	/* Backlash type */
	{ "BQMC",	0x208A,	0x48,	'u',	en_P86_N_Y	},	/* Backlash on slave(s) feedback */
	{ "BQMT",	0x208A,	0x49,	'u',	0			},	/* Backlash time */
	{ "PTIM",	0x208C,	0x01,	'u',	en_P86_PTIM	},	/* PTI mode */
	{ "PTII",	0x208C,	0x02,	'u',	en_P86_PTII	},	/* PTI direction inversion */
	{ "PTIS",	0x208C,	0x03,	'u',	0			},	/* PTI filter time inp */
	{ "PTIL",	0x208C,	0x05,	's',	0			},	/* PTI Low Freq */
	{ "PTIH",	0x208C,	0x07,	's',	0			},	/* PTI high frequency */
	{ "PTIT",	0x208C,	0x09,	'u',	0			},	/* PTI filter time analog */
	{ "PTIF",	0x208C,	0x15,	's',	0			},	/* PTI frequency measured */
	{ "PTIA",	0x208C,	0x17,	's',	0			},	/* Pulse Train In: real application image [-AIFULLSCALE;AIFULLSCALE] */
	{ "PTIR",	0x208C,	0x19,	's',	0			},	/* Pulse Train In: Frequency measured */
	{ "PTOM",	0x208C,	0x33,	'u',	en_P86_PTOM	},	/* PTO mode selection */
	{ "POFE",	0x208C,	0x34,	'u',	en_P86_N_Y	},	/* Pulse train Output : output connector (PTOE) FallBack Enable */
	{ "PTOB",	0x208C,	0x37,	's',	0			},	/* PTO low frequency */
	{ "PTOU",	0x208C,	0x39,	's',	0			},	/* PTO high frequency */
	{ "PTOF",	0x208C,	0x3D,	's',	0			},	/* PTO frequency value */
	{ "PEIL",	0x208C,	0x47,	's',	0			},	/* Frequency min value */
	{ "PEFR",	0x208C,	0x49,	's',	0			},	/* Frequency max value */
	{ "ECFR",	0x208C,	0x4B,	's',	0			},	/* Encoder pulse frequency */
	{ "EIFC",	0x208C,	0x4D,	's',	0			},	/* Encoder frequency */
	{ "R3F",	0x2092,	0x01,	'u',	en_P86_N_Y	},	/* R3 FallBack Enable */
	{ "R4F",	0x2092,	0x02,	'u',	en_P86_N_Y	},	/* R4 FallBack Enable */
	{ "R5F",	0x2092,	0x03,	'u',	en_P86_N_Y	},	/* R5 FallBack Enable */
	{ "R6F",	0x2092,	0x04,	'u',	en_P86_N_Y	},	/* R6 FallBack Enable */
	{ "LO2F",	0x2092,	0x05,	'u',	en_P86_N_Y	},	/* DO2 FallBack Enable */
	{ "D11F",	0x2092,	0x06,	'u',	en_P86_N_Y	},	/* DO11 FallBack Enable */
	{ "D12F",	0x2092,	0x07,	'u',	en_P86_N_Y	},	/* DO12 FallBack Enable */
	{ 0, 0, 0, 0 }
};
