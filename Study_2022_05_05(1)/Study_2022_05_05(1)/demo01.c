#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//ͨѶ¼
//1.ͨѶ¼���Ա���1000���˵���Ϣ
//2.ÿ���˵���Ϣ������+����+�Ա�+�绰+��ַ
//3.�����˵���Ϣ
//4.ɾ��ָ���˵���Ϣ
//5.�޸�ָ���˵���Ϣ
//6.���Ҹ�����Ϣ
//7.����ͨѶ¼��Ϣ


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

	//��ʼ��ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("���������ѡ��");
		scanf("%d", &input);

		switch (input)
		{
			//������ϵ��
		case ADD: 
			AddContact(&con);
			break;

			//ɾ����ϵ��
		case DEL:
			DelContact(&con);
			break;

			//������ϵ��
		case SEARCH:
			ret = SearchContact(&con);
			if (ret == -1)
			{
				printf("���޴���!\n");
			}
			else
			{
				printf("�ҵ���!\n");
				OnePrintPeople(&con, ret);
			}
			break;

			//�޸���ϵ����Ϣ
		case MODIFY:
			ModifyContact(&con);
			break;

			//����ͨѶ¼
		case SORT:
			break;

			//��ӡͨѶ¼
		case PRINT:
			PrintContact(&con);
			break;

			//�˳�����
		case EXIT:
			DestoryContact(&con);
			printf("�˳��ɹ���\n");
			break;

		default:
			printf("�������������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}




























