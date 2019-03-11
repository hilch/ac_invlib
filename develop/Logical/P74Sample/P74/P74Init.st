
PROGRAM _INIT

	ac_inv_alloc_0.pDevice := 	ADR('IF3.ST10');  			(* X20 CP3585 internal EPL @ node 10 *)
	ac_inv_alloc_0.pcfgpar[0] :=  ADR('P74config');	 	(* configuration data module *)
	ac_inv_alloc_0.rpm := FALSE;	  (* use rpm instead of Hertz *)
	ac_inv_alloc_0();
	ac_inv_0.ax_ident := ac_inv_alloc_0.ax_ident;
	debug ACCESS ac_inv_alloc_0.ax_ident;
	
END_PROGRAM

