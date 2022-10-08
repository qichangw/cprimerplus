#include<stdio.h>
void one_there();
void two();
int main() {
	printf("starting now:\n");
	one_there();
	printf("done!\n");
	return 0;
}
void one_there() {
	printf("one\n");
	two();

}
void two() {
	printf("two\nthere\n");
}
//¼òµ¥