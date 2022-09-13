#include<stdio.h>
int main() {
	double kg = 3.e-23;
	double num;
	printf("Please input 水的夸脱数：");
	scanf_s("%lf", &num);
	printf("水分子的数量为：%.0lf", (950 * num) / kg);
	getchar();
	return 0;
}