#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
int main() {
	char ch;
	bool inword = false;
	int num=0;

	while ((ch = getchar()) != EOF)
	{
		
		if (!isspace(ch) && !inword)
		{
			num++;
			inword = true;
		}
		else if (ispunct(ch))
		{
			inword = false;
			continue;
		}
		else if (isspace(ch))
		{
			inword = false;
			continue;
		}
	}
	printf("The word number is %d", num);
}