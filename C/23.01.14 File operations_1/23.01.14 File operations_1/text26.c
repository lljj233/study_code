#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//�򿪺͹ر��ļ�
//int main()
//{
//	//���ļ�
//	
//	//FILE* pf = fopen("C:\\code\\test.txt", "r");
//	//  C:\\code\\test.txt - ����·��
//
//	FILE* pf = fopen("test.txt", "r");//�򿪵��ļ��뵱ǰ��Ŀ��ͬһĿ¼��
//	//  test.txt - ���·��
//
//	//FILE* pf = fopen("../test.txt", "r");
//	//  ../ - ��һ��Ŀ¼
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("���ļ��ɹ�\n");
//	}
//
//	//���ļ�
//	//�����ļ�
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//�ļ���˳���д

//fgetc - �ַ����뺯��
//int main()
//{
//	//��ֻд�ķ�ʽ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	//�жϷ���ֵ
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//д�ļ�
//
//	/*fputc('a', pf);
//	fputc('b', pf);
//	fputc('c', pf);
//	fputc('d', pf);
//	fputc('e', pf);*/
//
//	char ch = 0;
//	for (ch = 'a'; ch <= 'z'; ch++)
//	{
//		fputc(ch, pf);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//���ļ�
//int main()
//{
//	//��ֻ���ķ�ʽ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	//�жϷ���ֵ
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//
//	/*int ch = fgetc(pf);
//	printf("%c ", ch);
//
//	ch = fgetc(pf);
//	printf("%c ", ch);
//
//	ch = fgetc(pf);
//	printf("%c ", ch);*/
//
//	int i = 0;
//	for (i = 0; i < 26; i++)
//	{
//		int ch = fgetc(pf);
//		printf("%c ", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//дһ���ļ���fputs - �ı������������
//int main()
//{
//	//��ֻд�ķ�ʽ���ļ�
//	FILE* pf = fopen("test.txt", "w");
//	//�жϷ���ֵ
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//дһ���ļ�
//	fputs("hello world\n", pf);
//	fputs("abcdef\n", pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//��һ���ļ���fgets - �ı������뺯����
//int main()
//{
//	//��ֻ���ķ�ʽ���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	//�жϷ���ֵ
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//��һ���ļ�
//	char buf[20] = { 0 };
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

