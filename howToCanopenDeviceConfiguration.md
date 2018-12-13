## Configuration of an ACOPOSinverter P84 connected to CANopen

### import electronic datasheet (EDS)

import [EDS](https://github.com/hilch/ac_invlib/blob/master/docs/EDS_P84.zip)

### description of the device name can be read from the physical view

![canopen_device_path](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_device_path.jpg)

### Open the I/O - Configuration and change the 'Channels' section.

the following parameters have to be changed compared to their default values:

ETI

![eti](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_mapping_configuration_ETI.png)

THD

![thd](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_mapping_configuration_THD.png)

OL1R

![ol1r](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_mapping_configuration_OL1R.png)

AO1R

![ao1r](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_mapping_configuration_AO1R.png)

LFT

![lft](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_mapping_configuration_LFT.png)

THR

![thr](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_mapping_configuration_THR.png)

OTR

![otr](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_mapping_configuration_OTR.png)

### Change the 'Network management parameters' - section to active the 'Heart beat' 

![co_network_management](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_network_management.png)

## Configuration of ACOPOSinverter P66/P76 connected to CANopen

### import electronic datasheet (EDS)

import [EDS](https://github.com/hilch/ac_invlib/blob/master/docs/EDS_P66_P76.zip)

### description of the device name can be read from the physical view

![canopen_device_path](https://github.com/hilch/ac_invlib/blob/master/docs/canopen_device_path.jpg)


### Open the I/O - Configuration

Change 'Node observation' to 'Heart beat'

![P66_P76_CAN_IO_configuration](https://github.com/hilch/ac_invlib/blob/master/docs/P66_P76_CAN_io_configuration.PNG)

### Open the I/O - Mapping and connect variables

![P66_P76_CAN_IO_mapping](https://github.com/hilch/ac_invlib/blob/master/docs/P66_P76_CAN_io_mapping.PNG)

