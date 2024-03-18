#define _CRT_SECURE_NO_WARNINGS 1

#include <stdlib.h>
#include <stdio.h>

struct S
{
	int n;
	int arr[];
};

int main()
{
	struct S* ps = malloc(sizeof(struct S) + 5 * sizeof(int));
	ps->n = 5;
	int i = 0;
	for (i = 0; i < ps->n; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < ps->n; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	struct S* ptr = realloc(ps, sizeof(struct S) + 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps = ptr;
		ps->n = 10;
	}
	for (i = 5; i < ps->n; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 5; i < ps->n; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	free(ps);
	ps = NULL;
	return 0;
}