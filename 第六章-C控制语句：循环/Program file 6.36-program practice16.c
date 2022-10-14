#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double Daphnemoney = 100;
	double Deirdremoney = 100;
	double SDaphnemoney = 100;
	double SDeirdremoney = 100;
	SDaphnemoney += Daphnemoney * 0.1;
	SDeirdremoney += SDeirdremoney * 0.05;

	for (int i = 1; SDaphnemoney > SDeirdremoney; i++)
	{
		SDaphnemoney += Daphnemoney * 0.1;
		SDeirdremoney += SDeirdremoney * 0.05;
	}
	printf("%.1lf %.1lf", SDaphnemoney, SDeirdremoney);

	getchar();
	return 0;
}