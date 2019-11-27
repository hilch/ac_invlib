                                                                     
 {REDUND_ERROR} FUNCTION_BLOCK CANopenEnableCyclicSync (*enables or disables cyclic SYNC messages*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)                  
		pDevice : UDINT; 				(*device name given as a pointer*)     
		syncmode : BOOL; 				(*TRUE = enable cyclic SYNC message; FALSE = disable cyclic SYNC message*)
		synctime : TIME; 				(*time between two SYNC messages*)     
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error : UINT;                                   (* CIA405_CANOPEN_KERNEL_ERRORl according to CiA Draft Standard 405 *)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)                  
		statusbuffer: UINT; 			(*internal variable*)                  
		pDeviceHandle: UDINT; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenGetLocalNodeID 	(*queries the local node address*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		nodeid : UINT; 					(*CAN node ID of pDevice interface*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenGetKernelState 	(*queries the status of the CANopen kernel on the local PLC*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		state : UINT;   				(*CIA405_CANOPEN_KERNEL_ERROR state according to CiA Draft Standard 405 *)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenRegisterCOBID 	(*registers or deletes receive of PDOs and CAN layer 2 messages using network layer*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		cobid : UINT; 					(*COBID (CAN identifier)*)
		inscribe : BOOL; 				(*TRUE = add COBID to registry; FALSE = delete COPID from registry*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error : UINT;				   (*CIA405_CANOPEN_KERNEL_ERRORl according to CiA Draft Standard 405 *)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenPDORead8 			(*reads PDOs and CAN layer 2 messages from input buffer of network layer*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		cobid : UINT; 					(*COBID (CAN identifier)*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error : UINT; 					(*error code according to the CIA405_CANopen_KERNEL_ERROR data type*)
		errorinfo: UDINT; 				(*additional error information*)
		data0 : USINT; 					(*data byte 0 of received CAN message*)
		data1 : USINT; 					(*data byte 1 of received CAN message*)
		data2 : USINT; 					(*data byte 2 of received CAN message*)
		data3 : USINT; 					(*data byte 3 of received CAN message*)
		data4 : USINT; 					(*data byte 4 of received CAN message*)
		data5 : USINT; 					(*data byte 5 of received CAN message*)
		data6 : USINT; 					(*data byte 6 of received CAN message*)
		data7 : USINT; 					(*data byte 7 of received CAN message*)
		datalen : USINT; 				(*length of received CAN message*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenPDOWrite8 		(*writes PDOs and CAN layer 2 messages to network layer*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		cobid : UINT; 					(*COBID (CAN identifier)*)
		data0 : USINT; 					(*data byte 0 of CAN message to send*)
		data1 : USINT; 					(*data byte 1 of CAN message to send*)
		data2 : USINT; 					(*data byte 2 of CAN message to send*)
		data3 : USINT; 					(*data byte 3 of CAN message to send*)
		data4 : USINT; 					(*data byte 4 of CAN message to send*)
		data5 : USINT; 					(*data byte 5 of CAN message to send*)
		data6 : USINT; 					(*data byte 6 of CAN message to send*)
		data7 : USINT; 					(*data byte 7 of CAN message to send*)
		datalen : USINT; 				(*length of CAN message to send*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (*CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405 *)
		errorinfo: UDINT; 				(*additional error information*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenSDORead8 			(*reads object entries of a node using SDO transfer*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127 or 0 for local node)*)
		index : UINT; 					(*number of index entry to read*)
		subindex: USINT; 				(*number of subindex entry to read*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (* CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405 *)
		errorinfo: UDINT; 				(*additional error information*)
		data0 : USINT; 					(*data byte 0 of received CAN message*)
		data1 : USINT; 					(*data byte 1 of received CAN message*)
		data2 : USINT; 					(*data byte 2 of received CAN message*)
		data3 : USINT; 					(*data byte 3 of received CAN message*)
		data4 : USINT; 					(*data byte 4 of received CAN message*)
		data5 : USINT; 					(*data byte 5 of received CAN message*)
		data6 : USINT; 					(*data byte 6 of received CAN message*)
		data7 : USINT; 					(*data byte 7 of received CAN message*)
		datalen : USINT; 				(*length of received CAN message*)
	END_VAR
	VAR
		sdo_channel : USINT; 			(*internal variable*)
 		sdo_mode : SINT; 				(*internal variable*)
 		sdo_confirmed : SINT; 			(*internal variable*)
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
		databuffer: ARRAY[0..7]OF USINT;(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenSDOWrite8	 		(*writes object entries of a node using SDO transfer*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127 or 0 for local OD)*)
		index : UINT; 					(*number of index entry to read*)
		subindex: USINT; 				(*number of subindex entry to read*)
		data0 : USINT; 					(*data byte 0 of CAN message to send*)
		data1 : USINT; 					(*data byte 1 of CAN message to send*)
		data2 : USINT; 					(*data byte 2 of CAN message to send*)
		data3 : USINT; 					(*data byte 3 of CAN message to send*)
		data4 : USINT; 					(*data byte 4 of CAN message to send*)
		data5 : USINT; 					(*data byte 5 of CAN message to send*)
		data6 : USINT; 					(*data byte 6 of CAN message to send*)
		data7 : USINT; 					(*data byte 7 of CAN message to send*)
		datalen : USINT; 				(*length of CAN message to send*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (*CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405*)
		errorinfo: UDINT; 				(*additional error information*)
	END_VAR
	VAR
		sdo_channel : USINT; 			(*internal variable*)
 		sdo_mode : SINT; 				(*internal variable*)
 		sdo_confirmed : SINT; 			(*internal variable*)
		stateman: UINT; 			 	(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
		databuffer: ARRAY[0..7]OF USINT;(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenGetState 			(*queries the status of a node*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127 or 0 for local OD)*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		state  : UINT;					(*CIA405_STATE according to CiA Draft Standard 405*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256];	 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenNMT 				(*sends NMT messages*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127 or 0 for local OD)*)
		state : UINT; 					(*node state*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error	 : UINT;				(*CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenRecvEmcyDev 		(*reads a received emergency message (specific node)*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127 or 0 for local OD)*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (*CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405*)
		emcy_err_code : UINT; 			(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_register : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field1 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field2 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field3 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field4 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field5 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenRecvEmcy 			(*reads a received emergency message (any node)*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (*CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405*)
		node : USINT;	 				(*node (1-127 or 0 for local OD)*)
		emcy_err_code : UINT; 			(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_register : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field1 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field2 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field3 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field4 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field5 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenWriteEmcy 		(*sends an emergency message*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		emcy_err_code : UINT; 			(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_register : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field1 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field2 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field3 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field4 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_err_field5 : USINT; 		(*emergency error information (CiA Draft Standard 301)*)
		emcy_add_info : UINT; 			(*additional emergency error information - entered into index 1003H of OD (CiA Draft Standard 301)*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (* CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405 *)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenRecvBootupDev 	(*reads a received boot message (specific node)*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127 or 0 for local OD)*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (* CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405 *)
		recv : BOOL; (*TRUE if bootup for node was received or 0 if no bootup was received)*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenRecvBootup 		(*reads a received boot message (any node)*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (* CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405 *)
		node : USINT; 					(*node (1-127 or 0 for local OD)*)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenSendSync 			(*sends a single SYNC message*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error: UINT;				    (* CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405 *)
	END_VAR
	VAR
		stateman: UINT;  				(*internal variable*)
		statusbuffer: UINT; 			(*internal variable*)
		pDeviceHandle: UDINT ; 			(*internal variable*)
		strDeviceName: STRING[256]; 	(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenSDOReadData (*reads object entries of a node using SDO Blocktransfer*)
	VAR_INPUT
		enable 			: BOOL;		(*enables execution*)
		pDevice 		: UDINT;	(*device name given as a pointer*)
		node 			: USINT;	(*node (1-127 or 0 for local node)*)
		index 			: UINT;		(*number of index entry to read*)
		subindex		: USINT;	(*number of subindex entry to read*)
		transfertype	: USINT;	(*SDO transfertype. Default  = SDO_TYPE_AUTO_BEST_CASE *)
		pRxdata			: UDINT;	(*pointer  to receive data*)
		maxlength 		: UDINT;	(*maximum length of data to be read*)
	END_VAR
	VAR_OUTPUT
		status 			: UINT;		(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error			: UINT;		(* CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405 *)
		errorinfo		: UDINT;	(*additional error information*)
		rxlength 		: UDINT;	(*length of received data*)
	END_VAR
	VAR
        _statemachine	: UINT;		(*internal variable*)
		_result			: UINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenSDOWriteData (*writes  object entries of a node using SDO Blocktransfer*)
	VAR_INPUT
		enable 			: BOOL;		(*enables execution*)
		pDevice 		: UDINT;	(*device name given as a pointer*)
		node 			: USINT;	(*node (1-127 or 0 for local OD)*)
		index 			: UINT;		(*number of index entry to read*)
		subindex		: USINT;	(*number of subindex entry to read*)
		transfertype	: USINT; 	(*SDO transfertype. Default  = SDO_TYPE_AUTO_BEST_CASE *)
		pTxdata			: UDINT;	(*pointer  to data to be sent*)
		txlength 		: UDINT;   	(*length of data to be sent*)
	END_VAR
	VAR_OUTPUT
		status 			: UINT; 	(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		error			: UINT; 	(*CIA405_CANOPEN_KERNEL_ERROR according to CiA Draft Standard 405*)
		errorinfo		: UDINT;  	(*additional error information*)
	END_VAR
	VAR
        _statemachine	: UINT;		(*internal variable*)
		_result			: UINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION CANopenSetSDOTimeout : UINT (*sets the timeout for SDO up- and downloads*)
	VAR_INPUT
		pDevice 		: UDINT;	(*device name given as a pointer*)
		sdoTimeout		: UDINT;	(*SDO timeout*)
	END_VAR
END_FUNCTION

{REDUND_ERROR} FUNCTION_BLOCK CANopenLayer2Read8 (*reads CAN layer 2 messages from input buffer of network layer*)
	VAR_INPUT
		enable 			: BOOL;		(*enables execution*)
		pDevice 		: UDINT;	(*device name given as a pointer*)
	END_VAR
	VAR_OUTPUT
		status 			: UINT; 	(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		canID			: UINT;		(*CAN ID*)
		data 			: ARRAY[0..7] OF USINT;	(*CAN layer 2 message*)
		datalen 		: USINT; 	(*length of received CAN message*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenGetSlaveState		(*queries the status of a node*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127)*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
		slaveState  : UINT;				(*slave state*)
	END_VAR
END_FUNCTION_BLOCK

{REDUND_ERROR} FUNCTION_BLOCK CANopenActivateSlaveMonitoring	(*activates monitoring for the given CANopen slave in the CANopen master*)
	VAR_INPUT
		enable : BOOL; 					(*enables execution*)
		pDevice : UDINT; 				(*device name given as a pointer*)
		node : USINT; 					(*node (1-127)*)
		monitoringType: USINT;			(*heartbeat or lifeguarding*)
		monitoringTime: UINT;			(*monitoring timed interval in ms*)
		monitoringFactor: UINT;			(*monitoring factor (heartbeat: security factor, lifeguarding: number of retries*)
		options: UDINT;					(*additional options*)
	END_VAR
	VAR_OUTPUT
		status : UINT; 					(*execution status: ERR_OK, ERR_FUB_ENABLE_FALSE, 0xXXXX = see help*)
	END_VAR
	VAR
        _statemachine	: UINT;		(*internal variable*)
		_result			: UINT;		(*internal variable*)
	END_VAR
END_FUNCTION_BLOCK
