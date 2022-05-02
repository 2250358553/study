#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//函数指针数组
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*parr[5])(int, int) = { 0, add, sub, mul, div };
//	int input = 0;
//	scanf("%d", &input);
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int ret = 0;
//	ret = (parr[input])(n, m);
//	printf("%d ",ret);
//	return 0;
//}


// qsort(); --> 快速排序
//整形数据、字符串数据、结构体数据
/*
* void qsort(void* baes,	//要排序的数组的首元素地址
*			 size_t num,	//要排序的数组的元素个数
*			 size_t size,	//数组中一个元素有多大
*			 int(*compar)(const void*, const void*)//是用来比较待排序的数组中的连个元素的函数
			)
*/

//int my_compar(const void* a, const void* b)
//{
//	return *(int*)a - *(int*)b;
//}
//
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), my_compar);
//	int i = 0;
//	int* parr = arr;
//	for (i = 0; i < sz - 1; i++)
//	{
//		printf("%d ", *parr++);
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//使用qsort()实现结构体排序
//struct stu
//{
//	char name[10];
//	int age;
//};
//
//int my_compar_age(const void* n, const void* m)
//{
//	return ((struct stu*)n)->age - ((struct stu*)m)->age;
//}
//
//int my_compar_name(const void* n, const void* m)
//{
//	return strcmp(((struct stu*)n)->name, ((struct stu*)m)->name);
//}
//
//int main()
//{
//	struct stu sarr[] = {{"zhangsan", 30}, {"lisi", 35}, {"wangwu", 31}};
//	int sz = sizeof(sarr) / sizeof(sarr[0]);
//	//按照年龄排序
//	//qsort(sarr, sz, sizeof(sarr[0]), my_compar_age);
//	//按照名字排序
//	qsort(sarr, sz, sizeof(sarr[0]), my_compar_name);
//	struct stu* psarr = sarr;
//	/*int** p = (int*)psarr;*/
//	//遍历输出结构体中的元素
//	for (psarr = sarr; psarr < sarr + sz; psarr++)
//	{
//		printf("%s %d\n", psarr->name, psarr->age);
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------





//模拟实现qsort()函数
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//
//void my_qsort(void* base, 
//			  int sz, 
//			  int width, 
//			  int (*compar)(const void* n, const void* m)
//			  )
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//base是首元素的地址，强制转换为char类型，char类型是1个字节，
//			//my_qsort中第三个参数，传过来的就是数组中的一个元素的大小
//			//(char*)base 加上 数组中一个元素大小刚好跳到下一个元素
//			//（char*)base(j*width) --> 控制它往后走
//			if (compar( (char*)base+j*width, (char*)base + (j+1)*width ) > 0)
//			{
//				//交换 --> 因为不知道数组中的内容，所以一个字节一个字节的交换
//				swap((char*)base + (j * width), (char*)base + ((j + 1) * width), width);
//			}
//		}
//	}
//}
//
//struct stu
//{
//	char name[10];
//	int age;
//};
//
////按年龄排序
////int my_compar_age(const void* n, const void* m)
////{
////	return ((struct stu*)n)->age - ((struct stu*)m)->age;
////}
//
////按名字排序
//int my_compar_name(const void* n, const void* m)
//{
//	return strcmp(((struct stu*)n)->name, ((struct stu*)m)->name);
//}
//
//int main()
//{
//	struct stu sarr[] = { {"zhangsan", 30}, {"lisi", 35}, {"wangwu", 31} };
//	int sz = sizeof(sarr) / sizeof(sarr[0]);
//	//按照年龄排序
//	//qsort(sarr, sz, sizeof(sarr[0]), my_compar_age);
//	//按照名字排序
//	my_qsort(sarr, sz, sizeof(sarr[0]), my_compar_name);
//	struct stu* psarr = sarr;
//	/*int** p = (int*)psarr;*/
//	//遍历输出结构体中的元素
//	for (psarr = sarr; psarr < sarr + sz; psarr++)
//	{
//		printf("%s %d\n", psarr->name, psarr->age);
//	}
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------


int main()
{

	return 0;
}

























