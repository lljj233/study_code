#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//打开和关闭文件
//int main()
//{
//	//打开文件
//	
//	//FILE* pf = fopen("C:\\code\\test.txt", "r");
//	//  C:\\code\\test.txt - 绝对路径
//
//	FILE* pf = fopen("test.txt", "r");//打开的文件与当前项目在同一目录中
//	//  test.txt - 相对路径
//
//	//FILE* pf = fopen("../test.txt", "r");
//	//  ../ - 上一级目录
//
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	else
//	{
//		printf("打开文件成功\n");
//	}
//
//	//读文件
//	//操作文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//文件的顺序读写

//fgetc - 字符输入函数
//int main()
//{
//	//以只写的方式打开文件
//	FILE* pf = fopen("test.txt", "w");
//	//判断返回值
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//读文件
//int main()
//{
//	//以只读的方式打开文件
//	FILE* pf = fopen("test.txt", "r");
//	//判断返回值
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件
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
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

