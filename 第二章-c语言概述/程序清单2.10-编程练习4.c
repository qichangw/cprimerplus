#include<stdio.h>
void jolly();
void deny();
int main() {
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}
void jolly() {
	printf("For he's a jolly good fellow!\n");
}
void deny() {
	printf("which nobody can deny!\n");
}
/*声明了两个前置函数jolly和deny
* 调用函数
* jolly函数和deny函数分别打印不同的内容
*/