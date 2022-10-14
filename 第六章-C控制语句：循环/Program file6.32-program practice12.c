#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float num1 = 1.0;
	float num2 = 1.0;
	float num3 = num2;
	int num4 = 1;
	int num;
	float sum1 = 0;
	float sum2 = 0;

	printf("Please input the count:");
	scanf("%d", &num);
	while (num2 < num)
	{
		sum1 += num1 / num2;
		num2++;
	}
	printf("%lf\n", sum1);
	while (num3 < num)
	{
		if(num4%2==1)
		sum2 += num1 / num2;
		sum2 -= num1 / num2;
		num3++;
		num4++;
	}
	printf("%lf", sum2);

	getchar();
	return 0;
}