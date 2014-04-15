CLS
MSP430Flasher.exe -n MSP430F2132 -w "Firmware.txt" -v -g -z [VCC] 
pause
MSP430Flasher.exe -n MSP430F2132 -r [Firmware Output.txt,MAIN]
pause