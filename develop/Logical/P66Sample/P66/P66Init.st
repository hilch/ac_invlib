
PROGRAM _INIT

	ac_inv_alloc_0.pDevice := 	ADR('IF3.ST11');  		(* X20 CP3585 internal EPL @ node 11 *)
	ac_inv_alloc_0.pcfgpar[0] :=  ADR('P66config');	 	(* configuration data module *)
	ac_inv_alloc_0();
	ac_inv_0.ax_ident := ac_inv_alloc_0.ax_ident;
END_PROGRAM

