#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

Add(int x, int y)
{
	int sum = x + y;
	return sum;
}

int main()
{
	//计算两数相加
	int num1 = 1;
	int num2 = 0;
	int sum = 0;
	//输入数据--使用输入函数scanf
	scanf("%d%d", &num1, &num2);//取地址符号&
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}