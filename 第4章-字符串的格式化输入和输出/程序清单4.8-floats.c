#include<stdio.h>

int main() {

	const double RENT = 3852.99;

	printf("*%f*\n", RENT);//Display as floating point numbers
	printf("*%e*\n", RENT);//Display according to scientific counting method
	printf("*%4.2f*\n", RENT);//Display as a minimum four - digit integer and at least two decimal places
	printf("*%3.1f*\n", RENT);//Dispaly as a minimum three - digit integer and at least one decimal places
	printf("*%10.3f*\n", RENT);//Ten space lengths and three decimal places
	printf("%10.3E*\n", RENT);
	printf("*%+4.2f*\n", RENT);
	printf("*%010.2f*\n", RENT);
	gerchar();
	return 0;
}