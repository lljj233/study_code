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



//�ص�����
//�ص���������һ��ͨ������ָ����õĺ����������Ѻ�����ָ�루��ַ����Ϊ�������ݸ���һ��
//�����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
//��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õģ����ڶԸ��¼���������
//����Ӧ��
//void menu()
//{
//	printf("*****************\n");
//	printf("****  1.add  ****\n");
//	printf("****  2.sub  ****\n");
//	printf("****  3.mul  ****\n");
//	printf("****  4.div  ****\n");
//	printf("***** 0.exit ****\n");
//	printf("*****************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//void calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}