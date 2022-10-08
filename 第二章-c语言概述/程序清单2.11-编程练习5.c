/*首先声明两个函数体br和ic
* 在主函数中调用
* 完成函数体
*/
#include<stdio.h>
void br();
void ic();
int main() {
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf("\n");
	br();
	return 0;
}
void br() {
	printf("Brazil,Russia");
}
void ic() {
	printf("India,China");
}