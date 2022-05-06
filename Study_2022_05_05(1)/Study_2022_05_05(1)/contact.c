#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h";

//�˵�
void menu()
{
	printf("****************************************\n");
	printf("*********  1.add     2.del     *********\n");
	printf("*********  3.search  4.modify  *********\n");
	printf("*********  5.sort    6.print   *********\n");
	printf("*********       0.exit         *********\n");
	printf("****************************************\n");
}

//��ʼ��ͨѶ¼ - ��̬
//void InitContact(Contact* pcon)
//{
//	//��ʼ��ͨѶ¼�е���ϵ�����ݶ�Ϊ0
//	memset(pcon->peo, 0, sizeof(pcon->peo));
//	//��ʼ��ͨѶ¼��ϵ�˸���Ϊ0
//	pcon->sz = 0;
//}

//��ʼ��ͨѶ¼ - ��̬
void InitContact(Contact* pcon)
{
	//��ʼ��ͨѶ¼
	 pcon->peo = (People*)malloc(DEFAULT_SZ * sizeof(People));
	 if (pcon->peo == NULL)
	 {
		 printf("��ʼ��ʧ�ܣ�\n");
		 return;
	 }
	//��ʼ��ͨѶ¼��ϵ�˸���Ϊ0
	pcon->sz = 0;
	//��ʼ���������Ϊ3
	pcon->capacity = DEFAULT_SZ;
}

//�����ϵ�� - ��̬
//void AddContact(Contact* pcon)
//{
//	//�ж�ͨѶ¼�Ƿ����
//	if (pcon->sz == MAX)
//	{
//		printf("ͨѶ¼�Ѿ����ˣ����ʧ��");
//		return;
//	}
//	//�����ϵ��
//
//	printf("������������");
//	scanf("%s", pcon->peo[pcon->sz].name);
//
//	printf("�������Ա�");
//	scanf("%s", pcon->peo[pcon->sz].sex);
//
//	printf("���������䣺");
//	scanf("%d", &(pcon->peo[pcon->sz].age));
//
//	printf("������绰��");
//	scanf("%s", pcon->peo[pcon->sz].tele);
//
//	printf("�������ַ��");
//	scanf("%s", pcon->peo[pcon->sz].addr);
//
//	pcon->sz++;
//	printf("��ӳɹ���\n");
//}

//�����ϵ�� - ��̬
void AddContact(Contact* pcon)
{
	//�ж�ͨѶ¼�Ƿ�ﵽ�������
	if (pcon->sz == pcon->capacity)
	{
		//����
		People* ptr = (People*)realloc(pcon->peo, (pcon->capacity + INC_CAPACITY) * sizeof(People));
		if (ptr != NULL)
		{
			pcon->peo = ptr;
			pcon->capacity += INC_CAPACITY;
			printf("���ݳɹ���\n");

		}  
		else
		{
			perror("AddContact");
		}
	}
	//�����ϵ��

	printf("������������");
	scanf("%s", pcon->peo[pcon->sz].name);

	printf("�������Ա�");
	scanf("%s", pcon->peo[pcon->sz].sex);

	printf("���������䣺");
	scanf("%d", &(pcon->peo[pcon->sz].age));

	printf("������绰��");
	scanf("%s", pcon->peo[pcon->sz].tele);

	printf("�������ַ��");
	scanf("%s", pcon->peo[pcon->sz].addr);

	pcon->sz++;
	printf("��ӳɹ���\n");
}

//��ӡͨѶ¼
void PrintContact(Contact* pcon)
{
	//�ȴ�ӡ����
	printf("%s\t%s\t%s\t%s\t%s\n", "����", "�Ա�", "����", "�绰", "��ַ");

	//ѭ������ṹ���е���Ϣ
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

//��ӡһ����ϵ�˵���Ϣ
void OnePrintPeople(Contact* pcon, int k)
{
	printf("%s\t%s\t%s\t%s\t%s\n", "����", "�Ա�", "����", "�绰", "��ַ");

	printf("%s\t%s\t%d\t%s\t%s\n", pcon->peo[k].name,
								   pcon->peo[k].sex,
								   pcon->peo[k].age,
								   pcon->peo[k].tele,
								   pcon->peo[k].addr
								   );
}

//ɾ����ϵ��
void DelContact(Contact* pcon)
{
	//�ж�ͨѶ¼�ǲ��ǿյ�
	int i = 0;
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ǿյģ�û�п�ɾ������ϵ�ˣ�\n");
		return;
	}
	//ɾ����ϵ��
	//���ҵ�Ҫɾ������ϵ��
	int ret = SearchContact(pcon);
	if (ret == -1)
	{
		printf("���޴���!\n");
	}
	else
	{
		for (i = ret; i < pcon->sz - 1; i++)
		{
			pcon->peo[i] = pcon->peo[i + 1];
		}
		pcon->sz--;
		printf("ɾ���ɹ���\n");
		//��ӡͨѶ¼�б�
		PrintContact(pcon);
	}

}

//������ϵ��
int SearchContact(Contact* pcon)
{
	char ch[MAX_NAME] = { 0 };
	printf("������Ҫ(ɾ��or�޸�or����)����ϵ��������");
	scanf("%s",ch);
	for (int i = 0; i < pcon->sz; i++)
	{
		//strcmp���������ж������ַ����Ƿ����
		if (strcmp(pcon->peo[i].name, ch) == 0)
		{
			//��ȷ����±�
			return i;
		}
	}
	return -1;
}

//�޸���ϵ����Ϣ
void ModifyContact(Contact* pcon)
{
	//�ҵ�Ҫ�޸ĵ���
	int ret = SearchContact(pcon);
	if (ret == -1)
	{
		printf("���޴���!\n");
	}
	//�޸�
	printf("������������");
	scanf("%s", pcon->peo[ret].name);

	printf("�������Ա�");
	scanf("%s", pcon->peo[ret].sex);

	printf("���������䣺");
	scanf("%d", &(pcon->peo[ret].age));

	printf("������绰��");
	scanf("%s", pcon->peo[ret].tele);

	printf("�������ַ��");
	scanf("%s", pcon->peo[ret].addr);
}

//����ͨѶ¼
void DestoryContact(Contact* pcon)
{
	free(pcon->peo);
	pcon->peo = NULL;
	pcon->sz = 0;
	pcon->capacity = 0;
}











































