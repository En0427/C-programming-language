#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* ptr = NULL;
	ptr = (int*)malloc(10 * sizeof(int)); //��������ռ�ĵ�ַ
	if (ptr == NULL)
	{
		printf("%s\n", strerror(errno)); //��ӡ����ԭ��
	}
	else //����ʹ�ÿռ�
	{
		int i = 0;
		for (i = 0; i < 10; i++)
		{
			*(ptr + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(ptr + i));
		}
	}
	free(ptr);
	ptr = NULL; //��ֹҰָ�뵼���ڴ�й¶
	return 0;
}