#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ch = ' ';

	scanf("%c", &ch);
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j > 0; j--)//��һ��only have E
		{
			printf(" ");
		}
		
		for (int j = 3; j > 0; j--)//�ڶ���
		{
			printf(" ");
		}
		
		for (int j = 2; j > 0; j--)//������only have E
		{
			printf(" ");
		}
		
		for (int j = 1; j > 0; j--)//������only have E
		{
			printf(" ");
		}
		printf("%c\n", ch);

	}

	getchar();
	return 0;
}