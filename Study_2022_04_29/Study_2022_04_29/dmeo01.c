#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------------------


//strcpy函数 - 字符串拷贝
//int main()
//{
//	char arr1[10] = "spider";
//	char arr2[10] = {0};
//	strcpy(arr2,arr1);
//	printf("%s", arr2);
//	return 0;
//}
//-------------------------------------------------------------------------------------------------------------------


//模拟实现strcpy函数
//void my_strcpy(char* pa1, char* pa2)
//{
//	while(*pa2 != '\0')
//	{
//		*pa1 = *pa2;
//		pa1++;
//		pa2++;
//	}
//	*pa1 = '\0';
//}

//优化-----------
//void my_strcpy(char* pa1, char* pa2)
//{
//	while(*pa2 != '\0')
//	{
//		*pa1++ = *pa2++;
//	}
//		*pa1 = '\0';
//
//}

//优化------------牛逼
//char* my_strcpy(char* pa1, const char* pa2)
//{
//	assert(pa2 != NULL);//断言 -- 为真什么都不做，为假提示报错信息
//	assert(pa1 != NULL);//断言 -- 为真什么都不做，为假提示报错信息
//	char* ret = pa1;
//	while (*pa1++ = *pa2++)//既复制了字符，又复制了'\0'
//	{
//		;
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	char arr1[] = "**********";
//	char arr2[] = "spider";
//	printf("%s", my_strcpy(arr1,arr2));
//	return 0;
//}
////-------------------------------------------------------------------------------------------------------------------


// const -- 修饰变量，变成常变量（不能修改，但本质上还是变量）
//int main()
//{
//	const int a = 10;
//	//int* pa = &a;
//	const int* pa = 20;
//	//*pa = 20;//err
//	printf("%d", a);
//	return 0;
//}
//

//模拟编写strlen函数
int my_strlen(const char* parr)
{
	assert(parr != NULL);//断言
	int count = 0;
	while (*parr++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "spider";
	printf("%d", my_strlen(arr));
	return 0;
}

























