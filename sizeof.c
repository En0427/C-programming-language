#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void test1(int arr[]) //The array parameter passed is the address of the first element of the array
{
	printf("%d\n", sizeof(arr));
}

void test2(char ch[])
{
	printf("%d\n", sizeof(ch));
}

int main()
{
	int arr[10] = { 0 };
	char ch[10] = { 0 };
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(ch));
	test1(arr);
	test2(ch);
	return 0;
}