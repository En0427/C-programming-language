#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

//���Ӷ����ýṹ���ʾ -- �����Լ����������һ������
//������ -- ����+�Ա�+���+���֤��
//�鼮 -- ����+����+�۸�+������

struct Book
{
	char name[20];
	short price;
};

int main()
{
	struct Book b1 = {"C���Գ������", 55};
	printf("����: %s\n", b1.name);
	printf("�۸�: %d\n", b1.price);
	
	//�ı�ṹ��ĳ�Ա����
	b1.price = 35;
	strcpy(b1.name, "C++���Գ������");
	printf("����: %s\n", b1.name);
	printf("���ۼ�: %d\n", b1.price);

	//�ṹ���ָ�����
	struct Book* pb = &b1;
	printf("����: %s\n", (*pb).name);
	printf("�۸�: %d\n", pb->price);
	return 0;
}