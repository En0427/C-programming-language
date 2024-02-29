//There is a matrix of numbers, where each row is increasing from left to right and each column is increasing from top to bottom. 
//Please write a program to search for the existence of a certain number in such a matrix.
//Require time complexity less than O (n)

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int FindNum(int arr[3][3], int k, int *px, int *py)
{
	int x = 0;
	int y = *py - 1;
	while (x <= *px - 1 && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int k = 0;
	int x = 3;
	int y = 3;
	scanf("%d", &k);
	int ret = FindNum(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("%d is exists, the subscript are [%d, %d]\n", k, x, y);
	}
	else
	{
		printf("%d is not exists\n", k);
	}
	return 0;
}