/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: ac_invlib
 * File: P74_registers.h
 * Author: hilchenbachc
 * Created: April 11, 2014
 *******************************************************************/



#include "P74_enumerations.h"

acpireg p74reg[] = {
     { "CMD",0x2037,	0x2,	'u',            0	},  /* Control word  */
     { "CMI",0x2037,	0x5,	'u',            0	},  /* Extended control word  */
     { "RPR",0x2001,	0x15,	'u',   en_P74_RPR	},  /* Reset counters command  */
    { "LFRD",0x2038,	0x3,	's',            0	},  /* Speed setpoint  */
     { "LFR",0x2037,	0x3,	's',            0	},  /* Frequency setpoint  */
    { "PISP",0x2037,	0x4,	'u',            0	},  /* PID regulator setpoint  */
    { "AIV1",0x2016,	0x52,	'u',            0	},  /* First virtual AI value  */
    { "AIV2",0x2016,	0x54,	's',            0	},  /* Second virtual AI value  */
     { "MFR",0x2058,	0x20,	'u',            0	},  /* Multiplying coefficient  */
     { "ETA",0x2002,	0x2,	'u',            0	},  /* Status word  */
    { "HMIS",0x2002,	0x29,	'u',  en_P74_HMIS	},  /* Drive state  */
     { "ETI",0x2002,	0x7,	'u',            0	},  /* Extended status word  */
    { "LRS1",0x2002,	0x33,	'u',            0	},  /* Extended status word 1  */
    { "LRS2",0x2002,	0x34,	'u',            0	},  /* Extended status word 2  */
    { "LRS3",0x2002,	0x35,	'u',            0	},  /* Extended status word 3  */
    { "LRS4",0x2002,	0x36,	'u',            0	},  /* Extended status word 4  */
    { "LRS5",0x2002,	0x37,	'u',            0	},  /* Extended status word 5  */
    { "LRS6",0x2002,	0x38,	'u',            0	},  /* Extended status word 6  */
    { "LRS7",0x2002,	0x39,	'u',            0	},  /* Extended status word 7  */
    { "LRS8",0x2002,	0x3a,	'u',            0	},  /* Extended status word 8  */
     { "CRC",0x2036,	0x2a,	'u',            0	},  /* Active reference channel  */
     { "CCC",0x2036,	0x2b,	'u',            0	},  /* Active command channel  */
    { "CNFS",0x2032,	0x15,	'u',  en_P74_CNFS	},  /* Config. active  */
    { "STUN",0x2042,	0x12,	'u',  en_P74_STUN	},  /* Autotune selection result  */
    { "TUNU",0x2042,	0x14,	'u',  en_P74_TUNU	},  /* Auto tune usage  */
    { "SMOT",0x2042,	0x2e,	'u',  en_P74_SMOT	},  /* Status of tune in term of salliency  */
    { "RFRD",0x2038,	0x5,	's',            0	},  /* Output velocity  */
     { "RFR",0x2002,	0x3,	's',            0	},  /* Output frequency  */
     { "OTR",0x2002,	0x6,	's',            0	},  /* Motor torque  */
     { "LCR",0x2002,	0x5,	'u',            0	},  /* Motor current  */
     { "UOP",0x2002,	0x9,	'u',            0	},  /* Motor voltage  */
     { "OPR",0x2002,	0xc,	's',            0	},  /* Motor power  */
    { "FRHD",0x2038,	0x6,	's',            0	},  /* Speed reference before ramp  */
    { "FROD",0x2038,	0x2a,	's',            0	},  /* Speed reference after ramp  */
     { "FRH",0x2002,	0x4,	's',            0	},  /* Frequency reference before ramp  */
     { "FRO",0x203C,	0x16,	's',            0	},  /* Frequency reference after ramp  */
     { "RPC",0x2059,	0x53,	'u',            0	},  /* PID reference after ramp  */
     { "RPF",0x2059,	0x52,	'u',            0	},  /* PID regulator feedback reference  */
     { "RPE",0x2059,	0x51,	's',            0	},  /* PID regulator discrepancy  */
     { "RPO",0x2059,	0x54,	's',            0	},  /* PID regulator limit output reference  */
     { "ULN",0x2002,	0x8,	'u',            0	},  /* Mains voltage  */
     { "APH",0x2002,	0x1f,	'u',            0	},  /* Energy consumption  */
     { "THD",0x2002,	0xa,	'u',            0	},  /* Drive thermal state  */
     { "THR",0x2042,	0x1f,	'u',            0	},  /* Motor thermal state  */
     { "RTH",0x2002,	0x20,	'u',            0	},  /* Total motor operating time  */
     { "PTH",0x2002,	0x22,	'u',            0	},  /* Total drive operating time  */
     { "TAC",0x2002,	0x24,	'u',            0	},  /* IGBT alarm time  */
    { "TAC2",0x2002,	0x2b,	'u',            0	},  /* Transistor alarm time counter at freq min  */
    { "IL1R",0x2016,	0x3,	'u',            0	},  /* Logic inputs states  */
    { "OL1R",0x2016,	0xd,	'u',            0	},  /* Logic outputs states  */
    { "AI1C",0x2016,	0x2b,	's',            0	},  /* Analog input 1 physical value  */
    { "AI1R",0x2016,	0x21,	's',            0	},  /* Analog input 1 standardized value  */
    { "AI2C",0x2016,	0x2c,	's',            0	},  /* Analog input 2 physical value  */
    { "AI2R",0x2016,	0x22,	's',            0	},  /* Analog input 2 standardized value  */
    { "AI3C",0x2016,	0x2d,	's',            0	},  /* Analog input 3 physical value  */
    { "AI3R",0x2016,	0x23,	's',            0	},  /* Analog input 3 standardized value  */
    { "AO1C",0x2016,	0x48,	's',            0	},  /* Analog output 1 physical value  */
    { "AO1R",0x2016,	0x3e,	's',            0	},  /* Analog output 1 standardized value  */
     { "FQS",0x2074,	0x4,	'u',            0	},  /* Pulse input frequency  */
    { "ERRD",0x2038,	0x7,	'u',  en_P74_ERRD	},  /* CiA402 fault code  */
     { "LFT",0x2029,	0x16,	'u',   en_P74_LFT	},  /* Altivar fault code  */
     { "CIC",0x2029,	0x1f,	'u',            0	},  /* Incorrect configuration  */
     { "CNF",0x2029,	0x21,	'u',            0	},  /* Network card fault code  */
    { "ILF1",0x2029,	0x23,	'u',            0	},  /* Option card 1 fault code  */
     { "FNB",0x202B,	0x5e,	'u',            0	},  /* Fault counter  */
     { "DP0",0x202A,	0x1,	'u',   en_P74_LFT	},  /* Fault code on last fault  */
    { "ULP0",0x202A,	0x47,	'u',            0	},  /* Power supply voltage on last fault  */
    { "LCP0",0x202A,	0x29,	's',            0	},  /* Motor current on last fault  */
    { "RFP0",0x202A,	0x33,	's',            0	},  /* Output frequency on last fault  */
    { "THP0",0x202A,	0x51,	'u',            0	},  /* Motor thermal state on last fault  */
     { "EP0",0x202A,	0xb,	'u',            0	},  /* Status word on last fault  */
     { "IP0",0x202A,	0x15,	'u',            0	},  /* Extended status word on last fault  */
    { "CMP0",0x202A,	0x1f,	'u',            0	},  /* Command word on last fault  */
    { "CRP0",0x202A,	0x5b,	'u',            0	},  /* Channels active on last fault  */
    { "RTP0",0x202A,	0x3d,	'u',            0	},  /* Motor operating time on last fault  */
    { "OTP0",0x202B,	0x1f,	's',            0	},  /* Estimated motor torque value of actual fault  */
    { "TDP0",0x202B,	0x29,	'u',            0	},  /* Mesured drive thermal state of actual fault  */
    { "TJP0",0x202B,	0x33,	'u',            0	},  /* Estimated TJ value of actual fault  */
    { "SFP0",0x202B,	0x3d,	'u',            0	},  /* Switching frequency really applied by MotorControl of actual fault  */
     { "DP1",0x202A,	0x2,	'u',   en_P74_LFT	},  /* Fault code on fault n-1  */
    { "ULP1",0x202A,	0x48,	'u',            0	},  /* Supply voltage on fault n-1  */
    { "LCP1",0x202A,	0x2a,	's',            0	},  /* Motor current on fault n-1  */
    { "RFP1",0x202A,	0x34,	's',            0	},  /* Output frequency on fault n-1  */
    { "THP1",0x202A,	0x52,	'u',            0	},  /* Motor thermal state on fault n-1  */
     { "EP1",0x202A,	0xc,	'u',            0	},  /* Status word on fault n-1  */
     { "IP1",0x202A,	0x16,	'u',            0	},  /* Extended status word on fault n-1  */
    { "CMP1",0x202A,	0x20,	'u',            0	},  /* Command word on fault n-1  */
    { "CRP1",0x202A,	0x5c,	'u',            0	},  /* Active channels on fault n-1  */
    { "RTP1",0x202A,	0x3e,	'u',            0	},  /* Motor operating time on fault n-1  */
    { "OTP1",0x202B,	0x20,	's',            0	},  /* Estimated motor torque value on fault n-1  */
    { "TDP1",0x202B,	0x2a,	'u',            0	},  /* Mesured drive thermal state on fault n-1  */
    { "TJP1",0x202B,	0x34,	'u',            0	},  /* Estimated TJ value on fault n-1  */
    { "SFP1",0x202B,	0x3e,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-1  */
     { "DP2",0x202A,	0x3,	'u',   en_P74_LFT	},  /* Fault code on fault n-2  */
    { "ULP2",0x202A,	0x49,	'u',            0	},  /* Supply voltage on fault n-2  */
    { "LCP2",0x202A,	0x2b,	's',            0	},  /* Motor current on fault n-2  */
    { "RFP2",0x202A,	0x35,	's',            0	},  /* Output frequency on fault n-2  */
    { "THP2",0x202A,	0x53,	'u',            0	},  /* Motor thermal state on fault n-2  */
     { "EP2",0x202A,	0xd,	'u',            0	},  /* Status word on fault n-2  */
     { "IP2",0x202A,	0x17,	'u',            0	},  /* Extended status word on fault n-2  */
    { "CMP2",0x202A,	0x21,	'u',            0	},  /* Command word on fault n-2  */
    { "CRP2",0x202A,	0x5d,	'u',            0	},  /* Active channels on fault n-2  */
    { "RTP2",0x202A,	0x3f,	'u',            0	},  /* Motor operating time on fault n-2  */
    { "OTP2",0x202B,	0x21,	's',            0	},  /* Estimated motor torque value on fault n-2  */
    { "TDP2",0x202B,	0x2b,	'u',            0	},  /* Mesured drive thermal state on fault n-2  */
    { "TJP2",0x202B,	0x35,	'u',            0	},  /* Estimated TJ value on fault n-2  */
    { "SFP2",0x202B,	0x3f,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-2  */
     { "DP3",0x202A,	0x4,	'u',   en_P74_LFT	},  /* Fault code on fault n-3  */
    { "ULP3",0x202A,	0x4a,	'u',            0	},  /* Supply voltage on fault n-3  */
    { "LCP3",0x202A,	0x2c,	's',            0	},  /* Motor current on fault n-3  */
    { "RFP3",0x202A,	0x36,	's',            0	},  /* Output frequency on fault n-3  */
    { "THP3",0x202A,	0x54,	'u',            0	},  /* Motor thermal state on fault n-3  */
     { "EP3",0x202A,	0xe,	'u',            0	},  /* Status word on fault n-3  */
     { "IP3",0x202A,	0x18,	'u',            0	},  /* Extended status word on fault n-3  */
    { "CMP3",0x202A,	0x22,	'u',            0	},  /* Command word on fault n-3  */
    { "CRP3",0x202A,	0x5e,	'u',            0	},  /* Active channels on fault n-3  */
    { "RTP3",0x202A,	0x40,	'u',            0	},  /* Motor operating time on fault n-3  */
    { "OTP3",0x202B,	0x22,	's',            0	},  /* Estimated motor torque value on fault n-3  */
    { "TDP3",0x202B,	0x2c,	'u',            0	},  /* Mesured drive thermal state on fault n-3  */
    { "TJP3",0x202B,	0x36,	'u',            0	},  /* Estimated TJ value on fault n-3  */
    { "SFP3",0x202B,	0x40,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-3  */
     { "DP4",0x202A,	0x5,	'u',   en_P74_LFT	},  /* Fault code on fault n-4  */
    { "ULP4",0x202A,	0x4b,	'u',            0	},  /* Supply voltage on fault n-4  */
    { "LCP4",0x202A,	0x2d,	's',            0	},  /* Motor current on fault n-4  */
    { "RFP4",0x202A,	0x37,	's',            0	},  /* Output frequency on fault n-4  */
    { "THP4",0x202A,	0x55,	'u',            0	},  /* Motor thermal state on fault n-4  */
     { "EP4",0x202A,	0xf,	'u',            0	},  /* Status word on fault n-4  */
     { "IP4",0x202A,	0x19,	'u',            0	},  /* Extended status word on fault n-4  */
    { "CMP4",0x202A,	0x23,	'u',            0	},  /* Command word on fault n-4  */
    { "CRP4",0x202A,	0x5f,	'u',            0	},  /* Active channels on fault n-4  */
    { "RTP4",0x202A,	0x41,	'u',            0	},  /* Motor operating time on fault n-4  */
    { "OTP4",0x202B,	0x23,	's',            0	},  /* Estimated motor torque value on fault n-4  */
    { "TDP4",0x202B,	0x2d,	'u',            0	},  /* Mesured drive thermal state on fault n-4  */
    { "TJP4",0x202B,	0x37,	'u',            0	},  /* Estimated TJ value on fault n-4  */
    { "SFP4",0x202B,	0x41,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-4  */
     { "DP5",0x202A,	0x6,	'u',   en_P74_LFT	},  /* Fault code on fault n-5  */
    { "ULP5",0x202A,	0x4c,	'u',            0	},  /* Supply voltage on fault n-5  */
    { "LCP5",0x202A,	0x2e,	's',            0	},  /* Motor current on fault n-5  */
    { "RFP5",0x202A,	0x38,	's',            0	},  /* Output frequency on fault n-5  */
    { "THP5",0x202A,	0x56,	'u',            0	},  /* Motor thermal state on fault n-5  */
     { "EP5",0x202A,	0x10,	'u',            0	},  /* Status word on fault n-5  */
     { "IP5",0x202A,	0x1a,	'u',            0	},  /* Extended status word on fault n-5  */
    { "CMP5",0x202A,	0x24,	'u',            0	},  /* Command word on fault n-5  */
    { "CRP5",0x202A,	0x60,	'u',            0	},  /* Active channels on fault n-5  */
    { "RTP5",0x202A,	0x42,	'u',            0	},  /* Motor operating time on fault n-5  */
    { "OTP5",0x202B,	0x24,	's',            0	},  /* Estimated motor torque value on fault n-5  */
    { "TDP5",0x202B,	0x2e,	'u',            0	},  /* Mesured drive thermal state on fault n-5  */
    { "TJP5",0x202B,	0x38,	'u',            0	},  /* Estimated TJ value on fault n-5  */
    { "SFP5",0x202B,	0x42,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-5  */
     { "DP6",0x202A,	0x7,	'u',   en_P74_LFT	},  /* Fault code on fault n-6  */
    { "ULP6",0x202A,	0x4d,	'u',            0	},  /* Supply voltage on fault n-6  */
    { "LCP6",0x202A,	0x2f,	's',            0	},  /* Motor current on fault n-6  */
    { "RFP6",0x202A,	0x39,	's',            0	},  /* Output frequency on fault n-6  */
    { "THP6",0x202A,	0x57,	'u',            0	},  /* Motor thermal state on fault n-6  */
     { "EP6",0x202A,	0x11,	'u',            0	},  /* Status word on fault n-6  */
     { "IP6",0x202A,	0x1b,	'u',            0	},  /* Extended status word on fault n-6  */
    { "CMP6",0x202A,	0x25,	'u',            0	},  /* Command word on fault n-6  */
    { "CRP6",0x202A,	0x61,	'u',            0	},  /* Active channels on fault n-6  */
    { "RTP6",0x202A,	0x43,	'u',            0	},  /* Motor operating time on fault n-6  */
    { "OTP6",0x202B,	0x25,	's',            0	},  /* Estimated motor torque value on fault n-6  */
    { "TDP6",0x202B,	0x2f,	'u',            0	},  /* Mesured drive thermal state on fault n-6  */
    { "TJP6",0x202B,	0x39,	'u',            0	},  /* Estimated TJ value on fault n-6  */
    { "SFP6",0x202B,	0x43,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-6  */
     { "DP7",0x202A,	0x8,	'u',   en_P74_LFT	},  /* Fault code on fault n-7  */
    { "ULP7",0x202A,	0x4e,	'u',            0	},  /* Supply voltage on fault n-7  */
    { "LCP7",0x202A,	0x30,	's',            0	},  /* Motor current on fault n-7  */
    { "RFP7",0x202A,	0x3a,	's',            0	},  /* Output frequency on fault n-7  */
    { "THP7",0x202A,	0x58,	'u',            0	},  /* Motor thermal state on fault n-7  */
     { "EP7",0x202A,	0x12,	'u',            0	},  /* Status word on fault n-7  */
     { "IP7",0x202A,	0x1c,	'u',            0	},  /* Extended status word on fault n-7  */
    { "CMP7",0x202A,	0x26,	'u',            0	},  /* Command word on fault n-7  */
    { "CRP7",0x202A,	0x62,	'u',            0	},  /* Active channels on fault n-7  */
    { "RTP7",0x202A,	0x44,	'u',            0	},  /* Motor operating time on fault n-7  */
    { "OTP7",0x202B,	0x26,	's',            0	},  /* Estimated motor torque value on fault n-7  */
    { "TDP7",0x202B,	0x30,	'u',            0	},  /* Mesured drive thermal state on fault n-7  */
    { "TJP7",0x202B,	0x3a,	'u',            0	},  /* Estimated TJ value on fault n-7  */
    { "SFP7",0x202B,	0x44,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-7  */
     { "DP8",0x202A,	0x9,	'u',   en_P74_LFT	},  /* Fault code on fault n-8  */
    { "ULP8",0x202A,	0x4f,	'u',            0	},  /* Supply voltage on fault n-8  */
    { "LCP8",0x202A,	0x31,	's',            0	},  /* Motor current on fault n-8  */
    { "RFP8",0x202A,	0x3b,	's',            0	},  /* Output frequency on fault n-8  */
    { "THP8",0x202A,	0x59,	'u',            0	},  /* Motor thermal state on fault n-8  */
     { "EP8",0x202A,	0x13,	'u',            0	},  /* Status word on fault n-8  */
     { "IP8",0x202A,	0x1d,	'u',            0	},  /* Extended status word on fault n-8  */
    { "CMP8",0x202A,	0x27,	'u',            0	},  /* Command word on fault n-8  */
    { "CRP8",0x202A,	0x63,	'u',            0	},  /* Active channels on fault n-8  */
    { "RTP8",0x202A,	0x45,	'u',            0	},  /* Motor operating time on fault n-8  */
    { "OTP8",0x202B,	0x27,	's',            0	},  /* Estimated motor torque value on fault n-8  */
    { "TDP8",0x202B,	0x31,	'u',            0	},  /* Mesured drive thermal state on fault n-8  */
    { "TJP8",0x202B,	0x3b,	'u',            0	},  /* Estimated TJ value on fault n-8  */
    { "SFP8",0x202B,	0x45,	'u',            0	},  /* Switching frequency really applied by MotorControl on fault n-8  */
     { "NCV",0x2000,	0xc,	'u',   en_P74_NCV	},  /* Drive nominal rating  */
    { "VCAL",0x2000,	0xd,	'u',  en_P74_VCAL	},  /* Drive line voltage  */
     { "INV",0x2000,	0x12,	'u',            0	},  /* Rated drive current  */
     { "VDP",0x2003,	0x3,	'u',            0	},  /* Drive software version  */
    { "PAN0",0x2003,	0x29,	'u',            0	},  /* Device name (char 1 and 2)  */
    { "PAN1",0x2003,	0x2a,	'u',            0	},  /* Device name (char 3 and 4)  */
    { "PAN2",0x2003,	0x2b,	'u',            0	},  /* Device name (char 5 and 6)  */
    { "PAN3",0x2003,	0x2c,	'u',            0	},  /* Device name (char 7 and 8)  */
    { "PAN4",0x2003,	0x2d,	'u',            0	},  /* Device name (char 9 and 10)  */
    { "PAN5",0x2003,	0x2e,	'u',            0	},  /* Device name (char 11 and 12)  */
    { "PAN6",0x2003,	0x2f,	'u',            0	},  /* Device name (char 13 and 14)  */
    { "PAN7",0x2003,	0x30,	'u',            0	},  /* Device name (char 15 and 16)  */
     { "NC1",0x2061,	0x3e,	'u',            0	},  /* Communication scanner, value of write word 1  */
     { "NC2",0x2061,	0x3f,	'u',            0	},  /* Communication scanner, value of write word 2  */
     { "NC3",0x2061,	0x40,	'u',            0	},  /* Communication scanner, value of write word 3  */
     { "NC4",0x2061,	0x41,	'u',            0	},  /* Communication scanner, value of write word 4  */
     { "NC5",0x2061,	0x42,	'u',            0	},  /* Communication scanner, value of write word 5  */
     { "NC6",0x2061,	0x43,	'u',            0	},  /* Communication scanner, value of write word 6  */
     { "NC7",0x2061,	0x44,	'u',            0	},  /* Communication scanner, value of write word 7  */
     { "NC8",0x2061,	0x45,	'u',            0	},  /* Communication scanner, value of write word 8  */
     { "NM1",0x2061,	0x2a,	'u',            0	},  /* Communication scanner, value of read word 1  */
     { "NM2",0x2061,	0x2b,	'u',            0	},  /* Communication scanner, value of read word 2  */
     { "NM3",0x2061,	0x2c,	'u',            0	},  /* Communication scanner, value of read word 3  */
     { "NM4",0x2061,	0x2d,	'u',            0	},  /* Communication scanner, value of read word 4  */
     { "NM5",0x2061,	0x2e,	'u',            0	},  /* Communication scanner, value of read word 5  */
     { "NM6",0x2061,	0x2f,	'u',            0	},  /* Communication scanner, value of read word 6  */
     { "NM7",0x2061,	0x30,	'u',            0	},  /* Communication scanner, value of read word 7  */
     { "NM8",0x2061,	0x31,	'u',            0	},  /* Communication scanner, value of read word 8  */
    { "SMAL",0x2038,	0xa,	'u',            0	},  /* Velocity min amount  */
    { "SMIL",0x2038,	0x8,	'u',            0	},  /* Velocity max amount  */
    { "SPAL",0x2038,	0xc,	'u',            0	},  /* Acceleration delta speed  */
    { "SPAT",0x2038,	0xe,	'u',            0	},  /* Acceleration delta time  */
    { "SPDL",0x2038,	0xf,	'u',            0	},  /* Deceleration delta speed  */
    { "SPDT",0x2038,	0x11,	'u',            0	},  /* Deceleration delta time  */
    { "SPFN",0x2038,	0x2b,	'u',            0	},  /* Setpoint factor numerator  */
    { "SPFD",0x2038,	0x2c,	'u',            0	},  /* Setpoint factor denominator  */
    { "DOTD",0x2038,	0x35,	'u',  en_P74_DOTD	},  /* Disable operation option code  */
    { "QSTD",0x2038,	0x34,	'u',  en_P74_QSTD	},  /* Quick stop option code  */
     { "SCS",0x2032,	0x2,	'u',   en_P74_SCS	},  /* Save configuration  */
     { "FCS",0x2032,	0x3,	'u',   en_P74_FCS	},  /* Restore configuration  */
     { "FRY",0x2000,	0x17,	'u',            0	},  /* Factory setting group  */
    { "CHA1",0x2063,	0x3,	'u', en_P74_PSLIN	},  /* 2 Parameter sets  */
    { "CHA2",0x2063,	0x4,	'u', en_P74_PSLIN	},  /* 3 Parameter sets  */
    { "CFPS",0x2063,	0x1,	'u',  en_P74_CFPS	},  /* Active parameter set  */
     { "VAL",0x2063,	0x2,	'u',            0	},  /* Load parameter set command  */
    { "AD01",0x2063,	0xc,	'u',            0	},  /* Parameter set address 1  */
    { "AD02",0x2063,	0xd,	'u',            0	},  /* Parameter set address 2  */
    { "AD03",0x2063,	0xe,	'u',            0	},  /* Parameter set address 3  */
    { "AD04",0x2063,	0xf,	'u',            0	},  /* Parameter set address 4  */
    { "AD05",0x2063,	0x10,	'u',            0	},  /* Parameter set address 5  */
    { "AD06",0x2063,	0x11,	'u',            0	},  /* Parameter set address 6  */
    { "AD07",0x2063,	0x12,	'u',            0	},  /* Parameter set address 7  */
    { "AD08",0x2063,	0x13,	'u',            0	},  /* Parameter set address 8  */
    { "AD09",0x2063,	0x14,	'u',            0	},  /* Parameter set address 9  */
    { "AD10",0x2063,	0x15,	'u',            0	},  /* Parameter set address 10  */
    { "AD11",0x2063,	0x16,	'u',            0	},  /* Parameter set address 11  */
    { "AD12",0x2063,	0x17,	'u',            0	},  /* Parameter set address 12  */
    { "AD13",0x2063,	0x18,	'u',            0	},  /* Parameter set address 13  */
    { "AD14",0x2063,	0x19,	'u',            0	},  /* Parameter set address 14  */
    { "AD15",0x2063,	0x1a,	'u',            0	},  /* Parameter set address 15  */
    { "S101",0x2063,	0x20,	'u',            0	},  /* Parameter set 1 value 1  */
    { "S102",0x2063,	0x21,	'u',            0	},  /* Parameter set 1 value 2  */
    { "S103",0x2063,	0x22,	'u',            0	},  /* Parameter set 1 value 3  */
    { "S104",0x2063,	0x23,	'u',            0	},  /* Parameter set 1 value 4  */
    { "S105",0x2063,	0x24,	'u',            0	},  /* Parameter set 1 value 5  */
    { "S106",0x2063,	0x25,	'u',            0	},  /* Parameter set 1 value 6  */
    { "S107",0x2063,	0x26,	'u',            0	},  /* Parameter set 1 value 7  */
    { "S108",0x2063,	0x27,	'u',            0	},  /* Parameter set 1 value 8  */
    { "S109",0x2063,	0x28,	'u',            0	},  /* Parameter set 1 value 9  */
    { "S110",0x2063,	0x29,	'u',            0	},  /* Parameter set 1 value 10  */
    { "S111",0x2063,	0x2a,	'u',            0	},  /* Parameter set 1 value 11  */
    { "S112",0x2063,	0x2b,	'u',            0	},  /* Parameter set 1 value 12  */
    { "S113",0x2063,	0x2c,	'u',            0	},  /* Parameter set 1 value 13  */
    { "S114",0x2063,	0x2d,	'u',            0	},  /* Parameter set 1 value 14  */
    { "S115",0x2063,	0x2e,	'u',            0	},  /* Parameter set 1 value 15  */
    { "S201",0x2063,	0x34,	'u',            0	},  /* Parameter set 2 value 1  */
    { "S202",0x2063,	0x35,	'u',            0	},  /* Parameter set 2 value 2  */
    { "S203",0x2063,	0x36,	'u',            0	},  /* Parameter set 2 value 3  */
    { "S204",0x2063,	0x37,	'u',            0	},  /* Parameter set 2 value 4  */
    { "S205",0x2063,	0x38,	'u',            0	},  /* Parameter set 2 value 5  */
    { "S206",0x2063,	0x39,	'u',            0	},  /* Parameter set 2 value 6  */
    { "S207",0x2063,	0x3a,	'u',            0	},  /* Parameter set 2 value 7  */
    { "S208",0x2063,	0x3b,	'u',            0	},  /* Parameter set 2 value 8  */
    { "S209",0x2063,	0x3c,	'u',            0	},  /* Parameter set 2 value 9  */
    { "S210",0x2063,	0x3d,	'u',            0	},  /* Parameter set 2 value 10  */
    { "S211",0x2063,	0x3e,	'u',            0	},  /* Parameter set 2 value 11  */
    { "S212",0x2063,	0x3f,	'u',            0	},  /* Parameter set 2 value 12  */
    { "S213",0x2063,	0x40,	'u',            0	},  /* Parameter set 2 value 13  */
    { "S214",0x2063,	0x41,	'u',            0	},  /* Parameter set 2 value 14  */
    { "S215",0x2063,	0x42,	'u',            0	},  /* Parameter set 2 value 15  */
    { "S301",0x2063,	0x48,	'u',            0	},  /* Parameter set 3 value 1  */
    { "S302",0x2063,	0x49,	'u',            0	},  /* Parameter set 3 value 2  */
    { "S303",0x2063,	0x4a,	'u',            0	},  /* Parameter set 3 value 3  */
    { "S304",0x2063,	0x4b,	'u',            0	},  /* Parameter set 3 value 4  */
    { "S305",0x2063,	0x4c,	'u',            0	},  /* Parameter set 3 value 5  */
    { "S306",0x2063,	0x4d,	'u',            0	},  /* Parameter set 3 value 6  */
    { "S307",0x2063,	0x4e,	'u',            0	},  /* Parameter set 3 value 7  */
    { "S308",0x2063,	0x4f,	'u',            0	},  /* Parameter set 3 value 8  */
    { "S309",0x2063,	0x50,	'u',            0	},  /* Parameter set 3 value 9  */
    { "S310",0x2063,	0x52,	'u',            0	},  /* Parameter set 3 value 10  */
    { "S311",0x2063,	0x52,	'u',            0	},  /* Parameter set 3 value 11  */
    { "S312",0x2063,	0x53,	'u',            0	},  /* Parameter set 3 value 12  */
    { "S313",0x2063,	0x54,	'u',            0	},  /* Parameter set 3 value 13  */
    { "S314",0x2063,	0x55,	'u',            0	},  /* Parameter set 3 value 14  */
    { "S315",0x2063,	0x56,	'u',            0	},  /* Parameter set 3 value 15  */
     { "CFG",0x2000,	0x35,	'u',   en_P74_CFG	},  /* Macro configuration  */
    { "CCFG",0x2000,	0x36,	'u',   en_P74_N_Y	},  /* Customized macro  */
     { "LSP",0x2001,	0x6,	'u',            0	},  /* Low speed  */
     { "HSP",0x2001,	0x5,	'u',            0	},  /* High speed  */
    { "HSP2",0x2079,	0xb,	'u',            0	},  /* High speed 2  */
    { "HSP3",0x2079,	0xc,	'u',            0	},  /* High speed 3  */
    { "HSP4",0x2079,	0xd,	'u',            0	},  /* High speed 4  */
     { "SH2",0x2079,	0x2,	'u', en_P74_PSLIN	},  /* 2 High speed  */
     { "SH4",0x2079,	0x3,	'u', en_P74_PSLIN	},  /* 4 High speed  */
     { "ITH",0x2042,	0x17,	'u',            0	},  /* Mot. therm. current  */
     { "SPG",0x203D,	0x4,	'u',            0	},  /* Speed prop. gain  */
    { "SPGU",0x2042,	0x1e,	'u',            0	},  /* Inertia factor for UF law  */
     { "SIT",0x203D,	0x5,	'u',            0	},  /* Speed time integral  */
     { "SFC",0x203D,	0x6,	'u',            0	},  /* K speed loop filter  */
     { "FFH",0x203D,	0x10,	'u',            0	},  /* Frequency to filter the estimated speed  */
    { "CRTF",0x203D,	0x11,	'u',            0	},  /* Filter time of the current reference filter  */
     { "CTD",0x2050,	0x2,	'u',            0	},  /* Current threshold  */
     { "TTH",0x2050,	0x11,	's',            0	},  /* High torque thd.  */
     { "TTL",0x2050,	0x10,	's',            0	},  /* Low torque thd.  */
     { "FQL",0x2074,	0xa,	'u',            0	},  /* Pulse warning thd.  */
     { "FTD",0x2050,	0x4,	'u',            0	},  /* Freq. threshold  */
     { "F2D",0x2050,	0x5,	'u',            0	},  /* Freq. threshold 2  */
     { "JF2",0x2053,	0x3,	'u',            0	},  /* Skip Frequency 2  */
     { "JPF",0x2053,	0x2,	'u',            0	},  /* Skip Frequency  */
     { "JFH",0x2053,	0xc,	'u',            0	},  /* Skip.Freq.Hysteresis  */
     { "JF3",0x2053,	0x4,	'u',            0	},  /* 3rd Skip Frequency  */
     { "BFR",0x2000,	0x10,	'u',   en_P74_BFR	},  /* Standard mot. freq  */
     { "NPR",0x2042,	0xe,	'u',            0	},  /* Rated motor power  */
     { "COS",0x2042,	0x7,	'u',            0	},  /* Motor cos phi  */
     { "UNS",0x2042,	0x2,	'u',            0	},  /* Rated motor volt.  */
     { "NCR",0x2042,	0x4,	'u',            0	},  /* Rated mot. current  */
     { "FRS",0x2042,	0x3,	'u',            0	},  /* Rated motor freq.  */
     { "NSP",0x2042,	0x5,	'u',            0	},  /* Rated motor speed  */
     { "TFR",0x2001,	0x4,	'u',            0	},  /* Max frequency  */
     { "TUN",0x2042,	0x9,	'u', en_P74_ACTION	},  /* Auto tuning  */
     { "AUT",0x2042,	0x10,	'u',   en_P74_N_Y	},  /* Automatic autotune  */
     { "TUS",0x2042,	0xa,	'u',   en_P74_ACT	},  /* Auto tuning state  */
     { "CTT",0x2042,	0x8,	'u',   en_P74_CTT	},  /* Motor control type  */
      { "U1",0x205E,	0x4,	'u',            0	},  /* U1  */
      { "F1",0x205E,	0x5,	'u',            0	},  /* Freq pt 1on 5pt V/F  */
      { "U2",0x205E,	0x6,	'u',            0	},  /* U2  */
      { "F2",0x205E,	0x7,	'u',            0	},  /* F2  */
      { "U3",0x205E,	0x8,	'u',            0	},  /* U3  */
      { "F3",0x205E,	0x9,	'u',            0	},  /* F3  */
      { "U4",0x205E,	0xa,	'u',            0	},  /* U4  */
      { "F4",0x205E,	0xb,	'u',            0	},  /* F4  */
      { "U5",0x205E,	0xc,	'u',            0	},  /* U5  */
      { "F5",0x205E,	0xd,	'u',            0	},  /* F5  */
    { "NCRS",0x2042,	0x47,	'u',            0	},  /* Nominal I sync.  */
    { "NSPS",0x2042,	0x48,	'u',            0	},  /* Nom motor spdsync  */
    { "PPNS",0x2042,	0x49,	'u',            0	},  /* Pole pairs  */
     { "TQS",0x2042,	0x55,	'u',            0	},  /* Nominal motor torque sync  */
     { "PHS",0x2042,	0x4a,	'u',            0	},  /* Syn. EMF constant  */
     { "LDS",0x2042,	0x4b,	'u',            0	},  /* Autotune L d-axis  */
     { "LQS",0x2042,	0x4c,	'u',            0	},  /* Autotune L q-axis  */
    { "RSAS",0x2042,	0x53,	'u',            0	},  /* Cust. stator R syn  */
     { "UFR",0x2042,	0x18,	'u',            0	},  /* IR compensation  */
     { "SLP",0x2042,	0x1a,	'u',            0	},  /* Slip compensation  */
     { "PPN",0x2042,	0x13,	'u',            0	},  /* Number of pairs of poles calculated  */
     { "RSA",0x2042,	0x2b,	'u',            0	},  /* Cust stator resist.  */
     { "IDA",0x2042,	0x35,	'u',            0	},  /* Idw  */
     { "LFA",0x2042,	0x3f,	'u',            0	},  /* Lfw  */
     { "TRA",0x2042,	0x44,	'u',            0	},  /* Rotor time constant  */
    { "FRSS",0x2042,	0x50,	'u',            0	},  /* Nominal freq sync.  */
     { "SFR",0x2001,	0x3,	'u',            0	},  /* Switching freq.  */
     { "CLI",0x203E,	0x2,	'u',            0	},  /* Current Limitation  */
     { "SFT",0x2001,	0x2,	'u',   en_P74_SFT	},  /* Switch. freq type  */
     { "NRD",0x2001,	0x8,	'u',   en_P74_N_Y	},  /* Noise reduction  */
     { "BOA",0x206D,	0xb,	'u',   en_P74_BOA	},  /* Boost activation  */
     { "SVL",0x2060,	0x2,	'u',   en_P74_N_Y	},  /* Motor surge limit.  */
     { "SOP",0x2060,	0x3,	'u',   en_P74_SOP	},  /* Volt surge limit. opt  */
     { "VBR",0x206F,	0x2,	'u',            0	},  /* Braking level  */
     { "LBA",0x2071,	0x2,	'u',   en_P74_N_Y	},  /* Load sharing  */
     { "LBC",0x2071,	0x3,	'u',            0	},  /* Load correction  */
    { "LBC1",0x2071,	0x4,	'u',            0	},  /* Correction min spd  */
    { "LBC2",0x2071,	0x5,	'u',            0	},  /* Correction max spd  */
    { "LBC3",0x2071,	0x6,	'u',            0	},  /* Torque offset  */
     { "LBF",0x2071,	0x7,	'u',            0	},  /* Sharing filter  */
     { "FFM",0x2001,	0x1f,	'u',   en_P74_FFM	},  /* Fan mode  */
     { "TCC",0x2051,	0x2,	'u',   en_P74_TCC	},  /* 2/3 wire control  */
     { "TCT",0x2051,	0x3,	'u',   en_P74_TCT	},  /* 2 wire type  */
     { "RRS",0x2051,	0x6,	'u', en_P74_PSLIN	},  /* Reverse assign.  */
     { "BSP",0x2001,	0x7,	'u',   en_P74_BSP	},  /* Reference template  */
    { "AI1T",0x200E,	0x3,	'u',  en_P74_AIOT	},  /* AI1 Type  */
    { "UIL1",0x200E,	0xd,	'u',            0	},  /* AI1 min value  */
    { "UIH1",0x200E,	0x17,	'u',            0	},  /* AI1 max value  */
    { "AI1F",0x200E,	0x35,	'u',            0	},  /* AI1 filter  */
    { "AI1E",0x200E,	0x3f,	'u',            0	},  /* AI1 Interm. point X  */
    { "AI1S",0x200E,	0x49,	'u',            0	},  /* AI1 Interm. point Y  */
    { "AI1L",0x200E,	0x53,	'u',  en_P74_AIOL	},  /* AI1 range  */
    { "AI2T",0x200E,	0x4,	'u',  en_P74_AIOT	},  /* AI2 Type  */
    { "UIL2",0x200E,	0xe,	'u',            0	},  /* AI2 min value  */
    { "UIH2",0x200E,	0x18,	'u',            0	},  /* AI2 max value  */
    { "AI2F",0x200E,	0x36,	'u',            0	},  /* AI2 filter  */
    { "AI2L",0x200E,	0x54,	'u',  en_P74_AIOL	},  /* AI2 range  */
    { "AI2E",0x200E,	0x40,	'u',            0	},  /* AI2 Interm. point X  */
    { "AI2S",0x200E,	0x4a,	'u',            0	},  /* AI2 Interm. point Y  */
    { "AI3T",0x200E,	0x5,	'u',  en_P74_AIOT	},  /* AI3 Type  */
    { "CRL3",0x200E,	0x23,	'u',            0	},  /* AI3 min. value  */
    { "CRH3",0x200E,	0x2d,	'u',            0	},  /* AI3 max. value  */
    { "AI3F",0x200E,	0x37,	'u',            0	},  /* AI3 filter  */
    { "AI3L",0x200E,	0x55,	'u',  en_P74_AIOL	},  /* AI3 range  */
    { "AI3E",0x200E,	0x41,	'u',            0	},  /* AI3 Interm. point X  */
    { "AI3S",0x200E,	0x4b,	'u',            0	},  /* AI3 Interm. point Y  */
     { "PIL",0x2067,	0x3,	'u',            0	},  /* RP min value  */
     { "PFR",0x2067,	0x4,	'u',            0	},  /* RP max value  */
     { "PFI",0x2067,	0x5,	'u',            0	},  /* RP filter  */
     { "LO1",0x2014,	0xa,	'u',   en_P74_PSL	},  /* LO1 assignment  */
    { "LO1D",0x200C,	0x32,	'u',            0	},  /* LO1 delay time  */
    { "LO1S",0x200C,	0xa,	'u',   en_P74_NPL	},  /* LO1 active at  */
    { "LO1H",0x200C,	0x1e,	'u',            0	},  /* LO1 holding time  */
     { "DO1",0x2014,	0x20,	'u',   en_P74_PSL	},  /* DO1 assignment  */
    { "DO1D",0x200C,	0x52,	'u',            0	},  /* DO1 delay time  */
    { "DO1H",0x200C,	0x48,	'u',            0	},  /* DO1 holding time  */
    { "DO1S",0x200C,	0x3e,	'u',   en_P74_NPL	},  /* DO1 active at  */
     { "AO1",0x2014,	0x16,	'u',   en_P74_PSA	},  /* AO1 assignment  */
    { "AO1T",0x2010,	0x2,	'u',  en_P74_AIOT	},  /* AO1 Type  */
    { "AOL1",0x2010,	0x2a,	'u',            0	},  /* AO1 min output  */
    { "AOH1",0x2010,	0x34,	'u',            0	},  /* AO1 max output  */
    { "UOL1",0x2010,	0x16,	'u',            0	},  /* AO1 min Output  */
    { "UOH1",0x2010,	0x20,	'u',            0	},  /* AO1 max Output  */
    { "ASL1",0x2010,	0x3e,	'u',            0	},  /* Scaling AO1 min  */
    { "ASH1",0x2010,	0x48,	'u',            0	},  /* Scaling AO1 max  */
    { "AO1F",0x2010,	0xc,	'u',            0	},  /* AO1 Filter  */
     { "FR1",0x2036,	0xe,	'u',   en_P74_PSA	},  /* Ref.1 channel  */
     { "RIN",0x2001,	0x9,	'u',   en_P74_N_Y	},  /* RV Inhibition  */
    { "CHCF",0x2036,	0x2,	'u',  en_P74_CHCF	},  /* Profile  */
     { "CCS",0x2036,	0x16,	'u', en_P74_PSLIN	},  /* Cmd switching  */
     { "CD1",0x2036,	0x18,	'u',   en_P74_CDX	},  /* Cmd channel 1  */
     { "CD2",0x2036,	0x19,	'u',   en_P74_CDX	},  /* Cmd channel 2  */
     { "RFC",0x2036,	0xc,	'u', en_P74_PSLIN	},  /* Ref. 2 switching  */
     { "FR2",0x2036,	0xf,	'u',   en_P74_PSA	},  /* Ref.2 channel  */
     { "COP",0x2036,	0x3,	'u',   en_P74_COP	},  /* Copy channel 1<>2  */
     { "FN1",0x2069,	0x2,	'u', en_P74_CSLFN	},  /* F1 key assignment  */
     { "FN2",0x2069,	0x3,	'u', en_P74_CSLFN	},  /* F2 key assignment  */
     { "FN3",0x2069,	0x4,	'u', en_P74_CSLFN	},  /* F3 key assignment  */
     { "FN4",0x2069,	0x5,	'u', en_P74_CSLFN	},  /* F4 key assignment  */
     { "BMP",0x2069,	0x1e,	'u',   en_P74_BMP	},  /* HMI cmd.  */
     { "RCB",0x2036,	0xd,	'u', en_P74_PSLIN	},  /* Ref 1B switching  */
    { "FR1B",0x2036,	0x10,	'u',   en_P74_PSA	},  /* Ref.1B channel  */
     { "SA2",0x2058,	0x2,	'u',   en_P74_PSA	},  /* Summing ref. 2  */
     { "SA3",0x2058,	0x3,	'u',   en_P74_PSA	},  /* Summing ref. 3  */
     { "DA2",0x2058,	0xc,	'u',   en_P74_PSA	},  /* Assignment of substract setpoint 2  */
     { "DA3",0x2058,	0xd,	'u',   en_P74_PSA	},  /* Assignment of substract setpoint 3  */
     { "MA2",0x2058,	0x16,	'u',   en_P74_PSA	},  /* Multiplier ref. 2  */
     { "MA3",0x2058,	0x17,	'u',   en_P74_PSA	},  /* Multiplier ref. 3  */
     { "RPT",0x203C,	0x5,	'u',   en_P74_RPT	},  /* Ramp type  */
     { "INR",0x203C,	0x15,	'u',   en_P74_INR	},  /* Ramp increment  */
     { "ACC",0x203C,	0x2,	'u',            0	},  /* Acceleration  */
     { "DEC",0x203C,	0x3,	'u',            0	},  /* Deceleration  */
     { "TA1",0x203C,	0x6,	'u',            0	},  /* Begin Acc round  */
     { "TA2",0x203C,	0x7,	'u',            0	},  /* End Acc round  */
     { "TA3",0x203C,	0x8,	'u',            0	},  /* Begin Dec round  */
     { "TA4",0x203C,	0x9,	'u',            0	},  /* End Dec round  */
     { "FRT",0x203C,	0xc,	'u',            0	},  /* Ramp 2 threshold  */
     { "RPS",0x203C,	0xb,	'u', en_P74_PSLIN	},  /* Ramp switch assignment  */
     { "AC2",0x203C,	0xd,	'u',            0	},  /* Acceleration 2  */
     { "DE2",0x203C,	0xe,	'u',            0	},  /* Deceleration 2  */
     { "BRA",0x203C,	0x4,	'u',   en_P74_BRA	},  /* Dec ramp adapt.  */
     { "STT",0x2052,	0x2,	'u',   en_P74_STT	},  /* Type of stop  */
     { "FFT",0x2052,	0x15,	'u',            0	},  /* Freewheel stop Thd  */
     { "NST",0x2052,	0x3,	'u', en_P74_PSLIN	},  /* Freewheel stop ass.  */
     { "FST",0x2052,	0x5,	'u', en_P74_PSLIN	},  /* Fast stop assign.  */
     { "DCF",0x2052,	0x1f,	'u',            0	},  /* Ramp divider  */
     { "DCI",0x2052,	0x4,	'u', en_P74_PSLIN	},  /* DC injection assign.  */
     { "IDC",0x2052,	0xb,	'u',            0	},  /* DC inject. level 1  */
     { "TDI",0x2052,	0xe,	'u',            0	},  /* DC injection time 1  */
    { "IDC2",0x2052,	0xd,	'u',            0	},  /* DC inject. level 2  */
     { "TDC",0x2052,	0xc,	'u',            0	},  /* DC injection time 2  */
     { "ADC",0x204A,	0x2,	'u',   en_P74_ADC	},  /* Auto DC injection  */
    { "SDC1",0x204A,	0x4,	'u',            0	},  /* Auto DC inj. level 1  */
    { "TDC1",0x204A,	0x3,	'u',            0	},  /* Auto DC inj. time 1  */
    { "SDC2",0x204A,	0x6,	'u',            0	},  /* Auto DC inj. level 2  */
    { "TDC2",0x204A,	0x5,	'u',            0	},  /* Auto DC inj. time 2  */
     { "JOG",0x2051,	0xb,	'u', en_P74_PSLIN	},  /* JOG  */
     { "JGF",0x2051,	0xc,	'u',            0	},  /* Jog frequency  */
     { "JGT",0x2051,	0xd,	'u',            0	},  /* Jog delay  */
     { "PS2",0x2054,	0x2,	'u', en_P74_PSLIN	},  /* 2 preset speeds  */
     { "PS4",0x2054,	0x3,	'u', en_P74_PSLIN	},  /* 4 preset speeds  */
     { "PS8",0x2054,	0x4,	'u', en_P74_PSLIN	},  /* 8 preset speeds  */
    { "PS16",0x2054,	0x5,	'u', en_P74_PSLIN	},  /* 16 preset speeds  */
     { "SP2",0x2054,	0xb,	'u',            0	},  /* Preset speed 2  */
     { "SP3",0x2054,	0xc,	'u',            0	},  /* Preset speed 3  */
     { "SP4",0x2054,	0xd,	'u',            0	},  /* Preset speed 4  */
     { "SP5",0x2054,	0xe,	'u',            0	},  /* Preset speed 5  */
     { "SP6",0x2054,	0xf,	'u',            0	},  /* Preset speed 6  */
     { "SP7",0x2054,	0x10,	'u',            0	},  /* Preset speed 7  */
     { "SP8",0x2054,	0x11,	'u',            0	},  /* Preset speed 8  */
     { "SP9",0x2054,	0x12,	'u',            0	},  /* Preset speed 9  */
    { "SP10",0x2054,	0x13,	'u',            0	},  /* Preset speed 10  */
    { "SP11",0x2054,	0x14,	'u',            0	},  /* Preset speed 11  */
    { "SP12",0x2054,	0x15,	'u',            0	},  /* Preset speed 12  */
    { "SP13",0x2054,	0x16,	'u',            0	},  /* Preset speed 13  */
    { "SP14",0x2054,	0x17,	'u',            0	},  /* Preset speed 14  */
    { "SP15",0x2054,	0x18,	'u',            0	},  /* Preset speed 15  */
    { "SP16",0x2054,	0x19,	'u',            0	},  /* Preset speed 16  */
     { "USP",0x2055,	0x2,	'u', en_P74_PSLIN	},  /* #NAME?  */
     { "DSP",0x2055,	0x3,	'u', en_P74_PSLIN	},  /* #NAME?  */
     { "STR",0x2055,	0x4,	'u',   en_P74_STR	},  /* Reference saved  */
     { "USI",0x2055,	0x15,	'u', en_P74_PSLIN	},  /* #NAME?  */
     { "DSI",0x2055,	0x16,	'u', en_P74_PSLIN	},  /* #NAME?  */
     { "SRP",0x2055,	0x6,	'u',            0	},  /* +/-Speed limitation  */
     { "SPM",0x2036,	0x5c,	'u', en_P74_PSLIN	},  /* Ref. memo ass.  */
     { "FLU",0x206D,	0x3,	'u',   en_P74_FLU	},  /* Motor fluxing  */
     { "FLI",0x206D,	0x2,	'u', en_P74_PSLIN	},  /* Fluxing assignment  */
     { "AST",0x206D,	0x1a,	'u',   en_P74_AST	},  /* Auto angle setting type  */
     { "HFI",0x207E,	0x1,	'u',   en_P74_N_Y	},  /* Activation of HF injection in RUN  */
     { "HIR",0x207E,	0x3,	'u',            0	},  /* HF current level  */
     { "SPB",0x207E,	0x4,	'u',            0	},  /* HF pll bandwidth  */
     { "ILR",0x207E,	0x6,	'u',            0	},  /* Injection level align.  */
     { "SIR",0x207E,	0x7,	'u',            0	},  /* Boost level align.  */
     { "MCR",0x207E,	0x8,	'u',            0	},  /* PSI align curr. max  */
     { "PEC",0x207E,	0x9,	'u',            0	},  /* Angle error Comp.  */
     { "BLC",0x2046,	0x2,	'u',   en_P74_BLC	},  /* Brake assignment  */
     { "BST",0x2046,	0x9,	'u',   en_P74_BST	},  /* Movement type  */
     { "BCI",0x2046,	0xa,	'u', en_P74_PSLIN	},  /* Brake contact  */
     { "BIP",0x2046,	0x8,	'u',   en_P74_BIP	},  /* Brake impulse  */
     { "IBR",0x2046,	0x7,	'u',            0	},  /* Brake release I FW  */
     { "IRD",0x2046,	0xc,	'u',            0	},  /* Brake release I Rev  */
     { "BRT",0x2046,	0x5,	'u',            0	},  /* Brake Release time  */
     { "BIR",0x2046,	0xd,	's',            0	},  /* Brake release freq  */
     { "BEN",0x2046,	0x4,	's',            0	},  /* Brake engage freq  */
     { "TBE",0x2046,	0xb,	'u',            0	},  /* Brake engage delay  */
     { "BET",0x2046,	0x6,	'u',            0	},  /* Brake engage time  */
     { "BED",0x2046,	0x15,	'u',   en_P74_N_Y	},  /* Engage at reversal  */
     { "JDC",0x2046,	0xe,	's',            0	},  /* Jump at reversal  */
     { "TTR",0x2046,	0x17,	'u',            0	},  /* Time to restart  */
     { "BRH",0x2046,	0x33,	'u',            0	},  /* Brake configuration  */
     { "BRR",0x2046,	0x10,	'u',            0	},  /* Current ramp time  */
     { "PES",0x2046,	0x47,	'u',   en_P74_PSA	},  /* Weight sensor ass.  */
     { "LP1",0x2046,	0x48,	'u',            0	},  /* Point 1 X  */
     { "CP1",0x2046,	0x49,	's',            0	},  /* Point 1Y  */
     { "LP2",0x2046,	0x4a,	'u',            0	},  /* Point 2 X  */
     { "CP2",0x2046,	0x4b,	's',            0	},  /* Point 2Y  */
    { "IBRA",0x2046,	0x4c,	'u',            0	},  /* Ibr 4-20 mA loss  */
     { "HSO",0x205D,	0x2,	'u',   en_P74_HSO	},  /* High speed hoisting  */
     { "COF",0x205D,	0x4,	'u',            0	},  /* Motor speed coeff.  */
     { "COR",0x205D,	0x5,	'u',            0	},  /* Gen. speed coeff  */
     { "TOS",0x205D,	0x8,	'u',            0	},  /* Load measuring tm.  */
     { "OSP",0x205D,	0x6,	'u',            0	},  /* Measurement spd  */
     { "CLO",0x205D,	0x3,	'u',            0	},  /* High speed I Limit  */
     { "SCL",0x205D,	0x7,	'u',            0	},  /* I Limit. frequency  */
     { "RSD",0x205D,	0x16,	'u',   en_P74_RSD	},  /* Rope slack config.  */
    { "RSTL",0x205D,	0x17,	'u',            0	},  /* Rope slack trq level  */
     { "PIF",0x2059,	0x2,	'u',   en_P74_PSA	},  /* PID feedback ass.  */
    { "PIF1",0x2059,	0x5,	'u',            0	},  /* Min PID feedback  */
    { "PIF2",0x2059,	0x6,	'u',            0	},  /* Max PID feedback  */
    { "PIP1",0x2059,	0x7,	'u',            0	},  /* Min PID reference  */
    { "PIP2",0x2059,	0x8,	'u',            0	},  /* Max PID reference  */
     { "PII",0x2059,	0x9,	'u',   en_P74_N_Y	},  /* Act. internal PID ref.  */
     { "RPI",0x2059,	0x15,	'u',            0	},  /* Internal PID ref.  */
     { "RPG",0x2059,	0x2a,	'u',            0	},  /* PID prop. gain  */
     { "RIG",0x2059,	0x2b,	'u',            0	},  /* PID integral gain  */
     { "RDG",0x2059,	0x2c,	'u',            0	},  /* PID derivative gain  */
     { "PRP",0x2059,	0x55,	'u',            0	},  /* PID ramp  */
     { "PIC",0x2059,	0x29,	'u',   en_P74_N_Y	},  /* PID correct. reverse  */
     { "POL",0x2059,	0x35,	's',            0	},  /* Min PID output  */
     { "POH",0x2059,	0x36,	's',            0	},  /* Max PID output  */
     { "PAL",0x2059,	0x3e,	'u',            0	},  /* Min fbk alarm  */
     { "PAH",0x2059,	0x3f,	'u',            0	},  /* Max fbk alarm  */
     { "PER",0x2059,	0x40,	'u',            0	},  /* PID error Alarm  */
     { "PIS",0x2059,	0x2d,	'u', en_P74_PSLIN	},  /* PID integral reset  */
     { "FPI",0x2059,	0x33,	'u',   en_P74_PSA	},  /* Speed ref. assign.  */
     { "PSR",0x2059,	0x34,	'u',            0	},  /* Speed input %  */
     { "PAU",0x2059,	0x47,	'u', en_P74_PSLIN	},  /* Auto/Manual assign.  */
     { "PIM",0x2059,	0x37,	'u',   en_P74_PSA	},  /* Manual reference  */
     { "TLS",0x2057,	0x2,	'u',            0	},  /* Low speed time out  */
     { "RSL",0x2059,	0x3d,	'u',            0	},  /* PID wake up thresh.  */
     { "PR2",0x2059,	0xa,	'u', en_P74_PSLIN	},  /* 2 preset PID ref.  */
     { "PR4",0x2059,	0xb,	'u', en_P74_PSLIN	},  /* 4 preset PID ref.  */
     { "RP2",0x2059,	0x16,	'u',            0	},  /* Preset ref. PID 2  */
     { "RP3",0x2059,	0x17,	'u',            0	},  /* Preset ref. PID 3  */
     { "RP4",0x2059,	0x18,	'u',            0	},  /* Preset ref. PID 4  */
     { "TLA",0x203E,	0xb,	'u', en_P74_PSLIN	},  /* Torque limit. activ.  */
    { "INTP",0x203E,	0x10,	'u', en_P74_INCPER	},  /* Torque limitation unit  */
    { "TLIM",0x203E,	0xc,	'u',            0	},  /* Motoring torque lim  */
    { "TLIG",0x203E,	0xd,	'u',            0	},  /* Gen. torque lim  */
     { "TAA",0x203E,	0xf,	'u',   en_P74_PSA	},  /* Torque ref. assign.  */
     { "TLC",0x203E,	0xe,	'u', en_P74_PSLIN	},  /* Analog limit. act.  */
     { "LC2",0x203E,	0x3,	'u', en_P74_PSLIN	},  /* Current limit 2  */
     { "CL2",0x203E,	0x4,	'u',            0	},  /* I Limit. 2 value  */
     { "LLC",0x206A,	0x3,	'u', en_P74_CSLOUT	},  /* Line contactor ass.  */
     { "LES",0x206A,	0x2,	'u', en_P74_PSLIN	},  /* Drive lock  */
     { "LCT",0x206A,	0x4,	'u',            0	},  /* Mains V. time out  */
     { "OCC",0x2065,	0x5,	'u', en_P74_CSLOUT	},  /* Out. contactor ass.  */
     { "RCA",0x2065,	0x4,	'u', en_P74_PSLIN	},  /* Output contact. fdbk  */
     { "DBS",0x2065,	0x2,	'u',            0	},  /* Delay to motor run  */
     { "DAS",0x2065,	0x3,	'u',            0	},  /* Delay to open cont.  */
     { "SAF",0x205F,	0x2,	'u', en_P74_PSLIN	},  /* Stop FW limit sw.  */
     { "SAR",0x205F,	0x3,	'u', en_P74_PSLIN	},  /* Stop RV  limit sw.  */
     { "SAL",0x205F,	0x9,	'u',   en_P74_L_H	},  /* Stop limit config.  */
     { "DAF",0x205F,	0x4,	'u', en_P74_PSLIN	},  /* Assignment of slowdown forward  */
     { "DAR",0x205F,	0x5,	'u', en_P74_PSLIN	},  /* Assignment of slowdown reverse  */
     { "DAL",0x205F,	0xa,	'u',   en_P74_L_H	},  /* Slowdown limit cfg.  */
     { "CLS",0x205F,	0x8,	'u', en_P74_PSLIN	},  /* Disable limit sw.  */
     { "PAS",0x205F,	0x7,	'u',   en_P74_STT	},  /* Stop type  */
     { "DSF",0x205F,	0x6,	'u',   en_P74_DSF	},  /* Deceleration type  */
     { "STD",0x205F,	0x16,	'u',            0	},  /* Stop distance  */
     { "NLS",0x205F,	0xc,	'u',            0	},  /* Rated linear speed  */
     { "SFD",0x205F,	0x17,	'u',            0	},  /* Stop corrector  */
     { "CHM",0x2032,	0x1a,	'u',   en_P74_N_Y	},  /* Multimotors  */
    { "CNF1",0x2032,	0x16,	'u', en_P74_PSLIN	},  /* 2 Configurations  */
    { "CNF2",0x2032,	0x17,	'u', en_P74_PSLIN	},  /* 3 Configurations  */
     { "TUL",0x2042,	0xb,	'u', en_P74_PSLIN	},  /* Auto-tune assign.  */
     { "TRC",0x205C,	0x2,	'u', en_P74_PSLIN	},  /* Yarn control  */
     { "TRH",0x205C,	0x3,	'u',            0	},  /* Traverse frequency high  */
     { "TRL",0x205C,	0x4,	'u',            0	},  /* Traverse frequency low  */
     { "QSH",0x205C,	0x5,	'u',            0	},  /* Quick step High  */
     { "QSL",0x205C,	0x6,	'u',            0	},  /* Quick step Low  */
     { "TUP",0x205C,	0x7,	'u',            0	},  /* Traverse ctrl. accel.  */
     { "TDN",0x205C,	0x8,	'u',            0	},  /* Traverse ctrl. decel  */
     { "TBO",0x205C,	0x9,	'u',            0	},  /* Reel time  */
     { "EBO",0x205C,	0xe,	'u', en_P74_CSLOUT	},  /* End reel  */
     { "SNC",0x205C,	0xd,	'u', en_P74_PSLIN	},  /* Counter wobble  */
     { "TSY",0x205C,	0xf,	'u', en_P74_CSLOUT	},  /* Sync. wobble  */
     { "DTF",0x205C,	0xc,	'u',            0	},  /* Decrease ref. speed  */
     { "RTR",0x205C,	0xb,	'u', en_P74_PSLIN	},  /* Init. traverse ctrl  */
    { "PTCL",0x2066,	0x4,	'u',  en_P74_PTCX	},  /* LI6 = PTC probe  */
     { "RSF",0x2029,	0x19,	'u', en_P74_PSLIN	},  /* Fault reset  */
      { "RP",0x2029,	0x1d,	'u',   en_P74_N_Y	},  /* Product reset  */
     { "RPA",0x2029,	0x1e,	'u', en_P74_PSLIN	},  /* Product reset assig.  */
     { "ATR",0x2029,	0x17,	'u',   en_P74_N_Y	},  /* Automatic restart  */
     { "TAR",0x2029,	0x18,	'u',   en_P74_DUR	},  /* Max. restart time  */
     { "FLR",0x2001,	0xb,	'u',   en_P74_N_Y	},  /* Catch on the fly  */
     { "THT",0x2042,	0xd,	'u',   en_P74_THT	},  /* Motor protect. type  */
     { "TTD",0x2050,	0x3,	'u',            0	},  /* Motor therm. level  */
    { "TTD2",0x2050,	0x7,	'u',            0	},  /* Motor2 therm. level  */
    { "TTD3",0x2050,	0x8,	'u',            0	},  /* Motor3 therm. level  */
     { "OLL",0x2028,	0xa,	'u',  en_P74_ECFG	},  /* Overload fault mgt  */
     { "OPL",0x2042,	0xc,	'u',   en_P74_OPL	},  /* Output Phase Loss  */
     { "ODT",0x2028,	0x52,	'u',            0	},  /* OutPh time detect  */
     { "IPL",0x2028,	0x3,	'u',  en_P74_ECFG	},  /* Input phase loss  */
     { "OHL",0x2028,	0x9,	'u',  en_P74_ECFG	},  /* Overtemp fault mgt  */
     { "THA",0x2050,	0xa,	'u',            0	},  /* Drv therm. state al  */
     { "SAT",0x2050,	0x16,	'u',   en_P74_N_Y	},  /* Thermal alarm stop  */
     { "ETF",0x2029,	0x20,	'u', en_P74_PSLIN	},  /* External fault ass.  */
     { "LET",0x2028,	0x5b,	'u',   en_P74_L_H	},  /* External fault config  */
     { "EPL",0x2028,	0x7,	'u',  en_P74_ECFG	},  /* External fault mgt  */
     { "USB",0x206C,	0x4,	'u',   en_P74_USB	},  /* UnderV. fault mgt  */
    { "URES",0x206C,	0x2,	'u',  en_P74_URES	},  /* Rated mains voltage  */
     { "USL",0x206C,	0x3,	'u',            0	},  /* Undervoltage level  */
     { "UST",0x206C,	0x5,	'u',            0	},  /* Undervolt. time out  */
     { "STP",0x2028,	0x5,	'u',   en_P74_STP	},  /* UnderV. prevention  */
     { "TSM",0x206C,	0xe,	'u',            0	},  /* UnderV. restart tm  */
     { "UPL",0x206C,	0xc,	'u',            0	},  /* Prevention level  */
     { "STM",0x206C,	0xf,	'u',            0	},  /* Max stop time  */
     { "TBS",0x206C,	0xd,	'u',            0	},  /* DC bus maintain tm  */
    { "STRT",0x2001,	0xd,	'u',   en_P74_N_Y	},  /* IGBT test  */
    { "LFL3",0x2028,	0xe,	'u',  en_P74_ECFG	},  /* AI3 4-20mA loss  */
     { "INH",0x2029,	0x1a,	'u', en_P74_PSLIN	},  /* Fault inhibit assign.  */
     { "CLL",0x2028,	0x10,	'u',  en_P74_ECFG	},  /* Network fault mgt  */
     { "COL",0x2028,	0xc,	'u',  en_P74_ECFG	},  /* CANopen fault mgt  */
     { "SLL",0x2028,	0xb,	'u',  en_P74_ECFG	},  /* Modbus fault mgt  */
     { "SSB",0x203E,	0x29,	'u',  en_P74_ECFG	},  /* Trq/I limit. stop  */
     { "STO",0x203E,	0x2a,	'u',            0	},  /* Trq/I limit. time out  */
     { "TNL",0x2028,	0xd,	'u',  en_P74_ECFG	},  /* Autotune fault mgt  */
     { "PPI",0x206E,	0x2,	'u',            0	},  /* Pairing password  */
     { "LFF",0x2028,	0x51,	'u',            0	},  /* Fallback speed  */
    { "AIC2",0x2016,	0x55,	'u',   en_P74_PSA	},  /* AI net. Channel  */
     { "FQF",0x2074,	0x2,	'u',   en_P74_N_Y	},  /* Frequency meter  */
     { "FQC",0x2074,	0x3,	'u',            0	},  /* Pulse scal. divisor  */
     { "FQA",0x2074,	0x5,	'u',            0	},  /* Overspd. pulse thd.  */
     { "TDS",0x2074,	0x6,	'u',            0	},  /* Pulse overspd delay  */
     { "FDT",0x2074,	0x7,	'u',            0	},  /* Level fr. pulse ctrl  */
     { "FQT",0x2074,	0x8,	'u',            0	},  /* Pulse thd. wo Run  */
     { "TQB",0x2074,	0x9,	'u',            0	},  /* Pulse wo Run delay  */
     { "TLD",0x205D,	0xd,	's',            0	},  /* Dynamic load time  */
     { "DLD",0x205D,	0xc,	'u',            0	},  /* Dyn. load threshold  */
     { "DLB",0x205D,	0xe,	'u',  en_P74_ECFG	},  /* Dyn. load Mgt.  */
    { "NCA1",0x2061,	0x16,	'u',            0	},  /* Communication scanner, address of write word 1  */
    { "NCA2",0x2061,	0x17,	'u',            0	},  /* Communication scanner, address of write word 2  */
    { "NCA3",0x2061,	0x18,	'u',            0	},  /* Communication scanner, address of write word 3  */
    { "NCA4",0x2061,	0x19,	'u',            0	},  /* Communication scanner, address of write word 4  */
    { "NCA5",0x2061,	0x1a,	'u',            0	},  /* Communication scanner, address of write word 5  */
    { "NCA6",0x2061,	0x1b,	'u',            0	},  /* Communication scanner, address of write word 6  */
    { "NCA7",0x2061,	0x1c,	'u',            0	},  /* Communication scanner, address of write word 7  */
    { "NCA8",0x2061,	0x1d,	'u',            0	},  /* Communication scanner, address of write word 8  */
    { "NMA1",0x2061,	0x2,	'u',            0	},  /* Communication scanner, address of read word 1  */
    { "NMA2",0x2061,	0x3,	'u',            0	},  /* Communication scanner, address of read word 2  */
    { "NMA3",0x2061,	0x4,	'u',            0	},  /* Communication scanner, address of read word 3  */
    { "NMA4",0x2061,	0x5,	'u',            0	},  /* Communication scanner, address of read word 4  */
    { "NMA5",0x2061,	0x6,	'u',            0	},  /* Communication scanner, address of read word 5  */
    { "NMA6",0x2061,	0x7,	'u',            0	},  /* Communication scanner, address of read word 6  */
    { "NMA7",0x2061,	0x8,	'u',            0	},  /* Communication scanner, address of read word 7  */
    { "NMA8",0x2061,	0x9,	'u',            0	},  /* Communication scanner, address of read word 8  */
    { "OMA1",0x207C,	0x2,	'u',            0	},  /* Scan. IN1 address  */
    { "OMA2",0x207C,	0x3,	'u',            0	},  /* Scan. IN2 address  */
    { "OMA3",0x207C,	0x4,	'u',            0	},  /* Scan. IN3 address  */
    { "OMA4",0x207C,	0x5,	'u',            0	},  /* Scan. IN4 address  */
    { "OMA5",0x207C,	0x6,	'u',            0	},  /* Scan. IN5 address  */
    { "OMA6",0x207C,	0x7,	'u',            0	},  /* Scan. IN6 address  */
    { "OCA1",0x207C,	0x16,	'u',            0	},  /* Scan.Out1 address  */
    { "OCA2",0x207C,	0x17,	'u',            0	},  /* Scan.Out2 address  */
    { "OCA3",0x207C,	0x18,	'u',            0	},  /* Scan.Out3 address  */
    { "OCA4",0x207C,	0x19,	'u',            0	},  /* Scan.Out4 address  */
    { "OCA5",0x207C,	0x1a,	'u',            0	},  /* Scan.Out5 address  */
    { "OCA6",0x207C,	0x1b,	'u',            0	},  /* Scan.Out6 address  */
     { "ADD",0x201E,	0x2,	'u',            0	},  /* Modbus Address  */
    { "AMOC",0x2024,	0x34,	'u',            0	},  /* Modbus add Com.C.  */
     { "TBR",0x201E,	0x4,	'u',   en_P74_TBR	},  /* Modbus baud rate  */
     { "TFO",0x201E,	0x5,	'u',   en_P74_FOR	},  /* Modbus format  */
     { "TTO",0x201E,	0x6,	'u',            0	},  /* Modbus time out  */
    { "ADCO",0x201E,	0x34,	'u',            0	},  /* CANopen address  */
    { "BDCO",0x201E,	0x36,	'u',  en_P74_BDCO	},  /* CANopen bit rate  */
    { "ERCO",0x201E,	0x39,	'u',            0	},  /* Error code  */
     { "FLO",0x2036,	0x20,	'u', en_P74_PSLIN	},  /* Forced local assign.  */
    { "FLOC",0x2036,	0x21,	'u',   en_P74_PSA	},  /* Forced local Ref.  */
    { "FLOT",0x2036,	0x22,	'u',            0	},  /* Time-out forc. local  */
    { "ADRC",0x2024,	0x2,	'u',            0	},  /* Address  */
    { "PRFL",0x2024,	0x42,	'u',  en_P74_PRFL	},  /* PPO profile used  */
    { "DPMA",0x2024,	0x43,	'u',  en_P74_DPMA	},  /* Active Master: 1 or 2  */
    { "CIOA",0x2024,	0x44,	'u',  en_P74_CIOA	},  /* Configured DeviceNet Assembly  */
    { "CIO2",0x2024,	0x45,	'u',  en_P74_CIOA	},  /* Configured Ethenet/IP Assembly  */
    { "BTUA",0x2024,	0x47,	'u', en_P74_ONOFF	},  /* Bluetooth activation  */
    { "BTUC",0x2024,	0x48,	'u', en_P74_PSLIN	},  /* Bluetooth Visibility Condition  */
    { "BTPI",0x2024,	0x4a,	'u',            0	},  /* Bluetooth PIN code  */
     { "BDR",0x2024,	0x4,	'u',   en_P74_TBR	},  /* Bit rate  */
     { "PRC",0x2024,	0x7,	'u',   en_P74_N_Y	},  /* Peer Cop node  */
     { "GLB",0x2024,	0x8,	'u',            0	},  /* Global Tx  */
    { "BDRU",0x2024,	0x3d,	'u',   en_P74_TBR	},  /* Data rate used  */
     { "L1D",0x200A,	0x2,	'u',            0	},  /* LI1 On Delay  */
      { "R1",0x2014,	0x2,	'u',   en_P74_PSL	},  /* R1 Assignment  */
      { "R2",0x2014,	0x3,	'u',   en_P74_PSL	},  /* R2 Assignment  */
     { "L2D",0x200A,	0x3,	'u',            0	},  /* LI2 On Delay  */
     { "R1D",0x200C,	0x2a,	'u',            0	},  /* R1 Delay time  */
     { "R2D",0x200C,	0x2b,	'u',            0	},  /* R2 Delay time  */
     { "L3D",0x200A,	0x4,	'u',            0	},  /* LI3 On Delay  */
     { "R1S",0x200C,	0x2,	'u',   en_P74_NPL	},  /* R1 Active at  */
     { "R2S",0x200C,	0x3,	'u',   en_P74_NPL	},  /* R2 Active at  */
     { "L4D",0x200A,	0x5,	'u',            0	},  /* LI4 On Delay  */
     { "R1H",0x200C,	0x16,	'u',            0	},  /* R1 Holding time  */
     { "R2H",0x200C,	0x17,	'u',            0	},  /* R2 Holding time  */
     { "L5D",0x200A,	0x6,	'u',            0	},  /* LI5 On Delay  */
     { "L6D",0x200A,	0x7,	'u',            0	},  /* LI6 On Delay  */
    { "LA1D",0x200A,	0x16,	'u',            0	},  /* AI1 as LI delay  */
    { "LA2D",0x200A,	0x17,	'u',            0	},  /* AI2 as LI delay  */
    { "FRHT",0x2002,	0x17,	's',            0	},  /* FRH high resolution  */
    { "SLCR",0x2002,	0x19,	'u',            0	},  /* LCR without filter  */
    { "SRFR",0x2002,	0x1a,	's',            0	},  /* RFR without filter  */
    { "SOTR",0x2002,	0x1b,	's',            0	},  /* OTR without filter  */
    { "SULN",0x2002,	0x1e,	'u',            0	},  /* ULN without filter  */
    { "SOPR",0x2002,	0x5b,	's',            0	},  /* OPR without filter  */
    { "SAI1",0x2016,	0x5c,	's',            0	},  /* AI1 physical value without filter  */
    { "SAI2",0x2016,	0x5d,	's',            0	},  /* AI2 physical value without filter  */
    { "SAI3",0x2016,	0x5e,	's',            0	},  /* AI3 physical value without filter  */
    { "SAO1",0x2016,	0x60,	's',            0	},  /* AO1 physical image without filter  */
     { "ULT",0x2072,	0xc,	'u',            0	},  /* Underload reaction time  */
     { "SRB",0x2072,	0x2,	'u',            0	},  /* Hysteresis for steady state  */
     { "UDL",0x2072,	0xd,	'u',  en_P74_ECFG	},  /* Underload behaviour  */
    { "RMUD",0x2072,	0xf,	'u',            0	},  /* Underload minimum speed detection  */
     { "LUL",0x2072,	0x10,	'u',            0	},  /* Underload level  */
     { "LUN",0x2072,	0x11,	'u',            0	},  /* Underload level at motor nominal speed  */
     { "TOL",0x2072,	0x16,	'u',            0	},  /* Overload reaction time  */
     { "ODL",0x2072,	0x17,	'u',  en_P74_ECFG	},  /* Overload behaviour  */
    { "FBST",0x2077,	0x3d,	'u',  en_P74_FBST	},  /* FB status  */
    { "FBFT",0x2077,	0x3e,	'u',  en_P74_FBFT	},  /* FB fault  */
    { "FBCD",0x2077,	0x3f,	'u',  en_P74_SPST	},  /* FB command  */
    { "FBRM",0x2077,	0x40,	'u', en_P74_PSLIN	},  /* FB start mode  */
    { "FBSM",0x2077,	0x41,	'u',  en_P74_ECFG	},  /* Stop FB stop motor  */
    { "FBDF",0x2077,	0x42,	'u',  en_P74_SPIG	},  /* FB on drive fault  */
    { "IA01",0x2077,	0x1,	'u',   en_P74_PSA	},  /*   */
    { "IA02",0x2077,	0x2,	'u',   en_P74_PSA	},  /*   */
    { "IA03",0x2077,	0x3,	'u',   en_P74_PSA	},  /*   */
    { "IA04",0x2077,	0x4,	'u',   en_P74_PSA	},  /*   */
    { "IA05",0x2077,	0x5,	'u',   en_P74_PSA	},  /*   */
    { "IA06",0x2077,	0x6,	'u',   en_P74_PSA	},  /*   */
    { "IA07",0x2077,	0x7,	'u',   en_P74_PSA	},  /*   */
    { "IA08",0x2077,	0x8,	'u',   en_P74_PSA	},  /*   */
    { "IA09",0x2077,	0x9,	'u',   en_P74_PSA	},  /*   */
    { "IA10",0x2077,	0xa,	'u',   en_P74_PSA	},  /*   */
    { "IL01",0x2077,	0x15,	'u',   en_P74_PSL	},  /*   */
    { "IL02",0x2077,	0x16,	'u',   en_P74_PSL	},  /*   */
    { "IL03",0x2077,	0x17,	'u',   en_P74_PSL	},  /*   */
    { "IL04",0x2077,	0x18,	'u',   en_P74_PSL	},  /*   */
    { "IL05",0x2077,	0x19,	'u',   en_P74_PSL	},  /*   */
    { "IL06",0x2077,	0x1a,	'u',   en_P74_PSL	},  /*   */
    { "IL07",0x2077,	0x1b,	'u',   en_P74_PSL	},  /*   */
    { "IL08",0x2077,	0x1c,	'u',   en_P74_PSL	},  /*   */
    { "IL09",0x2077,	0x1d,	'u',   en_P74_PSL	},  /*   */
    { "IL10",0x2077,	0x1e,	'u',   en_P74_PSL	},  /*   */
    { "LA01",0x2077,	0x29,	'u',            0	},  /*   */
    { "LA02",0x2077,	0x2a,	'u',            0	},  /*   */
    { "LA03",0x2077,	0x2b,	'u',            0	},  /*   */
    { "LA04",0x2077,	0x2c,	'u',            0	},  /*   */
    { "LA05",0x2077,	0x2d,	'u',            0	},  /*   */
    { "LA06",0x2077,	0x2e,	'u',            0	},  /*   */
    { "LA07",0x2077,	0x2f,	'u',            0	},  /*   */
    { "LA08",0x2077,	0x30,	'u',            0	},  /*   */
    { "M001",0x2077,	0x47,	'u',            0	},  /*   */
    { "M002",0x2077,	0x48,	'u',            0	},  /*   */
    { "M003",0x2077,	0x49,	'u',            0	},  /*   */
    { "M004",0x2077,	0x4a,	'u',            0	},  /*   */
    { "M005",0x2077,	0x4b,	'u',            0	},  /*   */
    { "M006",0x2077,	0x4c,	'u',            0	},  /*   */
    { "M007",0x2077,	0x4d,	'u',            0	},  /*   */
    { "M008",0x2077,	0x4e,	'u',            0	},  /*   */
    { "S001",0x2077,	0x51,	'u',            0	},  /* FB system word 01  */
    { "S002",0x2077,	0x52,	'u',            0	},  /* FB system word 02  */
    { "S006",0x2077,	0x56,	'u',            0	},  /* FB system word 06  */
     { "BNV",0x2077,	0x5b,	'u',            0	},  /* Prg. format version  */
     { "CTV",0x2077,	0x5c,	'u',            0	},  /* Catalogue version  */
     { "BNS",0x2077,	0x5d,	'u',            0	},  /* Program size  */
    { "BVER",0x2077,	0x5e,	'u',            0	},  /* Program version  */
    { "SLSA",0x207B,	0x1,	'u',  en_P74_SPSL	},  /*   */
     { "SLT",0x207B,	0x2,	'u',   en_P74_SLT	},  /*   */
    { "SLSP",0x207B,	0x3,	'u',            0	},  /*   */
    { "SLTT",0x207B,	0x4,	'u',            0	},  /*   */
    { "SLSS",0x207B,	0x5,	'u',  en_P74_SLSS	},  /* SLS status  */
    { "SS1A",0x207B,	0xb,	'u',  en_P74_SPSL	},  /*   */
    { "SSRT",0x207B,	0xc,	'u',            0	},  /*   */
    { "SSRU",0x207B,	0xd,	'u',  en_P74_SSRU	},  /*   */
    { "SSSL",0x207B,	0xe,	'u',            0	},  /*   */
    { "SSTT",0x207B,	0xf,	'u',            0	},  /*   */
    { "SS1S",0x207B,	0x10,	'u',  en_P74_SS1S	},  /* SS1 status  */
    { "STOA",0x207B,	0x15,	'u',  en_P74_SPSL	},  /*   */
    { "PWRM",0x207B,	0x16,	'u',  en_P74_SPSL	},  /*   */
    { "STOS",0x207B,	0x17,	'u',  en_P74_STOS	},  /* STO status  */
    { "LIDT",0x207B,	0x1f,	'u',            0	},  /*   */
    { "LIRT",0x207B,	0x20,	'u',            0	},  /*   */
    { "SFTY",0x207B,	0x2d,	'u',  en_P74_SFTY	},  /* Drive Safety status  */
	{ 0,			0,		 0, 	0	}
};


char * P74_download_index[] = {
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
