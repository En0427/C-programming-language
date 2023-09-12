#define _CRT_SECURE_NO_WARNING 1

//交换两个int变量，不能使用第三个变量。即 a=3,b=5，交换之后 a=5,b=3；

#include <stdio.h>

int main()
{
	int a = 3; //a的值是011
	int b = 5; //b的值是101

	printf("交换前：a=%d b=%d\n", a, b);

	a = a^b; //a的值变成110
	b = a^b; //b的值变成011
	a = a^b; //a的值变成101

	printf("交换后：a=%d b=%d\n", a, b);

	return 0;
}