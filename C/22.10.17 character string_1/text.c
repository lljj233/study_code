#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	char ch1[] = { 'a','b','c' };
//	char ch2[] = { 'a','b','c','\0'};//字符串的结束标志是\0,计算字符串长度的时候不算\0
//	char ch3[]= "abc";
//
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	printf("%s\n", ch3);
//
//	return 0;
//}




//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	char ch1[] = { 'a','b','c' };
//	char ch2[] = { 'a','b','c','\0' };
//	char ch3[] = "abc";
//
//	int len1 = strlen(ch1);
//	int len2 = strlen(ch2);
//	int len3 = strlen(ch3);
//
//	printf("%d\n", len1);
//	printf("%d\n", len2);
//	printf("%d\n", len3);
//	return 0;
//}




//转义字符
//#include<stdio.h>
//int main()
//{
//	printf("abcndef\n");
//	printf("abc\ndef");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');// 打印单引号
//	printf("%s\n", "\"");// 打印双引号
//  printf("D:\\code\\text.c\n");// \\表示一个反斜杠
//	printf("\a");// 警告字符，蜂鸣
//	printf("abc\bdef\n");// \b为退格符
//	printf("abc\tdef\n");// \t为水平制表符
//	return 0;
//}



//特殊的转义字符
//#include<stdio.h>
//int main()
//{
//	printf("%c\n", '\073');//073为八进制，对应的十进制为0*8^2+7*8^1+3*8^0=59对应ASCII表的';'
//	printf("%c\n", '\x46');//x46为十六进制，对应的十进制为4*16^1+6*16^0=70对应ASCII表的'F'
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//
//	printf("%d\n", strlen("abcd")); // 计算字符串长度的时候不算\0
//	printf("%d\n", strlen("c:\text\628\text.c"));// \62不是\628，因为八进制没有8
//	return 0;
//}


