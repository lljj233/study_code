#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//malloc
//������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣
//����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
//������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�������
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���1-10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�������ڴ�
//	free(p);
//	//free���������ͷŶ�̬���ٵ��ڴ档
//	//������� ptr ָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ�
//	//������� ptr ��NULLָ�룬����ʲô�¶�������
//	p = NULL;
//	return 0;
//}
//malloc��free�������� stdlib.h ͷ�ļ��С�



//calloc
//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//		//malloc���뵽�Ŀռ�û�г�ʼ���ͻ�ֱ�ӷ�����ʼ��ַ
//		//calloc����ÿռ���ѿռ��ʼ��Ϊ0Ȼ�󷵻���ʼ��ַ
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}



//realloc
//int main()
//{
//	int* p = (int*)malloc(5 * sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = 1;
//	}
//	//����������5�����͵Ŀռ�
//	//�������ʧ���򷵻�NULL
//	int* ptr = (int*)realloc(p, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//      ptr = NULL; 
//	}
//	//����ʹ�ÿռ�
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//�ͷ�
//	free(p);
//	p = NULL;
//	return 0;
//}



//�����Ķ�̬�ڴ����

//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(100);
//	//����Ҫ�ж�malloc�ķ���ֵ
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		*(p + i) = 0;
//	}
//	return 0;
//}

//2.�Զ�̬���ٿռ��Խ�����
//int main()
//{
//	int* p = (int*)malloc(100);
//	//25������
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		*(p + i) = 0;//Խ�����
//	}
//	free(p);
//	return 0;
//}

//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;//ջ��
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return 1;
//	int i = 0;
//	for (i = 0; i < 25; i++)
//	{
//		*p = i;//Խ�����
//		p++;
//	}
//	free(p);//��ʱp�Ѿ�����ָ����ʼλ�õĵ�ַ
//	p = NULL;
//	return 0;
//}

//5.��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return 1;
//	//ʹ��
//	//�ͷ�
//	free(p);
//	//��ȷ������p = NULL;
//	//...
//
//	free(p);//����ͷ�
//	return 0;
//}

//6.��̬�����ڴ������ͷţ��ڴ�й©��
//�����ڲ�������malloc������������malloc���ٵĿռ����ʼ��ַ
//ʹ�����ǵ��ͷ�
//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//		return 1;
//	//ʹ��
//	//...
//	//Ҫ�ǵ�free(p);p = NULL;
//	//����return p;
//}
//int main()
//{
//	//��return p����һ��ָ����պ��ͷ�
//	int* ptr = test();
//	free(ptr);
//	ptr = NULL;
//	//...
//	return 0;
//}



//�ڴ������

//1.
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//1.str����p��ʱ��p��str����ʱ���������Լ������Ŀռ䡣
//  ��GetMemory�����ڲ������˿ռ�֮�󣬵�ַ����p�У�str��Ȼ��NUll��
//  ��GetMemory��������֮��strcmp������ʱ���γ��˷Ƿ������ڴ档
//2.��GetMemory�����ڲ�����̬�������ڴ�ȴû���ͷţ�������ڴ�й¶��

//�޸ģ�
//void GetMemory(char** p)//
//{
//	*p = (char*)malloc(100);//
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//2.
//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//����ջ�ռ��ַ����
//���ص�ַ���Ǹò����ռ��Ѿ����٣��γɷǷ�����

//�޸ģ�
//char* GetMemory(void)
//{
//	char* p = "hello world";
//	//static char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}


//3.
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//û���ͷ��ڴ棬����ڴ�й¶

//�޸ģ�
//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//4.
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

//str��free��ռ䱻����ϵͳ���գ���ʱ��strΪҰָ�룬��ӡstrʱ�γɷǷ�����

//�޸ģ�
//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}

