#include<stdio.h>
int main() {
	long double yearsecond = 3.156e7;
	double old;
	printf("Please input your old:\n");
	scanf_s("%f",&old);
	printf("You have lived %.0f second\n", yearsecond);
	getchar();
	return 0;
}