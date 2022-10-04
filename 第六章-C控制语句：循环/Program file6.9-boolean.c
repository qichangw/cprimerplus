#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	long num;
	long sum = 0L;
	_Bool input_is_good;

	printf("Please enter an integer to be summed ");
	printf("(q to quit): ");
	input_is_good = scanf("%ld", &num);//(scanf("%ld", &num) == 1);//maybe could change more easy
	while (input_is_good)
	{
		sum = sum + num;
		printf("Please enter next integer (q to quit): ");
		input_is_good = scanf("%ld", &num);//(scanf("%ld", &num) == 1);
	}
	printf("Those integer sum to %ld.\n", sum);

	getchar();
	return 0;
}