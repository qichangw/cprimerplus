#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int count=0, sum=1;

	printf("Enter your intial money:___$\b\b\b\b");
	scanf("%d", &count);
	while (sum < 20)
	{
		
		printf("the %d day you obain:%d\n",sum, count);
		sum++;
		count++;
	}

	getchar();
	return 0;
}