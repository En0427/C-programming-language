#define _CRT_SECURE_NO_WARNINGS 1

//��д����ʵ�֣���һ�������������ڴ��еĶ�������1�ĸ�����

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
	//�˷�����numΪ����������

	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if (((num >> i) & 1) == 1)
			count++;
	}
	printf("%d\n", count);
	return 0;
}