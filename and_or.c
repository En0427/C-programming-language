#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;
	//i = a++ && ++b && d++;
	//逻辑与操作符只要左边算出是假，不管右边是什么都不计算
	i = a++ || ++b || d++;
	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d); //结果为：1 2 3 4
	return 0;
}