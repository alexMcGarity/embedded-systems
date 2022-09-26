Controlling LED Brightness by PWM
/*Program Example 5.2: Uses analog input to control PWM duty
cycle, fixed period
*/
#include "mbed.h"
PwmOut PWM1(p23);
AnalogIn Ain(p20); //defines analog input on Pin 20
int main() {
while(1){
PWM1.period(0.010); // set PWM period to 10 ms
PWM1=Ain; //Analog in value becomes PWM duty, both
are type float
wait(0.1);
}
}