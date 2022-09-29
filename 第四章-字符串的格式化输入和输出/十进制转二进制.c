#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int main() {
	float a = 256.0;
	int b = 113246208;
	char s[100];
	char s2[100];
	printf("%s\n", _itoa(a, s2, 2));
	printf("%s", _itoa(b, s, 2));
	getchar();
	return 0;
}