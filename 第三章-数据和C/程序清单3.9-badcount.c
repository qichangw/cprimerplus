#include<stdio.h>
int main() {
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);//m���Զ�ʡ�Բ�����Ӧ�ľ���
	printf("%d %d %d\n", n);//�������ֵ-641 -397412656
	printf("%d %d\n", f, g);//ȫΪ0

	return 0;
}