#define _CRT_SECURE_NO_WARNINGS

/*
#include<stdio.h>
int main()
{
    int a = 10;
    char b = 5;
    b = 65;
    printf("%d\n", b);//以十进制整数的形式输出
    printf("%c\n", b);//以字符的形式输出
    b = 97;
    printf("%d\n", b);//97-65=32
    printf("%c\n", b);
    b = 'A';//相当于b=65,65是字符'A'的ASCII码值
    printf("%d\n", b);
    printf("%c\n", b);
    b = 'a';//由一对单引号''括起来的字符
    printf("%d\n", b);
    printf("%c\n", b);
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    char b = 0;//字符型，-128--127，占据一个字节
    b = ' ';//对，因为空格对应的ASCII码值是32
    b = 'a';//对，一个英文占据一个字节
    //b = '';错，不不能为0个字符
    //b = 'AB';错，不能为多个字符
    //b = '啊';错，一个中午占据两个字节
    printf("%d\n", b);
    printf("%c\n", b);
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    char b = 0;
    b = 65;
    printf("%d\n", b);
    printf("%c\n", b);
    b = 65+32;
    printf("%d\n", b);
    printf("%c\n", b);
    b = 'A' + 32;//相当于b=65+32
    printf("%d\n", b);
    printf("%c\n", b);
    b = 'a' - 32;
    printf("%d\n", b);
    printf("%c\n", b);
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    char b = 0;
    b = '1';
    printf("%d\n", b);
    printf("%c\n", b);
    b = 1;
    printf("%d\n", b);
    printf("%c\n", b);
    b = '1'- 48;//或 b = '1'-'0',把数字字符转换成对应的数值，即把'1'转换成1
    printf("%d\n", b);
    printf("%c\n", b);
    return 0;
}
*/




/*
#include<stdio.h>
int main()
{
    char b = 0;
    b = 'n';
    printf("%d\n", b);
    printf("%c\n", b);
    b = '\n';//转义字符，换行
    printf("%d\n", b);
    printf("ABCD%cEFG\n", b);
    b = '\t';//转义字符
    printf("%d\n", b);
    printf("ABCD%cEFGH\n", b);//相当于加了一个tab（长空格）
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    char b = 0;
    b = 65;
    printf("%d\n", b);
    printf("%c\n", b);
    b = 'A';
    printf("%d\n", b);
    printf("%c\n", b);
    b = '\101';//  '/ddd',''里面是八进制数，不能超过unsigned char的最大值，因此最大值为'/377'
    printf("%d\n", b);
    printf("%c\n", b);
    b = '\x41';//  '/hh',''里面是十六进制数，x是必须要有的，不算在十六进制数里，最大值为'/FF'
    printf("%d\n", b);
    printf("%c\n", b);
    return 0;
}
*/



/*
#include<stdio.h>
#include<string.h>
int main()
{
    printf("%s\n","abcEFG"); //输出字符串
    printf("占据的字节数:%d\n", sizeof("abcEFG"));//占据七个字节，分别为'a','b',...'G','\0'
    printf("长度:%d\n", strlen("abcEFG"));//字符串的长度，从左边数遇到第一个'\0'结束，不包括'\0'

    printf("占据的字节数:%d\n", sizeof("abc\0EFG"));
    printf("长度:%d\n", strlen("abc\0EFG"));

    //字符串：由一对双引号括起来的零个或多个字符
    printf("占据的字节数:%d\n", sizeof(""));
    printf("长度:%d\n", strlen(""));
    return 0;
}
*/



/*
//字符数组
#include<stdio.h>
int main()
{
    int a[10] = { 1,3,5,7,9 };
    char str1[5] = { 'A','B','C','D','E' };
    int i = 0;
    for (i=0;i<5;i++)
    {
        printf("%c\n",str1[i]);//printf("%d\n",a[i]);
    }
    return 0;
}
*/




/*
#include<stdio.h>
int main()
{
    int a[5] = { 1,3,5 };
    char str1[5] = { 'A','B','C' };
    int i = 0;
    for (i=0;i<5;i++)
    {
        printf("%c\n", str1[i]);
        //printf("%d\n", a[i]);
    }
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    int a[5] = { 1,3,5,7,9 };
    char str1[5] = { 'A','B','C','D','E' };//把E改成\0
    printf("%s\n",str1);
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    char str1[5] = { 'A','B','C','D','\0' };//赋值1
    char str2[5] = "ABCD";//赋值2(ABCDE不行，因为此时占据六个字节（包括\0）,存不下)
    printf("%s\n", str2);
    str2[2] = 'X';
    printf("%s\n", str2);
    //str2="EFGH";//错误，数组名代表数组的首元素地址，是地址常量
    //str[2]="EFGH";//错误，数组越界
    return 0;
}
*/


/*
#include<stdio.h>
int main()
{
    char str[10] = "ABCD";
    printf("%s\n", str);
    printf("%s\n", &str[0]);
    printf("%s\n", &str[1]);
    printf("%s\n", &str[2]);
    printf("%s\n", &str[3]);
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    int a = 5;
    int* p;
    p = &a;
    printf("%d\n",a);
    printf("%d\n",p);
    printf("%d\n",*p);
    printf("%d\n",&a);
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    char str[10] = "ABCD";
    char* p;//char指针变量
    p = str;//相当于p=&str[0]
    *p = 'X';//相当于str[0]='X'
    printf("%s\n", str);
    printf("%s\n", p);
    *(p + 2) += 32;//p[2] += 32;//str[2] += 32;
    printf("%s\n", &str[2]);
    printf("%d\n", str[2]);
    printf("%c\n", str[2]);
    printf("%s\n", str);
    printf("%s\n", p);
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    char str[10] = "ABCD";
    char* p;//char指针变量
    char* p1;
    p = str;//相当于p=&str[0]
    *p = 'X';//相当于str[0]='X'
    printf("%s\n", str);
    printf("%s\n", p);
    p1 = "HIJK";//p1指向字符串常量的首地址（H）
    printf("%s\n", p1);
    printf("%s\n", p1+2);
    //*p1 = 'Y';//错误，字符串常量不能修改
}
*/