#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include "../第十一章：字符串和字符串函数/s_get.h"
#define MAXTITL 41
#define MAXAUTL 31

struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main()
{
	struct book library;

	printf("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);
	printf("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf("Now enter the value.\n");
	scanf("%f", &library.value);
	printf("%s by %s: $%.2f\n", library.title,
		library.title, library.value);
	printf("%s:\"%s\" ($%.2f)\n", library.author,
		library.title, library.value);
	printf("Done.\n");

	return 0;
}