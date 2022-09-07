//mbed code that outputs the values of a single digit internal counter i on a 7-segment display running on FRDM-K64F

#include "mbed.h"

//Define the pins used for the 7-segment display
DigitalOut a(p5);
DigitalOut b(p6);
DigitalOut c(p7);
DigitalOut d(p8);
DigitalOut e(p9);
DigitalOut f(p10);
DigitalOut g(p11);

//Define the pins used for the internal counter
DigitalOut i0(p12);
DigitalOut i1(p13);
DigitalOut i2(p14);
DigitalOut i3(p15);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        
    }
}