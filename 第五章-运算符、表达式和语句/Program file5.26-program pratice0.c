#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
double Tempoeratures(double Ftemper);
int main() {
	double Ftemper = 0;
	int n=0;

	printf("Enter a degree Fahrenheit£º");
	n=scanf("%lf", &Ftemper);//scanf() return your input
	Tempoeratures(Ftemper);
	while (n)
	{
		printf("Enter a degree Fahrenheit(q to quit)£º\n");
		n=scanf("%lf", &Ftemper);
		if(n)
			Tempoeratures(Ftemper);
	}

	getchar();
	return 0;
}
double Tempoeratures(double Ftemper) {
	double cdegree;
	double kdegree;
	const double T = 5.0;
	const double M = 9.0;
	cdegree = T / M*(Ftemper - 32.0);
	kdegree = cdegree + 273.16;
	printf("cdegree = %lf\n", cdegree);
	printf("kdegree = %lf", kdegree);

}
