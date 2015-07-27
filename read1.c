/* This is a comment */
// this is also a comment


#include <stdio.h>
#include <wiringPi.h>
#include <unistd.h> 

int main(void)
{
	char mychar = 0;
	while(mychar==0)
	{
		printf("0\n");
		sleep(1);
	}
}
