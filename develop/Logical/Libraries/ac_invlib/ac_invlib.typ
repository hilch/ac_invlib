(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: wh_invlib
 * File: wh_invlib.typ
 * Author: hilchenbachc
 * Created: December 03, 2009
 ********************************************************************
 * Data types of library wh_invlib
 ********************************************************************)

TYPE
	ac_inv_AxIdent : 	STRUCT  (*(internal data type for debugging only !)*)
		p_alloc : REFERENCE TO ac_inv_alloc; (*pointer to fub instance*)
		step_init : UINT; (*initialization step*)
		errorstep : UINT; (*step in which the internal error occured*)
		step_read_data : UINT; (*step for reading data from drive*)
		fub_sdoread : EplSDORead; (*fub instance*)
		fub_sdowrite : EplSDOWrite; (*fub instance*)
		fub_canopen_sdoread : CANopenSDOReadData; (*fub instance*)
		fub_canopen_sdowrite : CANopenSDOWriteData; (*fub instance*)
		node_number : USINT; (*powerlink node number or canopen node number of inverter*)
		interface : STRING[20]; (*interface name*)
		ctrl_on_internal : BOOL; (*internal command for 'ctrl_on'*)
		sdo_read_step : UINT; (*SDORead: step and command interface*)
		sdo_read_par_name : STRING[10]; (*SDORead: name of the inverter parameter*)
		sdo_read_value : UINT; (*SDORead: numeric parameter value*)
		sdo_read_value_constant : STRING[20]; (*SDORead: parameter value constant*)
		sdo_read_status : UINT; (*SDORead: status result*)
		sdo_read_errorinfo : UDINT; (*SDORead: additional error information*)
		sdo_write_step : UINT; (*SDOWrite: step and command interface*)
		sdo_write_par_name : STRING[10]; (*SDOWrite: name of the inverter parameter*)
		sdo_write_value : UINT; (*SDOWrite: numeric parameter value*)
		sdo_write_value_constant : STRING[20]; (*SDOWrite: parameter value constant*)
		sdo_write_status : UINT; (*SDOWrite: status result*)
		sdo_write_errorinfo : UDINT; (*SDOWrite: additional error information*)
		fub_datobjinfo : DatObjInfo; (*fub instance*)
		number_of_parameters : UDINT; (*number of parameters in dataobject*)
		parameterlist_index : UINT; (*parameter list: index of the actual parameter*)
		p_sorted_parameters : ARRAY[0..99]OF UDINT; (*pointer to list with the sorted parameters*)
		dont_sort_parameters : BOOL; (*don't sort parameters from datamodules*)
		write_parameterlist_step : UINT; (*write parameter list: step and command interface*)
		write_parameterlist_status : UINT; (*write parameter list: status result*)
		compare_parameterlist_step : UINT; (* Compare paameterlist: step and command interface *)
		compare_parameterlist_status : UINT; (* Compare parameterlist: status result *)
		compare_parameterlist_index : USINT; (* compare parameterlist: index of the actual parameter *)
		compare_value_constant : STRING[20]; (*SDORead: parameter value constant*)
		log_info : STRING[60]; (*row in logging information*)
		fub_log_write : AsArLogWrite; (*fub instance*)
		kv_old : UINT; (*gain speed controller in %*)
		ti_old : UINT; (*integral time speed controller in %*)
		counter_cyclic_data : USINT; (*cycle counter for cyclic read data*)
		HMIS_old : INT;
		rated_motor_frequency : REAL; (*FrS*)
		rated_motor_speed : REAL; (*nSP*)
		maximum_output_frequency : REAL; (*tFr*)
		polepairs : USINT; (*no of motor polepairs*)
		use_rpm : BOOL; (*1 = use rpm instead Hertz for motor speeds*)
		t_limit_old : ARRAY[0..1]OF REAL;
		cycleTime : REAL; (*cycle time of the task*)
		timer : REAL; (*timer for waiting actions*)
		device_name : STRING[20]; (*Device- Name from Powerlink Object 0x1008*)
		drive_type : USINT; (*0 = unknown, 1 = P84, 2 = P74, 3 = P76 *)
		isCANopen : BOOL; (*1 = is a CANopen- device*)
		tempUINT : UINT;
	END_STRUCT;
	ac_inv_Mapping : 	STRUCT 
		ModuleOK : BOOL; (*Module OK (from drive)*)
		ETAD : UINT; (*Status Word (from drive)*)
		HMIS : UINT; (*Drive state Input (from drive)*)
		RFRD : INT; (*Output- velocity (from drive)*)
		OTR : INT; (*Motor torque (from drive)*)
		LCR : UINT; (*Drive Current (from drive)*)
		THD : UINT; (*Drive Thermal State (from drive)*)
		THR : UINT; (*Motor Thermal State (from drive)*)
		LFT : INT; (*Fault Code ( from drive) as INT for EPL-Mapping*)
		_LFT : UINT; (*Fault Code ( from drive) as UINT for CANopen-Mapping (P84 only)*)
		CMDD : UINT; (*Control Word (to drive)*)
		CMI : UINT; (*Extended Control Word (to drive)*)
		LFRD : INT; (*Speed setpoint (to drive)*)
		LTR : INT; (*Torque setpoint (to drive) (P84 only)*)
	END_STRUCT;
END_TYPE
