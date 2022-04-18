#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//typedef关键字--类型重定义
//typedef unsigned int u8;
//int main()
//{
//	unsigned int a = 10;
//	u8 a = 10;//跟上面的一模一样
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------


//关键字static--静态的	修饰局部变量	修饰全局变量	修饰函数
void test()
{
	static int a = 1;//改变了变量a的生命周期，本质上是改变了变量a的存储类型
	a++;
	printf("%d ", a);
}
int main()
{
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	return 0;
}












