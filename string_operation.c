#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DEGREE "°"

int main() {

	char location[100] = "Melbourne,144.95°E 37.84°S";
	//先获取第一个部分
	char *second = strchr(location, ',');
	char *lattitude = NULL;
	char *longitude = NULL;
	char *position = NULL;
	char *third = NULL;
	char *fortg = NULL;
	char *lat_direction = NULL;
	char *long_direction = NULL;
	int order;
	char fuhao;
	float lattitude_n;
	float longitude_n;


	//找到第二部分, 经纬度坐标
	position = second + 1;
	printf("===%s===\n", position);

	//去找第三部分，结尾的数据
	third = strchr(position, ',');
	if (third == NULL)
	{
		fuhao = ' ';
		//不是空格就是逗号
		third = strchr(position, ' ');
	}
	else
	{
		fuhao = ',';
	}
	printf("===%s===\n", third);
	//printf("===%s===\n", *(third-1));
	printf("===%s===%s===\n", third, third - 3);
	////判断度数
	//if (strncmp(third - 3, DEGREE, 2) == 0)
	//{
	//	printf("匹配上了\n");
	//}



	if (strchr(third, 'N') != NULL || strchr(third, 'S')) {
		lattitude = third;
		longitude = second;
		order = 1;
	}
	else {
		lattitude = second;
		longitude = third;
		order = 0;
	}

	*lattitude = '\0';
	lattitude++;

	*longitude = '\0';
	longitude++;

	lattitude_n = strtod(lattitude, &lat_direction);
	//printf("a=%lf\n", strtod(lattitude, &endptr));
	longitude_n = strtod(longitude, &long_direction);
	printf("%s\n", longitude);
	char lon;
	lon = long_direction[2];
	printf("%c\n", lon);

	printf("location:%s lattitude:%lf lat_direction:%s longitude:%lf long_direction:%s fuhao:%c order:%d", location, lattitude_n, lat_direction,
		longitude_n, long_direction, fuhao, order);

	float bb_n;
	char *sef = NULL;
	char bb[30] = "3.14.35dfafh";
	bb_n = strtod(bb, &sef);
	printf("\n%f\n", bb_n);
	int bbn;
	bbn = (int)bb_n;
	if (bbn < 180) {
		printf("yes");
	}
	if (strchr(sef, '.') != NULL) {
		printf("chenggong");
	}

	lattitude_n = strtod(lattitude, &lat_direction);

	return 0;

}
