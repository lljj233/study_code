#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void menu()
{
	printf("*******************\n");
	printf("****  1. play  ****\n");
	printf("****  0. exit  ****\n");
	printf("*******************\n");
}
void game()
{
	//1.��Ҫ��Ų��úõ��׵���Ϣ�ʹ���Ų�����׵���Ϣ����Ҫ��������
	//2.�Ų�����ʱ��Ϊ�˷�ֹ�����±�Խ�磬������������������
	char mine[ROWS][COLS] = { 0 };//���úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');

	//��ӡ����
	PrintBoard(show, ROW, COL);
	//PrintBoard(mine, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	PrintBoard(mine, ROW, COL);
	//�ų���
	FineMine(mine, show, ROW, COL);
	//PrintBoard(mine, ROW, COL);
}
void test()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		int input = 0;
		printf("������ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}