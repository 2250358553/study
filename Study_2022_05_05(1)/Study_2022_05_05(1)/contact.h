#pragma once
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 10
#define MAX_ADDR 30

#define MAX 1000

//��̬�ڴ����
//ÿ������2������
#define INC_CAPACITY 2
//�ʼĬ��3������
#define DEFAULT_SZ 3

//���Ͷ���
typedef struct People
{
	char name[MAX_NAME];	//����
	char sex[MAX_SEX];		//�Ա�
	int age;				//����
	char tele[MAX_TELE];	//�绰����
	char addr[MAX_ADDR];	//��ͥ��ַ
}People;

//ͨѶ¼ - ��̬
//typedef struct Contact
//{
//	People peo[MAX];//�������Դ��1000�˵�ͨѶ¼
//	int sz;//��ʾͨѶ¼������
//}Contact;

//ͨѶ¼ - ��̬
typedef struct Contact
{
	People* peo;//�������Դ��1000�˵�ͨѶ¼
	int sz;//��ʾͨѶ¼������
	int capacity;
}Contact;

//��������
//�˵�
void menu();

//��ʼ��ͨѶ¼
void InitContact(Contact* pcon);

//������ϵ��
void AddContact(Contact* pcon);

//��ӡͨѶ¼
void PrintContact(Contact* pcon);

//ɾ����ϵ��
void DelContact(Contact* pcon);

//��ӡһ����ϵ�˵���Ϣ
void OnePrintPeople(Contact* pcon, int k);

//������ϵ��
int SearchContact(Contact* pcon);

//�޸���ϵ����Ϣ
void ModifyContact(Contact* pcon);

//����ͨѶ¼
void DestoryContact(Contact* pcon);


