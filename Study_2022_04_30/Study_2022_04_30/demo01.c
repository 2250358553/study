#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算一个数二进制中有多少个1（按补码计算）
// 有bug,不能计算负数的二进制
//int number(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n /= 2;
//	}
//	return count;
//}

//优化----------------
//int number(int n)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}

//优化--------------n & (n - 1)
//int number(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d ",number(a));
//	return 0;
//}

//写一个函数，判断是不是2的n次方

//void number(int n)
//{
//	if ((n!=0) && (n & (n - 1)) == 0)
//	{
//		printf("是");
//	}
//	else
//		printf("不是");
//}
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	number(a);
//	return 0;
//}

//写一个函数，计算两个数的二进制位不同的个数
//int number_a(int x, int y)
//{
//	int count = 0;
//	int ret = x ^ y;//异或然后计算有几个1，就有几个不同的
//	return number(ret);
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	printf("%d", number_a(n, m));
//	return 0;
//}


//写一个函数，打印输出它二进制位中的奇数位和偶数位
//void number_b(int n)
//{
//	int i = 0;
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	number_b(a);
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------

//计算两个数的最小公倍数
//int number_min(int x, int y)
//{
//	int temp = 0;
//	int min = x > y ? x : y;
//	if (x > y)
//	{
//		temp = y;
//		y = x;
//		x = temp;
//	}
//	while ((min % x) != 0 || (min % y) != 0)
//	{
//		min++;
//	}
//	return min;
//}

//优化---------------------------
//int number_min(int x, int y)
//{
//	int i = 1;
//	while ((x * i) % y != 0)
//	{
//		i++;
//	}
//	return x * i;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("%d", number_min(a, b));
//	return 0;
//}
//--------------------------------------------------------------------------------------------------------------------------


//输入字符串，将他倒置改变后输出：
// I like beijing. --> beijing. like I
//void string_revers(char* left, char* right)
//{
//	//定义第三个变量，用来交换两个变量的值
//	char tmp = 0;
//	while (left < right)
//	{
//		tmp = *left;
//		*left = *right;
//		*right = tmp;
//		//完成一次交换后，分别向中间移动
//		left++;
//		right--;
//	}
//}
//
//void word_revers(char* parr)
//{
//	
//	while (*parr)
//	{
//		//复制一份parr 给end
//		char* end = parr;
//		//找到空格或者结束标志就停下
//		while (*end != ' ' && *end != '\0')
//		{
//			end++;
//		}
//		//将逆序的单词交给string_revers翻转
//		string_revers(parr, end - 1);
//		//判断是否要向右移动
//		if (*end == ' ' && *end != '\0')
//		{
//			//翻转一个单词后两个变量都移向下一个单词首字母
//			parr = end + 1;
//		}
//		else
//		{
//			//找到结束标志将它赋值给parr
//			parr = end;
//		}
//	}
//}
//
//int main()
//{
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	//将字符串翻转
//	//like you --> uoy ekil
//	string_revers(arr,arr+len-1);
//	//将单词反转
//	word_revers(arr);
//	printf("%s", arr);
//	return 0;
//}
//--------------------------------------------------------------------------------------------------------------------------


int main()
{
	int a = 10;
	//00000000 00000000 00000000 00001010
	//00		00			00		0a
	//128
	//00000000000000000000000010000000
	//
	return 0;
}







