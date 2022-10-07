#include<stdio.h>
int main() {
	char ch = '$';

	for (int i = 0; i < 5; i++)
	{
		for (int j = 1; j <= i+1; j++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}

	getchar();
	return 0;
}