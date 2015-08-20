


all: read1.c
	gcc -o read1 read1.c -l wiringPi


git:
	git add *
	git commit -m"no comment"
	git push -u origin master

led: led.c
	gcc -o led led.c -l wiringPi


all: blink1.c
	gcc -o blink1 blink1.c -l wiringPi
