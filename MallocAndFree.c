#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main()
{
	int* ptr = NULL;
	ptr = (int*)malloc(10 * sizeof(int)); //返回申请空间的地址
	if (ptr == NULL)
	{
		printf("%s\n", strerror(errno)); //打印错误原因
	}
	else //正常使用空间
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
	ptr = NULL; //防止野指针导致内存泄露
	return 0;
}