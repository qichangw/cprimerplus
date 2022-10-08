#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int first = 0;
	int last = 0;

	printf("Enter the first:");
	scanf("%d", &first);
	printf("Enter the last:");
	scanf("%d", &last);

	for (; first <= last; first++)
	{
		printf("%d ,%d ,%d\n", first, first * first, first * first * first);
	}

	getchar();
	return 0;
}