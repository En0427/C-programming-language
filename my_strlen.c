#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int my_strlen2(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen2(str + 1);
	}
	else
	{
		return 0;
	}
}

int main() 
{
	char arr[] = "bit";
	
	int len = my_strlen(arr);
	printf("len = %d\n", len);

	int len2 = my_strlen2(arr);
	printf("len2 = %d\n", len2);

	return 0;
}