#include<stdio.h>
int main()
{
	typedef const int zip;//��zip��Ϊ��const int�ͱ���
	const zip q = 8;
	printf("%d", q);

}