#include<stdio.h>
#include<string.h>
#include "s_get.h"
#define SIZE 80
#define LIM 10
#define STOP "quit"

int main() {
	char input[LIM][SIZE];
	int ct = 0;

	printf("Enter up to %d lines (type quit to quit):\n", LIM);
	while (ct < LIM && s_gets(input[ct], SIZE) != NULL &&
		strcmp(input[ct], STOP) != 0)
	{
		ct++;
	}
	printf("%d strings entered\n", ct);

	return 0;
}