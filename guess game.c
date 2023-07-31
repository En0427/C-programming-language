// generates a random number and guess random number

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("********************************\n");
	printf("****   1. play   0. exit    ****\n");
	printf("********************************\n");
}


void game()
{
	int ret = 0;
	int guess = 0;
	//timestamp
	ret = rand() % 100 + 1; //generate a ranfom number from 1-100
	while (1)
	{
		printf("plase guess number\n");
		scanf("%d", &guess);
		if (guess > ret) 
		{
			printf("too much\n");
		}
		else if (guess < ret) 
		{
			printf("too little\n");
		}
		else
		{
			printf("congratulations, you guessed right\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("please select>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game(); //play game
			break;
		case 0:
			printf("exit game\n");
			break;
		default:
			printf("select error\n");
			break;
		}
	} while (input);
	return 0;
}