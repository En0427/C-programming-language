#define _CRT_SECURE_NO_WARNINGS 1

//�ҳ�ֻ����һ�ε���
//����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ���⣬����ÿ��Ԫ�ؾ��������Σ��ҳ��Ǹ�ֻ����һ�ε�Ԫ�ء�

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
			printf("ֻ����һ�ε���Ϊ��%d\n", arr[i]);
			break;
		}
	}
	return 0;
}