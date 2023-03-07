#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//复杂对象用结构体表示 -- 我们自己创造出来的一种类型
//比如人 -- 姓名+性别+身高+身份证号
//书籍 -- 书名+作者+价格+出版社

struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = {"C语言程序设计", 55};
	printf("书名: %s\n", b1.name);
	printf("价格: %d\n", b1.price);
	
	//改变结构体的成员变量
	b1.price = 35;
	strcpy(b1.name, "C++语言程序设计");
	printf("书名: %s\n", b1.name);
	printf("打折价: %d\n", b1.price);

	//结构体的指针操作
	struct Book* pb = &b1;
	printf("书名: %s\n", (*pb).name);
	printf("价格: %d\n", pb->price);
	return 0;
}