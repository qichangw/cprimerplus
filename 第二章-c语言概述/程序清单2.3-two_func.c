/* two_func.c -- 一个文件中包含两个函数 */
#include<stdio.h>

void butler(void);/* ANSI/ISO C函数原型*/
int main() {
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes. Bring me some tea and writeable AVDs.\n");

	return 0;
}
void butler(void)
{
	printf("You rang, sir?\n");
}
/* 首先声明一个前置函数butler
* 使用printf()打印需要的word
* 调用函数
* 使用printf()打印需要的word
* 编写函数体butler
* 使用printf()打印需要的word
*/