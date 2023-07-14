#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int cal_fac(n) {
//	int fac = 1;
//	for (int i = 1; i < n + 1; i++) {
//		fac = fac * i;
//	}
//	return fac;
//}
//
//int main() {
//	int sum = 0;
//	for (int n = 1; n <= 10; n++) {
//		sum = sum + cal_fac(n);
//	}
//	printf("%d\n", sum);
//  return 0;
//}

int main() {
	int fac = 1;
	int sum = 0;
	for (int n = 1; n <= 10; n++) {
		fac *= n;
		sum += fac;
	}
	printf("%d\n", sum);
	return 0;
}