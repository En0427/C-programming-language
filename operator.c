#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test()
{
	static int a = 1; //a��һ����̬�ֲ�����
	a++;
	printf("a = %d\n", a);
}
//static���ξֲ��������ֲ��������������ڱ䳤
//static����ȫ�ֱ������ı���ȫ�ֱ�����������ֻ����������Դ�ļ�ʹ�ã�����������Դ�ļ�����

int main() 
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}

	int a = 10;
	int b = 20;
	int max = 0;

	max = (a > b ? a : b);
	printf("max = %d\n", max);

	int* p = &a; //p��һ������--ָ�����
	printf("%p\n", &a);
	printf("%p\n", &p);
	*p = 20;
	printf("%d\n", a);
	return 0;
}