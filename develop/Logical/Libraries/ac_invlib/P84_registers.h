/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: ac_invlib
 * File: P84_registers.h
 * Author: hilchenbachc
 * Created: February 05, 2010
 *******************************************************************/

#include <bur/plctypes.h>

#include "P84_enumerations.h"




acpireg p84reg[] = {
	/* Configuration and settings*/
	{ "AC2",		0x203C,	 0x0D,	'u',	0	},	 /* Acceleration 2 */
	{ "ACC",		0x203C,	 0x02,	'u',	0	},	 /* Acceleration */
	/* Parameter set switching*/
	{ "AD01",		0x2063,	 0x0C,	'u',	0	},	 /* Parameter set address 1 */
	{ "AD02",		0x2063,	 0x0D,	'u',	0	},	 /* Parameter set address 2 */
	{ "AD03",		0x2063,	 0x0E,	'u',	0	},	 /* Parameter set address 3 */
	{ "AD04",		0x2063,	 0x0F,	'u',	0	},	 /* Parameter set address 4 */
	{ "AD05",		0x2063,	 0x10,	'u',	0	},	 /* Parameter set address 5 */
	{ "AD06",		0x2063,	 0x11,	'u',	0	},	 /* Parameter set address 6 */
	{ "AD07",		0x2063,	 0x12,	'u',	0	},	 /* Parameter set address 7 */
	{ "AD08",		0x2063,	 0x13,	'u',	0	},	 /* Parameter set address 8 */
	{ "AD09",		0x2063,	 0x14,	'u',	0	},	 /* Parameter set address 9 */
	{ "AD10",		0x2063,	 0x15,	'u',	0	},	 /* Parameter set address 10 */
	{ "AD11",		0x2063,	 0x16,	'u',	0	},	 /* Parameter set address 11 */
	{ "AD12",		0x2063,	 0x17,	'u',	0	},	 /* Parameter set address 12 */
	{ "AD13",		0x2063,	 0x18,	'u',	0	},	 /* Parameter set address 13 */
	{ "AD14",		0x2063,	 0x19,	'u',	0	},	 /* Parameter set address 14 */
	{ "AD15",		0x2063,	 0x1A,	'u',	0	},	 /* Parameter set address 15 */
	/* Configuration and settings*/
	{ "ADC",		0x204A,	 0x02,	'u',	en_P84_ADC	},	 /* Auto DC injection */
	{ "ADCO",		0x201E,	 0x34,	'u',	0	},	 /* CANopen address */
	{ "ADD",		0x201E,	 0x02,	'u',	0	},	 /* Modbus Address */
	{ "ADRC",		0x2024,	 0x02,	'u',	0	},	 /* Address */
	/* I/O parameters*/
	{ "AI1C",		0x2016,	 0x2B,	's',	0	},	 /* Analog input 1 physical value */
	/* Configuration and settings*/
	{ "AI1E",		0x200E,	 0x3F,	'u',	0	},	 /* AI1 Interm. point X */
	{ "AI1F",		0x200E,	 0x35,	'u',	0	},	 /* AI1 filter */
	/* I/O parameters*/
	{ "AI1R",		0x2016,	 0x21,	's',	0	},	 /* Analog input 1 standardized value */
	/* Configuration and settings*/
	{ "AI1S",		0x200E,	 0x49,	'u',	0	},	 /* AI1 Interm. point Y */
	{ "AI1T",		0x200E,	 0x03,	'u',	en_P84_AIOT	},	 /* AI1 Type */
	/* I/O parameters*/
	{ "AI2C",		0x2016,	 0x2C,	's',	0	},	 /* Analog input 2 physical value */
	/* Configuration and settings*/
	{ "AI2E",		0x200E,	 0x40,	'u',	0	},	 /* AI2 Interm. point X */
	{ "AI2F",		0x200E,	 0x36,	'u',	0	},	 /* AI2 filter */
	{ "AI2L",		0x200E,	 0x54,	'u',	en_P84_AIOL	},	 /* AI2 range */
	/* I/O parameters*/
	{ "AI2R",		0x2016,	 0x22,	's',	0	},	 /* Analog input 2 standardized value */
	/* Configuration and settings*/
	{ "AI2S",		0x200E,	 0x4A,	'u',	0	},	 /* AI2 Interm. point Y */
	{ "AI2T",		0x200E,	 0x04,	'u',	en_P84_AIOT	},	 /* AI2 Type */
	/* I/O parameters*/
	{ "AI3C",		0x2016,	 0x2D,	's',	0	},	 /* Analog input 3 physical value */
	/* Configuration and settings*/
	{ "AI3E",		0x200E,	 0x41,	'u',	0	},	 /* AI3 Interm. point X */
	{ "AI3F",		0x200E,	 0x37,	'u',	0	},	 /* AI3 filter */
	{ "AI3L",		0x200E,	 0x55,	'u',	en_P84_AIOL	},	 /* AI3 range */
	/* I/O parameters*/
	{ "AI3R",		0x2016,	 0x23,	's',	0	},	 /* Analog input 3 standardized value */
	/* Configuration and settings*/
	{ "AI3S",		0x200E,	 0x4B,	'u',	0	},	 /* AI3 Interm. point Y */
	{ "AI3T",		0x200E,	 0x05,	'u',	en_P84_AIOT	},	 /* AI3 Type */
	/* I/O parameters*/
	{ "AI4C",		0x2016,	 0x2E,	's',	0	},	 /* Analog input 4 physical value */
	/* Configuration and settings*/
	{ "AI4E",		0x200E,	 0x42,	'u',	0	},	 /* AI4 Interm.point  X */
	{ "AI4F",		0x200E,	 0x38,	'u',	0	},	 /* AI4 filter */
	{ "AI4L",		0x200E,	 0x56,	'u',	en_P84_AIOL	},	 /* AI4 range */
	/* I/O parameters*/
	{ "AI4R",		0x2016,	 0x24,	's',	0	},	 /* Analog input 4 standardized value */
	/* Configuration and settings*/
	{ "AI4S",		0x200E,	 0x4C,	'u',	0	},	 /* AI4 Interm.point Y */
	{ "AI4T",		0x200E,	 0x06,	'u',	en_P84_AIOT	},	 /* AI4 Type */
	{ "AIC1",		0x2016,	 0x53,	'u',	en_P84_PSA	},	 /* AI net. channel */
	/* Setpoint parameters*/
	{ "AIV1",		0x2016,	 0x52,	's',	0	},	 /* PID regulator feedback */
	/* Configuration and settings*/
	{ "AMOA",		0x2024,	 0x33,	'u',	0	},	 /* Modbus add Prg C. */
	{ "AMOC",		0x2024,	 0x34,	'u',	0	},	 /* Modbus add Com.C. */
	{ "AO1",		0x2014,	 0x16,	'u',	en_P84_PSA	},	 /* AO1 assignment */
	/* I/O parameters*/
	{ "AO1C",		0x2016,	 0x48,	's',	0	},	 /* Analog output 1 physical value */
	/* Configuration and settings*/
	{ "AO1F",		0x2010,	 0x0C,	'u',	0	},	 /* AO1 Filter */
	/* I/O parameters*/
	{ "AO1R",		0x2016,	 0x3E,	's',	0	},	 /* Analog output 1 standardized value */
	/* Configuration and settings*/
	{ "AO1T",		0x2010,	 0x02,	'u',	en_P84_AIOT	},	 /* AO1 Type */
	{ "AO2",		0x2014,	 0x17,	'u',	en_P84_PSA	},	 /* AO2 assignment */
	/* I/O parameters*/
	{ "AO2C",		0x2016,	 0x49,	's',	0	},	 /* Analog output 2 physical value */
	/* Configuration and settings*/
	{ "AO2F",		0x2010,	 0x0D,	'u',	0	},	 /* AO2 Filter */
	/* I/O parameters*/
	{ "AO2R",		0x2016,	 0x3F,	's',	0	},	 /* Analog output 2 standardized value */
	/* Configuration and settings*/
	{ "AO2T",		0x2010,	 0x03,	'u',	en_P84_AIOT	},	 /* AO2 Type */
	{ "AO3",		0x2014,	 0x18,	'u',	en_P84_PSA	},	 /* AO3 assignment */
	/* I/O parameters*/
	{ "AO3C",		0x2016,	 0x4A,	's',	0	},	 /* Analog output 3 physical value */
	/* Configuration and settings*/
	{ "AO3F",		0x2010,	 0x0E,	'u',	0	},	 /* AO3 Filter */
	/* I/O parameters*/
	{ "AO3R",		0x2016,	 0x40,	's',	0	},	 /* Analog output 3 standardized value */
	/* Configuration and settings*/
	{ "AO3T",		0x2010,	 0x04,	'u',	en_P84_AIOT	},	 /* AO3 Type */
	{ "AOH1",		0x2010,	 0x34,	'u',	0	},	 /* AO1 max output */
	{ "AOH2",		0x2010,	 0x35,	'u',	0	},	 /* AO2 max output */
	{ "AOH3",		0x2010,	 0x36,	'u',	0	},	 /* AO3 max output */
	{ "AOL1",		0x2010,	 0x2A,	'u',	0	},	 /* AO1 min output */
	{ "AOL2",		0x2010,	 0x2B,	'u',	0	},	 /* AO2 min output */
	{ "AOL3",		0x2010,	 0x2C,	'u',	0	},	 /* AO3 min output */
	/* Fault parameters*/
	{ "APF",		0x2029,	 0x22,	'u',	0	},	 /* Controller Inside card fault code */
	/* Measurement parameters*/
	{ "APH",		0x2002,	 0x1F,	'u',	0	},	 /* Energy consumption */
	/* Configuration and settings*/
	{ "ASH1",		0x2010,	 0x48,	'u',	0	},	 /* Scaling AO1 max */
	{ "ASH2",		0x2010,	 0x49,	'u',	0	},	 /* Scaling AO2 max */
	{ "ASH3",		0x2010,	 0x4A,	'u',	0	},	 /* Scaling AO3 max */
	{ "ASL1",		0x2010,	 0x3E,	'u',	0	},	 /* Scaling AO1 min */
	{ "ASL2",		0x2010,	 0x3F,	'u',	0	},	 /* Scaling AO2 min */
	{ "ASL3",		0x2010,	 0x40,	'u',	0	},	 /* Scaling AO3 min */
	{ "ATR",		0x2029,	 0x17,	'u',	en_P84_N_Y	},	 /* Automatic restart */
	{ "AUT",		0x2042,	 0x10,	'u',	en_P84_N_Y	},	 /* Automatic autotune */
	/* Actual values parameters*/
	{ "AVS",		0x205B,	 0x03,	's',	0	},	 /* ENA average speed */
	/* Configuration and settings*/
	{ "BBA",		0x206F,	 0x03,	'u',	en_P84_N_Y	},	 /* Braking balance */
	{ "BCI",		0x2046,	 0x0A,	'u',	en_P84_PSLIN	},	 /* Brake contact */
	{ "BDCO",		0x201E,	 0x36,	'u',	en_P84_BDCO	},	 /* CANopen bit rate */
	{ "BDR",		0x2024,	 0x04,	'u',	en_P84_TBR	},	 /* Bit rate */
	{ "BDRU",		0x2024,	 0x3D,	'u',	en_P84_TBR	},	 /* Data rate used */
	{ "BECD",		0x2046,	 0x0F,	's',	0	},	 /* Brake engage at 0 */
	{ "BED",		0x2046,	 0x15,	'u',	en_P84_N_Y	},	 /* Engage at reversal */
	{ "BEN",		0x2046,	 0x04,	's',	0	},	 /* Brake engage freq */
	{ "BET",		0x2046,	 0x06,	'u',	0	},	 /* Brake engage time */
	{ "BFR",		0x2000,	 0x10,	'u',	en_P84_BFR	},	 /* Standard mot. freq */
	{ "BIP",		0x2046,	 0x08,	'u',	en_P84_BIP	},	 /* Brake impulse */
	{ "BIR",		0x2046,	 0x0D,	's',	0	},	 /* Brake release freq */
	{ "BLC",		0x2046,	 0x02,	'u',	en_P84_BLC	},	 /* Brake assignment */
	{ "BMP",		0x2069,	 0x1E,	'u',	en_P84_BMP	},	 /* HMI cmd. */
	{ "BRA",		0x203C,	 0x04,	'u',	en_P84_BRA	},	 /* Dec ramp adapt. */
	{ "BRH",		0x2046,	 0x33,	'u',	0	},	 /* Brake configuration */
	{ "BRO",		0x206F,	 0x0C,	'u',	en_P84_BRO	},	 /* DB res. protection */
	{ "BRP",		0x206F,	 0x0D,	'u',	0	},	 /* DB Resistor Power */
	{ "BRR",		0x2046,	 0x10,	'u',	0	},	 /* Current ramp time */
	{ "BRT",		0x2046,	 0x05,	'u',	0	},	 /* Brake Release time */
	{ "BRV",		0x206F,	 0x0E,	'u',	0	},	 /* DB Resistor value */
	{ "BSP",		0x2001,	 0x07,	'u',	en_P84_BSP	},	 /* Reference template */
	{ "BST",		0x2046,	 0x09,	'u',	en_P84_BST	},	 /* Movement type */
	{ "BUB",		0x2028,	 0x11,	'u',	en_P84_ECFG	},	 /* Brake res. fault Mgt */
	/* Status parameters*/
	{ "CCC",		0x2036,	 0x2B,	'u',	0	},	 /* Active command channel */
	/* Configuration and settings*/
	{ "CCFG",		0x2000,	 0x36,	'u',	en_P84_N_Y	},	 /* Customized macro */
	{ "CCS",		0x2036,	 0x16,	'u',	en_P84_PSLIN	},	 /* Cmd switching */
	{ "CD1",		0x2036,	 0x18,	'u',	en_P84_CDX	},	 /* Cmd channel 1 */
	{ "CD2",		0x2036,	 0x19,	'u',	en_P84_CDX	},	 /* Cmd channel 2 */
	{ "CDN",		0x2024,	 0x09,	'u',	0	},	 /* Command station */
	{ "CFG",		0x2000,	 0x35,	'u',	en_P84_CFG	},	 /* Macro configuration */
	/* Parameter set switching*/
	{ "CFPS",		0x2063,	 0x01,	'u',	en_P84_CFPS	},	 /* Active parameter set */
	{ "CHA1",		0x2063,	 0x03,	'u',	en_P84_PSLIN	},	 /* 2 Parameter sets */
	{ "CHA2",		0x2063,	 0x04,	'u',	en_P84_PSLIN	},	 /* 3 Parameter sets */
	/* Configuration and settings*/
	{ "CHCF",		0x2036,	 0x02,	'u',	en_P84_CHCF	},	 /* Profile */
	{ "CHM",		0x2032,	 0x1A,	'u',	en_P84_N_Y	},	 /* Multimotors */
	/* Fault parameters*/
	{ "CIC",		0x2029,	 0x1F,	'u',	0	},	 /* Incorrect configuration */
	/* Configuration and settings*/
	{ "CL2",		0x203E,	 0x04,	'u',	0	},	 /* I Limit. 2 value */
	{ "CLI",		0x203E,	 0x02,	'u',	0	},	 /* Current Limitation */
	{ "CLL",		0x2028,	 0x10,	'u',	en_P84_ECFG	},	 /* Network fault mgt */
	{ "CLO",		0x205D,	 0x03,	'u',	0	},	 /* High speed I Limit */
	{ "CLS",		0x205F,	 0x08,	'u',	en_P84_PSLIN	},	 /* Disable limit sw. */
	/* Control parameters*/
	{ "CMD",		0x6040,	 0x00,	'u',	0	},	 /* Control word */
	{ "CMDD",		0x6040,	 0x00,	'u',	0	},	 /* Control word */	
	{ "CMI",		0x2037,	 0x05,	'u',	0	},	 /* Extended control word */
	/* History parameters*/
	{ "CMP0",		0x202A,	 0x1F,	'u',	0	},	 /* Command word on last fault */
	{ "CMP1",		0x202A,	 0x20,	'u',	0	},	 /* Command word on fault n-1 */
	{ "CMP2",		0x202A,	 0x21,	'u',	0	},	 /* Command word on fault n-2 */
	{ "CMP3",		0x202A,	 0x22,	'u',	0	},	 /* Command word on fault n-3 */
	{ "CMP4",		0x202A,	 0x23,	'u',	0	},	 /* Command word on fault n-4 */
	{ "CMP5",		0x202A,	 0x24,	'u',	0	},	 /* Command word on fault n-5 */
	{ "CMP6",		0x202A,	 0x25,	'u',	0	},	 /* Command word on fault n-6 */
	{ "CMP7",		0x202A,	 0x26,	'u',	0	},	 /* Command word on fault n-7 */
	{ "CMP8",		0x202A,	 0x27,	'u',	0	},	 /* Command word on fault n-8 */
	/* Fault parameters*/
	{ "CNF",		0x2029,	 0x21,	'u',	0	},	 /* Network card fault code */
	/* Configuration and settings*/
	{ "CNF1",		0x2032,	 0x16,	'u',	en_P84_PSLIN	},	 /* 2 Configurations */
	{ "CNF2",		0x2032,	 0x17,	'u',	en_P84_PSLIN	},	 /* 3 Configurations */
	/* Status parameters*/
	{ "CNFS",		0x2032,	 0x15,	'u',	en_P84_CNFS	},	 /* Config. active */
	/* Configuration and settings*/
	{ "COF",		0x205D,	 0x04,	'u',	0	},	 /* Motor speed coeff. */
	{ "COL",		0x2028,	 0x0C,	'u',	en_P84_ECFG	},	 /* CANopen fault mgt */
	{ "COP",		0x2036,	 0x03,	'u',	en_P84_COP	},	 /* Copy channel 1<>2 */
	{ "COR",		0x205D,	 0x05,	'u',	0	},	 /* Gen. speed coeff */
	{ "CP1",		0x2046,	 0x49,	's',	0	},	 /* Point 1Y */
	{ "CP2",		0x2046,	 0x4B,	's',	0	},	 /* Point 2Y */
	/* Status parameters*/
	{ "CRC",		0x2036,	 0x2A,	'u',	0	},	 /* Active reference channel */
	/* Configuration and settings*/
	{ "CRH2",		0x200E,	 0x2C,	'u',	0	},	 /* AI2 max. value */
	{ "CRH3",		0x200E,	 0x2D,	'u',	0	},	 /* AI3 max. value */
	{ "CRH4",		0x200E,	 0x2E,	'u',	0	},	 /* AI4 max. value */
	{ "CRL2",		0x200E,	 0x22,	'u',	0	},	 /* AI2 min. value */
	{ "CRL3",		0x200E,	 0x23,	'u',	0	},	 /* AI3 min. value */
	{ "CRL4",		0x200E,	 0x24,	'u',	0	},	 /* AI4 min. value */
	/* History parameters*/
	{ "CRP0",		0x202A,	 0x5B,	'u',	0	},	 /* Channels active on last fault */
	{ "CRP1",		0x202A,	 0x5C,	'u',	0	},	 /* Active channels on fault n-1 */
	{ "CRP2",		0x202A,	 0x5D,	'u',	0	},	 /* Active channels on fault n-2 */
	{ "CRP3",		0x202A,	 0x5E,	'u',	0	},	 /* Active channels on fault n-3 */
	{ "CRP4",		0x202A,	 0x5F,	'u',	0	},	 /* Active channels on fault n-4 */
	{ "CRP5",		0x202A,	 0x60,	'u',	0	},	 /* Active channels on fault n-5 */
	{ "CRP6",		0x202A,	 0x61,	'u',	0	},	 /* Active channels on fault n-6 */
	{ "CRP7",		0x202A,	 0x62,	'u',	0	},	 /* Active channels on fault n-7 */
	{ "CRP8",		0x202A,	 0x63,	'u',	0	},	 /* Active channels on fault n-8 */
	/* Configuration and settings*/
	{ "CTD",		0x2050,	 0x02,	'u',	0	},	 /* Current threshold */
	{ "CTT",		0x2042,	 0x08,	'u',	en_P84_CTT	},	 /* Motor control type */
	{ "DA2",		0x2058,	 0x0C,	'u',	en_P84_PSA	},	 /* Assignment of substract setpoint 2 */
	{ "DA3",		0x2058,	 0x0D,	'u',	en_P84_PSA	},	 /* Assignment of substract setpoint 3 */
	{ "DAF",		0x205F,	 0x04,	'u',	en_P84_PSLIN	},	 /* Assignment of slowdown forward */
	{ "DAL",		0x205F,	 0x0A,	'u',	en_P84_L_H	},	 /* Slowdown limit cfg. */
	{ "DAR",		0x205F,	 0x05,	'u',	en_P84_PSLIN	},	 /* Assignment of slowdown reverse */
	{ "DAS",		0x2065,	 0x03,	'u',	0	},	 /* Delay to open cont. */
	/* Measurement parameters*/
	{ "DAY",		0x202B,	 0x5C,	'u',	0	},	 /* Date */
	/* Configuration and settings*/
	{ "DBN",		0x203E,	 0x18,	'u',	0	},	 /* Negative deadband */
	{ "DBP",		0x203E,	 0x19,	'u',	0	},	 /* Positive deadband */
	{ "DBS",		0x2065,	 0x02,	'u',	0	},	 /* Delay to motor run */
	{ "DCF",		0x2052,	 0x1F,	'u',	0	},	 /* Ramp divider */
	{ "DCI",		0x2052,	 0x04,	'u',	en_P84_PSLIN	},	 /* DC injection assign. */
	{ "DCO",		0x206C,	 0x2A,	'u',	en_P84_CSLOUT	},	 /* Precharge cont. ass. */
	{ "DE2",		0x203C,	 0x0E,	'u',	0	},	 /* Deceleration 2 */
	{ "DEC",		0x203C,	 0x03,	'u',	0	},	 /* Deceleration */
	{ "DLB",		0x205D,	 0x0E,	'u',	en_P84_ECFG	},	 /* Dyn. load Mgt. */
	{ "DLD",		0x205D,	 0x0C,	'u',	0	},	 /* Dyn. load threshold */
	/* History parameters*/
	{ "DM0",		0x202B,	 0x0B,	'u',	0	},	 /* Time on last fault */
	{ "DM1",		0x202B,	 0x0C,	'u',	0	},	 /* Time on fault n-1 */
	{ "DM2",		0x202B,	 0x0D,	'u',	0	},	 /* Time on fault n-2 */
	{ "DM3",		0x202B,	 0x0E,	'u',	0	},	 /* Time on fault n-3 */
	{ "DM4",		0x202B,	 0x0F,	'u',	0	},	 /* Time on fault n-4 */
	{ "DM5",		0x202B,	 0x10,	'u',	0	},	 /* Time on fault n-5 */
	{ "DM6",		0x202B,	 0x11,	'u',	0	},	 /* Time on fault n-6 */
	{ "DM7",		0x202B,	 0x12,	'u',	0	},	 /* Time on fault n-7 */
	{ "DM8",		0x202B,	 0x13,	'u',	0	},	 /* Time on fault n-8 */
	/* Configuration and settings*/
	{ "DO1",		0x2014,	 0x20,	'u',	en_P84_PSL	},	 /* DO1 assignment */
	{ "DO1D",		0x200C,	 0x52,	'u',	0	},	 /* DO1 delay time */
	{ "DO1H",		0x200C,	 0x48,	'u',	0	},	 /* DO1 holding time */
	{ "DO1S",		0x200C,	 0x3E,	'u',	en_P84_NPL	},	 /* DO1 active at */
	/* CiA 402 settings*/
	{ "DOTD",		0x605C,	 0x00,	'u',	en_P84_DOTD	},	 /* Disable operation option code */
	/* History parameters*/
	{ "DP0",		0x202A,	 0x01,	'u',	en_P84_LFT	},	 /* Fault code on last fault */
	{ "DP1",		0x202A,	 0x02,	'u',	en_P84_LFT	},	 /* Fault code on fault n-1 */
	{ "DP2",		0x202A,	 0x03,	'u',	en_P84_LFT	},	 /* Fault code on fault n-2 */
	{ "DP3",		0x202A,	 0x04,	'u',	en_P84_LFT	},	 /* Fault code on fault n-3 */
	{ "DP4",		0x202A,	 0x05,	'u',	en_P84_LFT	},	 /* Fault code on fault n-4 */
	{ "DP5",		0x202A,	 0x06,	'u',	en_P84_LFT	},	 /* Fault code on fault n-5 */
	{ "DP6",		0x202A,	 0x07,	'u',	en_P84_LFT	},	 /* Fault code on fault n-6 */
	{ "DP7",		0x202A,	 0x08,	'u',	en_P84_LFT	},	 /* Fault code on fault n-7 */
	{ "DP8",		0x202A,	 0x09,	'u',	en_P84_LFT	},	 /* Fault code on fault n-8 */
	/* Configuration and settings*/
	{ "DSF",		0x205F,	 0x06,	'u',	en_P84_DSF	},	 /* Deceleration type */
	{ "DSI",		0x2055,	 0x16,	'u',	en_P84_PSLIN	},	 /* -Speed assignment */
	{ "DSP",		0x2055,	 0x03,	'u',	en_P84_PSLIN	},	 /* -Speed assignment */
	{ "DTF",		0x205C,	 0x0C,	'u',	0	},	 /* Decrease ref. speed */
	{ "EBO",		0x205C,	 0x0E,	'u',	en_P84_CSLOUT	},	 /* End reel */
	{ "ECC",		0x201A,	 0x08,	'u',	en_P84_N_Y	},	 /* Encoder coupling */
	{ "ECT",		0x201A,	 0x0A,	'u',	0	},	 /* Encoder check time */
	{ "EFI",		0x2067,	 0x0D,	'u',	0	},	 /* Freq. signal filter */
	{ "EFR",		0x2067,	 0x0C,	'u',	0	},	 /* Freq. max value */
	{ "EIL",		0x2067,	 0x0B,	's',	0	},	 /* Freq. min. value */
	/* Enable Parameters*/
	{ "EN2",		0x2041,	0x04,	'u',	0	},	 /* EN2 */
	{ "EN8",		0x2041,	0x0A,	'u',	0	},	 /* EN8 */
	/* Configuration and settings*/
	{ "ENA",		0x205B,	 0x02,	'u',	en_P84_N_Y	},	 /* ENA system */
	{ "ENC",		0x201A,	 0x06,	'u',	en_P84_ENC	},	 /* Encoder check */
	{ "ENS",		0x201A,	 0x09,	'u',	en_P84_ENS	},	 /* Encoder type */
	{ "ENU",		0x201A,	 0x07,	'u',	en_P84_ENU	},	 /* Encoder usage */
	/* History parameters*/
	{ "EP0",		0x202A,	 0x0B,	'u',	0	},	 /* Status word on last fault */
	{ "EP1",		0x202A,	 0xC,	'u',	0	},	 /* Status word on fault n-1 */
	{ "EP2",		0x202A,	 0x0D,	'u',	0	},	 /* Status word on fault n-2 */
	{ "EP3",		0x202A,	 0x0E,	'u',	0	},	 /* Status word on fault n-3 */
	{ "EP4",		0x202A,	 0x0F,	'u',	0	},	 /* Status word on fault n-4 */
	{ "EP5",		0x202A,	 0x10,	'u',	0	},	 /* Status word on fault n-5 */
	{ "EP6",		0x202A,	 0x11,	'u',	0	},	 /* Status word on fault n-6 */
	{ "EP7",		0x202A,	 0x12,	'u',	0	},	 /* Status word on fault n-7 */
	{ "EP8",		0x202A,	 0x13,	'u',	0	},	 /* Status word on fault n-8 */
	/* Configuration and settings*/
	{ "EPL",		0x2028,	 0x07,	'u',	en_P84_ECFG	},	 /* External fault mgt */
	{ "ERCO",		0x201E,	 0x39,	'u',	0	},	 /* Error code */
	/* Fault parameters*/
	{ "ERRD",		0x603F,	 0x00,	'u',	en_P84_ERRD	},	 /* CiA402 fault code */
	/* Status parameters*/
	{ "ETA",		0x6041,	 0x00,	'u',	0	},	 /* Status word */
	{ "ETAD",		0x6041,	 0x00,	'u',	0	},	 /* Status word */	
	/* Configuration and settings*/
	{ "ETF",		0x2029,	 0x20,	'u',	en_P84_PSLIN	},	 /* External fault ass. */
	/* Status parameters*/
	{ "ETI",		0x2002,	 0x07,	'u',	0	},	 /* Extended status word */
	/* Configuration and settings*/
	{ "F1",		0x205E,	 0x05,	'u',	0	},	 /* Freq pt 1on 5pt V/F */
	{ "F2",		0x205E,	 0x07,	'u',	0	},	 /* F2 */
	{ "F2D",		0x2050,	 0x05,	'u',	0	},	 /* Freq. threshold 2 */
	{ "F3",		0x205E,	 0x09,	'u',	0	},	 /* F3 */
	{ "F4",		0x205E,	 0x0B,	'u',	0	},	 /* F4 */
	{ "F5",		0x205E,	 0x0D,	'u',	0	},	 /* F5 */
	{ "FCP",		0x2070,	 0x04,	'u',	0	},	 /* Freq. Const Power */
	/* Configuration management*/
	{ "FCS",		0x2032,	 0x03,	'u',	en_P84_FCS	},	 /* Restore configuration */
	/* Configuration and settings*/
	{ "FDT",		0x2074,	 0x07,	'u',	0	},	 /* Level fr. pulse ctrl */
	{ "FFT",		0x2052,	 0x15,	'u',	0	},	 /* Freewheel stop Thd */
	{ "FLI",		0x206D,	 0x02,	'u',	en_P84_PSLIN	},	 /* Fluxing assignment */
	{ "FLO",		0x2036,	 0x20,	'u',	en_P84_PSLIN	},	 /* Forced local assign. */
	{ "FLOC",		0x2036,	 0x21,	'u',	en_P84_PSA	},	 /* Forced local Ref. */
	{ "FLOT",		0x2036,	 0x22,	'u',	0	},	 /* Time-out forc. local */
	{ "FLR",		0x2001,	 0x0B,	'u',	en_P84_N_Y	},	 /* Catch on the fly */
	{ "FCAO",		0x2001,	 0x0E,	'u',	0	},	 	/* Catch on the fly - recognized speed */
	{ "FLU",		0x206D,	 0x03,	'u',	en_P84_FLU	},	 /* Motor fluxing */
	{ "FN1",		0x2069,	 0x02,	'u',	en_P84_CSLFN	},	 /* F1 key assignment */
	{ "FN2",		0x2069,	 0x03,	'u',	en_P84_CSLFN	},	 /* F2 key assignment */
	{ "FN3",		0x2069,	 0x04,	'u',	en_P84_CSLFN	},	 /* F3 key assignment */
	{ "FN4",		0x2069,	 0x05,	'u',	en_P84_CSLFN	},	 /* F4 key assignment */
	/* Fault parameters*/
	{ "FNB",		0x202B,	 0x5E,	'u',	0	},	 /* Fault counter */
	/* Configuration and settings*/
	{ "FOR",		0x2024,	 0x05,	'u',	en_P84_FOR	},	 /* Format */
	{ "FPI",		0x2059,	 0x33,	'u',	en_P84_PSA	},	 /* Speed ref. assign. */
	{ "FQA",		0x2074,	 0x05,	'u',	0	},	 /* Overspd. pulse thd. */
	{ "FQC",		0x2074,	 0x03,	'u',	0	},	 /* Pulse scal. divisor */
	{ "FQF",		0x2074,	 0x02,	'u',	en_P84_N_Y	},	 /* Frequency meter */
	{ "FQL",		0x2074,	 0x0A,	'u',	0	},	 /* Pulse warning thd. */
	/* I/O parameters*/
	{ "FQS",		0x2074,	 0x04,	'u',	0	},	 /* Pulse input frequency */
	/* Configuration and settings*/
	{ "FQT",		0x2074,	 0x08,	'u',	0	},	 /* Pulse thd. wo Run */
	{ "FR1",		0x2036,	 0x0E,	'u',	en_P84_PSA	},	 /* Ref.1 channel */
	{ "FR1B",		0x2036,	 0x10,	'u',	en_P84_PSA	},	 /* Ref.1B channel */
	{ "FR2",		0x2036,	 0x0F,	'u',	en_P84_PSA	},	 /* Ref.2 channel */
	/* Reference parameters*/
	{ "FRH",		0x2002,	 0x04,	's',	0	},	 /* Frequency reference before ramp */
	{ "FRHD",		0x2038,	 0x06,	's',	0	},	 /* Speed reference before ramp */
	/* Configuration and settings*/
	{ "FRHT",		0x2002,	 0x17,	's',	0	},	 /* FRH high resolution */
	/* Reference parameters*/
	{ "FRO",		0x203C,	 0x16,	's',	0	},	 /* Frequency reference after ramp */
	{ "FROD",		0x6043,	 0x00,	's',	0	},	 /* Speed reference after ramp */
	/* Configuration and settings*/
	{ "FRS",		0x2042,	 0x03,	'u',	0	},	 /* Rated motor freq. */
	{ "FRSS",		0x2042,	 0x50,	'u',	0	},	 /* Nominal freq sync. */
	{ "FRT",		0x203C,	 0x0C,	'u',	0	},	 /* Ramp 2 threshold */
	/* Configuration management*/
	{ "FRY",		0x2000,	 0x17,	'u',	en_P84_FRY	},	 /* Factory setting group */
	/* Configuration and settings*/
	{ "FST",		0x2052,	 0x05,	'u',	en_P84_PSLIN	},	 /* Fast stop assign. */
	{ "FTD",		0x2050,	 0x04,	'u',	0	},	 /* Freq. threshold */
	{ "GIE",		0x205B,	 0x05,	'u',	0	},	 /* ENA integral gain */
	{ "GLB",		0x2024,	 0x08,	'u',	0	},	 /* Global Tx */
	{ "GPE",		0x205B,	 0x04,	'u',	0	},	 /* ENA prop.gain */
	{ "HLS",		0x2075,	 0x02,	'u',	0	},	 /* Half-floor speed */
	/* Status parameters*/
	{ "HMIS",		0x2002,	 0x29,	'u',	en_P84_HMIS	},	 /* Drive state */
	/* Configuration and settings*/
	{ "HSO",		0x205D,	 0x02,	'u',	en_P84_HSO	},	 /* High speed hoisting */
	{ "HSP",		0x2001,	 0x05,	'u',	0	},	 /* High speed */
	{ "IBR",		0x2046,	 0x07,	'u',	0	},	 /* Brake release I FW */
	{ "IBRA",		0x2046,	 0x4C,	'u',	0	},	 /* Ibr 4-20 mA loss */
	{ "IDA",		0x2042,	 0x35,	'u',	0	},	 /* Idw */
	{ "IDC",		0x2052,	 0x0B,	'u',	0	},	 /* DC inject. level 1 */
	{ "IDC2",		0x2052,	 0x0D,	'u',	0	},	 /* DC inject. level 2 */
	{ "IDM",		0x2042,	 0x33,	'u',	0	},	 /* Magnetizing current */
	/* I/O parameters*/
	{ "IL1R",		0x2016,	 0x03,	'u',	0	},	 /* Logic inputs states */
	/* Fault parameters*/
	{ "ILF1",		0x2029,	 0x23,	'u',	0	},	 /* Option card 1 fault code */
	{ "ILF2",		0x2029,	 0x24,	'u',	0	},	 /* Option card 2 fault code */
	/* Configuration and settings*/
	{ "INH",		0x2029,	 0x1A,	'u',	en_P84_PSLIN	},	 /* Fault inhibit assign. */
	{ "INR",		0x203C,	 0x15,	'u',	en_P84_INR	},	 /* Ramp increment */
	{ "INSP",		0x2042,	 0x01,	'u',	en_P84_INSP	},	 /* rpm increment */
	{ "INTP",		0x203E,	 0x10,	'u',	en_P84_INCPER	},	 /* Torque limitation unit */
	/* Identification parameters*/
	{ "INV",		0x2000,	 0x12,	'u',	0	},	 /* Rated drive current */
	/* History parameters*/
	{ "IP0",		0x202A,	 0x15,	'u',	0	},	 /* Extended status word on last fault */
	{ "IP1",		0x202A,	 0x16,	'u',	0	},	 /* Extended status word on fault n-1 */
	{ "IP2",		0x202A,	 0x17,	'u',	0	},	 /* Extended status word on fault n-2 */
	{ "IP3",		0x202A,	 0x18,	'u',	0	},	 /* Extended status word on fault n-3 */
	{ "IP4",		0x202A,	 0x19,	'u',	0	},	 /* Extended status word on fault n-4 */
	{ "IP5",		0x202A,	 0x1A,	'u',	0	},	 /* Extended status word on fault n-5 */
	{ "IP6",		0x202A,	 0x1B,	'u',	0	},	 /* Extended status word on fault n-6 */
	{ "IP7",		0x202A,	 0x1C,	'u',	0	},	 /* Extended status word on fault n-7 */
	{ "IP8",		0x202A,	 0x1D,	'u',	0	},	 /* Extended status word on fault n-8 */
	/* Configuration and settings*/
	{ "IPL",		0x2028,	 0x03,	'u',	en_P84_ECFG	},	 /* Input phase loss */
	{ "IRD",		0x2046,	 0x0C,	'u',	0	},	 /* Brake release I Rev */
	{ "ITH",		0x2042,	 0x17,	'u',	0	},	 /* Mot. therm. current */
	{ "JDC",		0x2046,	 0x0E,	's',	0	},	 /* Jump at reversal */
	{ "JF2",		0x2053,	 0x03,	'u',	0	},	 /* Skip Frequency 2 */
	{ "JF3",		0x2053,	 0x04,	'u',	0	},	 /* 3rd Skip Frequency */
	{ "JFH",		0x2053,	 0x0C,	'u',	0	},	 /* Skip.Freq.Hysteresis */
	{ "JGF",		0x2051,	 0x0C,	'u',	0	},	 /* Jog frequency */
	{ "JGT",		0x2051,	 0x0D,	'u',	0	},	 /* Jog delay */
	{ "JOG",		0x2051,	 0x0B,	'u',	en_P84_PSLIN	},	 /* JOG */
	{ "JPF",		0x2053,	 0x02,	'u',	0	},	 /* Skip Frequency */
	{ "L10D",		0x200A,	 0x0B,	'u',	0	},	 /* LI10 On Delay */
	{ "L11D",		0x200A,	 0x0C,	'u',	0	},	 /* LI11 On Delay */
	{ "L12D",		0x200A,	 0x0D,	'u',	0	},	 /* LI12 On Delay */
	{ "L13D",		0x200A,	 0x0E,	'u',	0	},	 /* LI13 On Delay */
	{ "L14D",		0x200A,	 0x0F,	'u',	0	},	 /* LI14 On Delay */
	{ "L1D",		0x200A,	 0x02,	'u',	0	},	 /* LI1 On Delay */
	{ "L2D",		0x200A,	 0x03,	'u',	0	},	 /* LI2 On Delay */
	{ "L3D",		0x200A,	 0x04,	'u',	0	},	 /* LI3 On Delay */
	{ "L4D",		0x200A,	 0x05,	'u',	0	},	 /* LI4 On Delay */
	{ "L5D",		0x200A,	 0x06,	'u',	0	},	 /* LI5 On Delay */
	{ "L6D",		0x200A,	 0x07,	'u',	0	},	 /* LI6 On Delay */
	{ "L7D",		0x200A,	 0x08,	'u',	0	},	 /* LI7 On Delay */
	{ "L8D",		0x200A,	 0x09,	'u',	0	},	 /* LI8 On Delay */
	{ "L9D",		0x200A,	 0x0A,	'u',	0	},	 /* LI9 On Delay */
	{ "LAC",		0x2000,	 0x07,	'u',	en_P84_LAC	},	 /* Access level  */	
	{ "LAF",		0x2056,	 0x02,	'u',	en_P84_PSLIN	},	 /* Stop FW limit sw. */
	{ "LAR",		0x2056,	 0x03,	'u',	en_P84_PSLIN	},	 /* Stop RV limit sw. */
	{ "LAS",		0x2056,	 0x04,	'u',	en_P84_STT	},	 /* Stop type */
	{ "LBA",		0x2071,	 0x02,	'u',	en_P84_N_Y	},	 /* Load sharing */
	{ "LBC",		0x2071,	 0x03,	'u',	0	},	 /* Load correction */
	{ "LBC1",		0x2071,	 0x04,	'u',	0	},	 /* Correction min spd */
	{ "LBC2",		0x2071,	 0x05,	'u',	0	},	 /* Correction max spd */
	{ "LBC3",		0x2071,	 0x06,	'u',	0	},	 /* Torque offset */
	{ "LBF",		0x2071,	 0x07,	'u',	0	},	 /* Sharing filter */
	{ "LC2",		0x203E,	 0x03,	'u',	en_P84_PSLIN	},	 /* Current limit 2 */
	/* History parameters*/
	{ "LCP0",		0x202A,	 0x29,	's',	0	},	 /* Motor current on last fault */
	{ "LCP1",		0x202A,	 0x2A,	's',	0	},	 /* Motor current on fault n-1 */
	{ "LCP2",		0x202A,	 0x2B,	's',	0	},	 /* Motor current on fault n-2 */
	{ "LCP3",		0x202A,	 0x2C,	's',	0	},	 /* Motor current on fault n-3 */
	{ "LCP4",		0x202A,	 0x2D,	's',	0	},	 /* Motor current on fault n-4 */
	{ "LCP5",		0x202A,	 0x2E,	's',	0	},	 /* Motor current on fault n-5 */
	{ "LCP6",		0x202A,	 0x2F,	's',	0	},	 /* Motor current on fault n-6 */
	{ "LCP7",		0x202A,	 0x30,	's',	0	},	 /* Motor current on fault n-7 */
	{ "LCP8",		0x202A,	 0x31,	's',	0	},	 /* Motor current on fault n-8 */
	/* Actual values parameters*/
	{ "LCR",		0x2002,	 0x05,	'u',	0	},	 /* Motor current */
	/* Configuration and settings*/
	{ "LCT",		0x206A,	 0x04,	'u',	0	},	 /* Mains V. time out */
	{ "LDS",		0x2042,	 0x4B,	'u',	0	},	 /* Autotune L d-axis */
	{ "LES",		0x206A,	 0x02,	'u',	en_P84_PSLIN	},	 /* Drive lock */
	{ "LET",		0x2028,	 0x5B,	'u',	en_P84_L_H	},	 /* External fault config */
	{ "LFA",		0x2042,	 0x3F,	'u',	0	},	 /* Lfw */
	{ "LFF",		0x2028,	 0x51,	'u',	0	},	 /* Fallback speed */
	{ "LFL2",		0x2028,	 0x04,	'u',	en_P84_ECFG	},	 /* AI2 4-20mA loss */
	{ "LFL3",		0x2028,	 0x0E,	'u',	en_P84_ECFG	},	 /* AI3 4-20mA loss */
	{ "LFL4",		0x2028,	 0x0F,	'u',	en_P84_ECFG	},	 /* AI4 4-20mA loss */
	{ "LFM",		0x2042,	 0x3D,	'u',	0	},	 /* Leakage inductance */
	/* Setpoint parameters*/
	{ "LFR",		0x2037,	 0x03,	's',	0	},	 /* Frequency setpoint */
	{ "LFRD",		0x6042,	 0x00,	's',	0	},	 /* Speed setpoint */
	/* Fault parameters*/
	{ "LFT",		0x2029,	 0x16,	'u',	en_P84_LFT	},	 /* Altivar fault code */
	/* Configuration and settings*/
	{ "LLC",		0x206A,	 0x03,	'u',	en_P84_CSLOUT	},	 /* Line contactor ass. */
	{ "LO1",		0x2014,	 0x0A,	'u',	en_P84_PSL	},	 /* LO1 assignment */
	{ "LO1D",		0x200C,	 0x32,	'u',	0	},	 /* LO1 delay time */
	{ "LO1H",		0x200C,	 0x1E,	'u',	0	},	 /* LO1 holding time */
	{ "LO1S",		0x200C,	 0x0A,	'u',	en_P84_NPL	},	 /* LO1 active at */
	{ "LO2",		0x2014,	 0x0B,	'u',	en_P84_PSL	},	 /* LO2 assignment */
	{ "LO2D",		0x200C,	 0x33,	'u',	0	},	 /* LO2 delay time */
	{ "LO2H",		0x200C,	 0x1F,	'u',	0	},	 /* LO2 holding time */
	{ "LO2S",		0x200C,	 0x0B,	'u',	en_P84_NPL	},	 /* LO2 active at */
	{ "LO3",		0x2014,	 0x0C,	'u',	en_P84_PSL	},	 /* LO3 assignment */
	{ "LO3D",		0x200C,	 0x34,	'u',	0	},	 /* LO3 delay time */
	{ "LO3H",		0x200C,	 0x20,	'u',	0	},	 /* LO3 holding time */
	{ "LO3S",		0x200C,	 0x0C,	'u',	en_P84_NPL	},	 /* LO3 active at */
	{ "LO4",		0x2014,	 0x0D,	'u',	en_P84_PSL	},	 /* LO4 assignment */
	{ "LO4D",		0x200C,	 0x35,	'u',	0	},	 /* LO4 delay time */
	{ "LO4H",		0x200C,	 0x21,	'u',	0	},	 /* LO4 holding time */
	{ "LO4S",		0x200C,	 0x0D,	'u',	en_P84_NPL	},	 /* LO4 active at */
	{ "LP1",		0x2046,	 0x48,	'u',	0	},	 /* Point 1 X */
	{ "LP2",		0x2046,	 0x4A,	'u',	0	},	 /* Point 2 X */
	{ "LQS",		0x2042,	 0x4C,	'u',	0	},	 /* Autotune L q-axis */
	/* Status parameters*/
	{ "LRS1",		0x2002,	 0x33,	'u',	0	},	 /* Extended status word 1 */
	{ "LRS2",		0x2002,	 0x34,	'u',	0	},	 /* Extended status word 2 */
	{ "LRS3",		0x2002,	 0x35,	'u',	0	},	 /* Extended status word 3 */
	{ "LRS4",		0x2002,	 0x36,	'u',	0	},	 /* Extended status word 4 */
	{ "LRS5",		0x2002,	 0x37,	'u',	0	},	 /* Extended status word 5 */
	{ "LRS6",		0x2002,	 0x38,	'u',	0	},	 /* Extended status word 6 */
	{ "LRS7",		0x2002,	 0x39,	'u',	0	},	 /* Extended status word 7 */
	{ "LRS8",		0x2002,	 0x3A,	'u',	0	},	 /* Extended status word 8 */
	/* Configuration and settings*/
	{ "LSP",		0x2001,	 0x06,	'u',	0	},	 /* Low speed */
	/* Setpoint parameters*/
	{ "LTR",		0x6071,	 0x00,	's',	0	},	 /* Torque setpoint */
	/* Configuration and settings*/
	{ "MA2",		0x2058,	 0x16,	'u',	en_P84_PSA	},	 /* Multiplier ref. 2 */
	{ "MA3",		0x2058,	 0x17,	'u',	en_P84_PSA	},	 /* Multiplier ref. 3 */
	/* History parameters*/
	{ "MD0",		0x202B,	 0x01,	'u',	0	},	 /* Date on last fault */
	{ "MD1",		0x202B,	 0x02,	'u',	0	},	 /* Date on fault n-1 */
	{ "MD2",		0x202B,	 0x03,	'u',	0	},	 /* Date on fault n-2 */
	{ "MD3",		0x202B,	 0x04,	'u',	0	},	 /* Date on fault n-3 */
	{ "MD4",		0x202B,	 0x05,	'u',	0	},	 /* Date on fault n-4 */
	{ "MD5",		0x202B,	 0x06,	'u',	0	},	 /* Date on fault n-5 */
	{ "MD6",		0x202B,	 0x07,	'u',	0	},	 /* Date on fault n-6 */
	{ "MD7",		0x202B,	 0x08,	'u',	0	},	 /* Date on fault n-7 */
	{ "MD8",		0x202B,	 0x09,	'u',	0	},	 /* Date on fault n-8 */
	/* Setpoint parameters*/
	{ "MFR",		0x2058,	 0x20,	'u',	0	},	 /* Multiplying coefficient */
	/* I/O parameters*/
	{ "MMF",		0x2002,	 0x14,	's',	0	},	 /* Encoder frequency */
	/* Configuration and settings*/
	{ "MMFQ",		0x2002,	 0x18,	's',	0	},	 /* MMF high resolution */
	/* Communication parameters*/
	{ "NC1",		0x2061,	 0x3E,	'u',	0	},	 /* Communication scanner, value of write word 1 */
	{ "NC2",		0x2061,	 0x3F,	'u',	0	},	 /* Communication scanner, value of write word 2 */
	{ "NC3",		0x2061,	 0x40,	'u',	0	},	 /* Communication scanner, value of write word 3 */
	{ "NC4",		0x2061,	 0x41,	'u',	0	},	 /* Communication scanner, value of write word 4 */
	{ "NC5",		0x2061,	 0x42,	'u',	0	},	 /* Communication scanner, value of write word 5 */
	{ "NC6",		0x2061,	 0x43,	'u',	0	},	 /* Communication scanner, value of write word 6 */
	{ "NC7",		0x2061,	 0x44,	'u',	0	},	 /* Communication scanner, value of write word 7 */
	{ "NC8",		0x2061,	 0x45,	'u',	0	},	 /* Communication scanner, value of write word 8 */
	/* Configuration and settings*/
	{ "NCA1",		0x2061,	 0x16,	'u',	0	},	 /* Communication scanner, address of write word 1 */
	{ "NCA2",		0x2061,	 0x17,	'u',	0	},	 /* Communication scanner, address of write word 2 */
	{ "NCA3",		0x2061,	 0x18,	'u',	0	},	 /* Communication scanner, address of write word 3 */
	{ "NCA4",		0x2061,	 0x19,	'u',	0	},	 /* Communication scanner, address of write word 4 */
	{ "NCA5",		0x2061,	 0x1A,	'u',	0	},	 /* Communication scanner, address of write word 5 */
	{ "NCA6",		0x2061,	 0x1B,	'u',	0	},	 /* Communication scanner, address of write word 6 */
	{ "NCA7",		0x2061,	 0x1C,	'u',	0	},	 /* Communication scanner, address of write word 7 */
	{ "NCA8",		0x2061,	 0x1D,	'u',	0	},	 /* Communication scanner, address of write word 8 */
	{ "NCR",		0x2042,	 0x04,	'u',	0	},	 /* Rated mot. current */
	{ "NCRS",		0x2042,	 0x47,	'u',	0	},	 /* Nominal I sync. */
	/* Identification parameters*/
	{ "NCV",		0x2000,	 0x0C,	'u',	en_P84_NCV	},	 /* Drive nominal rating */
	/* Configuration and settings*/
	{ "NLS",		0x205F,	 0x0C,	'u',	0	},	 /* Rated linear speed */
	/* Communication parameters*/
	{ "NM1",		0x2061,	 0x2A,	'u',	0	},	 /* Communication scanner, value of read word 1 */
	{ "NM2",		0x2061,	 0x2B,	'u',	0	},	 /* Communication scanner, value of read word 2 */
	{ "NM3",		0x2061,	 0x2C,	'u',	0	},	 /* Communication scanner, value of read word 3 */
	{ "NM4",		0x2061,	 0x2D,	'u',	0	},	 /* Communication scanner, value of read word 4 */
	{ "NM5",		0x2061,	 0x2E,	'u',	0	},	 /* Communication scanner, value of read word 5 */
	{ "NM6",		0x2061,	 0x2F,	'u',	0	},	 /* Communication scanner, value of read word 6 */
	{ "NM7",		0x2061,	 0x30,	'u',	0	},	 /* Communication scanner, value of read word 7 */
	{ "NM8",		0x2061,	 0x31,	'u',	0	},	 /* Communication scanner, value of read word 8 */
	/* Configuration and settings*/
	{ "NMA1",		0x2061,	 0x02,	'u',	0	},	 /* Communication scanner, address of read word 1 */
	{ "NMA2",		0x2061,	 0x03,	'u',	0	},	 /* Communication scanner, address of read word 2 */
	{ "NMA3",		0x2061,	 0x04,	'u',	0	},	 /* Communication scanner, address of read word 3 */
	{ "NMA4",		0x2061,	 0x05,	'u',	0	},	 /* Communication scanner, address of read word 4 */
	{ "NMA5",		0x2061,	 0x06,	'u',	0	},	 /* Communication scanner, address of read word 5 */
	{ "NMA6",		0x2061,	 0x07,	'u',	0	},	 /* Communication scanner, address of read word 6 */
	{ "NMA7",		0x2061,	 0x08,	'u',	0	},	 /* Communication scanner, address of read word 7 */
	{ "NMA8",		0x2061,	 0x09,	'u',	0	},	 /* Communication scanner, address of read word 8 */
	{ "NPR",		0x2042,	 0x0E,	'u',	0	},	 /* Rated motor power */
	{ "NRD",		0x2001,	 0x08,	'u',	en_P84_N_Y	},	 /* Noise reduction */
	{ "NSL",		0x2042,	 0x06,	'u',	0	},	 /* Nominal motor slip */
	{ "NSP",		0x2042,	 0x05,	'u',	0	},	 /* Rated motor speed */
	{ "NSPS",		0x2042,	 0x48,	'u',	0	},	 /* Nom motor spdsync */
	{ "NST",		0x2052,	 0x03,	'u',	en_P84_PSLIN	},	 /* Freewheel stop ass. */
	/* Controller Inside parameters*/
	{ "O01",		0x2022,	 0x02,	'u',	0	},	 /* Controller Inside HMI word 1 */
	{ "O02",		0x2022,	 0x03,	'u',	0	},	 /* Controller Inside HMI word 2 */
	{ "O03",		0x2022,	 0x04,	'u',	0	},	 /* Controller Inside HMI word 3 */
	{ "O04",		0x2022,	 0x05,	'u',	0	},	 /* Controller Inside HMI word 4 */
	{ "O05",		0x2022,	 0x06,	'u',	0	},	 /* Controller Inside HMI word 5 */
	{ "O06",		0x2022,	 0x07,	'u',	0	},	 /* Controller Inside HMI word 6 */
	{ "O07",		0x2022,	 0x08,	'u',	0	},	 /* Controller Inside HMI word 7 */
	{ "O08",		0x2022,	 0x09,	'u',	0	},	 /* Controller Inside HMI word 8 */
	{ "O09",		0x2022,	 0x0A,	'u',	0	},	 /* Controller Inside HMI word 9 */
	{ "O10",		0x2022,	 0x0B,	'u',	0	},	 /* Controller Inside HMI word 10 */
	{ "O11",		0x2022,	 0x0C,	'u',	0	},	 /* Controller Inside HMI word 11 */
	{ "O12",		0x2022,	 0x0D,	'u',	0	},	 /* Controller Inside HMI word 12 */
	{ "O13",		0x2022,	 0x0E,	'u',	0	},	 /* Controller Inside HMI word 13 */
	{ "O14",		0x2022,	 0x0F,	'u',	0	},	 /* Controller Inside HMI word 14 */
	{ "O15",		0x2022,	 0x10,	'u',	0	},	 /* Controller Inside HMI word 15 */
	{ "O16",		0x2022,	 0x11,	'u',	0	},	 /* Controller Inside HMI word 16 */
	{ "O17",		0x2022,	 0x12,	'u',	0	},	 /* Controller Inside HMI word 17 */
	{ "O18",		0x2022,	 0x13,	'u',	0	},	 /* Controller Inside HMI word 18 */
	{ "O19",		0x2022,	 0x14,	'u',	0	},	 /* Controller Inside HMI word 19 */
	{ "O20",		0x2022,	 0x15,	'u',	0	},	 /* Controller Inside HMI word 20 */
	{ "O21",		0x2022,	 0x16,	'u',	0	},	 /* Controller Inside HMI word 21 */
	{ "O22",		0x2022,	 0x17,	'u',	0	},	 /* Controller Inside HMI word 22 */
	{ "O23",		0x2022,	 0x18,	'u',	0	},	 /* Controller Inside HMI word 23 */
	{ "O24",		0x2022,	 0x19,	'u',	0	},	 /* Controller Inside HMI word 24 */
	{ "O25",		0x2022,	 0x1A,	'u',	0	},	 /* Controller Inside HMI word 25 */
	{ "O26",		0x2022,	 0x1B,	'u',	0	},	 /* Controller Inside HMI word 26 */
	{ "O27",		0x2022,	 0x1C,	'u',	0	},	 /* Controller Inside HMI word 27 */
	{ "O28",		0x2022,	 0x1D,	'u',	0	},	 /* Controller Inside HMI word 28 */
	{ "O29",		0x2022,	 0x1E,	'u',	0	},	 /* Controller Inside HMI word 29 */
	{ "O30",		0x2022,	 0x1F,	'u',	0	},	 /* Controller Inside HMI word 30 */
	{ "O31",		0x2022,	 0x20,	'u',	0	},	 /* Controller Inside HMI word 31 */
	{ "O32",		0x2022,	 0x21,	'u',	0	},	 /* Controller Inside HMI word 32 */
	{ "O33",		0x2022,	 0x22,	'u',	0	},	 /* Controller Inside HMI word 33 */
	{ "O34",		0x2022,	 0x23,	'u',	0	},	 /* Controller Inside HMI word 34 */
	{ "O35",		0x2022,	 0x24,	'u',	0	},	 /* Controller Inside HMI word 35 */
	{ "O36",		0x2022,	 0x25,	'u',	0	},	 /* Controller Inside HMI word 36 */
	{ "O37",		0x2022,	 0x26,	'u',	0	},	 /* Controller Inside HMI word 37 */
	{ "O38",		0x2022,	 0x27,	'u',	0	},	 /* Controller Inside HMI word 38 */
	{ "O39",		0x2022,	 0x28,	'u',	0	},	 /* Controller Inside HMI word 39 */
	{ "O40",		0x2022,	 0x29,	'u',	0	},	 /* Controller Inside HMI word 40 */
	{ "O41",		0x2022,	 0x2A,	'u',	0	},	 /* Controller Inside HMI word 41 */
	{ "O42",		0x2022,	 0x2B,	'u',	0	},	 /* Controller Inside HMI word 42 */
	{ "O43",		0x2022,	 0x2C,	'u',	0	},	 /* Controller Inside HMI word 43 */
	{ "O44",		0x2022,	 0x2D,	'u',	0	},	 /* Controller Inside HMI word 44 */
	{ "O45",		0x2022,	 0x2E,	'u',	0	},	 /* Controller Inside HMI word 45 */
	{ "O46",		0x2022,	 0x2F,	'u',	0	},	 /* Controller Inside HMI word 46 */
	{ "O47",		0x2022,	 0x30,	'u',	0	},	 /* Controller Inside HMI word 47 */
	{ "O48",		0x2022,	 0x31,	'u',	0	},	 /* Controller Inside HMI word 48 */
	{ "O49",		0x2022,	 0x32,	'u',	0	},	 /* Controller Inside HMI word 49 */
	{ "O50",		0x2022,	 0x33,	'u',	0	},	 /* Controller Inside HMI word 50 */
	/* Configuration and settings*/
	{ "OCC",		0x2065,	 0x05,	'u',	en_P84_CSLOUT	},	 /* Out. contactor ass. */
	{ "ODT",		0x2028,	 0x52,	'u',	0	},	 /* OutPh time detect */
	{ "OFI",		0x2001,	 0x0A,	'u',	en_P84_N_Y	},	 /* Sinus filter */
	{ "OHL",		0x2028,	 0x09,	'u',	en_P84_ECFG	},	 /* Overtemp fault mgt */
	/* I/O parameters*/
	{ "OL1R",		0x2016,	 0x0D,	'u',	0	},	 /* Logic outputs states */
	/* Configuration and settings*/
	{ "OLL",		0x2028,	 0x0A,	'u',	en_P84_ECFG	},	 /* Overload fault mgt */
	{ "OPL",		0x2042,	 0x0C,	'u',	en_P84_OPL	},	 /* Output Phase Loss */
	/* Actual values parameters*/
	{ "OPR",		0x2002,	 0x0C,	's',	0	},	 /* Motor power */
	/* Configuration and settings*/
	{ "OSP",		0x205D,	 0x06,	'u',	0	},	 /* Measurement spd */
	/* Actual values parameters*/
	{ "OTR",		0x6077,	 0x00,	's',	0	},	 /* Motor torque */
	/* Configuration and settings*/
	{ "PAH",		0x2059,	 0x3F,	'u',	0	},	 /* Max fbk alarm */
	/* I/O parameters*/
	{ "PAI1",		0x2027,	 0x2B,	'u',	0	},	 /* Controller analog input 1 physical value */
	{ "PAI2",		0x2027,	 0x2C,	'u',	0	},	 /* Controller analog input 2 physical value */
	/* Configuration and settings*/
	{ "PAL",		0x2059,	 0x3E,	'u',	0	},	 /* Min fbk alarm */
	/* Identification parameters*/
	{ "PAN0",		0x2003,	 0x29,	'u',	0	},	 /* Device name (char 1 and 2) */
	{ "PAN1",		0x2003,	 0x2A,	'u',	0	},	 /* Device name (char 3 and 4) */
	{ "PAN2",		0x2003,	 0x2B,	'u',	0	},	 /* Device name (char 5 and 6) */
	{ "PAN3",		0x2003,	 0x2C,	'u',	0	},	 /* Device name (char 7 and 8) */
	{ "PAN4",		0x2003,	 0x2D,	'u',	0	},	 /* Device name (char 9 and 10) */
	{ "PAN5",		0x2003,	 0x2E,	'u',	0	},	 /* Device name (char 11 and 12) */
	{ "PAN6",		0x2003,	 0x2F,	'u',	0	},	 /* Device name (char 13 and 14) */
	{ "PAN7",		0x2003,	 0x30,	'u',	0	},	 /* Device name (char 15 and 16) */
	/* I/O parameters*/
	{ "PAO1",		0x2027,	 0x48,	'u',	0	},	 /* Controller analog output 1 physical value */
	{ "PAO2",		0x2027,	 0x49,	'u',	0	},	 /* Controller analog output 2 physical value */
	/* Configuration and settings*/
	{ "PAS",		0x205F,	 0x07,	'u',	en_P84_STT	},	 /* Stop type */
	{ "PAU",		0x2059,	 0x47,	'u',	en_P84_PSLIN	},	 /* Auto/Manual assign. */
	/* Identification parameters*/
	{ "PAV1",		0x2027,	 0x52,	'u',	0	},	 /* Controller name (char 1 and 2) */
	{ "PAV2",		0x2027,	 0x53,	'u',	0	},	 /* Controller name (char 3 and 4) */
	{ "PAV3",		0x2027,	 0x54,	'u',	0	},	 /* Controller name (char 5 and 6) */
	{ "PAV4",		0x2027,	 0x55,	'u',	0	},	 /* Controller name (char 7 and 8) */
	{ "PAV5",		0x2027,	 0x56,	'u',	0	},	 /* Controller name (char 9 and 10) */
	{ "PAV6",		0x2027,	 0x57,	'u',	0	},	 /* Controller name (char 11 and 12) */
	{ "PAV7",		0x2027,	 0x58,	'u',	0	},	 /* Controller name (char 13 and 14) */
	{ "PAV8",		0x2027,	 0x59,	'u',	0	},	 /* Controller name (char 15 and 16) */
	/* Configuration and settings*/
	{ "PDI",		0x201A,	 0x0B,	'u',	0	},	 /* Encoder counter divisor */
	{ "PER",		0x2059,	 0x40,	'u',	0	},	 /* PID error Alarm */
	{ "PES",		0x2046,	 0x47,	'u',	en_P84_PSA	},	 /* Weight sensor ass. */
	{ "PFI",		0x2067,	 0x05,	'u',	0	},	 /* RP filter */
	{ "PFR",		0x2067,	 0x04,	'u',	0	},	 /* RP max value */
	{ "PGA",		0x2067,	 0x02,	'u',	en_P84_PGA	},	 /* Reference type */
	{ "PGI",		0x201A,	 0x05,	'u',	0	},	 /* Encoder resolution */
	{ "PHR",		0x2068,	 0x02,	'u',	en_P84_PHR	},	 /* Output Ph rotation */
	{ "PHS",		0x2042,	 0x4A,	'u',	0	},	 /* Syn. EMF constant */
	{ "PIC",		0x2059,	 0x29,	'u',	en_P84_N_Y	},	 /* PID correct. reverse */
	{ "PIF",		0x2059,	 0x02,	'u',	en_P84_PSA	},	 /* PID feedback ass. */
	{ "PIF1",		0x2059,	 0x05,	'u',	0	},	 /* Min PID feedback */
	{ "PIF2",		0x2059,	 0x06,	'u',	0	},	 /* Max PID feedback */
	{ "PII",		0x2059,	 0x09,	'u',	en_P84_N_Y	},	 /* Act. internal PID ref. */
	{ "PIL",		0x2067,	 0x03,	's',	0	},	 /* RP min value */
	/* I/O parameters*/
	{ "PIL1",		0x2027,	 0x02,	'u',	0	},	 /* Controller logic inputs states */
	/* Configuration and settings*/
	{ "PIM",		0x2059,	 0x37,	'u',	en_P84_PSA	},	 /* Manual reference */
	{ "PIP1",		0x2059,	 0x07,	'u',	0	},	 /* Min PID reference */
	{ "PIP2",		0x2059,	 0x08,	'u',	0	},	 /* Max PID reference */
	{ "PIS",		0x2059,	 0x2D,	'u',	en_P84_PSLIN	},	 /* PID integral reset */
	/* Setpoint parameters*/
	{ "PISP",		0x2037,	 0x04,	'u',	0	},	 /* PID regulator setpoint */
	/* Configuration and settings*/
	{ "POH",		0x2059,	 0x36,	's',	0	},	 /* Max PID output */
	{ "POL",		0x2059,	 0x35,	's',	0	},	 /* Min PID output */
	/* I/O parameters*/
	{ "POL1",		0x2027,	 0x0C,	'u',	0	},	 /* Controller logic outputs states */
	/* Configuration and settings*/
	{ "PPI",		0x206E,	 0x02,	'u',	0	},	 /* Pairing password */
	{ "PPN",		0x2042,	 0x13,	'u',	0	},	 /* Number of pairs of poles calculated */
	{ "PPNS",		0x2042,	 0x49,	'u',	0	},	 /* Pole pairs */
	{ "PR2",		0x2059,	 0x0A,	'u',	en_P84_PSLIN	},	 /* 2 preset PID ref. */
	{ "PR4",		0x2059,	 0x0B,	'u',	en_P84_PSLIN	},	 /* 4 preset PID ref. */
	{ "PRC",		0x2024,	 0x07,	'u',	en_P84_N_Y	},	 /* Peer Cop node */
	{ "PRO",		0x2024,	 0x03,	'u',	0	},	 /* Protocol */
	{ "PRP",		0x2059,	 0x55,	'u',	0	},	 /* PID ramp */
	{ "PS16",		0x2054,	 0x05,	'u',	en_P84_PSLIN	},	 /* 16 preset speeds */
	{ "PS2",		0x2054,	 0x02,	'u',	en_P84_PSLIN	},	 /* 2 preset speeds */
	{ "PS4",		0x2054,	 0x03,	'u',	en_P84_PSLIN	},	 /* 4 preset speeds */
	{ "PS8",		0x2054,	 0x04,	'u',	en_P84_PSLIN	},	 /* 8 preset speeds */
	{ "PSR",		0x2059,	 0x34,	'u',	0	},	 /* Speed input % */
	{ "PTC1",		0x2066,	 0x02,	'u',	en_P84_PTCX	},	 /* PTC1 probe */
	{ "PTC2",		0x2066,	 0x03,	'u',	en_P84_PTCX	},	 /* PTC2 probe */
	{ "PTCL",		0x2066,	 0x04,	'u',	en_P84_PTCX	},	 /* LI6 = PTC probe */
	/* Measurement parameters*/
	{ "PTH",		0x2002,	 0x22,	'u',	0	},	 /* Total drive operating time */
	/* I/O parameters*/
	{ "PUC",		0x201A,	 0x0C,	'u',	0	},	 /* Encoder counter value */
	/* Configuration and settings*/
	{ "QSH",		0x205C,	 0x05,	'u',	0	},	 /* Quick step High */
	{ "QSL",		0x205C,	 0x06,	'u',	0	},	 /* Quick step Low */
	/* CiA 402 settings*/
	{ "QSTD",		0x605A,	 0x00,	'u',	en_P84_QSTD	},	 /* Quick stop option code */
	/* Configuration and settings*/
	{ "R1",		0x2014,	 0x02,	'u',	en_P84_PSL	},	 /* R1 Assignment */
	{ "R1D",		0x200C,	 0x2A,	'u',	0	},	 /* R1 Delay time */
	{ "R1H",		0x200C,	 0x16,	'u',	0	},	 /* R1 Holding time */
	{ "R1S",		0x200C,	 0x02,	'u',	en_P84_NPL	},	 /* R1 Active at */
	{ "R2",		0x2014,	 0x03,	'u',	en_P84_PSL	},	 /* R2 Assignment */
	{ "R2D",		0x200C,	 0x2B,	'u',	0	},	 /* R2 Delay time */
	{ "R2H",		0x200C,	 0x17,	'u',	0	},	 /* R2 Holding time */
	{ "R2S",		0x200C,	 0x03,	'u',	en_P84_NPL	},	 /* R2 Active at */
	{ "R3",		0x2014,	 0x04,	'u',	en_P84_PSL	},	 /* R3 Assignment */
	{ "R3D",		0x200C,	 0x2C,	'u',	0	},	 /* R3 Delay time */
	{ "R3H",		0x200C,	 0x18,	'u',	0	},	 /* R3 Holding time */
	{ "R3S",		0x200C,	 0x04,	'u',	en_P84_NPL	},	 /* R3 Active at */
	{ "R4",		0x2014,	 0x05,	'u',	en_P84_PSL	},	 /* R4 Assignment */
	{ "R4D",		0x200C,	 0x2D,	'u',	0	},	 /* R4 Delay time */
	{ "R4H",		0x200C,	 0x19,	'u',	0	},	 /* R4 Holding time */
	{ "R4S",		0x200C,	 0x05,	'u',	en_P84_NPL	},	 /* R4 Active at */
	{ "RAP",		0x205B,	 0x06,	'u',	0	},	 /* Reduction ratio */
	{ "RCA",		0x2065,	 0x04,	'u',	en_P84_PSLIN	},	 /* Output contact. fdbk */
	{ "RCB",		0x2036,	 0x0D,	'u',	en_P84_PSLIN	},	 /* Ref 1B switching */
	{ "RDG",		0x2059,	 0x2C,	'u',	0	},	 /* PID derivative gain */
	{ "REG",		0x2024,	 0x0A,	'u',	0	},	 /* Number of registers */
	{ "RFC",		0x2036,	 0x0C,	'u',	en_P84_PSLIN	},	 /* Ref. 2 switching */
	/* History parameters*/
	{ "RFP0",		0x202A,	 0x33,	's',	0	},	 /* Output frequency on last fault */
	{ "RFP1",		0x202A,	 0x34,	's',	0	},	 /* Output frequency on fault n-1 */
	{ "RFP2",		0x202A,	 0x35,	's',	0	},	 /* Output frequency on fault n-2 */
	{ "RFP3",		0x202A,	 0x36,	's',	0	},	 /* Output frequency on fault n-3 */
	{ "RFP4",		0x202A,	 0x37,	's',	0	},	 /* Output frequency on fault n-4 */
	{ "RFP5",		0x202A,	 0x38,	's',	0	},	 /* Output frequency on fault n-5 */
	{ "RFP6",		0x202A,	 0x39,	's',	0	},	 /* Output frequency on fault n-6 */
	{ "RFP7",		0x202A,	 0x3A,	's',	0	},	 /* Output frequency on fault n-7 */
	{ "RFP8",		0x202A,	 0x3B,	's',	0	},	 /* Output frequency on fault n-8 */
	/* Actual values parameters*/
	{ "RFR",		0x2002,	 0x03,	's',	0	},	 /* Output frequency */
	{ "RFRD",		0x6044,	 0x00,	's',	0	},	 /* Output velocity */
	/* Configuration and settings*/
	{ "RFT",		0x206C,	 0x20,	'u',	en_P84_PSLIN	},	 /* Evacuation assign. */
	{ "RIG",		0x2059,	 0x2B,	'u',	0	},	 /* PID integral gain */
	{ "RIN",		0x2001,	 0x09,	'u',	en_P84_N_Y	},	 /* RV Inhibition */
	{ "RP",		0x2029,	 0x1D,	'u',	en_P84_N_Y	},	 /* Product reset */
	{ "RP2",		0x2059,	 0x16,	'u',	0	},	 /* Preset ref. PID 2 */
	{ "RP3",		0x2059,	 0x17,	'u',	0	},	 /* Preset ref. PID 3 */
	{ "RP4",		0x2059,	 0x18,	'u',	0	},	 /* Preset ref. PID 4 */
	{ "RPA",		0x2029,	 0x1E,	'u',	en_P84_PSLIN	},	 /* Product reset assig. */
	/* Reference parameters*/
	{ "RPC",		0x2059,	 0x53,	'u',	0	},	 /* PID reference after ramp */
	{ "RPE",		0x2059,	 0x51,	's',	0	},	 /* PID regulator discrepancy */
	{ "RPF",		0x2059,	 0x52,	'u',	0	},	 /* PID regulator feedback reference */
	/* Configuration and settings*/
	{ "RPG",		0x2059,	 0x2A,	'u',	0	},	 /* PID prop. gain */
	{ "RPI",		0x2059,	 0x15,	'u',	0	},	 /* Internal PID ref. */
	/* Reference parameters*/
	{ "RPO",		0x2059,	 0x54,	's',	0	},	 /* PID regulator limit output reference */
	/* Control parameters*/
	{ "RPR",		0x2001,	 0x15,	'u',	en_P84_RPR	},	 /* Reset counters command */
	/* Configuration and settings*/
	{ "RPS",		0x203C,	 0x0B,	'u',	en_P84_PSLIN	},	 /* Ramp switch assignment */
	{ "RPT",		0x203C,	 0x05,	'u',	en_P84_RPT	},	 /* Ramp type */
	{ "RRS",		0x2051,	 0x06,	'u',	en_P84_PSLIN	},	 /* Reverse assign. */
	{ "RSA",		0x2042,	 0x2B,	'u',	0	},	 /* Cust stator resist. */
	{ "RSAS",		0x2042,	 0x53,	'u',	0	},	 /* Cust. stator R syn */
	{ "RSD",		0x205D,	 0x16,	'u',	en_P84_RSD	},	 /* Rope slack config. */
	{ "RSF",		0x2029,	 0x19,	'u',	en_P84_PSLIN	},	 /* Fault reset */
	{ "RSL",		0x2059,	 0x3D,	'u',	0	},	 /* PID wake up thresh. */
	{ "RSM",		0x2042,	 0x29,	'u',	0	},	 /* Stator R measured */
	{ "RSMS",		0x2042,	 0x51,	'u',	0	},	 /* Cold state stator resistance */
	{ "RSP",		0x206C,	 0x22,	'u',	0	},	 /* Evacuation freq. */
	{ "RSTL",		0x205D,	 0x17,	'u',	0	},	 /* Rope slack trq level */
	{ "RSU",		0x206C,	 0x21,	'u',	0	},	 /* Evacuation Input V. */
	/* Measurement parameters*/
	{ "RTH",		0x2002,	 0x20,	'u',	0	},	 /* Total motor operating time */
	/* Configuration and settings*/
	{ "RTO",		0x203E,	 0x1E,	'u',	0	},	 /* Torque ctrl time out */
	/* History parameters*/
	{ "RTP0",		0x202A,	 0x3D,	'u',	0	},	 /* Motor operating time on last fault */
	{ "RTP1",		0x202A,	 0x3E,	'u',	0	},	 /* Motor operating time on fault n-1 */
	{ "RTP2",		0x202A,	 0x3F,	'u',	0	},	 /* Motor operating time on fault n-2 */
	{ "RTP3",		0x202A,	 0x40,	'u',	0	},	 /* Motor operating time on fault n-3 */
	{ "RTP4",		0x202A,	 0x41,	'u',	0	},	 /* Motor operating time on fault n-4 */
	{ "RTP5",		0x202A,	 0x42,	'u',	0	},	 /* Motor operating time on fault n-5 */
	{ "RTP6",		0x202A,	 0x43,	'u',	0	},	 /* Motor operating time on fault n-6 */
	{ "RTP7",		0x202A,	 0x44,	'u',	0	},	 /* Motor operating time on fault n-7 */
	{ "RTP8",		0x202A,	 0x45,	'u',	0	},	 /* Motor operating time on fault n-8 */
	/* Configuration and settings*/
	{ "RTR",		0x205C,	 0x0B,	'u',	en_P84_PSLIN	},	 /* Init. traverse ctrl */
	/* Parameter set switching*/
	{ "S101",		0x2063,	 0x20,	'u',	0	},	 /* Parameter set 1 value 1 */
	{ "S102",		0x2063,	 0x21,	'u',	0	},	 /* Parameter set 1 value 2 */
	{ "S103",		0x2063,	 0x22,	'u',	0	},	 /* Parameter set 1 value 3 */
	{ "S104",		0x2063,	 0x23,	'u',	0	},	 /* Parameter set 1 value 4 */
	{ "S105",		0x2063,	 0x24,	'u',	0	},	 /* Parameter set 1 value 5 */
	{ "S106",		0x2063,	 0x25,	'u',	0	},	 /* Parameter set 1 value 6 */
	{ "S107",		0x2063,	 0x26,	'u',	0	},	 /* Parameter set 1 value 7 */
	{ "S108",		0x2063,	 0x27,	'u',	0	},	 /* Parameter set 1 value 8 */
	{ "S109",		0x2063,	 0x28,	'u',	0	},	 /* Parameter set 1 value 9 */
	{ "S110",		0x2063,	 0x29,	'u',	0	},	 /* Parameter set 1 value 10 */
	{ "S111",		0x2063,	 0x2A,	'u',	0	},	 /* Parameter set 1 value 11 */
	{ "S112",		0x2063,	 0x2B,	'u',	0	},	 /* Parameter set 1 value 12 */
	{ "S113",		0x2063,	 0x2C,	'u',	0	},	 /* Parameter set 1 value 13 */
	{ "S114",		0x2063,	 0x2D,	'u',	0	},	 /* Parameter set 1 value 14 */
	{ "S115",		0x2063,	 0x2E,	'u',	0	},	 /* Parameter set 1 value 15 */
	{ "S201",		0x2063,	 0x34,	'u',	0	},	 /* Parameter set 2 value 1 */
	{ "S202",		0x2063,	 0x35,	'u',	0	},	 /* Parameter set 2 value 2 */
	{ "S203",		0x2063,	 0x36,	'u',	0	},	 /* Parameter set 2 value 3 */
	{ "S204",		0x2063,	 0x37,	'u',	0	},	 /* Parameter set 2 value 4 */
	{ "S205",		0x2063,	 0x38,	'u',	0	},	 /* Parameter set 2 value 5 */
	{ "S206",		0x2063,	 0x39,	'u',	0	},	 /* Parameter set 2 value 6 */
	{ "S207",		0x2063,	 0x3A,	'u',	0	},	 /* Parameter set 2 value 7 */
	{ "S208",		0x2063,	 0x3B,	'u',	0	},	 /* Parameter set 2 value 8 */
	{ "S209",		0x2063,	 0x3C,	'u',	0	},	 /* Parameter set 2 value 9 */
	{ "S210",		0x2063,	 0x3D,	'u',	0	},	 /* Parameter set 2 value 10 */
	{ "S211",		0x2063,	 0x3E,	'u',	0	},	 /* Parameter set 2 value 11 */
	{ "S212",		0x2063,	 0x3F,	'u',	0	},	 /* Parameter set 2 value 12 */
	{ "S213",		0x2063,	 0x40,	'u',	0	},	 /* Parameter set 2 value 13 */
	{ "S214",		0x2063,	 0x41,	'u',	0	},	 /* Parameter set 2 value 14 */
	{ "S215",		0x2063,	 0x42,	'u',	0	},	 /* Parameter set 2 value 15 */
	{ "S301",		0x2063,	 0x48,	'u',	0	},	 /* Parameter set 3 value 1 */
	{ "S302",		0x2063,	 0x49,	'u',	0	},	 /* Parameter set 3 value 2 */
	{ "S303",		0x2063,	 0x4A,	'u',	0	},	 /* Parameter set 3 value 3 */
	{ "S304",		0x2063,	 0x4B,	'u',	0	},	 /* Parameter set 3 value 4 */
	{ "S305",		0x2063,	 0x4C,	'u',	0	},	 /* Parameter set 3 value 5 */
	{ "S306",		0x2063,	 0x4D,	'u',	0	},	 /* Parameter set 3 value 6 */
	{ "S307",		0x2063,	 0x4E,	'u',	0	},	 /* Parameter set 3 value 7 */
	{ "S308",		0x2063,	 0x4F,	'u',	0	},	 /* Parameter set 3 value 8 */
	{ "S309",		0x2063,	 0x50,	'u',	0	},	 /* Parameter set 3 value 9 */
	{ "S310",		0x2063,	 0x51,	'u',	0	},	 /* Parameter set 3 value 10 */
	{ "S311",		0x2063,	 0x52,	'u',	0	},	 /* Parameter set 3 value 11 */
	{ "S312",		0x2063,	 0x53,	'u',	0	},	 /* Parameter set 3 value 12 */
	{ "S313",		0x2063,	 0x54,	'u',	0	},	 /* Parameter set 3 value 13 */
	{ "S314",		0x2063,	 0x55,	'u',	0	},	 /* Parameter set 3 value 14 */
	{ "S315",		0x2063,	 0x56,	'u',	0	},	 /* Parameter set 3 value 15 */
	/* Configuration and settings*/
	{ "SA2",		0x2058,	 0x02,	'u',	en_P84_PSA	},	 /* Summing ref. 2 */
	{ "SA3",		0x2058,	 0x03,	'u',	en_P84_PSA	},	 /* Summing ref. 3 */
	{ "SAF",		0x205F,	 0x02,	'u',	en_P84_PSLIN	},	 /* Stop FW limit sw. */
	{ "SAI1",		0x2016,	 0x5C,	's',	0	},	 /* AI1 physical value without filter */
	{ "SAI2",		0x2016,	 0x5D,	's',	0	},	 /* AI2 physical value without filter */
	{ "SAI3",		0x2016,	 0x5E,	's',	0	},	 /* AI3 physical value without filter */
	{ "SAI4",		0x2016,	 0x5F,	's',	0	},	 /* AI4 physical value without filter */
	{ "SAL",		0x205F,	 0x09,	'u',	en_P84_L_H	},	 /* Stop limit config. */
	{ "SAO1",		0x2016,	 0x60,	's',	0	},	 /* AO1 physical image without filter */
	{ "SAO2",		0x2016,	 0x61,	's',	0	},	 /* AO2 physical image without filter */
	{ "SAO3",		0x2016,	 0x62,	's',	0	},	 /* AO3 physical image without filter */
	{ "SAR",		0x205F,	 0x03,	'u',	en_P84_PSLIN	},	 /* Stop RV  limit sw. */
	{ "SAT",		0x2050,	 0x16,	'u',	en_P84_N_Y	},	 /* Thermal alarm stop */
	{ "SCL",		0x205D,	 0x07,	'u',	0	},	 /* I Limit. frequency */
	/* Configuration management*/
	{ "SCS",		0x2032,	 0x02,	'u',	en_P84_SCS	},	 /* Save configuration */
	/* Configuration and settings*/
	{ "SDC1",		0x204A,	 0x04,	'u',	0	},	 /* Auto DC inj. level 1 */
	{ "SDC2",		0x204A,	 0x06,	'u',	0	},	 /* Auto DC inj. level 2 */
	{ "SDD",		0x2028,	 0x06,	'u',	en_P84_N_Y	},	 /* Load slip detection */
	{ "SFC",		0x203D,	 0x06,	'u',	0	},	 /* K speed loop filter */
	{ "SFD",		0x205F,	 0x17,	'u',	0	},	 /* Stop corrector */
	{ "SFR",		0x2001,	 0x03,	'u',	0	},	 /* Switching freq. */
	{ "SIT",		0x203D,	 0x05,	'u',	0	},	 /* Speed time integral */
	{ "SLCR",		0x2002,	 0x19,	'u',	0	},	 /* LCR without filter */
	{ "SLL",		0x2028,	 0x0B,	'u',	en_P84_ECFG	},	 /* Modbus fault mgt */
	{ "SLP",		0x2042,	 0x1A,	'u',	0	},	 /* Slip compensation */
	/* CiA 402 settings*/
	{ "SMAL",		0x6046,	 0x02,	'u',	0	},	 /* Velocity min amount */
	{ "SMIL",		0x6046,	 0x01,	'u',	0	},	 /* Velocity max amount */
	/* Configuration and settings*/
	{ "SMMF",		0x2002,	 0x1D,	's',	0	},	 /* MMF without filter */
	{ "SNC",		0x205C,	 0x0D,	'u',	en_P84_PSLIN	},	 /* Counter wobble */
	{ "SOP",		0x2060,	 0x03,	'u',	en_P84_SOP	},	 /* Volt surge limit. opt */
	{ "SOPR",		0x2002,	 0x5B,	's',	0	},	 /* OPR without filter */
	{ "SOTR",		0x2002,	 0x1B,	's',	0	},	 /* OTR without filter */
	{ "SP10",		0x2054,	 0x13,	'u',	0	},	 /* Preset speed 10 */
	{ "SP11",		0x2054,	 0x14,	'u',	0	},	 /* Preset speed 11 */
	{ "SP12",		0x2054,	 0x15,	'u',	0	},	 /* Preset speed 12 */
	{ "SP13",		0x2054,	 0x16,	'u',	0	},	 /* Preset speed 13 */
	{ "SP14",		0x2054,	 0x17,	'u',	0	},	 /* Preset speed 14 */
	{ "SP15",		0x2054,	 0x18,	'u',	0	},	 /* Preset speed 15 */
	{ "SP16",		0x2054,	 0x19,	'u',	0	},	 /* Preset speed 16 */
	{ "SP2",		0x2054,	 0x0B,	'u',	0	},	 /* Preset speed 2 */
	{ "SP3",		0x2054,	 0x0C,	'u',	0	},	 /* Preset speed 3 */
	{ "SP4",		0x2054,	 0x0D,	'u',	0	},	 /* Preset speed 4 */
	{ "SP5",		0x2054,	 0x0E,	'u',	0	},	 /* Preset speed 5 */
	{ "SP6",		0x2054,	 0x0F,	'u',	0	},	 /* Preset speed 6 */
	{ "SP7",		0x2054,	 0x10,	'u',	0	},	 /* Preset speed 7 */
	{ "SP8",		0x2054,	 0x11,	'u',	0	},	 /* Preset speed 8 */
	{ "SP9",		0x2054,	 0x12,	'u',	0	},	 /* Preset speed 9 */
	/* CiA 402 settings*/
	{ "SPAL",		0x6048,	 0x01,	'u',	0	},	 /* Acceleration delta speed */
	{ "SPAT",		0x6048,	 0x02,	'u',	0	},	 /* Acceleration delta time */
	{ "SPDL",		0x6049,	 0x01,	'u',	0	},	 /* Deceleration delta speed */
	{ "SPDT",		0x6049,	 0x02,	'u',	0	},	 /* Deceleration delta time */
	{ "SPFD",		0x604B,	 0x02,	'u',	0	},	 /* Setpoint factor denominator */
	{ "SPFN",		0x604B,	 0x01,	'u',	0	},	 /* Setpoint factor numerator */
	/* Configuration and settings*/
	{ "SPG",		0x203D,	 0x04,	'u',	0	},	 /* Speed prop. gain */
	{ "SPM",		0x2036,	 0x5C,	'u',	en_P84_PSLIN	},	 /* Ref. memo ass. */
	{ "SPT",		0x203E,	 0x1F,	'u',	0	},	 /* Spin time */
	{ "SRFR",		0x2002,	 0x1A,	's',	0	},	 /* RFR without filter */
	{ "SRP",		0x2055,	 0x06,	'u',	0	},	 /* +/-Speed limitation */
	{ "SSB",		0x203E,	 0x29,	'u',	en_P84_ECFG	},	 /* Trq/I limit. stop */
	{ "STD",		0x205F,	 0x16,	'u',	0	},	 /* Stop distance */
	{ "STM",		0x206C,	 0x0F,	'u',	0	},	 /* Max stop time */
	{ "STO",		0x203E,	 0x2A,	'u',	0	},	 /* Trq/I limit. time out */
	{ "STP",		0x2028,	 0x05,	'u',	en_P84_STP	},	 /* UnderV. prevention */
	{ "STR",		0x2055,	 0x04,	'u',	en_P84_STR	},	 /* Reference saved */
	{ "STRT",		0x2001,	 0x0D,	'u',	en_P84_N_Y	},	 /* IGBT test */
	{ "STT",		0x2052,	 0x02,	'u',	en_P84_STT	},	 /* Type of stop */
	{ "SULN",		0x2002,	 0x1E,	'u',	0	},	 /* ULN without filter */
	{ "SVL",		0x2060,	 0x02,	'u',	en_P84_N_Y	},	 /* Motor surge limit. */
	{ "TA1",		0x203C,	 0x06,	'u',	0	},	 /* Begin Acc round */
	{ "TA2",		0x203C,	 0x07,	'u',	0	},	 /* End Acc round */
	{ "TA3",		0x203C,	 0x08,	'u',	0	},	 /* Begin Dec round */
	{ "TA4",		0x203C,	 0x09,	'u',	0	},	 /* End Dec round */
	{ "TAA",		0x203E,	 0x0F,	'u',	en_P84_PSA	},	 /* Torque ref. assign. */
	/* Measurement parameters*/
	{ "TAC",		0x2002,	 0x24,	'u',	0	},	 /* IGBT alarm time */
	/* Configuration and settings*/
	{ "TAR",		0x2029,	 0x18,	'u',	en_P84_DUR	},	 /* Max. restart time */
	{ "TBE",		0x2046,	 0x0B,	'u',	0	},	 /* Brake engage delay */
	{ "TBO",		0x205C,	 0x09,	'u',	0	},	 /* Reel time */
	{ "TBR",		0x201E,	 0x04,	'u',	en_P84_TBR	},	 /* Modbus baud rate */
	{ "TBR2",		0x201E,	 0x18,	'u',	en_P84_TBR	},	 /* HMI baud rate */
	{ "TBS",		0x206C,	 0x0D,	'u',	0	},	 /* DC bus maintain tm */
	{ "TCC",		0x2051,	 0x02,	'u',	en_P84_TCC	},	 /* 2/3 wire control */
	{ "TCT",		0x2051,	 0x03,	'u',	en_P84_TCT	},	 /* 2 wire type */
	{ "TDC",		0x2052,	 0x0C,	'u',	0	},	 /* DC injection time 2 */
	{ "TDC1",		0x204A,	 0x03,	'u',	0	},	 /* Auto DC inj. time 1 */
	{ "TDC2",		0x204A,	 0x05,	'u',	0	},	 /* Auto DC inj. time 2 */
	{ "TDI",		0x2052,	 0x0E,	'u',	0	},	 /* DC injection time 1 */
	{ "TDN",		0x205C,	 0x08,	'u',	0	},	 /* Traverse ctrl. decel */
	{ "TDS",		0x2074,	 0x06,	'u',	0	},	 /* Pulse overspd delay */
	{ "TFO",		0x201E,	 0x05,	'u',	en_P84_FOR	},	 /* Modbus format */
	{ "TFO2",		0x201E,	 0x19,	'u',	en_P84_FOR	},	 /* HMI format */
	{ "TFR",		0x2001,	 0x04,	'u',	0	},	 /* Max frequency */
	{ "THA",		0x2050,	 0x0A,	'u',	0	},	 /* Drv therm. state al */
	/* Measurement parameters*/
	{ "THB",		0x206F,	 0x0F,	'u',	0	},	 /* Resistor thermal state */
	{ "THD",		0x2002,	 0x0A,	'u',	0	},	 /* Drive thermal state */
	/* History parameters*/
	{ "THP0",		0x202A,	 0x51,	'u',	0	},	 /* Motor thermal state on last fault */
	{ "THP1",		0x202A,	 0x52,	'u',	0	},	 /* Motor thermal state on fault n-1 */
	{ "THP2",		0x202A,	 0x53,	'u',	0	},	 /* Motor thermal state on fault n-2 */
	{ "THP3",		0x202A,	 0x54,	'u',	0	},	 /* Motor thermal state on fault n-3 */
	{ "THP4",		0x202A,	 0x55,	'u',	0	},	 /* Motor thermal state on fault n-4 */
	{ "THP5",		0x202A,	 0x56,	'u',	0	},	 /* Motor thermal state on fault n-5 */
	{ "THP6",		0x202A,	 0x57,	'u',	0	},	 /* Motor thermal state on fault n-6 */
	{ "THP7",		0x202A,	 0x58,	'u',	0	},	 /* Motor thermal state on fault n-7 */
	{ "THP8",		0x202A,	 0x59,	'u',	0	},	 /* Motor thermal state on fault n-8 */
	/* Measurement parameters*/
	{ "THR",		0x2042,	 0x1F,	'u',	0	},	 /* Motor thermal state */
	/* Configuration and settings*/
	{ "THT",		0x2042,	 0x0D,	'u',	en_P84_THT	},	 /* Motor protect. type */
	/* Measurement parameters*/
	{ "TIME",		0x202B,	 0x5D,	'u',	0	},	 /* Time */
	/* Configuration and settings*/
	{ "TLA",		0x203E,	 0xB,	'u',	en_P84_PSLIN	},	 /* Torque limit. activ. */
	{ "TLC",		0x203E,	 0x0E,	'u',	en_P84_PSLIN	},	 /* Analog limit. act. */
	{ "TLD",		0x205D,	 0x0D,	's',	0	},	 /* Dynamic load time */
	{ "TLIG",		0x203E,	 0x0D,	'u',	0	},	 /* Gen. torque lim */
	{ "TLIM",		0x203E,	 0x0C,	'u',	0	},	 /* Motoring torque lim */
	{ "TLP",		0x2024,	 0x06,	'u',	0	},	 /* Network time out */
	{ "TLS",		0x2057,	 0x02,	'u',	0	},	 /* Low speed time out */
	{ "TNL",		0x2028,	 0x0D,	'u',	en_P84_ECFG	},	 /* Autotune fault mgt */
	{ "TOB",		0x203E,	 0x1D,	'u',	en_P84_TOB	},	 /* Torq. ctrl fault mgt */
	{ "TOS",		0x205D,	 0x08,	'u',	0	},	 /* Load measuring tm. */
	{ "TQB",		0x2074,	 0x09,	'u',	0	},	 /* Pulse wo Run delay */
	{ "TR1",		0x203E,	 0x16,	'u',	en_P84_PSA	},	 /* Torque ref. channel */
	{ "TRA",		0x2042,	 0x44,	'u',	0	},	 /* Rotor time constant */
	{ "TRC",		0x205C,	 0x02,	'u',	en_P84_PSLIN	},	 /* Yarn control */
	{ "TRH",		0x205C,	 0x03,	'u',	0	},	 /* Traverse frequency high */
	{ "TRL",		0x205C,	 0x04,	'u',	0	},	 /* Traverse frequency low */
	{ "TRM",		0x2042,	 0x42,	'u',	0	},	 /* Rotor time constant */
	{ "TRP",		0x203E,	 0x1B,	'u',	0	},	 /* Torque ramp time */
	/* Reference parameters*/
	{ "TRR",		0x203E,	 0x20,	's',	0	},	 /* Torque reference before ramp */
	/* Configuration and settings*/
	{ "TRT",		0x203E,	 0x1A,	'u',	0	},	 /* Torque ratio */
	{ "TSD",		0x203E,	 0x17,	'u',	en_P84_PSLIN	},	 /* Torque ref. sign */
	{ "TSM",		0x206C,	 0x0E,	'u',	0	},	 /* UnderV. restart tm */
	{ "TSS",		0x203E,	 0x15,	'u',	en_P84_PSLIN	},	 /* Trq/spd switching */
	{ "TST",		0x203E,	 0x1C,	'u',	en_P84_TST	},	 /* Torque control stop */
	{ "TSY",		0x205C,	 0x0F,	'u',	en_P84_CSLOUT	},	 /* Sync. wobble */
	{ "TTD",		0x2050,	 0x03,	'u',	0	},	 /* Motor therm. level */
	{ "TTD2",		0x2050,	 0x07,	'u',	0	},	 /* Motor2 therm. level */
	{ "TTD3",		0x2050,	 0x08,	'u',	0	},	 /* Motor3 therm. level */
	{ "TTH",		0x2050,	 0x11,	's',	0	},	 /* High torque thd. */
	{ "TTL",		0x2050,	 0x10,	's',	0	},	 /* Low torque thd. */
	{ "TTO",		0x201E,	 0x06,	'u',	0	},	 /* Modbus time out */
	{ "TTR",		0x2046,	 0x17,	'u',	0	},	 /* Time to restart */
	{ "TUL",		0x2042,	 0x0B,	'u',	en_P84_PSLIN	},	 /* Auto-tune assign. */
	{ "TUN",		0x2042,	 0x09,	'u',	en_P84_TUN	},	 /* Auto tuning */
	{ "TUP",		0x205C,	 0x07,	'u',	0	},	 /* Traverse ctrl. accel. */
	{ "TUS",		0x2042,	 0x0A,	'u',	en_P84_ACT	},	 /* Auto tuning state */
	{ "U0",		0x205E,	 0x02,	'u',	0	},	 /* U0 */
	{ "U1",		0x205E,	 0x04,	'u',	0	},	 /* U1 */
	{ "U2",		0x205E,	 0x06,	'u',	0	},	 /* U2 */
	{ "U3",		0x205E,	 0x08,	'u',	0	},	 /* U3 */
	{ "U4",		0x205E,	 0x0A,	'u',	0	},	 /* U4 */
	{ "U5",		0x205E,	 0x0C,	'u',	0	},	 /* U5 */
	{ "UCP",		0x2070,	 0x03,	'u',	0	},	 /* V. constant power */
	{ "UFR",		0x2042,	 0x18,	'u',	0	},	 /* IR compensation */
	{ "UIH1",		0x200E,	 0x17,	'u',	0	},	 /* AI1 max value */
	{ "UIH2",		0x200E,	 0x18,	'u',	0	},	 /* AI2 max value */
	{ "UIH4",		0x200E,	 0x1A,	'u',	0	},	 /* AI4 max value */
	{ "UIL1",		0x200E,	 0x0D,	'u',	0	},	 /* AI1 min value */
	{ "UIL2",		0x200E,	 0x0E,	'u',	0	},	 /* AI2 min value */
	{ "UIL4",		0x200E,	 0x10,	'u',	0	},	 /* AI4 min value */
	/* Measurement parameters*/
	{ "ULN",		0x2002,	 0x08,	'u',	0	},	 /* Mains voltage */
	/* History parameters*/
	{ "ULP0",		0x202A,	 0x47,	'u',	0	},	 /* Power supply voltage on last fault */
	{ "ULP1",		0x202A,	 0x48,	'u',	0	},	 /* Supply voltage on fault n-1 */
	{ "ULP2",		0x202A,	 0x49,	'u',	0	},	 /* Supply voltage on fault n-2 */
	{ "ULP3",		0x202A,	 0x4A,	'u',	0	},	 /* Supply voltage on fault n-3 */
	{ "ULP4",		0x202A,	 0x4B,	'u',	0	},	 /* Supply voltage on fault n-4 */
	{ "ULP5",		0x202A,	 0x4C,	'u',	0	},	 /* Supply voltage on fault n-5 */
	{ "ULP6",		0x202A,	 0x4D,	'u',	0	},	 /* Supply voltage on fault n-6 */
	{ "ULP7",		0x202A,	 0x4E,	'u',	0	},	 /* Supply voltage on fault n-7 */
	{ "ULP8",		0x202A,	 0x4F,	'u',	0	},	 /* Supply voltage on fault n-8 */
	/* Configuration and settings*/
	{ "UNS",		0x2042,	 0x02,	'u',	0	},	 /* Rated motor volt. */
	{ "UOH1",		0x2010,	 0x20,	'u',	0	},	 /* AO1 max Output */
	{ "UOH2",		0x2010,	 0x21,	'u',	0	},	 /* AO2 max Output */
	{ "UOH3",		0x2010,	 0x22,	'u',	0	},	 /* AO3 max Output */
	{ "UOL1",		0x2010,	 0x16,	'u',	0	},	 /* AO1 min Output */
	{ "UOL2",		0x2010,	 0x17,	'u',	0	},	 /* AO2 min Output */
	{ "UOL3",		0x2010,	 0x18,	'u',	0	},	 /* AO3 min Output */
	/* Actual values parameters*/
	{ "UOP",		0x2002,	 0x09,	'u',	0	},	 /* Motor voltage */
	/* Configuration and settings*/
	{ "UPL",		0x206C,	 0x0C,	'u',	0	},	 /* Prevention level */
	{ "URES",		0x206C,	 0x02,	'u',	en_P84_URES	},	 /* Rated mains voltage */
	{ "USB",		0x206C,	 0x04,	'u',	en_P84_USB	},	 /* UnderV. fault mgt */
	{ "USI",		0x2055,	 0x15,	'u',	en_P84_PSLIN	},	 /* + Speed assignment */
	{ "USL",		0x206C,	 0x03,	'u',	0	},	 /* Undervoltage level */
	{ "USP",		0x2055,	 0x02,	'u',	en_P84_PSLIN	},	 /* + speed assignment */
	{ "UST",		0x206C,	 0x05,	'u',	0	},	 /* Undervolt. time out */
	/* Parameter set switching*/
	{ "VAL",		0x2063,	 0x02,	'u',	0	},	 /* Load parameter set command */
	/* Configuration and settings*/
	{ "VBR",		0x206F,	 0x02,	'u',	0	},	 /* Braking level */
	{ "VC2",		0x2070,	 0x02,	'u',	en_P84_N_Y	},	 /* Vector Control 2pt */
	/* Identification parameters*/
	{ "VCAL",		0x2000,	 0x0D,	'u',	en_P84_VCAL	},	 /* Drive line voltage */
	/* Configuration and settings*/
	{ "VCB",		0x2001,	 0x0C,	'u',	0	},	 /* Sensitivity */
	/* Identification parameters*/
	{ "VDP",		0x2003,	 0x03,	'u',	0	},	 /* Drive software version */
	{ 0,			0,		 0, 	0	}	
};



char * P84_download_index[] = {
	"LAC",
	"INR",
	"ACC",
	"DEC",
	"AC2",
	"DE2",
	"LSP",
	"HSP",
	"ITH",
	"SPG",
	"SIT",
	"SFC",
	"SFR",
	"CLI",
	"FLU",
	"TLS",
	"MFR",
	"CTD",
	"TTH",
	"TTL",
	"FTD",
	"F2D",
	"JPF",
	"JF2",
	"JF3",
	"JFH",
	"BFR",
	"NPR",
	"UNS",
	"NCR",
	"FRS",
	"INSP",
	"NSP",
	"TFR",
	"AUT",
	"PHR",
	"CTT",
	"U0",
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
	"VC2",
	"UCP",
	"FCP",
	"NCRS",
	"NSPS",
	"PPNS",
	"PHS",
	"LDS",
	"LQS",
	"RSAS",
	"UFR",
	"SLP",
	"RSA",
	"IDA",
	"LFA",
	"TRA",
	"ENA",
	"GPE",
	"GIE",
	"RAP",
	"OFI",
	"NRD",
	"SVL",
	"SOP",
	"VBR",
	"BBA",
	"LBA",
	"LBC",
	"LBC1",
	"LBC2",
	"LBC3",
	"LBF",
	"TCC",
	"TCT",
	"RRS",
	"L1D",
	"L2D",
	"L3D",
	"L4D",
	"L5D",
	"L6D",
	"BSP",
	"AI1T",
	"UIL1",
	"UIH1",
	"AI1F",
	"AI1E",
	"AI1S",
	"AI2T",
	"CRL2",
	"UIL2",
	"CRH2",
	"UIH2",
	"AI2F",
	"AI2L",
	"AI2E",
	"AI2S",
	"ENS",
	"ENC",
	"ENU",
	"PGI",
	"PGA",
	"EIL",
	"EFR",
	"EFI",
	"R1",
	"R1D",
	"R1S",
	"R1H",
	"R2",
	"R2D",
	"R2S",
	"R2H",
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
	"USP",
	"DSP",
	"STR",
	"USI",
	"DSI",
	"SRP",
	"SPM",
	"FLI",
	"LAF",
	"LAR",
	"LAS",
	"BLC",
	"BST",
	"BCI",
	"BIP",
	"IBR",
	"IRD",
	"BRT",
	"BIR",
	"BEN",
	"BECD",
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
	"TLD",
	"DLD",
	"DLB",
	"PIF",
	"AIC1",
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
	"TSS",
	"TR1",
	"TSD",
	"TRT",
	"TRP",
	"TST",
	"SPT",
	"DBP",
	"DBN",
	"RTO",
	"TOB",
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
	"RFT",
	"RSU",
	"RSP",
	"HLS",
	"DCO",
	"PTCL",
	"RSF",
	"RPA",
	"ATR",
	"TAR",
	"FLR",
	"VCB",
	"THT",
	"TTD",
	"TTD2",
	"TTD3",
	"OLL",
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
	"LFL2",
	"INH",
	"COL",
	"SDD",
	"ECC",
	"ECT",
	"SSB",
	"STO",
	"BRO",
	"BRP",
	"BRV",
	"BUB",
	"TNL",
	"LFF",
	"FLO",
	"FLOC",
	"FLOT",
	0
};
