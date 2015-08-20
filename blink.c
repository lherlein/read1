#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h> 

int main(void)
{
        wiringPiSetup(); // Initializes wiringPi using wiringPi's simlified number system.
        wiringPiSetupGpio(); // Initializes wiringPi using the Broadcom GPIO pin numbers

        pinMode (17, OUTPUT);
		digitalWrite (17, HIGH) ; delay (500) ;
		digitalWrite (17,  LOW) ; delay (500) ;
}

