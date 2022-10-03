#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int count = 0;
	int day = 1;

	while (day <= 20)
	{
		printf("the %d day have $%d\n", day, day*day);
		day++;
	}

	getchar();
	return 0;
}