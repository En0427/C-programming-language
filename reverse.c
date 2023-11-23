#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void Reverse(int arr[], int sz)
{
	int left = sz - 1;
	int right = 0;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = arr[temp];
		left++;
		right++;
	}
}

void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}

void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Reverse(arr, sz);
	Print(arr, sz);
	Init(arr, sz);
	Print(arr, sz);

	return 0;
}