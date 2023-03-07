#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test()
{
	static int a = 1; //a是一个静态局部变量
	a++;
	printf("a = %d\n", a);
}
//static修饰局部变量，局部变量的生命周期变长
//static修饰全局变量，改变了全局变量的作用域，只能在其所在源文件使用，不能在其他源文件调用

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

	int* p = &a; //p是一个变量--指针变量
	printf("%p\n", &a);
	printf("%p\n", &p);
	*p = 20;
	printf("%d\n", a);
	return 0;
}