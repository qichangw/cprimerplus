#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
int main() {
	unsigned long num;
	unsigned long div;
	bool isprime;

	printf("please enter an integer for analysis;");
	printf("Enter q to quit.\n");
	while (scanf("%lu", &num) == 1)
	{
		for (div = 2, isprime = true; (div * div) <= num; div++)
		{
			if (num % div == 0)
			{
				if ((div * div) != num)
					printf("%lu is divisible by %lu and %lu.\n",
						num, div, num / div);
				else
					printf("%lu is divisible by %lu.\n",
						num, div);
				isprime = false;
			}
		}
		if (isprime)
			printf("%lu is prime.\n", num);
		printf("Please enter another integer for analysis; ");
		printf("Enter q to quit.\n");
	}
	printf("Bye.\n");
	getchar();
	return 0;
}//think 1 is prime.but 1 isn't prime.