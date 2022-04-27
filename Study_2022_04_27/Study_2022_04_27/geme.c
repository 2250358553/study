#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h";

//打印游戏菜单
void menu()
{
	printf("--------------------\n");
	printf("---    1.play    ---\n");
	printf("---    0.exit    ---\n");
	printf("--------------------\n");
}

//初始化棋盘-全部放满空格
void start(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}
	}
}

//打印棋盘
void print(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int k = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if (j < col - 1)
			{
				printf("|"); 
			}
		}
		printf("\n");
		for (k = 0; k < row; k++)
		{
			printf("---");

			if (k < row - 1)
			{
				printf("|");
			}
		}
		printf("\n");
	}
}

//玩家下棋
void player_move(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标：");
		scanf("%d%d", &x, &y);
		if ((x >= 1 && x <= ROW) && (y >= 1 && y <= ROW))
		{
			if (arr[x - 1][y - 1] == ' ')
			{
				arr[x - 1][y - 1] = '*';
				printf("\n");
				break;
			}
			else
			{
				printf("坐标已被占用,请重新输入：\n");
				printf("\n");

			}
		}
		else
		{
			printf("坐标输入错误，请重新输入：\n");
			printf("\n");

		}
	}
}
//电脑下棋
void computer_move(char arr[ROW][COL], int row, int col)
{
	printf("电脑下：\n");
	printf("\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = '#';
			break;
		}
	}
}

//判断游戏是否胜利
//1.玩家胜利返回*
//2.电脑胜利返回#
//3.平局返回a
//4.还未结束返回b
char win(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;

	//判断三列
	for (i = 0; i < col; i++)
	{
		if (arr[1][i] != ' ' && arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
		{
			return arr[1][i];
		}
	}

	//判断三行
	for (j = 0; j < row; j++)
	{
		if (arr[j][1] != ' ' && arr[j][0] == arr[j][1] && arr[j][1] == arr[j][2])
		{
			return arr[j][1];
		}
	}

	//判断对角线
	if (arr[0][0] != ' ' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		return arr[1][1];
	}
	if (arr[0][2] != ' ' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
	{
		return arr[1][1];
	}

	//判断是否平局
	for (n = 0; n < row; n++)
	{
		for (m = 0; m < col; m++)
		{
			if (arr[m][n] == ' ')
			{
				return 'b';
			}
		}
	}
	return 'a';
}


