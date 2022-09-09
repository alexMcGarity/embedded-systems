//mbed code that outputs the values of a single digit internal counter i on a 7-segment display running on FRDM-K64F

#include "mbed.h"

//Define the pins used for the 7-segment display
DigitalOut a(D5);
DigitalOut b(D6);
DigitalOut c(D7);
DigitalOut d(D8);
DigitalOut e(D9);
DigitalOut f(D10);
DigitalOut g(D11);

//Define the pins used for the internal counter
DigitalOut i0(D12);
DigitalOut i1(D13);
DigitalOut i2(D14);
DigitalOut i3(D15);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        
    }
}