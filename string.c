#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a', 'b', 'c'};
	char arr3[] = {'a', 'b', 'c', '\0'};//\0是字符串结束的标志
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	//转义字符
	printf("c:\test\32\test.c\n");
	//\t是水平制表符
	printf("c:\\test\\32\\test.c\n");
	printf("%c\n", '\'');
	printf("%c\n", '\132');
	//\132 --- 132是三个八进制数字，转义字符\132代表这三个八进制数对应的十进制数 --- 90的ASCII码对应的字符
	printf("%c\n", '\x61');
	//\61x --- 61是2个16进制数字，转义字符\x61代表这2个16进制数对应的十进制数 --- 97的ASCII码对应的字符
	printf("%d\n", strlen("c:\test\32\test.c"));
	return 0;
}
/*
//注释ctrl+k+c，取消注释ctrl+k+u
*/