#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


//strcmp函数--字符串比较
//int main()
//{
//	char arr[] = "123456";
//	printf("请输入密码->:");
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", arr);
//		if (strcmp(arr, "123456") == 0)
//		{
//			printf("YES\n");
//		}
//		else
//		{
//			printf("失败\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("已经结束了！");
//	}
//
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------------



//随机生成数
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int j = 0;
//	printf("输入1--开始\n");
//	printf("输入0--退出\n");
//	scanf("%d", &n);
//	srand((unsigned int)time(NULL));
//	int a = rand() % 100 + 1;
//	while(n)
//	{
//		printf("请输入数字:\n");
//		scanf("%d", &j);
//		if (j > a)
//		{
//			printf("猜大了\n");
//		}
//		else if (j < a)
//		{
//			printf("猜小了\n");
//		}
//		else if(j == a)
//		{
//			printf("猜对了");
//			break;
//		}
//
//	}
//	if (n == 0)
//	{
//		printf("退出成功");
//
//	}
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------------


//关机小程序
//int main()
//{
//	char arr[] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("电脑将在60秒后关机，请输入：我是猪，取消关机\n");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//-----------------------------------------------------------------------------------------------------------------------------------










