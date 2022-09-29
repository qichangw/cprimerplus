#include<stdio.h>
int main() {
	float Fl;
	printf("Enter a floating-point value:");
	scanf_s("%f", &Fl);
	printf("fixed-point notation:%f\n", Fl);
	printf("exponemtial notation:%e\n", Fl);
	printf("p notation:%.2a\n", Fl);
	return 0;
}