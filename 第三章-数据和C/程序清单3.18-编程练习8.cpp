/*使用了茶勺作为例子与原题异曲同工*/
#include<stdio.h>
int main() {
	float teaspoon;
	
	printf("Please input ___teaspoon\b\b\b\b\b\b\b\b\b\b\b");
	scanf_s("%f", &teaspoon);
	float soupladle = 3 * teaspoon;
	float ounce = 8 * soupladle;
	float cup = 8 * ounce;
	float pint = 2 * cup;
	printf("With the same %.0f soupladle\n", soupladle);
	printf("With the same %.0f ounce\n", ounce);
	printf("With the same %.0f cup\n", cup);
	printf("With the same %.0f pint\n", pint);

	getchar();
	return 0;
}