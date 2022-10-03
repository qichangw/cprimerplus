#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double Tempoeratures(double temper);
int main() {
	double temper = 0;
	int n=0;

	printf("Enter a degree Fahrenheit£º");
	n=scanf("%lf", &temper);
	Tempoeratures(temper);
	while (n)
	{
		printf("Enter a degree Fahrenheit£º");
		n=scanf("%lf", &temper);
		Tempoeratures(temper);
	}

	getchar();
	return 0;
}
double Tempoeratures(double temper) {
	double cdegree;
	double kdegree;
	const double T = 5.0;
	const double M = 9.0;
	cdegree = T / M*(temper - 32.0);
	kdegree = cdegree + 273.16;
	printf("cdegree = %lf\n", cdegree);
	printf("kdegree = %lf", kdegree);

}//bug
