#include "mbed.h"

DigitalOut led(LED1);

int main(){
    for (int i = 0; i < 1; i++) {
        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);

        led = 1; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);

        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);

        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);

        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);

        led = 1; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);

        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);

        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 0; ThisThread::sleep_for(500ms);
        led = 1; ThisThread::sleep_for(500ms);

    }
    led = 0;
}