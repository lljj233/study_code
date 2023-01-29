#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"


void menu()
{
	printf("*********************\n");
	printf("****    1.play   ****\n");
	printf("****    2.exit   ****\n");
	printf("*********************\n");
}

void game()
{
	char board[ROW][COL];
	char ret = 0;
	//��ʼ������Ϊȫ�ո�
	Init_board(board, ROW, COL);
	Print_board(board, ROW, COL);

	while (1)
	{
		Play_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		Computer_move(board, ROW, COL);
		Print_board(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '#')
		printf("����Ӯ\n");
	else if (ret == '*')
		printf("���Ӯ\n");
	else if(ret=='Q')
		printf("ƽ��\n");
}
//�ж���Ӯ������Ӯ�������Ӯ����ƽ�ֻ�����Ϸδ����
//����Ӯ����#
//���Ӯ����*
//ƽ�ַ���Q
//��Ϸ��������C


void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("������ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		case 2:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}