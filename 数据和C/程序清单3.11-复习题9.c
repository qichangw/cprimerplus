#include<stdio.h>
int main() {
	//char ch='\r';//转义序列
	//char ch = 0x0D;//十六进制
	//char ch = 13;//十进制数
    //char ch = 015;//八进制数
	char ch = 1101;//二进制数出现问题
	printf("%c", ch);
	getchar();
	return 0;
}