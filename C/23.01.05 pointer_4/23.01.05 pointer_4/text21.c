#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


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




//qsort���÷�
//void qsort(void* base,//��������������ʼ��ַ
//	       size_t num,//Ԫ�ظ���
//	       size_t width,//һ��Ԫ�صĴ�С
//	       int (*cmp)(const void* e1,const void* e2)//����Ԫ�صıȽϺ���
//           )
//{}




////ʵ��һ���Ƚ����͵ĺ���
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//
////ʹ��qsort�����������������
//void test1()
//{
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//bubble_sort(arr, sz);
//	//�⺯����һ����������qsort
//	//qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	//0 1 2 3 4 5 6 7 8 9
//	//��ӡ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	test1();
//	return 0;
//}



//qsort����ṹ��
//struct stu
//{
//	char name[20];
//	int age;
//};
////����ѧ��������������
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
////����ѧ��������������
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void test2()
//{
//	struct stu s[3] = { {"����",20},{"����",18},{"����",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	test2();
//	return 0;
//}



//����ð����������ʹ�øú���������������ָ��������
//int cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, size_t sz, size_t width, int (*cmp)(const void* e1, const void* e2))
//{
//	//����
//	size_t i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//һ��ð������Ĺ���
//		size_t j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			}
//		}
//	}
//}
////ʹ�������Լ�д��bubble_sort����������������
//void test3()
//{
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
////ʹ�������Լ�д��bubble_sort�������нṹ��
//struct stu
//{
//	char name[20];
//	int age;
//};
////����ѧ��������������
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
////����ѧ��������������
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name,((struct stu*)e2)->name);
//}
//void test4()
//{
//	struct stu s[3] = { {"����",20},{"����",18},{"����",22} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	test3();
//	test4();
//	return 0;
//}