#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void math(double num1, double num2);
int main() {
	int num = 0;
	double num1 = 0, num2 = 0;
	
	while (scanf("%lf%lf", &num1, &num2) == 2)
	{
		math(num1, num2);
	}

	getchar();
	return 0;
}
void math(double num1, double num2)
{
	printf("%lf", (num1 - num2) / (num1 * num2));
}