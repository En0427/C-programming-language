#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};
	char arr3[] = {'a', 'b', 'c', '\0'};//\0���ַ��������ı�־
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//ת���ַ�
	printf("c:\test\32\test.c\n");
	//\t��ˮƽ�Ʊ��
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", '\'');
	printf("%c\n", '\132');
	//\132 --- 132�������˽������֣�ת���ַ�\132�����������˽�������Ӧ��ʮ������ --- 90��ASCII���Ӧ���ַ�
	printf("%c\n", '\x61');
	//\61x --- 61��2��16�������֣�ת���ַ�\x61������2��16��������Ӧ��ʮ������ --- 97��ASCII���Ӧ���ַ�
	printf("%d\n", strlen("c:\test\32\test.c"));
	return 0;
}
/*
//ע��ctrl+k+c��ȡ��ע��ctrl+k+u
*/