#include<stdio.h>
#include<float.h>
int main() {
	double num1 = 1.0 / 3.0;
	float num2 = 1.0 / 3.0;
	printf(" %16.6f, %16.12f, %16.16f\n", num1, num1, num1);
	printf("%16.6f,%16.12f,%16.16f\n", num2, num2, num2);
	printf("%16f,%16f", FLT_DIG, DBL_DIG);
	getchar();
	return 0;
}