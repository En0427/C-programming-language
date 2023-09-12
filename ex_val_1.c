#define _CRT_SECURE_NO_WARNING 1

//交换两个int变量，不能使用第三个变量。即 a=3,b=5，交换之后 a=5,b=3；

#include <stdio.h>

int main()
{
	int a = 3;	
	int b = 5;

	printf("交换前：a=%d b=%d\n", a, b);

	a = a + b; //a的值变成两数之和，b的值不变
	b = a - b; //b得到原本a的值
	a = a - b; //a得到原本b的值

	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}

//这个代码有整型溢出的问题，因为int类型是4个字节，32bit位，INT_MAX是2147483647，如果a,b两数特别大会导致溢出问题。