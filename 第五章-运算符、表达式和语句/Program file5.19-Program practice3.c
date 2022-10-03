#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int day = 0, week, minday;

	printf("Please input the day number(<=0 to quit):");
	scanf("%d", &day);
	week = day / 7;
	minday = day % 7;
	//while (day)//<zero also is 1
	while(day>0)
	{
		printf("%d days are %d weeks,%d days\n", day, week, minday);
		printf("Please input the day number (<=0 to quit):");
		scanf("%d", &day);
	}

	getchar();
	return 0;
}