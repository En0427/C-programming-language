/* implement a bubble sort function to sort an integer array */

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

void bubble_sort(int arr[], int sz)
{
	//Determine the number of passes for bubble sort
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1; //Assume that the data to be sorted in this pass is already in order
		//Each pass bubble sort
		int j = 0;
		for (j = 0; j < sz - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //The data sorted this pass is not completely ordered
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9, 8, 7, 3, 4, 5, 1, 3, 6, 2, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr, sz); //Sort arr in ascending order
	//arr is an array, we pass parameters to the array arr, in fact, what is passed is the address of the first element of the array arr &arr[0]
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}