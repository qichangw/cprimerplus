#include<stdio.h>
int imax(int, int);
int main() {
	printf("The maximum of %d and %d is %d.\n",
		3, 5, imax(3,5));//新版的优势-新版的参数如果数量过少将会给出报错信息。
	printf("The maximum of %d and %d is %d.\n",
		3, 5, imax(3.0, 5.0));

	return 0;
}

int imax(int n, int m)
{
	return (n > m ? n : m);
}