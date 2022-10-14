#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int Mlimit = 0, Llimit = 0;
	int sum=0;

	printf("Enter lower and upper integer limites:");
	scanf("%d%d", &Llimit, &Mlimit);
	while (Llimit != Mlimit)
	{
		for (int i = Llimit; i <= Mlimit; i++)
		{
			sum += i * i;
		}
		printf("The sum of the squares from %d to %d is %d.\n", Llimit, Mlimit, sum);
		printf("Enter next set of limits:");
		scanf("%d%d", &Llimit, &Mlimit);
	}

	getchar();
	return 0;
}
