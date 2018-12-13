
FUNCTION_BLOCK ac_inv_alloc (*axis allocation*)
	VAR_INPUT
		pDevice : UDINT; (*pointer to name of device i.e. 'IF3.ST4'*) (* *) (*#PAR*)
		pcfgpar : ARRAY[0..2] OF UDINT; (*pointer to name of parameter data objects*) (* *) (*#PAR*)
		io_mapping : ac_inv_Mapping; (*IO- mapping (must be connected in physical view)*) (* *) (*#PAR*)
		rpm : BOOL; (*use rpm instead of Hertz for n_set and n_act (P76 not used)*) (* *) (*#PAR#OPT*)
		no_parameter_sort : BOOL; (*1 = don't sort parameters from datamodules*) (* *) (*#PAR#OPT*)
	END_VAR
	VAR_OUTPUT
		status : UINT; (*fub status*) (* *) (*#CYC*)
		message : STRING[80]; (*error message, when allocation fails*) (* *) (*#CYC*)
		ax_ident : UDINT; (*axis identifier ('handle') for function blocks*) (* *) (*#CYC*)
	END_VAR
END_FUNCTION_BLOCK

FUNCTION_BLOCK ac_inv (*cyclic execution*)
	VAR_INPUT
		ax_ident : UDINT; (*axis identifier (handle) from ac_inv_alloc()*) (* *) (*#PAR*)
		quickstop : BOOL; (*0 = perform fast stop*) (* *) (*#CMD*)
		ctrl_on : BOOL; (*switch controller (power stage) on/off*) (* *) (*#CMD*)
		f_quit : BOOL; (*quit inverter fault*) (* *) (*#CMD*)
		kv : UINT; (*gain speed controller in %*) (* *) (*#OPT#CYC*)
		ti : UINT; (*Integral time speed controller in %*) (* *) (*#OPT#CYC*)
		n_set : REAL; (*set speed (% of tFr or rpm)*) (* *) (*#CYC*)
		t_set : REAL; (*set torque in % nominal motor torque (P84 only)*) (* *) (*#OPT#CYC*)
		t_limit : ARRAY[0..1] OF REAL; (*torque limit*) (* *) (*#OPT#CYC*)
		write_parameter : USINT; (*write a parameter to the drive (see 'parameter_name' and 'parameter_value')*) (* *) (*#CMD#OPT*)
		read_parameter : USINT; (*read a parameter from the drive (see 'parameter_name' and 'parameter_value')*) (* *) (*#CMD#OPT*)
		parameter_name : STRING[4]; (*name of the inverter parameter to be written or to be read*) (* *) (*#PAR#OPT*)
		parameter_value : STRING[15]; (*value of the inverter parameter to be written or to be read*) (* *) (*#CMD#OPT*)
		C211 : BOOL; (*Control Bit*) (* *) (*#OPT#CYC*)
		C212 : BOOL; (*Control Bit*) (* *) (*#OPT#CYC*)
		C213 : BOOL; (*Control Bit*) (* *) (*#OPT#CYC*)
		C214 : BOOL; (*Control Bit*) (* *) (*#OPT#CYC*)
		C215 : BOOL; (*Control Bit*) (* *) (*#OPT#CYC*)
		activate_tuning : BOOL; (*1 = set motor tuning active. tuning will be activated with 'ctrl_on=true'*) (* *) (*#OPT#CYC*)
	END_VAR
	VAR_OUTPUT
		ctrl_ready : BOOL; (*controller is ready to be switched on*) (* *) (*#CYC*)
		power_line : BOOL; (*power line present = 1*) (* *) (*#CYC*)
		ctrl_is_on : BOOL; (*controller (power stage) is on/off*) (* *) (*#CYC*)
		initialized : BOOL; (*drive initialized*) (* *) (*#CYC*)
		alarm : BOOL; (*alarm*) (* *) (*#CYC*)
		fault : BOOL; (*inverter fault see 'fault code'*) (* *) (*#CYC*)
		PRA_detected : BOOL; (*Power removal (PRA) was detected -> reset ctrl_on*) (* *) (*#CYC#OPT*)
		n_act : REAL; (*actual speed (% of tFr or rpm)*) (* *) (*#CYC*)
		t_act : REAL; (*torque in % of nominal motor torque*) (* *) (*#CYC*)
		current : REAL; (*current in A*) (* *) (*#CYC*)
		thst_drive : REAL; (*thermal state drive in %*) (* *) (*#CYC#OPT*)
		thst_motor : REAL; (*thermal state motor in %*) (* *) (*#CYC*)
		udc : REAL; (*dc voltage in V*) (* *) (*#CYC*)
		encoder_value : UINT; (*encoder value (P84 only)*) (* *) (*#CYC#OPT*)
		drive_state : STRING[4]; (*drive state*) (* *) (*#CYC*)
		fault_code : STRING[4]; (*fault code (LFT) as string*) (* *) (*#CYC*)
		LFT : UINT; (*LFT*) (* *) (*#CYC*)
		status : UINT; (*fub status*) (* *) (*#CYC*)
		drive_type : ac_inv_DriveType; (*ACOPOSinverter type*)
	END_VAR
END_FUNCTION_BLOCK
