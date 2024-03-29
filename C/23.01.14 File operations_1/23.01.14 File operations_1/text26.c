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



//sscanf与sprintf
//sscanf - 从一个字符串中还原出一个格式化的数据
//sprintf - 把格式化的数据存放在一个字符串中
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = {"zhangsan", 20, 98.5};
//	char buf[100] = { 0 };
//	sprintf(buf, "%s %d %f", s.name, s.age, s.score);
//	printf("%s\n", buf);//按照字符串打印的
//
//	struct S tmp = { 0 };
//	sscanf(buf, "%s %d %f", tmp.name, &(tmp.age), &(tmp.score));
//	printf("%s %d %f\n", tmp.name, tmp.age, tmp.score);//打印结构体数据
//
//	return 0;
//}



//文件的随机读写
//int main()
//{
//	FILE*pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//	}
//	else
//	{
//		int ch = fgetc(pf);
//		printf("%c\n", ch);//a
//		ch = fgetc(pf);
//		printf("%c\n", ch);//b
//		ch = fgetc(pf);
//		printf("%c\n", ch);//c
//
//		//如果继续往下读，必然是d
//		//但是我们调整一下，去读取：b
//		//fseek(pf, -2, SEEK_CUR);
//		fseek(pf, 1, SEEK_SET);
//		ch = fgetc(pf);
//		printf("%c\n", ch);//b
//		printf("%d\n", ftell(pf));//计算偏移量
//		rewind(pf);//将文件指针恢复到起始位置
//		ch = fgetc(pf);
//		printf("%c\n", ch);//a
//	}
//
//	return 0;
//}

