#include <stdio.h>

int main(void) {

	float f = 256.0f;
	printf("%f\n", f);
	long l = f;  // �Զ�����ת��
	printf("%ld\n", l);
	/*float���ͺ�long������Ȼ����32λ�����ڴ洢��ʽ�����������������
	����һ��float����256.0���û��ǿ������ת������long��113246208����
	ͬ��������1001��ʮ������ʱ1001��ת����Ϊ9*/

	getchar();
}