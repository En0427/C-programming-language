#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{	
	int input = 1;
	printf("加入比特\n");
	printf("你想好好学习吗？(1/0)>: ");
	scanf("%d", &input);
	if (input == 1)
		printf("好offer\n");
	else
		printf("卖红薯\n");
	return 0;
}