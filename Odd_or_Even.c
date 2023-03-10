/* Determine whether a number is odd or even */

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num % 2 == 1)
	{
		printf("%d is odd number\n", num);
	}
	else
	{
		printf("%d is even mumber\n", num);
	}
	return 0;
}