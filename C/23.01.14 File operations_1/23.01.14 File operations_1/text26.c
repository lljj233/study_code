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



//写一行文件（fputs - 文本行输出函数）
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
//	//写一行文件
//	fputs("hello world\n", pf);
//	fputs("abcdef\n", pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//读一行文件（fgets - 文本行输入函数）
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
//	//读一行文件
//	char buf[20] = { 0 };
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//
//	fgets(buf, 20, pf);
//	printf("%s", buf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//格式化的写入文件
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5 };
//	FILE* pf = fopen("test.txt", "w");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fprintf(pf, "%s %d %f\n", s.name, s.age, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//格式化的读取文件
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//格式化的读取文件
//	fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
//	
//	//打印看数据
//	printf("%s %d %f\n", s.name, s.age, s.score);
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//二进制的输入和输出

//fwrite
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5 };
//	FILE* pf = fopen("test.txt", "wb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//以二进制的方式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//fread
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (NULL == pf)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//以二进制的方式读文件
//	fread(&s, sizeof(struct S), 1, pf);
//	printf("%s %d %f", s.name, s.age, s.score);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

