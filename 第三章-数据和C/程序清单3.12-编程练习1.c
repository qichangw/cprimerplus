#include<stdio.h>
int main() {
	int int1 = 32323232133333;
	printf("观察整数上溢%d\n", int1);
	float float1 = .987e-6f;
	float float2 = float1 / 10;//浮点数下溢为0！奇怪
	printf("观察浮点数下溢%f\n", float2);
	float float3 = 1234243432445548000000000.e5f;
	printf("观察浮点数上溢%f\n", float3*99.e9f);
	return 0;
}
