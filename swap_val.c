#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void Swap(int* x, int* y)
{
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("a=%d b=%d\n", a, b);
	Swap(&a, &b);
	printf("a=%d b=%d\n", a, b);
	return 0;
}