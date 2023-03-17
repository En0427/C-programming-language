#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

#include<stdio.h>

int ChangetoSexagesimal(float Num, int *a, int *b, int *c)
{

	float e;
	int Hour, Minute, Second;

	Hour = (int)(Num);                              //度                        
	Minute = (int)((Num - Hour) * 60);                  //分
	Second = (int)(((Num - Hour) * 60 - Minute) * 60);   //秒


	e = ((Num - Hour) * 60 - Minute) * 60 - Second;      //四舍五入

	if (5 <= (int)(e * 10))
	{
		Second = Second + 1;
	}

	if (60 == Second)
	{
		Second = 0;
		Minute = Minute + 1;
	}

	if (60 == Minute)
	{
		Minute = 0;
		Hour = Hour + 1;
	}

	*a = Hour;
	*b = Minute;
	*c = Second;

	return 1;

}
int main()
{
	float LongtitudeNumber = 0;
	float LatitudeNumber = 0;

	int LongtitudeHour = 0;
	int LongtitudeMinute = 0;
	int LongtitudeSecond = 0;

	int LatitudeHour = 0;
	int LatitudeMinute = 0;
	int LatitudeSecond = 0;

	printf("your input Longtitude:\n");
	scanf("%f", &LongtitudeNumber);

	printf("your input Latitude:\n");
	scanf("%f", &LatitudeNumber);

	(void)ChangetoSexagesimal(LongtitudeNumber, &LongtitudeHour, &LongtitudeMinute, &LongtitudeSecond);

	(void)ChangetoSexagesimal(LatitudeNumber, &LatitudeHour, &LatitudeMinute, &LatitudeSecond);

	printf("Longtitude Hour Minute Second is %d,%d,%d\n", LongtitudeHour, LongtitudeMinute, LongtitudeSecond);
	printf("Latitude Hour Minute Second is %d,%d,%d\n", LatitudeHour, LatitudeMinute, LatitudeSecond);

	return 0;
}
