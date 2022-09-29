#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n;

	printf("Please enter three integers:\n");
	scanf("%*d %*d %d", &n);//could input three intergers by every way
	printf("The last interger was %d\n", n);

	getchar();
	return 0;
}