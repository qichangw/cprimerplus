#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[40] = { " " };
	scanf("%s", name);
	printf("Your name is \"%s\"\n", name);
	printf("Your name is \"%20s\"\n", name);
	printf("Your name is \"%-20s\"\n", name);
	printf("Your name is\"\%*s\"", strlen(name)+3, name);
	getchar();
	return 0;
}