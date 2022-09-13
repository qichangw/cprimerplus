#include <stdio.h>

int main(void) {

	float f = 256.0f;
	printf("%f\n", f);
	long l = f;  // 自动类型转化
	printf("%ld\n", l);
	/*float类型和long类型虽然都是32位但是在存储方式和运算过程中有区别
	例如一个float型数256.0如果没有强制类型转换就是long型113246208就如
	同二进制数1001在十进制下时1001而转换后为9*/

	getchar();
}