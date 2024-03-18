#define _CRT_SECRUE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

struct S
{
	int n;
	int* arr;
};

int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	ps->n = 5;
	ps->arr = malloc(ps->n * sizeof(int));
	
	int i = 0;
	for (i = 0; i < ps->n; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < ps->n; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	int* ptr = realloc(ps->arr, 10 * sizeof(int));
	if (ptr != NULL)
	{
		ps->arr = ptr;
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
	free(ps->arr);
	ps->arr = NULL;
	free(ps);
	ps = NULL;
	return 0;
}