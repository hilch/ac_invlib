# ac_invlib - Parameter Logging
All ACOPOSinverter - parameters that were written and read by the user are logged in a special logging module on the plc
To read the logbook activate the Physikal view select a Hardware object and then select menu „Open/Logger“
![logging2](https://github.com/hilch/ac_invlib/blob/master/docs/logging_import1.jpg)
Set the filter conditions to „ac_invlog“
![logging2](https://github.com/hilch/ac_invlib/blob/master/docs/logging_import2.jpg)
Examples
![example_logging](https://github.com/hilch/ac_invlib/blob/master/docs/sample_logging.png)

## Download Sequence
All inverters require a correct sequence for downloading all parameters.  The correct sequence is listed in the Automation Studio hardware tree.
The library takes this into account and sorts all parameters that are specified in the data module, unless input 'no_parameter_sort' in the 'ac_inv_alloc' block is set.

## Known problems
ACOPOSinverters (and original Schneider Altivars) are some sensitive to the order and timing of downloading parameters.
So some configurations with the library are problematic and need workaround:

###'CFI' after setting 'bLc'
currently this issue could be solved by setting *'.no_parameter_sort'* to *TRUE* and add some 'waits' in
data module, e.g.
```
"ACC = 5"		; Acceleration [s]
"dEC = 5"		; Deceleration [s]
"LSP = 0"		; Low speed [* 0.1 Hz]
"HSP = 500"		; High speed [* 0.1 Hz]
"Ith=14"
"bFr = 50"		; Standard mot. freq [50/60]
"tFr = 500"		; Max frequency [* 0.1 Hz]
"Ctt=UUC"
"nPr=18"
"COS=88"
"UnS = 230"		; Rated motor volt. [V]
"nCr=14"
"FrS = 500"		; Rated motor freq. [* 0.1 Hz]
"nsp=880"
"IPL = nO"		; Input phase loss (3ph only)
"CMI=0"			; enable parameter checking and wait...
"CMI=0"
"CMI=0"
"CMI=0"
"CMI=0"
"CMI=0"
"CMI=0"
"BLC=R2"		; switch on brake function
```
