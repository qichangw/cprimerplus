#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name1[11], name2[11];
	int count;

	printf("Please enter 2 names.\n");
	count = scanf("%5s %10s", name1, name2);
	printf("I read the %d name %s and %s.\n", count, name1, name2);

	return 0;
}