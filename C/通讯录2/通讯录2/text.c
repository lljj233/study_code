#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void menu()
{
	printf("****  1.������ϵ����Ϣ  ****\n");
	printf("****  2.ɾ����ϵ����Ϣ  ****\n");
	printf("****  3.������ϵ����Ϣ  ****\n");
	printf("****  4.�޸���ϵ����Ϣ  ****\n");
	printf("****  5.��ʾ��ϵ����Ϣ  ****\n");
	printf("****  6.���������ϵ��  ****\n");
	printf("****  7.����������ϵ��  ****\n");
	printf("****        0.�˳�      ****\n");
}

int main()
{
	int input;
	Contact con;//����ͨѶ¼
	Init_Contact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add_Contact(&con);
			break;
		case 2:
			Del_Contact(&con);
			break;
		case 3:
			Search_Contact(&con);
			break;
		case 4:
			Modify_Contact(&con);
			break;
		case 5:
			Show_Contact(&con);
			break;
		case 6:
			Clear_Contact(&con);
			break;
		case 7:
			Sort_Contact(&con);
			break;
		case 0:
			Destroy_Contact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}

