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

	pinMode(4, INPUT);
	char mychar = 0;
	while(mychar==0)
	{
		if (digitalRead(4))
		{
//    			printf("1\n");
			digitalWrite (17, HIGH);
		}
		else
    		{
//			printf("0\n");
			digitalWrite (17, LOW);
		}
//	usleep(150000);

	}
}
