(********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Library: AsEPL
 * File: AsEPL.typ
 * Author: B+R
 ********************************************************************
 * Data types of library AsEPL
 ********************************************************************)
                                                                      
TYPE
	EPL_I_TYPE : STRUCT			(*internal use*)
		init	: UDINT ;
		hdl	: UDINT ;
		st	: UDINT ;
		errInfo	: UDINT ;
		size	: UDINT ;
		bus	: USINT ;
		sl	: USINT ;
		ss	: USINT ;
		if_	: USINT ;
		nd	: USINT ;
		tid	: UDINT ;
	END_STRUCT;
END_TYPE