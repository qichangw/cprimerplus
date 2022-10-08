// fathm_ft.c --把二英寻转换成英尺
#include<stdio.h>

int main()
{
	int feet, fathoms;
	
	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
	printf("Yes,I said %d feet!\n", 6 * fathoms);

	return 0;
}
/*声明两个变量feet 和 fathoms
* 将变量fathoms赋值为2
* 将feet赋值为6*fathoms
* 使用printf()打印想要的数据
*/