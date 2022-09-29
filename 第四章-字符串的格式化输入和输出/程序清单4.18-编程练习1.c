#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[40] = {""};
	char fristname[40] = {""};
	printf("Please input you name and frist name:\n");
	scanf("%s,%s", name,fristname);
	printf("You name is %s%s", name, fristname);
	getchar();
	return 0;
}