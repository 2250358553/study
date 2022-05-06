#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h";

//菜单
void menu()
{
	printf("****************************************\n");
	printf("*********  1.add     2.del     *********\n");
	printf("*********  3.search  4.modify  *********\n");
	printf("*********  5.sort    6.print   *********\n");
	printf("*********       0.exit         *********\n");
	printf("****************************************\n");
}

//初始化通讯录 - 静态
//void InitContact(Contact* pcon)
//{
//	//初始化通讯录中的联系人数据都为0
//	memset(pcon->peo, 0, sizeof(pcon->peo));
//	//初始化通讯录联系人个数为0
//	pcon->sz = 0;
//}

//初始化通讯录 - 动态
void InitContact(Contact* pcon)
{
	//初始化通讯录
	 pcon->peo = (People*)malloc(DEFAULT_SZ * sizeof(People));
	 if (pcon->peo == NULL)
	 {
		 printf("初始化失败！\n");
		 return;
	 }
	//初始化通讯录联系人个数为0
	pcon->sz = 0;
	//初始化最大容量为3
	pcon->capacity = DEFAULT_SZ;
}

//添加联系人 - 静态
//void AddContact(Contact* pcon)
//{
//	//判断通讯录是否存满
//	if (pcon->sz == MAX)
//	{
//		printf("通讯录已经满了，添加失败");
//		return;
//	}
//	//添加联系人
//
//	printf("请输入姓名：");
//	scanf("%s", pcon->peo[pcon->sz].name);
//
//	printf("请输入性别：");
//	scanf("%s", pcon->peo[pcon->sz].sex);
//
//	printf("请输入年龄：");
//	scanf("%d", &(pcon->peo[pcon->sz].age));
//
//	printf("请输入电话：");
//	scanf("%s", pcon->peo[pcon->sz].tele);
//
//	printf("请输入地址：");
//	scanf("%s", pcon->peo[pcon->sz].addr);
//
//	pcon->sz++;
//	printf("添加成功！\n");
//}

//添加联系人 - 动态
void AddContact(Contact* pcon)
{
	//判断通讯录是否达到最大容量
	if (pcon->sz == pcon->capacity)
	{
		//增容
		People* ptr = (People*)realloc(pcon->peo, (pcon->capacity + INC_CAPACITY) * sizeof(People));
		if (ptr != NULL)
		{
			pcon->peo = ptr;
			pcon->capacity += INC_CAPACITY;
			printf("增容成功！\n");

		}  
		else
		{
			perror("AddContact");
		}
	}
	//添加联系人

	printf("请输入姓名：");
	scanf("%s", pcon->peo[pcon->sz].name);

	printf("请输入性别：");
	scanf("%s", pcon->peo[pcon->sz].sex);

	printf("请输入年龄：");
	scanf("%d", &(pcon->peo[pcon->sz].age));

	printf("请输入电话：");
	scanf("%s", pcon->peo[pcon->sz].tele);

	printf("请输入地址：");
	scanf("%s", pcon->peo[pcon->sz].addr);

	pcon->sz++;
	printf("添加成功！\n");
}

//打印通讯录
void PrintContact(Contact* pcon)
{
	//先打印标题
	printf("%s\t%s\t%s\t%s\t%s\n", "姓名", "性别", "年龄", "电话", "地址");

	//循环输出结构体中的信息
	for (int i = 0; i < pcon->sz; i++)
	{
		printf("%s\t%s\t%d\t%s\t%s\n", pcon->peo[i].name,
									   pcon->peo[i].sex,
									   pcon->peo[i].age,
									   pcon->peo[i].tele, 
									   pcon->peo[i].addr
									   );
	}
}

//打印一个联系人的信息
void OnePrintPeople(Contact* pcon, int k)
{
	printf("%s\t%s\t%s\t%s\t%s\n", "姓名", "性别", "年龄", "电话", "地址");

	printf("%s\t%s\t%d\t%s\t%s\n", pcon->peo[k].name,
								   pcon->peo[k].sex,
								   pcon->peo[k].age,
								   pcon->peo[k].tele,
								   pcon->peo[k].addr
								   );
}

//删除联系人
void DelContact(Contact* pcon)
{
	//判断通讯录是不是空的
	int i = 0;
	if (pcon->sz == 0)
	{
		printf("通讯录是空的，没有可删除的联系人！\n");
		return;
	}
	//删除联系人
	//先找到要删除的联系人
	int ret = SearchContact(pcon);
	if (ret == -1)
	{
		printf("查无此人!\n");
	}
	else
	{
		for (i = ret; i < pcon->sz - 1; i++)
		{
			pcon->peo[i] = pcon->peo[i + 1];
		}
		pcon->sz--;
		printf("删除成功！\n");
		//打印通讯录列表
		PrintContact(pcon);
	}

}

//查找联系人
int SearchContact(Contact* pcon)
{
	char ch[MAX_NAME] = { 0 };
	printf("请输入要(删除or修改or查找)的联系人姓名：");
	scanf("%s",ch);
	for (int i = 0; i < pcon->sz; i++)
	{
		//strcmp函数可以判断两个字符串是否相等
		if (strcmp(pcon->peo[i].name, ch) == 0)
		{
			//相等返回下标
			return i;
		}
	}
	return -1;
}

//修改联系人信息
void ModifyContact(Contact* pcon)
{
	//找到要修改的人
	int ret = SearchContact(pcon);
	if (ret == -1)
	{
		printf("查无此人!\n");
	}
	//修改
	printf("请输入姓名：");
	scanf("%s", pcon->peo[ret].name);

	printf("请输入性别：");
	scanf("%s", pcon->peo[ret].sex);

	printf("请输入年龄：");
	scanf("%d", &(pcon->peo[ret].age));

	printf("请输入电话：");
	scanf("%s", pcon->peo[ret].tele);

	printf("请输入地址：");
	scanf("%s", pcon->peo[ret].addr);
}

//销毁通讯录
void DestoryContact(Contact* pcon)
{
	free(pcon->peo);
	pcon->peo = NULL;
	pcon->sz = 0;
	pcon->capacity = 0;
}











































