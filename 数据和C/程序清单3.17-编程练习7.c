#include<stdio.h>
int main() {
	float feet = 2.54;
	float high;
	printf("Please input you high:");
	scanf_s("%f", &high);
	printf("Yours high is %.2f cm", high * feet);
	getchar();
	return 0;
}