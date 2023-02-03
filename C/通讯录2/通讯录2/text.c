#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void menu()
{
	printf("****  1.增添联系人信息  ****\n");
	printf("****  2.删除联系人信息  ****\n");
	printf("****  3.查找联系人信息  ****\n");
	printf("****  4.修改联系人信息  ****\n");
	printf("****  5.显示联系人信息  ****\n");
	printf("****  6.清空所有联系人  ****\n");
	printf("****  7.排序所有联系人  ****\n");
	printf("****        0.退出      ****\n");
}

int main()
{
	int input;
	Contact con;//创建通讯录
	Init_Contact(&con);//初始化通讯录
	do
	{
		menu();
		printf("请选择：");
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
			printf("退出通讯录\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}

