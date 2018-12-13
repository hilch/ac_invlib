
PROGRAM _INIT

	ac_inv_alloc_0.pDevice := 	ADR('SS1.IF1.ST2');     (* X20IF2772 - node 2 *)
	ac_inv_alloc_0.pcfgpar[0] :=  ADR('P66config');	 	(* configuration data module *)
	ac_inv_alloc_0();
	ac_inv_0.ax_ident := ac_inv_alloc_0.ax_ident;
END_PROGRAM

