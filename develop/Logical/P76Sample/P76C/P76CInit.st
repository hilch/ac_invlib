
PROGRAM _INIT

	ac_inv_alloc_0.pDevice := 	ADR('IF7.ST2');     (* X20BB57 - node 2 *)
	ac_inv_alloc_0.pcfgpar[0] :=  ADR('P76config');	 	(* configuration data module *)
	ac_inv_alloc_0();
	ac_inv_0.ax_ident := ac_inv_alloc_0.ax_ident;
END_PROGRAM

