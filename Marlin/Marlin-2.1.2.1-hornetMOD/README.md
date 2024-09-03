## Marlin v2.1.2.1 configuration files

Configuration:

- Default constant values from official artillery firmware repository
- activated BLTouch
- new termistor added, setted hotend termistor to preset value 13 (instead of the official 1)
- changed maxtemp to 310 for the hotend (all metal exrtruder not suitable for the stock)
- setting new maxtemp for heated bed to 90 (magnetic plate can't go over 80)
- activated s-curve
- removed artillery logo on boot and added marlin animated one
- activated support for cancel object M486 (needs feature enabled in the slicer)

Links:

- [Marlin 2.1.2.1 Repository](https://github.com/MarlinFirmware/Marlin/tree/2.1.2.1)
- [Default Configuration files for Artillery Hornet](https://github.com/MarlinFirmware/Configurations/tree/release-2.1.2.1/config/examples/Artillery/Hornet)
- [Official Artillery Hornet Firmware](https://github.com/artillery3d/hornet-firmware)
