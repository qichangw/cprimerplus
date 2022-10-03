#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int num = 0;
	int number = 0;
	
	printf("Please input a int:");
	scanf("%d", &num);
	number = num + 10;
	while (num <= number)
	{
		printf("%d\t", num);
		num++;
	}
	printf("\n");
	printf("Bye.\n");

	getchar();
	return 0;
}