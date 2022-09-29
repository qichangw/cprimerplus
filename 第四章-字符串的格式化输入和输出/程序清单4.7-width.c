#include<stdio.h>
#define PAGES 959
int main() {

	printf("*%d*\n", PAGES);
	printf("*%2d*\n", PAGES);
	printf("*%10d*\n", PAGES);//´ÓÓÒ±ß²¹Æë
	printf("*%-10d*\n", PAGES);//´Ó×ó±ß²¹Æë

	getchar();
	return 0;
}