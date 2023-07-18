#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int BinarySearch(int arr[], int length, int k) {
	int left = 0;
	int right = length - 1;
	while (left <= right) {
		int mid = (left + right) / 2;
		if (arr[mid] > k) {
			right = mid - 1;
		}
		else if (arr[mid] < k) {
			left = mid + 1;
		}
		else {
			printf("find number, the index is: %d\n", mid);
			break;
		}
	}
	if (left > right) {
		printf("can't find number\n");
	}
	return 0;
}

int SequentilSearch(int arr[], int length, int k) {
	int i = 0;
	for (i = 0; i < length; i++) {
		if (k == arr[i]) {
			printf("find number, the index is: %d\n", i);
			break;
		}
	}
	if (i == length) {
		printf("can't find number\n");
	}
	return 0;
}

int main() {
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int length = sizeof(arr) / sizeof(arr[0]);
	int k = 0;
	scanf_s("%d", &k);
	//SequentilSearch(arr, length, k);
	BinarySearch(arr, length, k);
}