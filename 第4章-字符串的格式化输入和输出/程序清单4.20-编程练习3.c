#include<stdio.h>
int main() {
	float number1=21.290;
	printf("The input is %3.1f or %2.1e", number1,number1);
	printf("The input is %+5.3f or %4.3E", number1, number1);
	getchar();
	return 0;
}