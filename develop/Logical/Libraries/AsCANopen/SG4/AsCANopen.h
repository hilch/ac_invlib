/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _ASCANOPEN_
#define _ASCANOPEN_
#ifdef __cplusplus
extern "C" 
{
#endif

#include <bur/plctypes.h>

#include <runtime.h>

#ifndef _BUR_PUBLIC
#define _BUR_PUBLIC
#endif
/* Constants */
#ifdef _REPLACE_CONST
 #define coMONITORING_TYPE_LIFEGUARDING 2U
 #define coMONITORING_TYPE_HEARTBEAT 1U
 #define coSDO_TYPE_BLOCK_TRANSFER 2U
 #define coSDO_TYPE_SEGMENTED_TRANSFER 1U
 #define coSDO_TYPE_AUTO_BEST_CASE 0U
 #define coDYN_OBJDICT_GEN_ERROR 134217763U
 #define coTRANSFER_ERROR_DEV_STATE 134217762U
 #define coTRANSFER_ERROR_LOC_CTRL 134217761U
 #define coTRANSFER_ERROR 134217760U
 #define coGENERAL_ERROR 134217728U
 #define coVAL_MAX_MIN 101253174U
 #define coVAL_TOO_LOW 101253170U
 #define coVAL_TOO_HIGH 101253169U
 #define coVAL_RANGE_EXCEED 101253168U
 #define coINV_SUBIDX 101253137U
 #define coTYPE_TOO_LOW 101122067U
 #define coTYPE_TOO_HIGH 101122066U
 #define coTYPE_NO_MATCH 101122064U
 #define coHW_ERR 101056512U
 #define coGEN_DEV_INCPTBL 100925511U
 #define coGEN_PRM_INCMPTBL 100925507U
 #define coEXCEED_PDO_LGTH 100925506U
 #define coNO_OBJ_MAP 100925505U
 #define coOBJ_NOT_EXISTING 100794368U
 #define coREAD_ONLY_OBJ 100728834U
 #define coWRITE_ONLY_OBJ 100728833U
 #define coUNSUP_OBJ_ACCESS 100728832U
 #define coOUT_OF_MEM 84148229U
 #define coCRC_ERROR 84148228U
 #define coINV_SEQ_NMBR 84148227U
 #define coINV_BLCK_SIZE 84148226U
 #define coCMD_SPEC_INV 84148225U
 #define coSDO_PROT_TIMEOUT 84148224U
 #define coTOG_NOT_ALT 84082688U
 #define coNG_NODE_MISSING 80U
 #define coINVALID_COB_ID 70U
 #define coZERO_NOT_ALLOWED 69U
 #define coNO_FREE_CHANNEL 68U
 #define coNO_SUCH_COB_ID 67U
 #define coNO_FREE_ENTRY 66U
 #define coALREADY_EXIST 65U
 #define coNO_VALID_DATA 64U
 #define coSDO_ERROR 52U
 #define coSDO_LENGTH 51U
 #define coSDO_INITIALIZE 50U
 #define coSDO_BUSY 49U
 #define coNO_SDO_CHANNEL 48U
 #define coNET_NOT_AVAILABLE 38U
 #define coTRANSFER_BUSY 37U
 #define coINVALID_NODE_ID 36U
 #define coNO_MASTER_MODE 35U
 #define coNOT_AVAILABLE 34U
 #define coGENERIC_ERROR 33U
 #define coERROR_PASSIVE 17U
 #define coBUS_OFF 16U
 #define coTIME_OUT 3U
 #define coDATA_OVERFLOW 2U
 #define coOTHER_ERROR 1U
 #define coNO_ERROR 0U
 #define coRESET_COMMUNICATION 4U
 #define coRESET_NODE 3U
 #define coENTER_PRE_OPERATIONAL 2U
 #define coSTOP_REMOTE_NODE 1U
 #define coSTART_REMOTE_NODE 0U
 #define coSTATE_CONFIGURATION_FAILED 7U
 #define coSTATE_STOPPED 6U
 #define coSTATE_MISSING 5U
 #define coSTATE_RUN 4U
 #define coSTATE_CONFIGURATION_READY 3U
 #define coSTATE_CONFIGURATION_RUNNING 2U
 #define coSTATE_WAIT_FOR_CONFIGURATION 1U
 #define coSTATE_WAIT_FOR_BOOTUP 0U
 #define coNOTAVAIL 7U
 #define coUNKNOWN 6U
 #define coOPERATIONAL 5U
 #define coSTOPPED 4U
 #define coPREOPERATIONAL 3U
 #define coRESETAPP 2U
 #define coRESET_COMM 1U
 #define coINIT 0U
 #define ERR_CANOPEN_NO_DATA_AVAILABLE 30847U
 #define ERR_CANOPEN_INVALID_DATALENGTH 30846U
 #define ERR_CANOPEN_INVALID_COBID 30845U
 #define ERR_CANOPEN_FB_CAL_ERROR 30844U
 #define ERR_CANOPEN_INVALID_NODEID 30843U
 #define ERR_CANOPEN_INVALID_POINTER 30842U
 #define ERR_CANOPEN_DEVICE_NOT_OPENED 30841U
 #define ERR_CANOPEN_DEVICE_NOT_FOUND 30840U
 #define ERR_CANopen_EMERGENCY_RECEIVED 30820U
#else
 #ifndef _GLOBAL_CONST
   #define _GLOBAL_CONST _WEAK const
 #endif
 _GLOBAL_CONST unsigned char coMONITORING_TYPE_LIFEGUARDING;
 _GLOBAL_CONST unsigned char coMONITORING_TYPE_HEARTBEAT;
 _GLOBAL_CONST unsigned char coSDO_TYPE_BLOCK_TRANSFER;
 _GLOBAL_CONST unsigned char coSDO_TYPE_SEGMENTED_TRANSFER;
 _GLOBAL_CONST unsigned char coSDO_TYPE_AUTO_BEST_CASE;
 _GLOBAL_CONST unsigned long coDYN_OBJDICT_GEN_ERROR;
 _GLOBAL_CONST unsigned long coTRANSFER_ERROR_DEV_STATE;
 _GLOBAL_CONST unsigned long coTRANSFER_ERROR_LOC_CTRL;
 _GLOBAL_CONST unsigned long coTRANSFER_ERROR;
 _GLOBAL_CONST unsigned long coGENERAL_ERROR;
 _GLOBAL_CONST unsigned long coVAL_MAX_MIN;
 _GLOBAL_CONST unsigned long coVAL_TOO_LOW;
 _GLOBAL_CONST unsigned long coVAL_TOO_HIGH;
 _GLOBAL_CONST unsigned long coVAL_RANGE_EXCEED;
 _GLOBAL_CONST unsigned long coINV_SUBIDX;
 _GLOBAL_CONST unsigned long coTYPE_TOO_LOW;
 _GLOBAL_CONST unsigned long coTYPE_TOO_HIGH;
 _GLOBAL_CONST unsigned long coTYPE_NO_MATCH;
 _GLOBAL_CONST unsigned long coHW_ERR;
 _GLOBAL_CONST unsigned long coGEN_DEV_INCPTBL;
 _GLOBAL_CONST unsigned long coGEN_PRM_INCMPTBL;
 _GLOBAL_CONST unsigned long coEXCEED_PDO_LGTH;
 _GLOBAL_CONST unsigned long coNO_OBJ_MAP;
 _GLOBAL_CONST unsigned long coOBJ_NOT_EXISTING;
 _GLOBAL_CONST unsigned long coREAD_ONLY_OBJ;
 _GLOBAL_CONST unsigned long coWRITE_ONLY_OBJ;
 _GLOBAL_CONST unsigned long coUNSUP_OBJ_ACCESS;
 _GLOBAL_CONST unsigned long coOUT_OF_MEM;
 _GLOBAL_CONST unsigned long coCRC_ERROR;
 _GLOBAL_CONST unsigned long coINV_SEQ_NMBR;
 _GLOBAL_CONST unsigned long coINV_BLCK_SIZE;
 _GLOBAL_CONST unsigned long coCMD_SPEC_INV;
 _GLOBAL_CONST unsigned long coSDO_PROT_TIMEOUT;
 _GLOBAL_CONST unsigned long coTOG_NOT_ALT;
 _GLOBAL_CONST unsigned short coNG_NODE_MISSING;
 _GLOBAL_CONST unsigned short coINVALID_COB_ID;
 _GLOBAL_CONST unsigned short coZERO_NOT_ALLOWED;
 _GLOBAL_CONST unsigned short coNO_FREE_CHANNEL;
 _GLOBAL_CONST unsigned short coNO_SUCH_COB_ID;
 _GLOBAL_CONST unsigned short coNO_FREE_ENTRY;
 _GLOBAL_CONST unsigned short coALREADY_EXIST;
 _GLOBAL_CONST unsigned short coNO_VALID_DATA;
 _GLOBAL_CONST unsigned short coSDO_ERROR;
 _GLOBAL_CONST unsigned short coSDO_LENGTH;
 _GLOBAL_CONST unsigned short coSDO_INITIALIZE;
 _GLOBAL_CONST unsigned short coSDO_BUSY;
 _GLOBAL_CONST unsigned short coNO_SDO_CHANNEL;
 _GLOBAL_CONST unsigned short coNET_NOT_AVAILABLE;
 _GLOBAL_CONST unsigned short coTRANSFER_BUSY;
 _GLOBAL_CONST unsigned short coINVALID_NODE_ID;
 _GLOBAL_CONST unsigned short coNO_MASTER_MODE;
 _GLOBAL_CONST unsigned short coNOT_AVAILABLE;
 _GLOBAL_CONST unsigned short coGENERIC_ERROR;
 _GLOBAL_CONST unsigned short coERROR_PASSIVE;
 _GLOBAL_CONST unsigned short coBUS_OFF;
 _GLOBAL_CONST unsigned short coTIME_OUT;
 _GLOBAL_CONST unsigned short coDATA_OVERFLOW;
 _GLOBAL_CONST unsigned short coOTHER_ERROR;
 _GLOBAL_CONST unsigned short coNO_ERROR;
 _GLOBAL_CONST unsigned short coRESET_COMMUNICATION;
 _GLOBAL_CONST unsigned short coRESET_NODE;
 _GLOBAL_CONST unsigned short coENTER_PRE_OPERATIONAL;
 _GLOBAL_CONST unsigned short coSTOP_REMOTE_NODE;
 _GLOBAL_CONST unsigned short coSTART_REMOTE_NODE;
 _GLOBAL_CONST unsigned short coSTATE_CONFIGURATION_FAILED;
 _GLOBAL_CONST unsigned short coSTATE_STOPPED;
 _GLOBAL_CONST unsigned short coSTATE_MISSING;
 _GLOBAL_CONST unsigned short coSTATE_RUN;
 _GLOBAL_CONST unsigned short coSTATE_CONFIGURATION_READY;
 _GLOBAL_CONST unsigned short coSTATE_CONFIGURATION_RUNNING;
 _GLOBAL_CONST unsigned short coSTATE_WAIT_FOR_CONFIGURATION;
 _GLOBAL_CONST unsigned short coSTATE_WAIT_FOR_BOOTUP;
 _GLOBAL_CONST unsigned short coNOTAVAIL;
 _GLOBAL_CONST unsigned short coUNKNOWN;
 _GLOBAL_CONST unsigned short coOPERATIONAL;
 _GLOBAL_CONST unsigned short coSTOPPED;
 _GLOBAL_CONST unsigned short coPREOPERATIONAL;
 _GLOBAL_CONST unsigned short coRESETAPP;
 _GLOBAL_CONST unsigned short coRESET_COMM;
 _GLOBAL_CONST unsigned short coINIT;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_NO_DATA_AVAILABLE;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_INVALID_DATALENGTH;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_INVALID_COBID;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_FB_CAL_ERROR;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_INVALID_NODEID;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_INVALID_POINTER;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_DEVICE_NOT_OPENED;
 _GLOBAL_CONST unsigned short ERR_CANOPEN_DEVICE_NOT_FOUND;
 _GLOBAL_CONST unsigned short ERR_CANopen_EMERGENCY_RECEIVED;
#endif




/* Datatypes and datatypes of function blocks */
typedef struct CANopenEnableCyclicSync
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	plctime synctime;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit syncmode;
} CANopenEnableCyclicSync_typ;

typedef struct CANopenGetLocalNodeID
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short nodeid;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenGetLocalNodeID_typ;

typedef struct CANopenGetKernelState
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short state;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenGetKernelState_typ;

typedef struct CANopenRegisterCOBID
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned short cobid;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
	plcbit inscribe;
} CANopenRegisterCOBID_typ;

typedef struct CANopenPDORead8
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned short cobid;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned long errorinfo;
	unsigned char data0;
	unsigned char data1;
	unsigned char data2;
	unsigned char data3;
	unsigned char data4;
	unsigned char data5;
	unsigned char data6;
	unsigned char data7;
	unsigned char datalen;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenPDORead8_typ;

typedef struct CANopenPDOWrite8
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned short cobid;
	unsigned char data0;
	unsigned char data1;
	unsigned char data2;
	unsigned char data3;
	unsigned char data4;
	unsigned char data5;
	unsigned char data6;
	unsigned char data7;
	unsigned char datalen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned long errorinfo;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenPDOWrite8_typ;

typedef struct CANopenSDORead8
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	unsigned short index;
	unsigned char subindex;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned long errorinfo;
	unsigned char data0;
	unsigned char data1;
	unsigned char data2;
	unsigned char data3;
	unsigned char data4;
	unsigned char data5;
	unsigned char data6;
	unsigned char data7;
	unsigned char datalen;
	/* VAR (analog) */
	unsigned char sdo_channel;
	signed char sdo_mode;
	signed char sdo_confirmed;
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	unsigned char databuffer[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenSDORead8_typ;

typedef struct CANopenSDOWrite8
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	unsigned short index;
	unsigned char subindex;
	unsigned char data0;
	unsigned char data1;
	unsigned char data2;
	unsigned char data3;
	unsigned char data4;
	unsigned char data5;
	unsigned char data6;
	unsigned char data7;
	unsigned char datalen;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned long errorinfo;
	/* VAR (analog) */
	unsigned char sdo_channel;
	signed char sdo_mode;
	signed char sdo_confirmed;
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	unsigned char databuffer[8];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenSDOWrite8_typ;

typedef struct CANopenGetState
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short state;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenGetState_typ;

typedef struct CANopenNMT
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	unsigned short state;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenNMT_typ;

typedef struct CANopenRecvEmcyDev
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned short emcy_err_code;
	unsigned char emcy_err_register;
	unsigned char emcy_err_field1;
	unsigned char emcy_err_field2;
	unsigned char emcy_err_field3;
	unsigned char emcy_err_field4;
	unsigned char emcy_err_field5;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenRecvEmcyDev_typ;

typedef struct CANopenRecvEmcy
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned char node;
	unsigned short emcy_err_code;
	unsigned char emcy_err_register;
	unsigned char emcy_err_field1;
	unsigned char emcy_err_field2;
	unsigned char emcy_err_field3;
	unsigned char emcy_err_field4;
	unsigned char emcy_err_field5;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenRecvEmcy_typ;

typedef struct CANopenWriteEmcy
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned short emcy_err_code;
	unsigned char emcy_err_register;
	unsigned char emcy_err_field1;
	unsigned char emcy_err_field2;
	unsigned char emcy_err_field3;
	unsigned char emcy_err_field4;
	unsigned char emcy_err_field5;
	unsigned short emcy_add_info;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenWriteEmcy_typ;

typedef struct CANopenRecvBootupDev
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
	/* VAR_OUTPUT (digital) */
	plcbit recv;
} CANopenRecvBootupDev_typ;

typedef struct CANopenRecvBootup
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned char node;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenRecvBootup_typ;

typedef struct CANopenSendSync
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	/* VAR (analog) */
	unsigned short stateman;
	unsigned short statusbuffer;
	unsigned long pDeviceHandle;
	plcstring strDeviceName[257];
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenSendSync_typ;

typedef struct CANopenSDOReadData
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	unsigned short index;
	unsigned char subindex;
	unsigned char transfertype;
	unsigned long pRxdata;
	unsigned long maxlength;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned long errorinfo;
	unsigned long rxlength;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenSDOReadData_typ;

typedef struct CANopenSDOWriteData
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	unsigned short index;
	unsigned char subindex;
	unsigned char transfertype;
	unsigned long pTxdata;
	unsigned long txlength;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short error;
	unsigned long errorinfo;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenSDOWriteData_typ;

typedef struct CANopenLayer2Read8
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short canID;
	unsigned char data[8];
	unsigned char datalen;
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenLayer2Read8_typ;

typedef struct CANopenGetSlaveState
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	unsigned short slaveState;
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenGetSlaveState_typ;

typedef struct CANopenActivateSlaveMonitoring
{
	/* VAR_INPUT (analog) */
	unsigned long pDevice;
	unsigned char node;
	unsigned char monitoringType;
	unsigned short monitoringTime;
	unsigned short monitoringFactor;
	unsigned long options;
	/* VAR_OUTPUT (analog) */
	unsigned short status;
	/* VAR (analog) */
	unsigned short _statemachine;
	unsigned short _result;
	/* VAR_INPUT (digital) */
	plcbit enable;
} CANopenActivateSlaveMonitoring_typ;



/* Prototyping of functions and function blocks */
_BUR_PUBLIC void CANopenEnableCyclicSync(struct CANopenEnableCyclicSync* inst);
_BUR_PUBLIC void CANopenGetLocalNodeID(struct CANopenGetLocalNodeID* inst);
_BUR_PUBLIC void CANopenGetKernelState(struct CANopenGetKernelState* inst);
_BUR_PUBLIC void CANopenRegisterCOBID(struct CANopenRegisterCOBID* inst);
_BUR_PUBLIC void CANopenPDORead8(struct CANopenPDORead8* inst);
_BUR_PUBLIC void CANopenPDOWrite8(struct CANopenPDOWrite8* inst);
_BUR_PUBLIC void CANopenSDORead8(struct CANopenSDORead8* inst);
_BUR_PUBLIC void CANopenSDOWrite8(struct CANopenSDOWrite8* inst);
_BUR_PUBLIC void CANopenGetState(struct CANopenGetState* inst);
_BUR_PUBLIC void CANopenNMT(struct CANopenNMT* inst);
_BUR_PUBLIC void CANopenRecvEmcyDev(struct CANopenRecvEmcyDev* inst);
_BUR_PUBLIC void CANopenRecvEmcy(struct CANopenRecvEmcy* inst);
_BUR_PUBLIC void CANopenWriteEmcy(struct CANopenWriteEmcy* inst);
_BUR_PUBLIC void CANopenRecvBootupDev(struct CANopenRecvBootupDev* inst);
_BUR_PUBLIC void CANopenRecvBootup(struct CANopenRecvBootup* inst);
_BUR_PUBLIC void CANopenSendSync(struct CANopenSendSync* inst);
_BUR_PUBLIC void CANopenSDOReadData(struct CANopenSDOReadData* inst);
_BUR_PUBLIC void CANopenSDOWriteData(struct CANopenSDOWriteData* inst);
_BUR_PUBLIC void CANopenLayer2Read8(struct CANopenLayer2Read8* inst);
_BUR_PUBLIC void CANopenGetSlaveState(struct CANopenGetSlaveState* inst);
_BUR_PUBLIC void CANopenActivateSlaveMonitoring(struct CANopenActivateSlaveMonitoring* inst);
_BUR_PUBLIC unsigned short CANopenSetSDOTimeout(unsigned long pDevice, unsigned long sdoTimeout);


#ifdef __cplusplus
};
#endif
#endif /* _ASCANOPEN_ */

