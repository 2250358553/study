#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>


//字符串旋转 --> 三步旋转法
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void string_rotate(char* str, int k)
//{
//	int len = strlen(str);
//	reverse(str,str+k-1);
//	reverse(str+k,str+len-1);
//	reverse(str,str+len-1);
//}
//
//int main()
//{
//	char arr[] = "ABCDEF";
//	int k = 0;
//	scanf("%d", &k);
//	string_rotate(arr, k);
//	printf("%s", arr);
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//将arr1中字符串左旋转，并且判断旋转后是不是跟arr2相等
//int is_string_rotate(char* str1, char* str2)
//{
//	int count = 0;
//	int len = strlen(str1);
//	for (int i = 0; i < len; i++)
//	{
//		count++;
//		char ch = *str1;
//		for (int j = 0; j < len - 1; j++)
//		{
//			*(str1 + j) = *(str1 + 1 + j);
//		}
//		*(str1 + len - 1) = ch;
//		if (strcmp(str1, str2) == 0)
//		{
//			printf("左旋了%d次\n", count);
//			return 1;
//		}
//	}
//	printf("左旋了%d次\n", count);
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "ABCEDF";
//	char arr2[] = "EDFABC";
//	int ret = is_string_rotate(arr1,arr2);
//	if (ret == 1)
//	{
//		printf("相等\n");
//		printf("arr1[] = %s\n",arr1);
//		printf("arr2[] = %s\n",arr2);
//	}
//	else
//	{
//		printf("不相等\n");
//		printf("arr1[] = %s\n", arr1);
//		printf("arr2[] = %s\n", arr1);
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//判断一个字符串是不是另一个字符串的子串
//AABBCDAABCD
//BCDAA
//void find_string(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	strncat(str1,str1,len);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//	{
//		printf("不是\n");
//	}
//	else
//	{
//		printf("是\n");
//	}
//}
//
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	//调用 
//	find_string(arr1, arr2);
//	//库函数
//	//strcat(arr1, "aabcd");	//在arr1后面追加一个"aabcd"
//	//strncat(arr1,arr1,5);	//在arr1后面追加一个arr1,追加前面的5个字符
//	//strstr(arr1, arr2);//判断第二个字符串是不是第一个字符串的子串 -- 找不到返回空指针，找到了返回相同字符串的首字符串地址
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//模拟实现strcat
//char* my_strcat(char* parr1,const char* parr2)
//{
//	assert(parr1 != NULL);
//	assert(parr2 != NULL);
//	char* ret = parr1;
//	int len = strlen(parr1);
//	int i = 0;
//	parr1 += len;
//	/*while (*parr2 != '\0')
//	{
//		*parr1 = *parr2;
//		parr1++;
//		parr2++;
//	}
//	*parr1 = '\0';*/
//	while (*parr1++ = *parr2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "iccc ";
//	char arr2[] = "spider";
//	//my_strcat(arr1, arr2);
//	//printf("%s", arr1);
//	printf("%s", my_strcat(arr1, arr2));
//
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//模拟实现strcmp函数
//int my_strcmp(const char* parr1, const char* parr2)
//{
//	while (*parr1 == *parr2)
//	{
//		if (*parr1 == '\0')
//		{
//			return 0;
//		}
//		parr1++;
//		parr2++;
//	}
//	/*if (*parr1 > *parr2)
//	{
//		return 1;
//	}
//	else if (*parr1 < *parr2)
//	{
//		return -1;
//	}*/
//	return *parr1 - *parr2;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = "abc";
//	printf("%d",my_strcmp(arr1, arr2));
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//strncpy函数
//int main()
//{
//	char arr1[20] = "xxxxxx iccc";
//	char arr2[] = "spider";
//	strncpy(arr1, arr2, 6);
//	//strcpy(arr1, arr2);
//	printf("%s",arr1);
//	return 0;
//}


//模拟实现strncpy函数
//char* my_strncpy(char* parr1, const char* parr2, int k)
//{
//	int len = strlen(parr2);
//	if (k <= len)
//	{
//		while (k--)
//		{
//			*parr1++ = *parr2++;
//		}
//	}
//	if (k > len)
//	{
//		int n = k - len;
//		while (k--)
//		{
//			*parr1++ = *parr2++;
//		}
//		for (int i = 0; i < n - 1; i++)
//		{
//			*parr1 = '\0';
//			parr1++;
//		}
//	}
//}
//
//int main()
//{
//	char arr1[] = "****** iccc";
//	char arr2[] = "spider";
//	my_strncpy(arr1, arr2, 7);
//	printf("%s", arr1);
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------



//模拟实现strstr函数
//char* my_strstr(const char* parr1, const char* parr2)
//{
//	assert(parr1 && parr2);
//	char* str1 = NULL;
//	char* str2 = NULL;
//	char* start = parr1;
//	while (*start)
//	{
//		str1 = start;
//		str2 = parr2;
//		while ( *str1 && *str2 && (*str1 == *str2))
//		{
//			str1++;
//			str2++;
//		}
//		if (*str2 == '\0')
//		{
//			return start;
//		}
//		start++;
//	}
//	return NULL;
//}
//
//int main()
//{
//	char arr1[] = "spider iccc";
//	char arr2[] = "iccc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("已经结束了.jpg");
//	}
//	else
//	{
//		printf("有");
//	}
//	return 0;
//}
//----------------------------------------------------------------------------------------------------------------------


//strtok函数
int main()
{

	return 0;
}



















