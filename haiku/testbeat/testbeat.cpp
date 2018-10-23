/*
 * Copyright 2015 Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */


#include <ctime>
#include <iostream>
#include <stdio.h>

int main(void) {
	//get time
    std::time_t t = std::time(0);
    std::tm* now = std::gmtime(&t);

	printf("Todays date is: ");
	printf("%d - " ,now->tm_year + 1900);
	printf("%d - " ,now->tm_mon + 1);
	printf("%d \n" ,now->tm_mday);
	printf("The time is: %d:%d \n" ,now->tm_hour,now->tm_min);

double h, m, s, allsec, magicno, beat;
//float beat;

h = now->tm_hour + 1;
m = now->tm_min;
s = now->tm_sec;
beat = 0;

magicno = (60 * 60 * 24);

if (h > 23)
	h = 0;

allsec = s + ((m * 60) + (h * 60 * 60));
beat = (allsec / magicno) * 1000;

printf("Hours: @%g \n" ,h);
printf("Minutes: @%g \n" ,m);
printf("Seconds: @%g \n" ,s);
printf("All Seconds: @%g \n" ,allsec);
printf("Internet Time: @%g \n" ,beat);
printf("Calculation: @%g \n" ,magicno);


}













