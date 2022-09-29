#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define TRAN 3.785/1.609
int main() {
	float mileage = 0;
	float Agasoline = 0;
	printf("Please input you mileage:");
	scanf("%f", &mileage);
	printf("Please input you amout of gasoline:");
	scanf("%f", &Agasoline);
	printf("Your fuel consumption per kilometer is:%.1f", mileage / Agasoline);;
	printf("Gallons per mile\n");
	printf("Your fuel consumption per kilometer is:%.1f",(mileage / Agasoline)*TRAN);
	printf("litres per 100 kile");
	getchar();
	return 0;
}