#include<stdio.h>
int main() {
	int n = 3;

	while (n)
		printf("%2d is true\n", n--);
	printf("%2d is false\n", n);

	n = -3;
	while (n)
		printf("%2d is true\n", n++);
	printf("%2d is false\n", n);//only 0 is false other is true

	getchar();
	return 0;
}