#include<stdio.h>
int main() {
	

	for (int i = 0; i < 6; i++)
	{
		char ch = 'F';
		for(int j=0;j<=i;j++)
		{
			printf("%c", ch);
			ch = ch - 1;
		}
		printf("\n");
	
	}

	getchar();
	return 0;
}