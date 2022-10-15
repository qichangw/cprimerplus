#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	const int FREEZING = 0;
	float temperatures;
	int cold_days = 0;
	int all_days = 0;

	printf("Enter the list of daily low temperatures.\n");
	printf("Use Celsius,and enter q to quit.\n");
	while (scanf("%f", &temperatures) == 1)
	{
		all_days++;
		if (temperatures < FREEZING)
			cold_days++;
	}
	if (all_days != 0)
		printf("%d day total: %.1f%% were below freezing.\n",
			all_days, 100.0 * (float)cold_days / all_days);
	if (all_days == 0)
	{
		printf("No data entered!\n");
	}

	getchar();
	return 0;
}