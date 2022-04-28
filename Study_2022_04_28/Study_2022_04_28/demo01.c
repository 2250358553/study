#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//结构成员访问操作符
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
//	struct Book b = { "悟空传","ISBN4546426",35 };
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


//指针初阶
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


//结构体初阶
//struct Stu
//{
//	//结构体的成员变量
//	char name[10];
//	char class[10];
//	int age;
//}s1 = {"张三","三年二班",18};//创建一个全局变量并且初始化
//// s1 -- 创建一个全局变量
//int main()
//{
//	struct Stu s2 = { "李四","三年一班",17};//创建一个局部变量并且初始化
//	//访问成员变量
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


//结构体传参
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
	//结构体初始化
	struct Book b = { "悟空传","ISBN23498321986",35 };
	//写一个函数答应b中的内容
	//传值调用
	my_print1(b);
	//传结构体的地址 - 传址调用
	my_print2(&b);
	return 0;
}








