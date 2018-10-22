/*
 * Copyright 2015 Your Name <your@email.address>
 * All rights reserved. Distributed under the terms of the MIT license.
 */


#include <ctime>
//#include <iostream>
#include <stdio.h>

int main(void) {
	
	double h, m, s, allsec, magicno, beat;
	
	//get time
    std::time_t t = std::time(0);
    std::tm* now = std::gmtime(&t);

	
	h = now->tm_hour + 1;
	m = now->tm_min;
	s = now->tm_sec;
	beat = 0;
	
	if (h > 23) h = 0;
	
	s = s + ((m * 60) + (h * 60 * 60));
	beat = (s / (60 * 60 * 24)) * 1000;
	printf("beats: @%g\n" ,beat);
	
	
	
}
