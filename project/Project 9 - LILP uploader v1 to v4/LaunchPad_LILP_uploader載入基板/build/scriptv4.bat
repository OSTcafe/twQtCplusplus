MSP430Flasher.exe -n MSP430G2553 -w "LILPv4.txt" -v -g -z [VCC]
echo off
echo   Digital Output  P1.0  ASCII "0" 
echo   Analog  Input   P1.4  ASCII "4" 
echo   Analog  Input   P1.5  ASCII "x" 
echo   Analog  Input   P1.6  ASCII "y" 
echo   Analog  Input   P1.7  ASCII "z"
echo   read Temperature      ASCII "T"
echo   read Vcc voltage      ASCII "V"