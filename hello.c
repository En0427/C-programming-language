#define _CRT_SECURE_NO_WARINGS 1

#include <stdio.h> //�⺯��--c�����ṩ������ʹ�õĺ���
//#include--����һ����stdio.h���ļ������˵Ķ���--���к���

int main() //������--��������
//mainǰ���int��ʾmain�������÷���һ������ֵ
{
	printf("hello world\n");
	int age = 24;
	char ch = 'A';
	float f = 5.0;
	float weight = 95.6f;
	double pi = 3.14;
	printf("%d\n", age);//%d -- ��ӡ����ʮ��������
	printf("%c\n", ch);//%c -- ��ӡ�ַ���ʽ����
	printf("%f\n", f);//%f -- ��ӡ����������
	printf("%f\n", weight);
	printf("%lf\n", pi);//%lf -- ��ӡ˫���ȸ���������
	//������������ռ�ڴ��С--�ֽ�
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	return 0;
}