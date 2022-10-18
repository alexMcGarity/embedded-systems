#include "mbed.h"
SPI master (D11, D12, D13);
DigitalOut blue(D2),red(D3),green(D4),cs(D10);
DigitalIn switch1(D5),switch2(D6);
int message,recieved;
int main(){
    while(true){
        message = 0xa0;
        if(switch1 == 1)message = message|0x01;
        if(switch2 == 1)message = message|0x02;
        cs =0;
        recieved = master.write(message);
        cs = 1;
        wait_us(1000000);
        blue = 0;
        red = 0;
        green = 0;
        recieved = recieved&0x03;
        if(recieved == 1)blue = 1;
        if(recieved == 2)red = 1;
        if(recieved == 3)blue = red = green = 1;
    }
}