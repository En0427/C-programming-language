#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{	
	int input = 1;
	printf("�������\n");
	printf("����ú�ѧϰ��(1/0)>: ");
	scanf("%d", &input);
	if (input == 1)
		printf("��offer\n");
	else
		printf("������\n");
	return 0;
}