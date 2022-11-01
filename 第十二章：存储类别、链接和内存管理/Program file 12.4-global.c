#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int units = 0;
void critic();
int main()
{
	extern int units;//没有必要

	printf("How many pounds to a firkin of butter?\n");
	scanf("%d", &units);
	while (units != 56)
		critic();
	printf("You must have looked it up!");

	return 0;
}

void critic()
{
	printf("No luck, my firend.Try again.\n");
	scanf("%d", &units);
}