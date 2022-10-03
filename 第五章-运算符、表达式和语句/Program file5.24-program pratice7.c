#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double cube(double num);
int main() {
	double nums = 0;

	printf("Enter the value you want to caluate:");
	scanf("%lf", &nums);
	cube(nums);

	getchar();
	return 0;
}
double cube(double num) {
	printf("The num's cube is %.2lf.\n", num * num * num);
	return 0;
}