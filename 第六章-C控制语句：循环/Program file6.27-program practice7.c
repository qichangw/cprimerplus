#include<stdio.h>
int main() {
	char ch[] = "strlen";

	for (int i = strlen(ch); i >= 0; i--)
	{
		printf("%c", ch[i]);
	}

	getchar();
	return 0;
}