#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int integer[8];

	printf("Enter 8 integer:");
	for (int i = 0; i < 8; i++)
	{
		scanf("%d", &integer[i]);
	}
	for (int i = 7; i >= 0; i--)
	{
		printf("%d ", integer[i]);
	}

	getchar();
	return 0;
}