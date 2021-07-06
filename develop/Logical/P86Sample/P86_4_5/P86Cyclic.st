
PROGRAM _CYCLIC

	ac_inv_0();	
		
	IF ac_inv_0.initialized AND ac_inv_0.ctrl_ready THEN
		IF ctrl_on THEN 		
			ac_inv_0.ctrl_on := TRUE;
			IF run THEN				
				IF ac_inv_0.ctrl_is_on THEN
					ac_inv_0.n_set := 5;
				END_IF
			END_IF
		END_IF
	END_IF
	
END_PROGRAM
