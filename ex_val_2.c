#define _CRT_SECURE_NO_WARNING 1

//��������int����������ʹ�õ������������� a=3,b=5������֮�� a=5,b=3��

#include <stdio.h>

int main()
{
	int a = 3; //a��ֵ��011
	int b = 5; //b��ֵ��101

	printf("����ǰ��a=%d b=%d\n", a, b);

	a = a^b; //a��ֵ���110
	b = a^b; //b��ֵ���011
	a = a^b; //a��ֵ���101

	printf("������a=%d b=%d\n", a, b);

	return 0;
}