#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h";

//��ӡ��Ϸ�˵�
void menu()
{
	printf("--------------------\n");
	printf("---    1.play    ---\n");
	printf("---    0.exit    ---\n");
	printf("--------------------\n");
}

//��ʼ������-ȫ�������ո�
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

//��ӡ����
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

//�������
void player_move(char arr[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("���������꣺");
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
				printf("�����ѱ�ռ��,���������룺\n");
				printf("\n");

			}
		}
		else
		{
			printf("��������������������룺\n");
			printf("\n");

		}
	}
}
//��������
void computer_move(char arr[ROW][COL], int row, int col)
{
	printf("�����£�\n");
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

//�ж���Ϸ�Ƿ�ʤ��
//1.���ʤ������*
//2.����ʤ������#
//3.ƽ�ַ���a
//4.��δ��������b
char win(char arr[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int n = 0;
	int m = 0;

	//�ж�����
	for (i = 0; i < col; i++)
	{
		if (arr[1][i] != ' ' && arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
		{
			return arr[1][i];
		}
	}

	//�ж�����
	for (j = 0; j < row; j++)
	{
		if (arr[j][1] != ' ' && arr[j][0] == arr[j][1] && arr[j][1] == arr[j][2])
		{
			return arr[j][1];
		}
	}

	//�ж϶Խ���
	if (arr[0][0] != ' ' && arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		return arr[1][1];
	}
	if (arr[0][2] != ' ' && arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
	{
		return arr[1][1];
	}

	//�ж��Ƿ�ƽ��
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


