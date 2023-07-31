// Calculate the value of 1-1/2+1/3-1/4+1/5 ...+1/99-1/100

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int i = 0;
	int flag = 1;
	double sum = 0.0;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * 1.0 / i;
		flag = -flag;
	}
	printf("value = %lf\n", sum);
	return 0;
}