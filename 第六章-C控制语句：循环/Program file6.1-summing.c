#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long num=0;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed ");
	printf("(q to quit):");
	status = scanf("%ld", &num);
	while (status==1)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		status = scanf("%ld", &num);
	}
	printf("Those integers sum to %ld.\n", sum);

	getchar();
	return 0;
}