#include<stdio.h>
int main() {
	char ch;
	int k_num=0;
	int t_num=0;
	int ch_num=0;

	while ((ch=getchar()) != '#')
	{
		if (ch == ' ')
			k_num++;
		else if (ch == '\n')
			t_num++;
		else ch_num++;
	}
	printf("the number of blank:%d;the number of line break:%d the number of char:%d", k_num, t_num, ch_num);
}