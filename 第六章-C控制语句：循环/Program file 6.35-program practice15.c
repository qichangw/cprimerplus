#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ch[] = "";
	printf("Please input string:");
	scanf("%s", ch);
	for (int i = strlen(ch)-1; i >= 0; i--)
	{

		printf("%c", ch[i]);
		if (i == 0) return;
	}

	getchar();
	return 0;
}