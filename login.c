// Write code to simulate the user login scenario,
// and only allow to enter the password three times,
// if the password is correct, the login success is
// prompted, if the three times are entered incorrectly,
// then exit the program.

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main() {
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++) {
		printf("please enter the password:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			printf("login successfully\n");
			break;
		}
		else {
			printf("wrong password\n");
		}
	}
	if (i == 3) {
		printf("enter wrong password for three time, exit the program\n");
	}
	system("pause");
	return 0;
}