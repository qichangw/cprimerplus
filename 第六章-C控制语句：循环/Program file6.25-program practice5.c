#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ch = ' ';

	scanf("%c", &ch);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j > 0; j--)//第一行only have E
		{
			printf(" ");
		}
		
		for (int j = 3; j > 0; j--)//第二行
		{
			printf(" ");
		}
		
		for (int j = 2; j > 0; j--)//第三行only have E
		{
			printf(" ");
		}
		
		for (int j = 1; j > 0; j--)//第四行only have E
		{
			printf(" ");
		}
		printf("%c\n", ch);

	}

	getchar();
	return 0;
}