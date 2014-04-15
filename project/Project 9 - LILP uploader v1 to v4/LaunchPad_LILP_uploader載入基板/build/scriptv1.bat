MSP430Flasher.exe -n MSP430G2553 -w "LILPv1.txt" -v -g -z [VCC]
echo off
echo   Digital Output  P1.0  ASCII "0" 
echo   Digital Output  P1.6  ASCII "6" 
echo   Analog  Input   P1.4  ASCII "4" 
echo   Analog  Input   P1.5  ASCII "5" 
echo   Analog  Input   P1.7  ASCII "7"
echo   read Temperature      ASCII "T"
echo   read Vcc voltage      ASCII "V"