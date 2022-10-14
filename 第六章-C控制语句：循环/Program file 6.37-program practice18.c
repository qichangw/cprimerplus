#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int Refriend = 5;
	int week;

	for (week = 1; Refriend < 150; week++)
	{
		Refriend -= week;
		Refriend *= 2;
	}
	printf("%d", week);
}