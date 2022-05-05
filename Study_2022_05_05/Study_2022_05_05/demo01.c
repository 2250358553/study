#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//大写转小写
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		//判断是不是大写字母
//		if (isupper(arr[i]))
//		{
//			//将大写字母转换成小写字母,并重新放入数组中
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------


//内存函数
//memcpy - 内存拷贝
//#include<assert.h>
//void* my_memcpy(void* parr1, const void* parr2, size_t num)
//{
//	void* ret = parr1;
//	assert(parr1 && parr2);
//	while (num--)
//	{
//		*(char*)parr1 = *(char*)parr2;
//		parr1 = (char*)parr1 + 1;
//		parr2 = (char*)parr2 + 1;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	int* p = arr2;
//	my_memcpy(arr2, arr1, 20);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}


////memmove函数
//my_memmove()
//{
//
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 0 };
//	
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------



//结构体进阶
//struct Book
//{
//	char name[20];
//	int price;
//	char id[10];
//};

//匿名结构体
//struct 
//{
//	char name[20];
//	int price;
//	char id[10];
//};
//
//int main()
//{
//
//	return 0;
//}


//枚举
//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//int main()
//{
//
//	return;
//}

















