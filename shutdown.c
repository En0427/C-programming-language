#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("Please note that your computer will shut down in 1 minute, if you enter: pig, cancel the shutdown\nPlease enter>:");
	scanf("%s", input);
	if (strcmp(input, "pig") == 0)
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	return 0;
}