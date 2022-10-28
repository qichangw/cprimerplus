#include<stdio.h>
int main() {
	int ch;
	int ct = 0;

	while ((ch = getchar()) != EOF)
	{
		ct++;
	}
	printf("%d character read\n", ct);
}