#include "ioport.h"
#include "setup_serial.h"

void setup_serial() {
	out8(0x3f8 + 3, 0x83);//0b10000011); // Enabling division coefficient in 0 and 1 ports
	out8(0x3f8 + 0, 0x18); // Just a valid value for the coefficient
	out8(0x3f8 + 1, 0x00);	
	
	out8(0x3f8 + 3, 0x80);//0b00000001); // Break is not enabled
	out8(0x3f8 + 1, 0x00);//0b00000000); // Interrupt Enable Register

}