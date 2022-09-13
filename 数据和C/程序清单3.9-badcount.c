#include<stdio.h>
int main() {
	int n = 4;
	int m = 5;
	float f = 7.0f;
	float g = 8.0f;

	printf("%d\n", n, m);//m被自动省略产生相应的警告
	printf("%d %d %d\n", n);//后面的数值-641 -397412656
	printf("%d %d\n", f, g);//全为0

	return 0;
}