#include<stdio.h>
int main()
{
	int bph2o = 212;
	int rv;
	rv = printf("%d F is water's boiling point.\n", bph2o);
	printf("The printf() funtion printed %d characters.\n", rv);
	getchar();
	return 0;
}//printf()--print number of string