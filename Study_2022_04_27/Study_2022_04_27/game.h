#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//���������к���
#define ROW 3
#define COL 3

//��������--��ӡ��Ϸ�˵�
void menu();

//��ʼ������
void start(char[ROW][COL], int x, int y);

//��ӡ����
void print(char[ROW][COL], int x, int y);

//�������
void player_move(char[ROW][COL], int x, int y);

//��������
void computer_move(char[ROW][COL], int x, int y);

//�ж���Ϸ�Ƿ����
char win(char[ROW][COL], int x,int y);
