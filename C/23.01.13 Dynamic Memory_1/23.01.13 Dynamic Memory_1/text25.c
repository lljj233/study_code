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

