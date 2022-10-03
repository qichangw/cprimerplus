#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
const int STIME = 60;//one hour is 60 minuter
int main() {
	int minute = 0;

	printf("Please input how many minute:");
	scanf("%d", &minute);
	while (minute > 0)
	{
		printf("It is how many hour:%d", minute / STIME);
		printf("\nIt is how many hour:%d", minute % STIME);
		printf("\nPlease again input minute");
		scanf("%d", &minute);
	}
	printf("Bye.\n");

	getchar();
	return 0;
}//bug