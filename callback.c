#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void print(char *str)
{
	printf("hello: %s\n", str);
}

void test(void(*p)(char *str))
{
	printf("Callback\n");
	p("Hello bit!\n");
}

int main()
{
	test(print);
	return 0;
}