#include<stdio.h>
int main() {
	char* ch = "simle!";

	for (int i = 0; i < 3; i++)
	{
		printf("%s", ch);
	}
	printf("\n");
	for (int i = 0; i < 2; i++)
	{
		printf("%s", ch);
	}
	printf("\n");
	printf("%s", ch);

	getchar();
	return 0;
}
/*��������һ���ַ�ָ�벢��Ҫ��ֵ
* ʹ��forѭ����ӡ������ӡ�����ַ���
* Ҳ����ʹ��Ƕ��ѭ��д
*/