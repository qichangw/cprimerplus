#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	double first = 0, last = 0;
	int n1, n2;

	printf("Please input the first num:");
	n1=scanf("%lf", &first);
	printf("Please input the last num:");
	n2=scanf("%lf", &last);
	for (; n1, n2;)
	{
		printf("%lf\n", (first - last) / first * last);
		printf("Please input the first num(q to quit):");
		n1 = scanf("%lf", &first); 
		if (n1 == 1)
		{
			printf("Please input the last num(q to quit):");
			n2 = scanf("%lf", &last);
		}
	}

	getchar();
	return 0;
}//trouble