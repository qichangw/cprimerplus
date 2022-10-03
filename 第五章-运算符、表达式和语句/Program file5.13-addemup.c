#include<stdio.h>
int main() {
	int count, sum;//no is statement

	count = 0;
	sum = 0;
	while (count++ < 20)
		sum = sum + count;
	printf("sum = %d\n", sum);

	getchar();
	return 0;
}
