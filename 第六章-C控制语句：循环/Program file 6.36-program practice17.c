#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int imoney = 100;//初始资金100万
	double money = imoney * 0.08 + imoney;
	int year;

	for ( year = 1; money > 0; year++)
	{
		money -= 10;
		money += money * 0.08;
	}
	printf("%d", year);

	getchar();
	return 0;
}