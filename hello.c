#define _CRT_SECURE_NO_WARINGS 1

#include <stdio.h> //库函数--c语言提供给我们使用的函数
//#include--包含一个叫stdio.h的文件（别人的东西--打招呼）

int main() //主函数--程序的入口
//main前面的int表示main函数调用返回一个整型值
{
	printf("hello world\n");
	int age = 24;
	char ch = 'A';
	float f = 5.0;
	float weight = 95.6f;
	double pi = 3.14;
	printf("%d\n", age);//%d -- 打印整型十进制数据
	printf("%c\n", ch);//%c -- 打印字符格式数据
	printf("%f\n", f);//%f -- 打印浮点型数据
	printf("%f\n", weight);
	printf("%lf\n", pi);//%lf -- 打印双精度浮点型数据
	//各类型数据所占内存大小--字节
	printf("%d\n", sizeof(char));//1
	printf("%d\n", sizeof(short));//2
	printf("%d\n", sizeof(int));//4
	printf("%d\n", sizeof(long));//4
	printf("%d\n", sizeof(long long));//8
	printf("%d\n", sizeof(float));//4
	printf("%d\n", sizeof(double));//8
	return 0;
}