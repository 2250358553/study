#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//����ָ������
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


// qsort(); --> ��������
//�������ݡ��ַ������ݡ��ṹ������
/*
* void qsort(void* baes,	//Ҫ������������Ԫ�ص�ַ
*			 size_t num,	//Ҫ����������Ԫ�ظ���
*			 size_t size,	//������һ��Ԫ���ж��
*			 int(*compar)(const void*, const void*)//�������Ƚϴ�����������е�����Ԫ�صĺ���
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


//ʹ��qsort()ʵ�ֽṹ������
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
//	//������������
//	//qsort(sarr, sz, sizeof(sarr[0]), my_compar_age);
//	//������������
//	qsort(sarr, sz, sizeof(sarr[0]), my_compar_name);
//	struct stu* psarr = sarr;
//	/*int** p = (int*)psarr;*/
//	//��������ṹ���е�Ԫ��
//	for (psarr = sarr; psarr < sarr + sz; psarr++)
//	{
//		printf("%s %d\n", psarr->name, psarr->age);
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------





//ģ��ʵ��qsort()����
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
//			//base����Ԫ�صĵ�ַ��ǿ��ת��Ϊchar���ͣ�char������1���ֽڣ�
//			//my_qsort�е������������������ľ��������е�һ��Ԫ�صĴ�С
//			//(char*)base ���� ������һ��Ԫ�ش�С�պ�������һ��Ԫ��
//			//��char*)base(j*width) --> ������������
//			if (compar( (char*)base+j*width, (char*)base + (j+1)*width ) > 0)
//			{
//				//���� --> ��Ϊ��֪�������е����ݣ�����һ���ֽ�һ���ֽڵĽ���
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
////����������
////int my_compar_age(const void* n, const void* m)
////{
////	return ((struct stu*)n)->age - ((struct stu*)m)->age;
////}
//
////����������
//int my_compar_name(const void* n, const void* m)
//{
//	return strcmp(((struct stu*)n)->name, ((struct stu*)m)->name);
//}
//
//int main()
//{
//	struct stu sarr[] = { {"zhangsan", 30}, {"lisi", 35}, {"wangwu", 31} };
//	int sz = sizeof(sarr) / sizeof(sarr[0]);
//	//������������
//	//qsort(sarr, sz, sizeof(sarr[0]), my_compar_age);
//	//������������
//	my_qsort(sarr, sz, sizeof(sarr[0]), my_compar_name);
//	struct stu* psarr = sarr;
//	/*int** p = (int*)psarr;*/
//	//��������ṹ���е�Ԫ��
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

























