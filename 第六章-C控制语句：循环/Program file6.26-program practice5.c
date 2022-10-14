#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char ch;
	printf("Please input a capital letter:");
	scanf("%c", &ch);
	int num1 = ch - 64;
	int c = num1;
	int j = 0;
	//int num2 = 1;
	for (int m = 1; m <= c; m++)
	{
		
		for (int i = num1-1; i > 0; i--)
		{
			printf(" ");
		}
		for (j = num1-1; j >= num1-m; j--)
		{
			printf("%c", ch - j);
		}
		for (j=1;j<num1;j++)
		{
			printf("%c", ch - j);
		}

		printf("\n");
		num1--;
	}
}//Î´Íê³É