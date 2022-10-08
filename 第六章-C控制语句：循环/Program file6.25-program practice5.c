#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ch = ' ';

	scanf("%c", &ch);
	for (int j = 4; j > 0; j--)//第一行only have E
	{
		printf(" ");
	}
	printf("%c\n", ch - 4);
	for (int j = 3; j > 0; j--)//第二行
	{
		printf(" ");
	}
	for(int i=0;i<2;i++)
	{
		printf("%c", ch - 4 + i);
	}
	printf("%c\n", ch - 4);
	for (int j = 2; j > 0; j--)//第三行only have E
	{
		printf(" ");
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%c", ch - 4 + i);
	}
	for (int i = 0; i < 3; i++)
	{
		printf("%c", ch - i - 1);
	}

	
	//for (int j = 1; j > 0; j--)//第四行only have E
	//{
	//	printf(" ");
	//}
	//printf("%c\n", ch);

	

	getchar();
	return 0;
}