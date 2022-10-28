#include<stdio.h>
#include<ctype.h>//islower(),isupper()
int main() {
	char ch;
	int num1=0, num2=0;

	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			num1++;
		if (islower(ch))
			num2++;
	}
	printf("lower character is %d; higher character is %d\n", num1, num2);
}