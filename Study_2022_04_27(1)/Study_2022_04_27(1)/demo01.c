#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//操作符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//按位(二进制位)与
//	//  与： 见 0 为 0
//	//a = 00000000......00000011
//	//b = 00000000......00000101
//	//c = 00000000......00000001
//	int c = a & b;
//	printf("c = %d", c);
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------------------


// a = 3, b = 5不允许创建第三个变量，交换a和b的值
int main()
{
	int a = 3;
	int b = 5;
	printf("a = %d", a);
	printf(" b = %d\n", b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d", a);
	printf(" b = %d", b);
	return 0;
}












