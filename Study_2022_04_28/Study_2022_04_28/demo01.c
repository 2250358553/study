#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�ṹ��Ա���ʲ�����
// .
// ->

//struct Book
//{
//	char name[10];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	struct Book b = { "��մ�","ISBN4546426",35 };
//	struct Book *pb = &b;
//
//	printf("%s ", b.name);
//	printf("%s ", b.id);
//	printf("%d\n", b.price);
//
//	printf("%s ", pb->name);
//	printf("%s ", pb->id);
//	printf("%d", pb->price);
//	return 0;
//}


//ָ�����
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	printf("%p\n", pa);
//	printf("%p", pa+1);
//	return 0;
//}
//------------------------------------------------------------------------------------------------------------------


//int main()
//{
//	int arr[10] = { 0 };
//	int* pa = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*pa = i;
//		pa++;
//	}
//	return 0;
//}
//------------------------------------------------------------------------------------------------------------------


//�ṹ�����
//struct Stu
//{
//	//�ṹ��ĳ�Ա����
//	char name[10];
//	char class[10];
//	int age;
//}s1 = {"����","�������",18};//����һ��ȫ�ֱ������ҳ�ʼ��
//// s1 -- ����һ��ȫ�ֱ���
//int main()
//{
//	struct Stu s2 = { "����","����һ��",17};//����һ���ֲ��������ҳ�ʼ��
//	//���ʳ�Ա����
//	//.
//	//->
//	printf("%s ", s1.name);
//	printf("%s ", s1.class);
//	printf("%d\n", s1.age);
//
//	printf("%s ", s2.name);
//	printf("%s ", s2.class);
//	printf("%d \n", s2.age);
//
//	struct Stu* ps2 = &s2;
//	printf("%s ", ps2->name);
//	printf("%s ", ps2->class);
//	printf("%d\n", ps2->age);
//
//	return 0;
//}
//------------------------------------------------------------------------------------------------------------------


//�ṹ�崫��
struct Book
{
	char name[10];
	char isbn[20];
	int price;
};

void my_print1(struct Book o)
{
	printf("%s %s %d \n", o.name, o.isbn, o.price);
}

void my_print2(struct Book* pb)
{
	printf("%s %s %d", pb->name, pb->isbn, pb->price);
}

int main()
{
	//�ṹ���ʼ��
	struct Book b = { "��մ�","ISBN23498321986",35 };
	//дһ��������Ӧb�е�����
	//��ֵ����
	my_print1(b);
	//���ṹ��ĵ�ַ - ��ַ����
	my_print2(&b);
	return 0;
}








