//使用不同类型的字符串--praisel.c
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define PRAISE "You are an extraordinary being."
int main() {
	char name[40];

	printf("What's your name?");
	scanf("%s", name);
	printf("Hello, %s.%s\n", name, PRAISE);

	return 0;
}