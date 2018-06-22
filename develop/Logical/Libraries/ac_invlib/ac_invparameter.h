/********************************************************************
 * COPYRIGHT -- Bernecker + Rainer
 ********************************************************************
 * Bibliothek: ac_invlib
 * Datei: ac_invparameter.h
 * Autor: hilchenbachc
 * Erstellt: 11. April 2014
 *******************************************************************/

#include <bur/plctypes.h>


typedef struct {
	char 		*name;
	INT			value;
} acpienumeration;


typedef struct {
	char 		*name;    		/* name of register */	
	UINT		index;			/* CANopen index */
	USINT		subindex;		/* CANopen subindex */
	USINT		sign;
	acpienumeration *enu;		/* Value - Enumeration */
} acpireg;

