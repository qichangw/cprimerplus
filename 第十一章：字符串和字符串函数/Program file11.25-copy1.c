#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include "s_get.h"
#define SIZE 40
#define LIM 5

int main() {
	char qwords[LIM][SIZE];
	char temp[SIZE];
	int i = 0;

	printf("Enter %d words beginning with q:\n", LIM);
	while (i < LIM && s_gets(temp, SIZE))
	{
		if (temp[0] != 'q')
			printf("%s doesn't begin with q!\n", temp);
		else
		{
			strcpy(qwords[i], temp);
			i++;
		}
	}
	puts("Here are the words accepted:");
	for (i = 0; i < LIM; i++)
		puts(qwords[i]);

	return 0;
}