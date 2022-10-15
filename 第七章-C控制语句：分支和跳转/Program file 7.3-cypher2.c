#include<stdio.h>
#include<ctype.h>
int main() {
	char ch = 0;

	while ((ch = getchar()) != '\n')
	{
		if (isalpha(ch))
			putchar(ch + 1);
		else
			putchar(ch);
	}
	putchar(ch);

	getchar();
	return 0;
}