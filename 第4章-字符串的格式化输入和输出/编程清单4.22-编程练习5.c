#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float speed=0;
	float size = 0;
	printf("Please input transformtion speed:__Mb/s\b\b\b\b\b\b");
	scanf("%f", &speed);
	printf("Please input document size:__MB\b\b\b\b");
	scanf("%f", &size);
	printf("document size is: %f MB\n", size);
	printf("down time %.2f s\n", speed / 8);
	printf("down speed %f", speed);
	
	getchar();
	return 0;
}