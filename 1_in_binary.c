#define _CRT_SECURE_NO_WARNINGS 1

//编写代码实现：求一个整数储存在内存中的二进制中1的个数。

#include <stdio.h>

int main()
{
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	//while (num)
	//{
	//	if (num % 2 == 1)
	//		count++;
	//	num = num / 2;
	//}
	//此方法若num为负数不可行

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}