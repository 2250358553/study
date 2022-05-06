#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//通讯录
//1.通讯录可以保存1000个人的信息
//2.每个人的信息：名字+年龄+性别+电话+地址
//3.增加人的信息
//4.删除指定人的信息
//5.修改指定人的信息
//6.查找个人信息
//7.排序通讯录信息


enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

int main()
{
	int input = 0;
	int ret = 0;
	Contact con;

	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);

		switch (input)
		{
			//增加联系人
		case ADD: 
			AddContact(&con);
			break;

			//删除联系人
		case DEL:
			DelContact(&con);
			break;

			//查找联系人
		case SEARCH:
			ret = SearchContact(&con);
			if (ret == -1)
			{
				printf("查无此人!\n");
			}
			else
			{
				printf("找到了!\n");
				OnePrintPeople(&con, ret);
			}
			break;

			//修改联系人信息
		case MODIFY:
			ModifyContact(&con);
			break;

			//排序通讯录
		case SORT:
			break;

			//打印通讯录
		case PRINT:
			PrintContact(&con);
			break;

			//退出程序
		case EXIT:
			DestoryContact(&con);
			printf("退出成功！\n");
			break;

		default:
			printf("输入错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}




























