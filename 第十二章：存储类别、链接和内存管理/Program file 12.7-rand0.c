static unsigned long int next = 1;

unsigned int rand0()
{
	//生成伪随机数的魔术公式
	next = next * 1103515245 + 12345;

	return (unsigned int)(next / 65536) % 32768;
}