#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	//����ָ��
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;
//
//	//ָ������
//	char* ch[5];
//	
//	//����ָ��
//	int (*pf)(const char*)=&my_strlen;
//}



//����ָ������ - ��ź���ָ�������
//my_strlen(const char* str)
//{
//	return 0;
//}
//int main()
//{
//	int (*pfA[5])(const char*) = { &my_strlen };//���Դ����������ĵ�ַ
//	return 0;
//}



//ͨ������ָ��дһ�����������������ļӼ��˳�
//void menu()
//{
//	printf("*****************\n");
//	printf("****  1.add  ****\n");//��
//	printf("****  2.sub  ****\n");//��
//	printf("****  3.mul  ****\n");//��
//	printf("****  4.div  ****\n");//��
//	printf("***** 0.exit ****\n");//�˳�
//	printf("*****************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
////дһ������ָ��������������������ĵ�ַ
//int(*pf[5])(int,int) = { NULL,add,sub,mul,div };
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("������������");
//			scanf("%d %d", &x, &y);
//			ret = pf[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����������ѡ��\n");
//		}
//	} while (input);
//	return 0;
//}



//ָ����ָ�������ָ��
//int main()
//{
//	int(*pf[5])(int,int);//����ָ������
//	int(*(*ppf[5]))(int, int) = &pf;//ָ����ָ�������ָ��
//	return 0;
//}