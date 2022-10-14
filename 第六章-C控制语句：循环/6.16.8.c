#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void m_print(double num1, double num2);

int main()
{
	double num1, num2;
	while (scanf("%lf%lf", &num1, &num2))//´æÔÚÎÊÌâ
	{
		m_print(num1, num2);
	}
}

void m_print(double num1, double num2)
{
	printf("(num1-num2)/(num1*num2) = %lf\n", (num1 - num2) / (num1 * num2));
}
