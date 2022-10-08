#include<stdio.h>
int main() {
	char* ch = "simle!";

	for (int i = 0; i < 3; i++)
	{
		printf("%s", ch);
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%s", ch);
	}
	printf("\n");
	printf("%s", ch);

	getchar();
	return 0;
}
/*首先声明一个字符指针并按要求赋值
* 使用for循环打印连续打印三次字符串
* 也可以使用嵌套循环写
*/