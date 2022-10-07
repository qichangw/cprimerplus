#include<stdio.h>
int main() {
	char ch[8];

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			ch[j] = '$';
		}
		for (int m = 0; m < 8; m++)
			printf("%c", ch[m]);
		printf("\n");
	
	}

	getchar();
	return 0;
}