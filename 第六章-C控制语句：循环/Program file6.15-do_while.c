#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	const int secret_code = 13;
	int code_entered;

	do
	{
		printf("To enter the triskaidekaphobia therapy club,\n");
		printf("please enter the secret code number:");
		scanf("%d", &code_entered);
	} while (code_entered != secret_code);
	printf("Congratulations! You are cured!\n");

	getchar();
	return 0;
}