#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 10
#define PAR 72
int main() {
	int index, score[SIZE];
	int sum = 0;
	float average;

	printf("Enter %d glof scores:\n", SIZE);
	for (index = 0; index < SIZE;)
	{
		scanf("%d", &score[index]);
		index++;
		if (index == SIZE)
		{
			printf("The scores read in are as follows:\n");
			for (index = 0; index < SIZE; index++)
			{
				printf("%5d", score[index]);
				if (index == SIZE)
				{
					printf("\n");
					for (index = 0; index < SIZE; index++)
					{
						sum += score[index];
					}
				}
			}
		}
	}
	average = (float)sum / SIZE;
	printf("Sum of scores = %d,average = %.2f\n", sum, average);
	printf("That's a handicap of %.0f.\n", average - PAR);

	getchar();
	return 0;
}