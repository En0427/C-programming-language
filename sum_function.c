#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

Add(int x, int y)
{
	int sum = x + y;
	return sum;
}

int main()
{
	//�����������
	int num1 = 1;
	int num2 = 0;
	int sum = 0;
	//��������--ʹ�����뺯��scanf
	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
	sum = Add(num1, num2);
	printf("sum = %d\n", sum);
	system("pause");
	return 0;
}