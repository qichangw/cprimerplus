/*nogood.c--有错误的程序*/
#include<stdio.h>

int main() {
	//int n, int n2, int n3;have error这个是2.4
	int n;
	int n2;
	int n3;
	n = 5;
	n2 = n * n;
	n3 = n2 * n;
	printf("n=%d,n squared = %d, n cubed = %d\n", n, n2, n3);

	return 0;
}
/*声明三个变量n n2 n3
* 分别给三个变量赋值
* 打印三个变量的值
*/
