#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h";

void game()
{
	char ch;
	//��������
	char arr[ROW][COL];
	//��ʼ������
	start(arr,ROW,COL);
	//��ӡ����
	print(arr,ROW,COL);
	while(1)
	{
		//�������
		player_move(arr, ROW, COL);
		print(arr, ROW, COL);
		//�ж���Ϸ�Ƿ����
		ch = win(arr,ROW,COL);
		if (ch == '*')
		{
			printf("------------�� �� ʤ ����------------\n");
			printf("\n");
			print(arr, ROW, COL);
		}
		if (ch != 'b')
		{
			break;
		}
		//��������
		computer_move(arr, ROW, COL);
		print(arr, ROW, COL);
		//�ж���Ϸ�Ƿ����
		ch = win(arr, ROW, COL);
		if (ch == '#')
		{
			printf("------------�� �� ʤ ����------------\n");
			printf("\n");
			print(arr, ROW, COL);
		}
		if (ch == 'a')
		{
			printf("------------ƽ �֣�------------\n");
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
	//�������ѡ��
	int input = 0;
	//���������
	srand((unsigned int)time(NULL));
	//�ж���Ϸ�Ƿ����
	do
	{	
		menu();
		printf("��ѡ�� :");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������������ѡ��\n");
			break;
		}

	} while (input);
	return 0;
}








































