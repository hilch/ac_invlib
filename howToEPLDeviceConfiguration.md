## Configuration ACOPOSinverter connected to Powerlink

![powerlink_device_path](https://github.com/hilch/ac_invlib/blob/master/docs/powerlink_device_path.jpg)

**P84 and P74**: Open the I/O - Configuration and set ‚ETAT‘, ‚ETI‘, ‚CMDD‘ and ‚CMI‘ to ‚packed‘ and 'Download parameters' to 'no':

![powerlink_config_p84p74](https://github.com/hilch/ac_invlib/blob/master/docs/powerlink_mapping_configuration.png)

**P76+P66**:Open the I/O - Configuration and add ‚HMIS‘, ‚LFT‘, ‚OTR‘, ‚LCR‘ ,THR‘ and ‚THD‘ to ‚additional cyclc data points‘ and set 'Download ACPi parameter set' to 'no':

![P76_Configuration](https://github.com/hilch/ac_invlib/blob/master/docs/P76_Configuration.png)

Open the I/O - Mapping and connect the 'io_mapping'- elements (P84)

![powerlink_iomapping_P84](https://github.com/hilch/ac_invlib/blob/master/docs/powerlink_iomapping.png)
Open the I/O - Mapping and connect the 'io_mapping'- elements (P74)

![powerlink_iomapping_P74](https://github.com/hilch/ac_invlib/blob/master/docs/powerlink_iomapping_P74.png)

Open the I/O - Mapping and connect the 'io_mapping'- elements (P76+P66)

![powerlink_iomapping_P76](https://github.com/hilch/ac_invlib/blob/master/docs/P76_IO_Mapping.png)
