#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//杨氏矩阵 --> 每一行都是递增的，每一列也是递增的，从这个矩阵中找到一个数
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	int k = 0;
//	scanf("%d", &k);
//	int* parr = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		if (*parr == k)
//		{
//			printf("找到了");
//		}
//		parr++;
//	}
//	printf("已经结束了.jpg");
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------


//int find_number(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	while (x < row && y >= 0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 0;
//	scanf("%d", &k);
//	int ret = find_number(arr, 3, 3, k);
//	if (ret == 1)
//	{
//		printf("找到了");
//	}
//	else
//	{
//		printf("已经结束了.jpg");
//	}
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------


//字符串左旋
//void reverse(char* parr, int k, int st)
//{
//	int i = 0;
//	for (i = 0; i < k; i++)
//	{
//		char ch = *parr;
//		for(int j = 0; j < st - 1; j++)
//		{
//			*(parr + j) = *(parr + j + 1);	
//		}
//		*(parr + st - 1) = ch;
//	}
//}
//int main()
//{
//	char arr[] = "abcd";
//	int st = strlen(arr);
//	int k = 0;
//	scanf("%d", &k);
//	reverse(arr, k, st);
//	printf("%s", arr);
//	return 0;
//}
//---------------------------------------------------------------------------------------------------------------------


//字符串左旋优化
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		char* tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right++;
//	}
//}
//
//void fine_number(char* parr, int k)
//{
//	reverse();
//	reverse();
//	reverse();
//}

int main()
{
	//char arr[] = "abcdef";
	//int len = strlen(arr);
	//int k = 0;
	//scanf("%d", &k);
	//fine_number(arr, k, len);
	//printf("%s", arr);
	//return 0;
	char arr[100] = {0};
	gets(arr);
	printf("%s", arr);
	return 0;
}

























