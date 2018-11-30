# ac_invlib [![License: LGPL v3](https://img.shields.io/badge/License-LGPL%20v3-blue.svg)](https://www.gnu.org/licenses/lgpl-3.0)
[B&amp;R](https://www.br-automation.com) Automation Studio Library for ACOPOSinverter

![ac_inv()](https://github.com/hilch/ac_invlib/blob/master/Screenshot1.PNG)


# Mission of the library:

This Library controls an ACOPOSinverter without use of SDC ("smart device control"). Supported drives: P84 (EPL), P84 (CANopen), P74 (EPL) 
For additional information refer to the builtin *.chm help file (Press F1 in AS)

 - Configuration of an EPL device:
   ![howToEPLDeviceConfiguration](https://github.com/hilch/ac_invlib/blob/master/howToEPLDeviceConfiguration.md)

 - Configuration of an CANopen device:
   ![howToEPLDeviceConfiguration](https://github.com/hilch/ac_invlib/blob/master/howToCanopenDeviceConfiguration.md)
   

# Warranty

This library is not an official B&amp;R product! For this reason the use is at your own risk and there is NO claim on support or maintenance.

# Features
* simple handling of ACOPOSinverters with minimal cpu load.
* use data modules for parameters ![dataobject](https://github.com/hilch/ac_invlib/blob/master/docs/sample_data_object.jpg)
  * use symbolic names instead of numbers for parameters
* read and write parameters via 'service channel' ![servicechannel](https://github.com/hilch/ac_invlib/blob/master/docs/service_channel.PNG)

* logging parameter actions and errors on CPU (similar to ACOPOS network command trace) ![logging](https://github.com/hilch/ac_invlib/blob/master/docs/logging_import2.jpg)

# Directories:

/develop/:
Automation Studio project for compiling and debugging the library

/docs/
documetation project for Microsoft HTML Workshop (respectively "documentation studio" from B&amp;R switzerland)

https://www.microsoft.com/en-us/download/details.aspx?id=21138


repository starts with V 1.10.1 (2.11.2017 )


