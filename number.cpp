#include <itpp/itcomm.h>
#include <iostream>
#include <bitset>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include<time.h>
#include <unistd.h>
using namespace std;
void delay(unsigned int mseconds)
{
    clock_t goal = mseconds + clock();
    while (goal > clock());
}



int main(int argc, char* argv[])
{
	int r;
	srand(time(NULL));
	while(true)
	{
		r = rand() % 1000;
		cout << r << endl;
		sleep(2); 
	}
	return 0;
}
