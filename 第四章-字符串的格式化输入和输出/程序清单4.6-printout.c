#include<stdio.h>
#define PI 3.141493
int main() {
	int number = 7;
	float pies = 12.75;
	int cost = 7800;

	printf("The %d contestants ate %f beryy pies.\n", number,
		pies);
	printf("The value of pi is %f.\n", PI);
	printf("Farewell! thou art too dear for my possessing,\n");
	printf("%c%d\n", '$', 2 * cost);

	getchar();
	return 0;
}