/*打印一个字符串并统计字符串的个数*/
#include<stdio.h>
int put2(const char* string)
{
	int count = 0;
	while (*string)
	{
		putchar(*string++);
		count++;
	}
	putchar('\n');

	return (count);
}