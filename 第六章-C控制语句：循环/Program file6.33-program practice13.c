#include<stdio.h>
#include<math.h>
int main() {
	int num[8];
	int j = 0;
	for (int i = 0; i < 8; i++)
	{
		num[i] = pow(2,(i+1));
	}
	do
	{
		printf("%d ", num[j]);
		j++;
	} while (j < 8);

	getchar();
	return 0;
}