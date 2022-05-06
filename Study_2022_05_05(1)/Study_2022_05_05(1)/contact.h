#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 10
#define MAX_ADDR 30

#define MAX 1000

//动态内存分配
//每次增加2个容量
#define INC_CAPACITY 2
//最开始默认3个容量
#define DEFAULT_SZ 3

//类型定义
typedef struct People
{
	char name[MAX_NAME];	//名字
	char sex[MAX_SEX];		//性别
	int age;				//年龄
	char tele[MAX_TELE];	//电话号码
	char addr[MAX_ADDR];	//家庭地址
}People;

//通讯录 - 静态
//typedef struct Contact
//{
//	People peo[MAX];//创建可以存放1000人的通讯录
//	int sz;//显示通讯录多少人
//}Contact;

//通讯录 - 动态
typedef struct Contact
{
	People* peo;//创建可以存放1000人的通讯录
	int sz;//显示通讯录多少人
	int capacity;
}Contact;

//函数声明
//菜单
void menu();

//初始化通讯录
void InitContact(Contact* pcon);

//增加联系人
void AddContact(Contact* pcon);

//打印通讯录
void PrintContact(Contact* pcon);

//删除联系人
void DelContact(Contact* pcon);

//打印一个联系人的信息
void OnePrintPeople(Contact* pcon, int k);

//查找联系人
int SearchContact(Contact* pcon);

//修改联系人信息
void ModifyContact(Contact* pcon);

//销毁通讯录
void DestoryContact(Contact* pcon);


