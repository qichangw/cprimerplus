#include<stdio.h>
int main() {
	double kg = 3.e-23;
	double num;
	printf("Please input ˮ�Ŀ�������");
	scanf_s("%lf", &num);
	printf("ˮ���ӵ�����Ϊ��%.0lf", (950 * num) / kg);
	getchar();
	return 0;
}