#define _CRT_SECURE_NO_WARNING 1

//��������int����������ʹ�õ������������� a=3,b=5������֮�� a=5,b=3��

#include <stdio.h>

int main()
{
	int a = 3;	
	int b = 5;

	printf("����ǰ��a=%d b=%d\n", a, b);

	a = a + b; //a��ֵ�������֮�ͣ�b��ֵ����
	b = a - b; //b�õ�ԭ��a��ֵ
	a = a - b; //a�õ�ԭ��b��ֵ

	printf("������a=%d b=%d\n", a, b);

	return 0;
}

//���������������������⣬��Ϊint������4���ֽڣ�32bitλ��INT_MAX��2147483647�����a,b�����ر��ᵼ��������⡣