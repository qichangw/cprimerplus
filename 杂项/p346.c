#include<stdio.h>
int main()
{
	typedef const int zip;//将zip认为是const int型变量
	const zip q = 8;
	printf("%d", q);

}