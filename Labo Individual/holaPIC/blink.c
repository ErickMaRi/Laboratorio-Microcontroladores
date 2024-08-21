#include <xc.h>

void delay (unsigned int tiempo) {
    unsigned int i;
    unsigned int j;
    for(i=0;i<tiempo;i++)
        for(j=0;j<1275;j++);
}

void main(void) {
    TRISIO = 0b00000000; // Set all pins as outputs
    GPIO = 0x00; // Set all pins low

    unsigned int time = 100;

    // Loop forever
    while ( 1 ) {
        GP0 = 0x00; // Turn off the LED
        delay(time);
        GP0 = ~GP0; // Toggle the LED
        delay(time);
    }
}