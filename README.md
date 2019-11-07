# ac_invlib [![License: LGPL v3](https://img.shields.io/badge/License-LGPL%20v3-blue.svg)](https://www.gnu.org/licenses/lgpl-3.0)
[B&amp;R](https://www.br-automation.com) Automation Studio Library for ACOPOSinverter

![ac_inv()](https://github.com/hilch/ac_invlib/blob/master/Screenshot1.PNG)


## Mission of the library:
This Library controls an ACOPOSinverter without use of SDC ("smart device control"). Supported drives: P84 (EPL+CANopen), P74 (EPL) , P76 (EPL+CANopen), P66 (EPL+CANopen)
For additional information refer to the builtin *.chm help file (Press F1 in AS)

## Warranty
This library is **not an official B&amp;R product!** For this reason the use is at your own risk and there is NO claim on support or maintenance.

## Features
* simple handling of ACOPOSinverters with minimal cpu load.
* use data modules for parameters

![dataobject](https://github.com/hilch/ac_invlib/blob/master/docs/sample_data_object.jpg)

  - use symbolic names instead of numbers for parameters
  - change motor parameters at runtime
  - activate motor tuning
* read and write parameters via 'service channel'
![servicechannel](https://github.com/hilch/ac_invlib/blob/master/docs/service_channel.PNG)

* logging parameter actions and errors on CPU (similar to ACOPOS network command trace)
![logging](https://github.com/hilch/ac_invlib/blob/master/docs/logging_import2.jpg)

## HowTo

1. download binary library from https://github.com/hilch/ac_invlib/releases
1. extract ZIP to temporary folder, 2. Add Object - Existing library, 3. Navigate to folder "ac_invlib
![addobject](https://github.com/hilch/ac_invlib/blob/master/docs/AddObject_ExistingLibrary.PNG)

1. insert an ACOPOSinverter into physical view (stop axis wizard)
1. configure IO configuration and IO mapping:
 - [Configuration of an EPL device](https://github.com/hilch/ac_invlib/blob/master/howToEPLDeviceConfiguration.md)
 - [Configuration of a CANopen device:](https://github.com/hilch/ac_invlib/blob/master/howToCanopenDeviceConfiguration.md) 
 
 1. in case of errors: see parameter logging  [Parameter Logging](https://github.com/hilch/ac_invlib/blob/master/howToLogging.md)

## History

see [history](http://htmlpreview.github.io/?https://github.com/hilch/ac_invlib/blob/master/docs/General%20Information/Version%20History.html)

## Development
/develop/:
Automation Studio project for compiling and debugging the library

/docs/
documentation project for Microsoft HTML Workshop

https://www.microsoft.com/en-us/download/details.aspx?id=21138


repository starts with V 1.10.1 (2.11.2017 )


