#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	int fac = 1;
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		fac = fac * i;
	}
	printf("%d\n", fac);
}