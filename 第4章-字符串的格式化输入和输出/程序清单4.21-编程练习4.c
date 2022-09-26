#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float high = 0;
	char name[40] = { " " };
	printf("Please input you___cm tall\b\b\b\b\b\b\b\b\b\b");
	scanf("%f", &high);
	printf("\nYou name is:");
	scanf("%s", name);
	printf("%s,you are %.2f feet tall\n", name, high / 100);
	getchar();
	return 0;
}