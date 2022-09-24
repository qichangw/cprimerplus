#include<stdio.h>
int main() {

	char name[40] = "NAME";
	//*name = "NAME";
	float cash = 179.93;
	printf("The %s family just may be $%.2f dollars richer!\n", name, cash);
	getchar();
	return 0;
}