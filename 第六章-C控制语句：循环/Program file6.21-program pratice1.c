#include<stdio.h>
int main() {
	char ch[26];	

	for (int i = 0; i < 26; i++)
	{
		ch[i] = 'a' + i;
	}
	for (int j = 0; j < 26; j++)
	{
		printf("%c", ch[j]);
	}

	getchar();
	return 0;
}