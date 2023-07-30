#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{
	int m = 24;
	int n = 18;
	scanf("%d%d", &m, &n);
	int r = 0;

	while (r = m % n)
	{
		m = n;
		n = r;
	}
	printf("%d\n", n);
	return 0;
}