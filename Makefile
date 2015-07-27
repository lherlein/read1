


all: read1.c
	gcc -o read1 read1.c -l wiringPi


git:
	git add *
	git commit -m"no comment"
	git push -u origin master
