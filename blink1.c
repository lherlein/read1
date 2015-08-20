/* This is a comment */
// this is also a comment


#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h> 

int main(void)
{
	wiringPiSetup(); // Initializes wiringPi using wiringPi's simlified number system.
	wiringPiSetupGpio(); // Initializes wiringPi using the Broadcom GPIO pin numbers

	pinMode (17, OUTPUT);
	pinMode (27, OUTPUT);
	for (;;)
	{
		digitalWrite (17, HIGH); delay (500) ;
		digitalWrite (17, LOW); delay (500) ;
		digitalWrite (27, HIGH); delay (500) ;
		digitalWrite (27, LOW); delay (500) ;
	}

}
