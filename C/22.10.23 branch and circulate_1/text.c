#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//if��֧�ṹ
//(0Ϊ�٣���0Ϊ��)
//else�����������ifƥ��


//int main()
//{
//	int age = 0;
//	scanf("%d",&age);
//	if (age > 18)
//	{
//		printf("����")��
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//	{
//		printf("����")��
//	}
//	else
//	{
//		printf("δ����")��
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("δ����");
//	}
//	else if(age>18&&age<50)
//	{
//		printf("����");
//	}
//	else
//	{
//		printf("����");
//	}
//	return 0;
//}


//switch��֧�ṹ
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)//������ֻ�ܷ����ͱ��ʽ
//	{
//	case 1://case������������ͳ������ʽ
//		printf("����һ\n");
//		break;
//	case 2://case 1+1
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	default://�쳣�������
//		printf("Error!!!");
//		break;
//	}
//	//ֻҪ�߼���ȷ��case����default�����Ըı�˳��
//	return 0;
//}


//���case���ִ��ͬһ�����ʱ
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("Error!!!");
//		break;
//	}
//	return 0;
//}



//ѭ���ṹ

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//		{
//			break;//��ֹ����ѭ��
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//		{
//			continue;//��ֹ����ѭ��������������벿�֣�ֱ�����������жϲ��֣�������һ��ѭ��������ж�
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	char password[20] = {0};
//    int ch = 0;
//
//	printf("���������룺");
//	scanf("%s",password);//�������ǵ�ַ������Ҫ&
//
//	//���������(����\n)
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("ȷ�����루Y/N��");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//	return 0;
//}



//forѭ��

//��ӡ1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			//break;//���1 2 3 4
//			continue;//����1 2 3 4 6 7 8 9 10
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	//int i = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			//break;//���1 2 3 4
//			continue;//����1 2 3 4 6 7 8 9 10
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	//forѭ���ĳ�ʼ�����������ж�3�����ֿ���ʡ��
//	//��ʡ���жϲ��֣����жϺ�Ϊ�棬������ѭ��
//	for (;;)
//	{
//		printf("1");
//	}
//	return 0;
//}



//int main()
//{
//  int i = 0;
//  int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("A ");//���9��A
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( ; i < 3; i++)
//	{
//		for ( ; j < 3; j++)
//		{
//			printf("A ");//���3��A
//		}
//	}
//	return 0;
//}



//ʹ�ö���һ����������ѭ��
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, ++y)
//	{
//		printf("A ");//���2��A
//	}
//	return 0;
//}


//�󼸴�ѭ��
//int main()
//{
//	int i, j;
//	for (i = 0, j = 0; j = 0; i++, j++)
//		j++;
//	return 0;
//}
//0��ѭ������Ϊforѭ�����ж�����Ǹ�ֵ������j=0����Ϊ�٣�������ѭ��



//do whileѭ��
//��ִ�к��ж�

//��ӡ1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

// int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		if (i == 5)
//			//break;//���1 2 3 4 5 
//			continue;//���1 2 3 4 5 5 5 5 5
//		i++;
//	} while (i < 11);
//	return 0;
//}


//goto���(����ʹ��)

//int main()
//{
//flag:
//	printf("AAA\n");
//	goto flag;
//	return 0;
//}

//�ڶ��ѭ��Ƕ�׵�ʱ��ʹ��gato���Ժܿ�����ѭ��������Ҫʹ�ö��break