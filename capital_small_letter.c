#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main() {
	char a[100] = "Melbourne";
	int i;
	//gets(a);
	for (i = 0; a[i] != '\0'; i++)
		//if (a[i] >= 'a' && a[i] <= 'z')
			//a[i] -= 32;
		//else 
		if (a[i] >= 'A' && a[i] <= 'Z')
			a[i] += 32;
	//puts(a);
	printf("%s\n", a);
	return 0;
}