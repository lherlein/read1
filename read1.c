/* This is a comment */
// this is also a comment


#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h> 

int main(void)
{
	wiringPiSetup(); // Initializes wiringPi using wiringPi's simlified number system.
	wiringPiSetupGpio(); // Initializes wiringPi using the Broadcom GPIO pin numbers

	pinMode(4, INPUT);

	char mychar = 0;
	while(mychar==0)
	{
		if (digitalRead(4))
    			printf("1\n");
		else
    			printf("0\n");
		usleep(250000);
	}
}
