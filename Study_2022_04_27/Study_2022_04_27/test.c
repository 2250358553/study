#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h";

void game()
{
	char ch;
	//创建棋盘
	char arr[ROW][COL];
	//初始化棋盘
	start(arr,ROW,COL);
	//打印棋盘
	print(arr,ROW,COL);
	while(1)
	{
		//玩家下棋
		player_move(arr, ROW, COL);
		print(arr, ROW, COL);
		//判断游戏是否结束
		ch = win(arr,ROW,COL);
		if (ch == '*')
		{
			printf("------------玩 家 胜 利！------------\n");
			printf("\n");
			print(arr, ROW, COL);
		}
		if (ch != 'b')
		{
			break;
		}
		//电脑下棋
		computer_move(arr, ROW, COL);
		print(arr, ROW, COL);
		//判断游戏是否结束
		ch = win(arr, ROW, COL);
		if (ch == '#')
		{
			printf("------------电 脑 胜 利！------------\n");
			printf("\n");
			print(arr, ROW, COL);
		}
		if (ch == 'a')
		{
			printf("------------平 局！------------\n");
			printf("\n");
			print(arr, ROW, COL);
		}
		if (ch != 'b')
		{
			break;
		}
		
	}

}

int main()
{
	//玩家输入选择
	int input = 0;
	//生成随机数
	srand((unsigned int)time(NULL));
	//判断游戏是否结束
	do
	{	
		menu();
		printf("请选择 :");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新选择\n");
			break;
		}

	} while (input);
	return 0;
}








































