
PROGRAM _INIT

	ac_inv_alloc_0.pDevice := ADR('IF3.ST3'); // X20CP3585 internal EPL-IF @ node 4
	ac_inv_alloc_0.pcfgpar[0] := ADR('P86config4'); // configuration data module 
	ac_inv_alloc_0();
	ac_inv_0.ax_ident := ac_inv_alloc_0.ax_ident;	
	
END_PROGRAM

