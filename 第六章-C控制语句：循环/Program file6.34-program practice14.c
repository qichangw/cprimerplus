#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double num1[8], num2[8];
	double sum = 0;

	for (int i = 0; i < 8; i++)
	{
		scanf("%lf", &num1[i]);
	}
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			sum += num1[j];	
		}
		printf("%.1lf ", sum);
		sum = 0;
	}

	getchar();
	return 0;
}