#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <ctype.h>

//��дתСд
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		//�ж��ǲ��Ǵ�д��ĸ
//		if (isupper(arr[i]))
//		{
//			//����д��ĸת����Сд��ĸ,�����·���������
//			arr[i] = tolower(arr[i]);
//		}
//		printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------


//�ڴ溯��
//memcpy - �ڴ濽��
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


////memmove����
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



//�ṹ�����
//struct Book
//{
//	char name[20];
//	int price;
//	char id[10];
//};

//�����ṹ��
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


//ö��
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

















