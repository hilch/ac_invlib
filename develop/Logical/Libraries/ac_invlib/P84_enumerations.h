/*

This file is part of ACOPOSinverter- Library https://github.com/hilch/ac_invlib.
The source code is released under LGPL:

                   GNU LESSER GENERAL PUBLIC LICENSE
                       Version 3, 29 June 2007

 Copyright (C) 2007 Free Software Foundation, Inc. <https://fsf.org/>
 Everyone is permitted to copy and distribute verbatim copies
 of this license document, but changing it is not allowed.


  This version of the GNU Lesser General Public License incorporates
the terms and conditions of version 3 of the GNU General Public
License, supplemented by the additional permissions listed below.

  0. Additional Definitions.

  As used herein, "this License" refers to version 3 of the GNU Lesser
General Public License, and the "GNU GPL" refers to version 3 of the GNU
General Public License.

  "The Library" refers to a covered work governed by this License,
other than an Application or a Combined Work as defined below.

  An "Application" is any work that makes use of an interface provided
by the Library, but which is not otherwise based on the Library.
Defining a subclass of a class defined by the Library is deemed a mode
of using an interface provided by the Library.

  A "Combined Work" is a work produced by combining or linking an
Application with the Library.  The particular version of the Library
with which the Combined Work was made is also called the "Linked
Version".

  The "Minimal Corresponding Source" for a Combined Work means the
Corresponding Source for the Combined Work, excluding any source code
for portions of the Combined Work that, considered in isolation, are
based on the Application, and not on the Linked Version.

  The "Corresponding Application Code" for a Combined Work means the
object code and/or source code for the Application, including any data
and utility programs needed for reproducing the Combined Work from the
Application, but excluding the System Libraries of the Combined Work.

  1. Exception to Section 3 of the GNU GPL.

  You may convey a covered work under sections 3 and 4 of this License
without being bound by section 3 of the GNU GPL.

  2. Conveying Modified Versions.

  If you modify a copy of the Library, and, in your modifications, a
facility refers to a function or data to be supplied by an Application
that uses the facility (other than as an argument passed when the
facility is invoked), then you may convey a copy of the modified
version:

   a) under this License, provided that you make a good faith effort to
   ensure that, in the event an Application does not supply the
   function or data, the facility still operates, and performs
   whatever part of its purpose remains meaningful, or

   b) under the GNU GPL, with none of the additional permissions of
   this License applicable to that copy.

  3. Object Code Incorporating Material from Library Header Files.

  The object code form of an Application may incorporate material from
a header file that is part of the Library.  You may convey such object
code under terms of your choice, provided that, if the incorporated
material is not limited to numerical parameters, data structure
layouts and accessors, or small macros, inline functions and templates
(ten or fewer lines in length), you do both of the following:

   a) Give prominent notice with each copy of the object code that the
   Library is used in it and that the Library and its use are
   covered by this License.

   b) Accompany the object code with a copy of the GNU GPL and this license
   document.

  4. Combined Works.

  You may convey a Combined Work under terms of your choice that,
taken together, effectively do not restrict modification of the
portions of the Library contained in the Combined Work and reverse
engineering for debugging such modifications, if you also do each of
the following:

   a) Give prominent notice with each copy of the Combined Work that
   the Library is used in it and that the Library and its use are
   covered by this License.

   b) Accompany the Combined Work with a copy of the GNU GPL and this license
   document.

   c) For a Combined Work that displays copyright notices during
   execution, include the copyright notice for the Library among
   these notices, as well as a reference directing the user to the
   copies of the GNU GPL and this license document.

   d) Do one of the following:

       0) Convey the Minimal Corresponding Source under the terms of this
       License, and the Corresponding Application Code in a form
       suitable for, and under terms that permit, the user to
       recombine or relink the Application with a modified version of
       the Linked Version to produce a modified Combined Work, in the
       manner specified by section 6 of the GNU GPL for conveying
       Corresponding Source.

       1) Use a suitable shared library mechanism for linking with the
       Library.  A suitable mechanism is one that (a) uses at run time
       a copy of the Library already present on the user's computer
       system, and (b) will operate properly with a modified version
       of the Library that is interface-compatible with the Linked
       Version.

   e) Provide Installation Information, but only if you would otherwise
   be required to provide such information under section 6 of the
   GNU GPL, and only to the extent that such information is
   necessary to install and execute a modified version of the
   Combined Work produced by recombining or relinking the
   Application with a modified version of the Linked Version. (If
   you use option 4d0, the Installation Information must accompany
   the Minimal Corresponding Source and Corresponding Application
   Code. If you use option 4d1, you must provide the Installation
   Information in the manner specified by section 6 of the GNU GPL
   for conveying Corresponding Source.)

  5. Combined Libraries.

  You may place library facilities that are a work based on the
Library side by side in a single library together with other library
facilities that are not Applications and are not covered by this
License, and convey such a combined library under terms of your
choice, if you do both of the following:

   a) Accompany the combined library with a copy of the same work based
   on the Library, uncombined with any other library facilities,
   conveyed under the terms of this License.

   b) Give prominent notice with the combined library that part of it
   is a work based on the Library, and explaining where to find the
   accompanying uncombined form of the same work.

  6. Revised Versions of the GNU Lesser General Public License.

  The Free Software Foundation may publish revised and/or new versions
of the GNU Lesser General Public License from time to time. Such new
versions will be similar in spirit to the present version, but may
differ in detail to address new problems or concerns.

  Each version is given a distinguishing version number. If the
Library as you received it specifies that a certain numbered version
of the GNU Lesser General Public License "or any later version"
applies to it, you have the option of following the terms and
conditions either of that published version or of any later version
published by the Free Software Foundation. If the Library as you
received it does not specify a version number of the GNU Lesser
General Public License, you may choose any version of the GNU Lesser
General Public License ever published by the Free Software Foundation.

  If the Library as you received it specifies that a proxy can decide
whether future versions of the GNU Lesser General Public License shall
apply, that proxy's public statement of acceptance of any version is
permanent authorization for you to choose that version for the
Library.

*/

#include <bur/plctypes.h>




acpienumeration en_P84_N_Y[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ 0,			0	}	
};

acpienumeration en_P84_DOTD[] = {
	{ "nSt",		0	},
	{ "rMP",		1	},
	{ 0,			0	}	
};


acpienumeration en_P84_QSTD[] = {
	{ "FSt2",		2	},
	{ "FSt6",		6	},
	{ 0,			0	}	
};


acpienumeration en_P84_FRY[] = {
	{ "ALL",		0	},
	{ 0,			0	}	
};


acpienumeration en_P84_RPR[] = {
	{ "nO",			0	},
	{ "APH",		1	},
	{ "rtH",		2	},
	{ "rtHI",		3	},
	{ "PtH",		4	},				
	{ "ALL",		64	},					
	{ 0,			0	}	
};



acpienumeration en_P84_ENC[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "dOnE",		2	},	
	{ 0,			0	}	
};


acpienumeration en_P84_CSLFN[] = {
	{ "nO",			0	},
	{ "FJOG",		180	},
	{ "FPS1",		181	},	
	{ "FPS2",		182	},	
	{ "FPr1",		183	},			
	{ "FPr2",		184	},			
	{ "FUSP",		185	},			
	{ "FdSP",		186	},
	{ "Ft",			187	},				
	{ 0,			0	}	
};

acpienumeration en_P84_BMP[] = {
	{ "StOP",		0 	},
	{ "bUMP",		1 	},
	{ 0,			0	}		
};


acpienumeration en_P84_TBR[] = {
	{ "nO",			0 	},
	{ "AUtO",		4 	},
	{ "300",		8 	},
	{ "600",		12 	},
	{ "1 2",		16 	},
	{ "1.2",		16 	},	
	{ "2 4",		20 	},
	{ "2.4",		20 	},	
	{ "4 8",		24 	},
	{ "4.8",		24 	},	
	{ "9 6",		28 	},
	{ "9.6",		28 	},	
	{ "10 ",		30 	},
	{ "10",			30  },								
	{ "10.",		30 	},									
	{ "19 2",		32 	},									
	{ "19.2",		32 	},										
	{ "20 ",		34 	},
	{ "20",			34	},									
	{ "20.",		34 	},										
	{ "28 8",		35 	},									
	{ "28.8",		35 	},										
	{ "38 4",		36 	},									
	{ "38.4",		36 	},										
	{ "45 4",		37 	},									
	{ "45.4",		37 	},										
	{ "50 ",		38 	},
	{ "50",			38  },									
	{ "50.",		38 	},										
	{ "57 6",		40  },									
	{ "57.6",		40 	},										
	{ "93 7",		42  },									
	{ "93.7",		42 	},										
	{ "100",		44 	},										
	{ "115",		48 	},										
	{ "125",		52 	},											
	{ "156",		53 	},											
	{ "187",		54 	},											
	{ "230",		56 	},													
	{ "250",		60 	},													
	{ "460",		64 	},														
	{ "500",		68 	},														
	{ "625",		69 	},														
	{ "800",		70 	},														
	{ "921",		72 	},														
	{ "1M",			76 	},														
	{ "1M5",		80 	},															
	{ "2M5",		81 	},																
	{ "3M",			82 	},														
	{ "6M",			83 	},														
	{ "10M",		84 	},														
	{ "5M",			86 	},														
	{ "12M",		88 	},														
	{ "100M",		92 	},	
	{ 0,			0 	}																			
};




acpienumeration en_P84_INR[] = {
	{ "0.01",		0 	},
	{ "0.1",		1 	},
	{ "1", 			2 	},
	{ 0,			0 	}		
};
	

acpienumeration en_P84_CFPS[] = {
	{ "nO",			0 	},
	{ "CFP1",		1 	},
	{ "CFP2", 		2 	},
	{ "CFP3", 		3 	},	
	{ 0,			0 	}		
};

acpienumeration en_P84_CNFS[] = {
	{ "nO",			0 	},
	{ "CnF0",		1 	},
	{ "CnF1", 		2 	},
	{ "CnF2", 		3 	},	
	{ 0,			0 	}		
};


acpienumeration en_P84_FOR[] = {
	{ "nO",			0 	},
	{ "AUtO",		1 	},
	{ "8o1",		2 	},
	{ "8E1",		3 	},
	{ "8n1",		4 	},
	{ "8n2",		5 	},
	{ "7o1",		6 	},
	{ "7E1",		7 	},							
	{ "7o2",		8 	},							
	{ "7E2",		9 	},										
	{ 0,			0 	}		
};


acpienumeration en_P84_BDCO[] = {
	{ "50",			38 	},
	{ "125",		52	},
	{ "250",		60	},
	{ "500",		68 	},
	{ "1M",			76 	},				
	{ 0,			0 	}		
};


	
acpienumeration en_P84_INT[] = {
	{ "0.01Nm",		0 	},
	{ "0.1Nm",		1 	},
	{ "1Nm", 		2 	},
	{ "10Nm",		3	},	
	{ "0.01",		0 	},
	{ "0.1",		1 	},
	{ "1", 			2 	},
	{ "10",			3	},
	{ 0,			0 	}		
};	
	
acpienumeration en_P84_INCPER[] = {
	{ "0.01",		0 	},
	{ "0.1",		1 	},
	{ "1", 			2 	},
	{ "0.01%",		0 	},
	{ "0.1%",		1 	},
	{ "1%", 		2 	},	
	{ 0,			0 	}		
};	
	
	
acpienumeration en_P84_FLU[] = {
	{ "FnC",		0  	},
	{ "FCt", 		1	}, 	
	{ "FnO", 		2 	},
	{ 0,			0	}		
};

acpienumeration en_P84_BFR[] = {
	{ "50", 		0	},
	{ "50Hz", 		0	},
	{ "50 Hz",		0	},
	{ "50 Hz IEC",	0	},	
	{ "60",			1	},
	{ "60Hz",		1	},
	{ "60 Hz", 		1	},
	{ "60 Hz NEMA",	1	},
	{ 0,			0	}		
};


acpienumeration en_P84_INSP[] = {
	{ "1", 			1	},
	{ "10",			10	},
	{ 0,			0	}		
};

acpienumeration en_P84_ACT[] = {
	{ "tAb", 		0	},
	{ "PEnd",		1	},
	{ "PrOG",		2   },
	{ "FAIL",		3	},
	{ "dOnE",		4	},
	{ "Strd",		5	},
	{ "CUS",		6	},
	{ 0,			0	}		
};



acpienumeration en_P84_CTT[] = {
	{ "UUC",		0	},
	{ "CUC",		1	},
	{ "FUC",		2	},
	{ "UF2",		3	},
	{ "UF5",		4	},
	{ "SYn",		5	},
	{ 0,			0	}	
};


acpienumeration en_P84_SOP[] = {
	{ "6",			6 	},
	{ "8",			8 	},
	{ "10",			10 	},
	{ 0,			0	}		
};


acpienumeration en_P84_TCC[] = {
	{ "2C",			0 	},
	{ "3C",			1 	},
	{ 0,			0	}			
};

acpienumeration en_P84_TCT[] = {
	{ "LEL",		0 	},
	{ "trn",		1 	},
	{ "PFO",		2 	},	
	{ 0,			0	}			
};


acpienumeration en_P84_PSLIN[] = {
	{ "nO",			0 	},  
	{ "FtA",		4 	},  
	{ "F2A",		13 	},    
	{ "Fr1",		96 	},    
	{ "Fr2",		97 	},    
	{ "Cd1",		98 	},    
	{ "Cd2",		99 	},    
	{ "Fr1b",		100 },   
	{ "YES",		128 },   
	{ "LI1",		129 },   
	{ "LI2",		130 },   
	{ "LI3",		131 },   
	{ "LI4",		132 },   
	{ "LI5",		133 },   
	{ "LI6",		134 },   
	{ "LI7",		135 },   
	{ "LI8",		136 },   
	{ "LI9",		137 },   
	{ "LI10",		138 },   
	{ "LI11",		139 },   
	{ "LI12",		140 },   
	{ "LI13",		141 },   
	{ "LI14",		142 },   
	{ "Cd00",		160 },   
	{ "Cd01",		161 },   
	{ "Cd02",		162 },   
	{ "Cd03",		163 },   
	{ "Cd04",		164 },   
	{ "Cd05",		165 },   
	{ "Cd06",		166 },   
	{ "Cd07",		167 },   
	{ "Cd08",		168 },   
	{ "Cd09",		169 },   
	{ "Cd10",		170 },   
	{ "Cd11",		171 },   
	{ "Cd12",		172 },   
	{ "Cd13",		173 },   
	{ "Cd14",		174 },   
	{ "Cd15",		175 },   
	{ "C101",		177 },   
	{ "C102",		178 },   
	{ "C103",		179 },   
	{ "C104",		180 },   
	{ "C105",		181 },   
	{ "C106",		182 },   
	{ "C107",		183 },   
	{ "C108",		184 },   
	{ "C109",		185 },   
	{ "C110",		186 },   
	{ "C111",		187 },   
	{ "C112",		188 },   
	{ "C113",		189 },   
	{ "C114",		190 },   
	{ "C115",		191 },   
	{ "C201",		193 },   
	{ "C202",		194 },   
	{ "C203",		195 },   
	{ "C204",		196 },   
	{ "C205",		197 },   
	{ "C206",		198 },   
	{ "C207",		199 },   
	{ "C208",		200 },   
	{ "C209",		201 },   
	{ "C210",		202 },   
	{ "C211",		203 },   
	{ "C212",		204 },   
	{ "C213",		205 },   
	{ "C214",		206 },   
	{ "C215",		207 },   
	{ "C301",		209 },   
	{ "C302",		210 },   
	{ "C303",		211 },   
	{ "C304",		212 },   
	{ "C305",		213 },   
	{ "C306",		214 },   
	{ "C307",		215 },   
	{ "C308",		216 },   
	{ "C309",		217 },   
	{ "C310",		218 },   
	{ "C311",		219 },   
	{ "C312",		220 },   
	{ "C313",		221 },   
	{ "C314",		222 },   
	{ "C315",		223 },   
	{ "C401",		225 },   
	{ "C402",		226 },   
	{ "C403",		227 },   
	{ "C404",		228 },   
	{ "C405",		229 },   
	{ "C406",		230 },   
	{ "C407",		231 },   
	{ "C408",		232 },   
	{ "C409",		233 },   
	{ "C410",		234 },   
	{ "C411",		235 },   
	{ "C412",		236 },   
	{ "C413",		237 },   
	{ "C414",		238 },   
	{ "C415",		239 },
	{ 0,			0	}			
};



acpienumeration en_P84_BSP[] = {
	{ "bSd",		0	},
	{ "bLS",		1 	},
	{ "bnS",		2	},
	{ "bnS0",		4	},
	{ 0,			0	}			
};


acpienumeration en_P84_AIOT[] = {
	{ "10U",		1	},
	{ "0A",			2 	},
	{ "n10U",		5	},
	{ 0,			0	}			
};


acpienumeration en_P84_AIOL[] = {
	{ "POS",		0 	},
	{ "nEG",		1	},
	{ 0,			0	}			
};

acpienumeration en_P84_ENS[] = {
	{ "nO",			0	},
	{ "AABB",		1	},
	{ "AB",			2	},
	{ "A",			3	},
	{ 0,			0	}			
};

acpienumeration en_P84_ENU[] = {
	{ "nO",			0	},
	{ "SEC",		1	},
	{ "rEG",		2	},
	{ "PGr",		3	},
	{ 0,			0	}			
};

acpienumeration en_P84_PGA[] = {
	{ "EnC",		0 	},
	{ "PtG",		1	},
	{ 0,			0	}			
};


acpienumeration en_P84_PSL[] = {
	{ "nO",			0 },
	{ "FLt",		1 },
	{ "rUn",		2 },
	{ "OCC",		3 },
	{ "FtA",		4 },
	{ "FLA",		5 },
	{ "CtA",		6 },
	{ "SrA",		7 },
	{ "tSA",		8 },
	{ "bLC",		9 },
	{ "PEE",		10 },
	{ "PFA",		11 },
	{ "AP2",		12 },
	{ "F2A",		13 },
	{ "tAd",		14 },
	{ "rSdA",		27 },
	{ "ttHA",		28 },
	{ "ttLA",		29 },
	{ "MFrd",		30 },
	{ "MrrS",		31 },
	{ "tS2",		37 },
	{ "tS3",		38 },
	{ "AtS",		47 },
	{ "CnF0",		48 },
	{ "CnF1",		49 },
	{ "CnF2",		50 },
	{ "CFP1",		52 },
	{ "CFP2",		53 },
	{ "CFP3",		54 },
	{ "dbL",		64 },
	{ "brS",		65 },
	{ "PrM",		66 },
	{ "FqLA",		72 },
	{ "LLC",		73 },
	{ "MCP",		77 },
	{ "LSA",		78 },
	{ "dLdA",		79 },
	{ "AG1",		80 },
	{ "AG2",		81 },
	{ "AG3",		82 },
	{ "P1A",		83 },
	{ "P2A",		84 },
	{ "PLA",		85 },
	{ "EFA",		87 },
	{ "USA",		88 },
	{ "UPA",		89 },
	{ "AnA",		90 },
	{ "tHA",		91 },
	{ "bSA",		93 },
	{ "bCA",		94 },
	{ "SSA",		95 },
	{ "Fr1",		96 },
	{ "Fr2",		97 },
	{ "Cd1",		98 },
	{ "Cd2",		99 },
	{ "Fr1b",		100 },
	{ "EbO",		101 },
	{ "tSY",		102 },
	{ "rtA",		103 },
	{ "tJA",		104 },
	{ "bOA",		105 },
	{ "APA",		106 },
	{ "AP3",		107 },
	{ "AP4",		108 },
	{ "dCO",		109 },
	{ "Fn1",		116 },
	{ "Fn2",		117 },
	{ "Fn3",		118 },
	{ "Fn4",		119 },
	{ "rdY",		127 },
	{ "YES",		128 },
	{ "LI1",		129 },
	{ "LI2",		130 },
	{ "LI3",		131 },
	{ "LI4",		132 },
	{ "LI5",		133 },
	{ "LI6",		134 },
	{ "LI7",		135 },
	{ "LI8",		136 },
	{ "LI9",		137 },
	{ "LI10",		138 },
	{ "LI11",		139 },
	{ "LI12",		140 },
	{ "LI13",		141 },
	{ "LI14",		142 },
	{ "Cd00",		160 },
	{ "Cd01",		161 },
	{ "Cd02",		162 },
	{ "Cd03",		163 },
	{ "Cd04",		164 },
	{ "Cd05",		165 },
	{ "Cd06",		166 },
	{ "Cd07",		167 },
	{ "Cd08",		168 },
	{ "Cd09",		169 },
	{ "Cd10",		170 },
	{ "Cd11",		171 },
	{ "Cd12",		172 },
	{ "Cd13",		173 },
	{ "Cd14",		174 },
	{ "Cd15",		175 },
	{ "C100",		176 },
	{ "C101",		177 },
	{ "C102",		178 },
	{ "C103",		179 },
	{ "C104",		180 },
	{ "C105",		181 },
	{ "C106",		182 },
	{ "C107",		183 },
	{ "C108",		184 },
	{ "C109",		185 },
	{ "C110",		186 },
	{ "C111",		187 },
	{ "C112",		188 },
	{ "C113",		189 },
	{ "C114",		190 },
	{ "C115",		191 },
	{ "C200",		192 },
	{ "C201",		193 },
	{ "C202",		194 },
	{ "C203",		195 },
	{ "C204",		196 },
	{ "C205",		197 },
	{ "C206",		198 },
	{ "C207",		199 },
	{ "C208",		200 },
	{ "C209",		201 },
	{ "C210",		202 },
	{ "C211",		203 },
	{ "C212",		204 },
	{ "C213",		205 },
	{ "C214",		206 },
	{ "C215",		207 },
	{ "C300",		208 },
	{ "C301",		209 },
	{ "C302",		210 },
	{ "C303",		211 },
	{ "C304",		212 },
	{ "C305",		213 },
	{ "C306",		214 },
	{ "C307",		215 },
	{ "C308",		216 },
	{ "C309",		217 },
	{ "C310",		218 },
	{ "C311",		219 },
	{ "C312",		220 },
	{ "C313",		221 },
	{ "C314",		222 },
	{ "C315",		223 },
	{ "C400",		224 },
	{ "C401",		225 },
	{ "C402",		226 },
	{ "C403",		227 },
	{ "C404",		228 },
	{ "C405",		229 },
	{ "C406",		230 },
	{ "C407",		231 },
	{ "C408",		232 },
	{ "C409",		233 },
	{ "C410",		234 },
	{ "C411",		235 },
	{ "C412",		236 },
	{ "C413",		237 },
	{ "C414",		238 },
	{ "C415",		239 },
	{ 0,			0	}			
};	



acpienumeration en_P84_NPL[] = {
	{ "POS",		0 	},
	{ "nEG",		1	},
	{ 0,			0	}			
};


acpienumeration en_P84_BST[] = {
	{ "HOr",		0 	},
	{ "UEr",		1	},
	{ 0,			0	}			
};


acpienumeration en_P84_PSA[] = {
	{ "nO",		0 },
	{ "AI1",	1 },
	{ "AI2",	2 },
	{ "AI3",	3 },
	{ "AI4",	4 },
	{ "OCr",	129 },
	{ "OFr",	130 },
	{ "OrP",	131 },
	{ "trq",	132 },
	{ "Stq",	133 },
	{ "OrS",	134 },
	{ "OPS",	135 },
	{ "OPF",	136 },
	{ "OPE",	137 },
	{ "OPI",	138 },
	{ "OPr",	139 },
	{ "tHr",	140 },
	{ "tHd",	141 },
	{ "tqMS",	142 },
	{ "OFrr",	143 },
	{ "UPdt",	160 },
	{ "UPdH",	161 },
	{ "LCC",	163 },
	{ "Mdb",	164 },
	{ "CAn",	167 },
	{ "nEt",	169 },
	{ "APP",	170 },
	{ "OFS",	173 },
	{ "tHr2",	174 },
	{ "tHr3",	175 },
	{ "Utr",	177 },
	{ "Str",	178 },
	{ "tqL",	179 },
	{ "UOP",	180 },
	{ "PI",		181 },
	{ "PG",		182 },
	{ "AIU1",	183 },
	{ "dO1",	184 },
	{ 0,		0	}			
};


acpienumeration en_P84_CHCF[] = {
	{ "SE8",		0 	},
	{ "SIM",		1	},
	{ "SEP",		2	},	
	{ "IO",			3	},
	{ 0,			0	}			
};


acpienumeration en_P84_CDX[] = {
	{ "tEr",		1 	},
	{ "LCC",		3	},
	{ "Mdb",		10	},	
	{ "CAn",		20	},
	{ "PLK/CAn",	20	},	
	{ "PLK",		20	},		
	{ "nEt",		30 	},
	{ "APP",		31	},
	{ 0,			0	}			
};


acpienumeration en_P84_COP[] = {
	{ "nO",			0 	},
	{ "SP",			1	},
	{ "Cd",			2	},	
	{ "ALL",		3	},
	{ 0,			0	}			
};


acpienumeration en_P84_PTCX[] = {
	{ "nO",			0 	},
	{ "AS",			1	},
	{ "rdS",		2	},	
	{ "rS",			3	},
	{ 0,			0	}			
};	
	
acpienumeration en_P84_DUR[] = {
	{ "5",			0 	},
	{ "10",			1 	},	
	{ "30",			2 	},	
	{ "1H",			3 	},	
	{ "2H",			4 	},	
	{ "3H",			5 	},	
	{ "Ct",			6 	},	
	{ 0,			0	}			
};

acpienumeration en_P84_THT[] = {
	{ "nO",			0	},
	{ "ACL",		1	},
	{ "FCL",		2	},
	{ 0,			0	}			
};

acpienumeration en_P84_ECFG[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "Stt",		2	},
	{ "LFF",		4	},
	{ "rLS",		5	},
	{ "rMP",		6	},
	{ "FSt",		7	},
	{ "dCI",		8	},
	{ 0,			0	}			
};

acpienumeration en_P84_OPL[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "OAC",		2	},
	{ 0,			0	}			
};

acpienumeration en_P84_L_H[] = {
	{ "LO",			0	},
	{ "HIG",		1	},
	{ 0,			0	}			
};


acpienumeration en_P84_BIP[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "2Ibr",		2	},	
	{ 0,			0	}			
};


acpienumeration en_P84_USB[] = {
	{ "0",			0	},
	{ "1",			1	},
	{ "2",			2	},
	{ 0,			0	}			
};


acpienumeration en_P84_URES[] = {
	{ "200",		20	},
	{ "220",		24	},
	{ "260",		26	},
	{ "380",		38	},
	{ "400",		40	},
	{ "440",		44	},
	{ "460",		46	},
	{ "500",		50	},
	{ "600",		60	},					
	{ "690",		69	},
	{ 0,			0	}			
};


acpienumeration en_P84_BRO[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "FLt",		2	},
	{ 0,			0	}			
};


acpienumeration en_P84_LAC[] = {
	{ "BAS",		0	},
	{ "STd",		1	},
	{ "ADV",		2	},
	{ "EPr",		3	},	
	{ 0,			0	}			
};



acpienumeration en_P84_RSD[] = {
	{ "nO",			0	},
	{ "drI",		1	},
	{ "PES",		2	},
	{ 0,			0	}			
};

acpienumeration en_P84_TOB[] = {
	{ "ALrM",		0	},
	{ "FLt",		1	},
	{ 0,			0	}			
};

acpienumeration en_P84_DSF[] = {
	{ "Std",		0	},
	{ "OPt",		1	},
	{ 0,			0	}			
};



acpienumeration en_P84_BLC[] = {
	{ "nO",			0	},
	{ "r2",			2	},
	{ "r3",			3	},
	{ "r4",			4	},	
	{ "LO1",		17	},	
	{ "LO2",		18	},		
	{ "LO3",		19	},	
	{ "LO4",		20	},		
	{ "DO1",		64	},		
	{ 0,			0	}			
};


acpienumeration en_P84_ERRD[] = {
	{ "nOF", 	0x0000 },
	{ "CrF", 	0x1000 },
	{ "OLF", 	0x1000 },
	{ "SOF", 	0x1000 },
	{ "bUF", 	0x1000 },
	{ "dCF", 	0x1000 },
	{ "HdF", 	0x1000 },
	{ "InFE", 	0x1000 },
	{ "bOF", 	0x1000 },
	{ "CSF", 	0x1000 },
	{ "SCF4", 	0x2230 },
	{ "OCF", 	0x2310 },
	{ "SCF1", 	0x2320 },
	{ "SCF2", 	0x2320 },
	{ "SCF5", 	0x2320 },
	{ "SCF3", 	0x2330 },
	{ "OSF", 	0x3110 },
	{ "USF", 	0x3120 },
	{ "PHF", 	0x3130 },
	{ "ObF", 	0x3310 },
	{ "OPF1", 	0x3310 },
	{ "OPF2", 	0x3310 },
	{ "OHF", 	0x4210 },
	{ "tJF", 	0x4210 },
	{ "OtF1", 	0x4310 },
	{ "OtF2", 	0x4310 },
	{ "OtFL", 	0x4310 },
	{ "InF7", 	0x5000 },
	{ "FCF1", 	0x5000 },
	{ "FCF2", 	0x5000 },
	{ "InFC", 	0x5000 },
	{ "CrF2", 	0x5000 },
	{ "LCF", 	0x5000 },
	{ "InF8", 	0x5100 },
	{ "InF9", 	0x5210 },
	{ "InFA", 	0x5210 },
	{ "InFb", 	0x5210 },
	{ "EEF1", 	0x5530 },
	{ "EEF2", 	0x5530 },
	{ "InF", 	0x6100 },
	{ "InF1", 	0x6100 },
	{ "InF2", 	0x6100 },
	{ "InF3", 	0x6100 },
	{ "InF4", 	0x6100 },
	{ "HCF", 	0x6100 },
	{ "CFF", 	0x6300 },
	{ "CFI", 	0x6300 },
	{ "InF6", 	0x7000 },
	{ "brF", 	0x7110 },
	{ "AnF", 	0x7300 },
	{ "LFF2", 	0x7300 },
	{ "PtF1", 	0x7300 },
	{ "PtF2", 	0x7300 },
	{ "PtFL", 	0x7300 },
	{ "AI2F", 	0x7300 },
	{ "LFF3", 	0x7300 },
	{ "LFF4", 	0x7300 },
	{ "SPF", 	0x7310 },
	{ "ECF", 	0x7310 },
	{ "EnF", 	0x7310 },
	{ "SLF1", 	0x7510 },
	{ "SLF3", 	0x7510 },
	{ "ILF", 	0x7520 },
	{ "CnF", 	0x7520 },
	{ "SLF2", 	0x7530 },
	{ "COF", 	0x8100 },
	{ "EPF1", 	0x9000 },
	{ "EPF2", 	0x9000 },
	{ "APF", 	0x9000 },
	{ "tnF", 	0xFF00 },
	{ "bLF", 	0xFF01 },
	{ "SSF", 	0xFF02 },
	{ "SrF", 	0xFF02 },
	{ "PrF", 	0xFF03 },
	{ "dLF", 	0xFF80 },
	{ 0, 0 }
};


acpienumeration en_P84_LFT[] = {
	{ "nOF",	0   },
	{ "InF",	1   },
	{ "EEF",	2	},
	{ "CFF",	3	},
	{ "CFI",	4	},
	{ "SLF1",	5	},
	{ "ILF",	6	},
	{ "CnF",	7	},
	{ "EPF1",	8	},
	{ "OCF",	9	},
	{ "CrF",	10	},
	{ "SPF",	11	},
	{ "AnF",	12	},
	{ "LFF2",   13	},
	{ "PtF1",	14	},
	{ "OtF1",	15	},
	{ "OHF",	16	},
	{ "OLF",	17	},
	{ "ObF",	18	},
	{ "OSF",	19	},
	{ "OPF1",	20	},
	{ "PHF",	21	},
	{ "USF",	22	},
	{ "SCF1",	23	},
	{ "SOF",	24	},
	{ "tnF",	25	},
	{ "InF1",	26	},
	{ "InF2",	27	},
	{ "InF3",	28	},
	{ "InF4",	29	},
	{ "EEF2",	30	},
	{ "SCF2",	31	},
	{ "SCF3",	32	},
	{ "OPF2",	33	},
	{ "COF",	34	},
	{ "bLF",	35	},
	{ "InF7",	37	},
	{ "EPF2",	38	},
	{ "APF",	39	},
	{ "InF8",	40	},
	{ "brF",	41	},
	{ "SLF2",	42	},
	{ "ECF",	43	},
	{ "SSF",	44	},
	{ "SLF3",	45	},
	{ "PrF",	46	},
	{ "PtF2",	47	},
	{ "OtF2",	48	},
	{ "PtFL",	49	},
	{ "OtFL",	50	},
	{ "InF9",	51	},
	{ "InFA",	52	},
	{ "InFb",	53	},
	{ "tJF",	54	},
	{ "SCF4",	55	},
	{ "SCF5",	56	},
	{ "SrF",	57	},
	{ "FCF1",	58	},
	{ "FCF2",	59	},
	{ "InFC",	60	},
	{ "AI2F",	61	},
	{ "EnF",	62	},
	{ "CrF2",	63	},
	{ "LCF",	64	},
	{ "bUF",	65	},
	{ "dCF",	66	},
	{ "HdF",	67	},
	{ "InF6",	68	},
	{ "InFE",	69	},
	{ "bOF",	70	},
	{ "LFF3",	71	},
	{ "LFF4",	72	},
	{ "HCF",	73	},
	{ "dLF",	76	},
	{ "CSF",	99	},
	{ 0, 0}
};


acpienumeration en_P84_HMIS[] = {
	{ "tUn",	0 },
	{ "dCb",	1 },
	{ "rdY",	2 },
	{ "nSt",	3 },
	{ "rUn",	4 },
	{ "ACC",	5 },
	{ "dEC",	6 },
	{ "CLI",	7 },
	{ "FSt",	8 },
	{ "FLU",	9 },
	{ "nLP",	11 },
	{ "PrA",	12 },
	{ "CtL",	13 },
	{ "Obr",	14 },
	{ "SOC",	15 },
	{ "USA",	17 },
	{ "tC",		18 },
	{ "St",		19 },
	{ "FA",		20 },
	{ "YES",	21 },
	{ "EP",		22 },
	{ "FLt",	23 },
	{ 0, 0}
};


acpienumeration en_P84_NCV[] = {
	{ "nO",  	0 },
	{ "010",  	1 },
	{ "018",  	2 },
	{ "025",  	3 },
	{ "037",  	4 },
	{ "055",  	5 },
	{ "075",  	6 },
	{ "090",  	7 },
	{ "U11",  	8 },
	{ "U15",  	9 },
	{ "U18",  	10 },
	{ "U22",  	11 },
	{ "U30",  	12 },
	{ "U37",  	13 },
	{ "U40",  	14 },
	{ "U55",  	15 },
	{ "U75",  	16 },
	{ "U90",  	17 },
	{ "d11",  	18 },
	{ "d15",  	19 },
	{ "d18",  	20 },
	{ "d22",  	21 },
	{ "d30",  	22 },
	{ "d37",  	23 },
	{ "d45",  	24 },
	{ "d55",  	25 },
	{ "d75",  	26 },
	{ "d90",  	27 },
	{ "C11",  	28 },
	{ "C13",  	29 },
	{ "C16",  	30 },
	{ "C20",  	31 },
	{ "C22",  	32 },
	{ "C25",  	33 },
	{ "C28",  	34 },
	{ "C31",  	35 },
	{ "C35",  	36 },
	{ "C40",  	37 },
	{ "C45",  	38 },
	{ "C50",  	39 },
	{ "C56",  	40 },
	{ "C63",  	41 },
	{ "C71",  	42 },
	{ "C80",  	43 },
	{ "C90",  	44 },
	{ "M10",  	45 },
	{ "M12",  	46 },
	{ "d90",  	155 },
	{ 0, 0 }
};

acpienumeration en_P84_VCAL[] = {
	{ "nO", 		0 },
	{ "110M", 		1 },
	{ "110t", 		2 },
	{ "M2", 		3 },
	{ "M3", 		4 },
	{ "480M", 		5 },
	{ "n4", 		6 },
	{ "690M", 		7 },
	{ "S6", 		8 },
	{ 0, 0 }
};

acpienumeration en_P84_SCS[] = {
	{ "nO", 		0 },
	{ "Str0", 		1 },
	{ "Str1", 		2 },
	{ "Str2", 		3 },	
	{ 0, 			0 }	
};


acpienumeration en_P84_FCS[] = {
	{ "nO", 		0 },
	{ "rEC0", 		1 },
	{ "rEC1", 		2 },
	{ "rEC2", 		3 },	
	{ "InI", 		64 },
	{ 0, 			0 }			
};



acpienumeration en_P84_TUN[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "dOnE",		2	},
	{ 0,			0	}			
};


acpienumeration en_P84_HSO[] = {
	{ "nO",			0	},
	{ "SSO",		1	},
	{ "CSO",		2	},
	{ 0,			0	}			
};



acpienumeration en_P84_PHR[] = {
	{ "AbC",		0	},
	{ "ACb",		1	},
	{ 0,			0	}			
};

acpienumeration en_P84_TST[] = {
	{ "SPd",		0	},
	{ "nSt",		1	},
	{ "SPn",		2	},	
	{ 0,			0	}			
};



acpienumeration en_P84_CFG[] = {
	{ "StS",		0	},
	{ "HdG",		1	},
	{ "HSt",		2	},
	{ "GEn",		3	},
	{ "PId",		4	},
	{ "nEt",		5	},
	{ "MSL",		6	},					
	{ 0,			0	}			
};


acpienumeration en_P84_RPT[] = {
	{ "LIn",		0	},
	{ "S",			1	},
	{ "U",			2	},
	{ "CUS",		3	},		
	{ 0,			0	}			
};



acpienumeration en_P84_BRA[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "dYnA",		2	},
	{ "dYnC",		3	},		
	{ 0,			0	}			
};



acpienumeration en_P84_STP[] = {
	{ "nO",			0	},
	{ "MMS",		1	},
	{ "rMP",		2	},
	{ "LnF",		3	},		
	{ 0,			0	}			
};



acpienumeration en_P84_ADC[] = {
	{ "nO",			0	},
	{ "YES",		1	},
	{ "Ct",			2	},
	{ 0,			0	}			
};


acpienumeration en_P84_STR[] = {
	{ "nO",			0	},
	{ "rAM",		1	},
	{ "EEP",		2	},
	{ 0,			0	}			
};


acpienumeration en_P84_STT[] = {
	{ "rMP",		0	},
	{ "FSt",		1	},
	{ "nSt",		2	},
	{ "dCI",		3	},	
	{ 0,			0	}			
};

acpienumeration en_P84_CSLOUT[] = {
	{ "nO",			0	},
	{ "LO1",		129	},	
	{ "LO2",		130	},	
	{ "LO3",		131	},	
	{ "LO4",		132	},	
	{ "R2",			146	},				
	{ "R3",			147	},				
	{ "R4",			148	},				
	{ "DO1",		161	},								
	{ 0,			0	}			
};


