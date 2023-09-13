#define _CRT_SECURE_NO_WARNINGS 1

//找出只出现一次的数
//给定一个非空整型数组，除了某个元素只出现一次外，其余每个元素均出现两次，找出那个只出现一次的元素。

#include <stdio.h>

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);

	for (i = 0; i < sz; i++)
	{
		int count = 0;
		int j = 0;
		for (j = 0; j < sz; j++)
		{
			if (arr[i] == arr[j])
			{
				count++;
			}
		}
		if (count == 1)
		{
			printf("只出现一次的数为：%d\n", arr[i]);
			break;
		}
	}
	return 0;
}