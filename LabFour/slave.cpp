#include "mbed.h"
SPISlave slave(D11,D12,D13,D10);
DigitalOut blue(D2),red(D3),green(D4);
DigitalIn switch1(D5),switch2(D6);
int recieved, message;
int main(){
    while(true){
        message = 0xa0;
        if(switch1 == 1)message = message|0x01;
        if(switch2 == 1)message = message|0x02;
        if(slave.receive()){
            recieved = slave.read();
            slave.reply(message);
        }
        blue = 0;
        red = 0;
        green = 0;
        recieved = recieved&0x03;
        if(recieved == 1)blue = 1;
        if(recieved == 2)red = 1;
        if(recieved == 3)blue = red = green = 1;
    }
}