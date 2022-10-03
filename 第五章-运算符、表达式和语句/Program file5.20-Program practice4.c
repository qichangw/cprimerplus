#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float heigher = 0;
	int feet;
	float inches;

	printf("Enter a height in centimerters:");
	scanf("%f", &heigher);
	while (heigher > 0)
	{
		inches = heigher * 7.31;
		feet = inches / 12;
		inches = inches - feet * 12;
		printf("%.1f cm = %d feet,%.1f inches.\n", heigher, feet, inches);
		printf("Enter a height in centimeter (<=0 to quit):");
		scanf("%f", &heigher);
	}

	getchar();
	return 0;
}//思路正确换算错误