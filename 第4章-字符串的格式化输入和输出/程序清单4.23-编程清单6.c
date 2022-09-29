#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[40] = {""};
	char fristname[40] = {""};
	
	printf("Please input your username:\n");
	scanf("%s%s", name,fristname);
	printf("\n");
	printf("%s %s\n", name, fristname);
	printf("%*d %*d\n", strlen(name), strlen(name),strlen(fristname), strlen(fristname));
	printf("%s %s\n", name, fristname);
	printf("%-*d %-*d", strlen(name), strlen(name), strlen(fristname), strlen(fristname));
	getchar();
	return 0;
}