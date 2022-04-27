#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//定义棋盘行和列
#define ROW 3
#define COL 3

//函数声明--打印游戏菜单
void menu();

//初始化棋盘
void start(char[ROW][COL], int x, int y);

//打印棋盘
void print(char[ROW][COL], int x, int y);

//玩家下棋
void player_move(char[ROW][COL], int x, int y);

//电脑下棋
void computer_move(char[ROW][COL], int x, int y);

//判断游戏是否结束
char win(char[ROW][COL], int x,int y);
