#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 50;
	int truenum;
	int num2 = 100;
	int num3 = 50;
	scanf("%d", &truenum);
	printf("number is %d?", num);
	while (truenum != num)
	{
		
		if (truenum > num)
		{
			printf("No the %d < truenum", num);
			num = (num + num2) / 2;
		}
		else if (truenum < num)
		{
			printf("No the %d < truenum", num);
	
		}
	}
	printf("Yes, %d is my number.",num);
}