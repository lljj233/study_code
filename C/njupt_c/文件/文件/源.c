#define _CRT_SECURE_NO_WARNINGS


/*
#include<stdio.h>
int main()
{
    FILE* fp;//定义了一个文件指针
    //用绝对路径的方式,以可读可写的模式打开文件
    //文件打开成功，则返回该文件的地址，打开失败则返回NULL
    fp=fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        fclose(fp);//关闭文件
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    FILE* fp;//定义了一个文件指针
    //不添加路径打开文件时,要求该文件和源文件在同一目录下
    //以可读可写的模式打开文件
    //文件打开成功，则返回该文件的地址，打开失败则返回NULL
    fp = fopen("b.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        fclose(fp);//关闭文件
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    FILE* fp;
    char ch = 0;
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        ch = fgetc(fp);//从文件中读出一个字符
        printf("读出来的字符：%c\n",ch);
        fclose(fp);//关闭文件
    }
    return 0;
}
*/




/*
#include<stdio.h>
int main()
{
    FILE* fp;
    char ch = 0;
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        ch = fgetc(fp);//从文件中读出一个字符
        while (!feof(fp))//该函数的作用是，当位置指针指向文件末尾时，返回非0值，否则返回0
        {
            printf("读出来的字符：%c\n", ch);
            ch = fgetc(fp);
        }
        fclose(fp);//关闭文件
    }
    return 0;
}
*/





/*
#include<stdio.h>
int main()
{
    FILE* fp;
    char str[20] = "abcde";
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        //读出字符串
        //fgets(str, 5, fp);
        fgets(str,6,fp);//从文件中读出一行字符串
        puts(str);
        //puts()函数用来向标准输出设备屏幕输出字符串并换行。
        //具体是把字符串输出到屏幕上，将‘\0’转换为回车换行。
        //调用方式是：puts(str)。其中str是字符串数组名或者字符串指针。实际上，数组名就是指针。
        fclose(fp);//关闭文件
    }
    return 0;
}
*/






/*
#include<stdio.h>
int main()
{
    FILE* fp;
    char str[20] = "abcde";
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        fputs(str,fp);
        fclose(fp);//关闭文件
    }
    return 0;
}
*/






/*
#include<stdio.h>
typedef struct
{

    char name[20];
    char tel[24];
}REL;
int main()
{
    FILE* fp;
    REL class5[5] =
    {
        {"张三","110"},
        {"李四","120"},
        {"王五","119"},
        {"刘六","114"},
        {"符七","131"}
    };
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        //往文件中写入数据
        fwrite(&class5[0],sizeof(REL),5,fp);
        //后面不能直接读出来，因为此时光标在末尾
        fclose(fp);//关闭文件
    }
    return 0;
}
*/




/*
#include<stdio.h>
int i;
typedef struct
{

    char name[20];
    char tel[24];
}REL;
int main()
{
    FILE* fp;
    REL class5[5] =
    {
        {"张三","110"},
        {"李四","120"},
        {"王五","119"},
        {"刘六","114"},
        {"符七","131"}
    };
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        //从文件中读出数据
         fread(&class5[0], sizeof(REL), 1, fp);
        for (i = 0; i < 5; i++)
        {
            printf("读出来的姓名：%s\n", class5[i].name);
            printf("读出来的号码：%s\n", class5[i].tel);
            printf("\n\n");
        }
        fclose(fp);//关闭文件
    }
    return 0;
}
*/




/*
#include<stdio.h>
typedef struct 
{
    char name[20];
    char tel[24];
}REL;
int main()
{
    FILE* fp;
    REL class5[5] =
    {
        {"张三","110"},
        {"李四","120"},
        {"王五","119"},
        {"刘六","114"},
        {"符七","131"}
    };
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        fwrite(&class5[0], sizeof(REL), 3, fp);//往文件中写入数据
        fseek(fp,0,SEEK_SET);
        //fseek(fp,sizeof(REL),SEEK_SET);//设置文件的读写位置回到文件开头，往后偏移0个字节的位置
        //fseek(fp,3*sizeof(REL),SEEK_SET);
        //fseek(fp,-sizeof(REL),SEEK_END);???
        fread(&class5[0], sizeof(REL), 1, fp);
        printf("读出来的姓名：%s\n", class5[3].name);
        printf("读出来的号码：%s\n", class5[3].tel);
        fclose(fp);//关闭文件
    }
    return 0;
}
*/



/*
#include<stdio.h>
int main()
{
    FILE* fp;
    char ch = 0;
    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
    if (fp == NULL)
    {
        printf("打开文件失败!\n");
    }
    else
    {
        printf("打开文件成功!\n");
        ch=fputc('P', fp);
        if (ch == EOF)
        {
            printf("写入失败!\n");
        }
        else
        {
            printf("写入成功!\n");
        }
        fclose(fp);//关闭文件
    }
    return 0;
}
*/











//#include<stdio.h>
//int main()
//{
//    FILE* fp;
//    char ch = 0;
//    fp = fopen("C:\\Users\\李骏\\Desktop\\a.txt.txt", "r+");
//    if (fp == NULL)
//    {
//        printf("打开文件失败!\n");
//    }
//    else
//    {
//        printf("打开文件成功!\n");
//        ch=fputc('P', fp);
//        if (ch == EOF)
//        {
//            printf("写入失败!\n");
//        }
//        else
//        {
//            printf("写入成功!\n");
//        }
//        fclose(fp);//关闭文件
//    }
//    return 0;
//}
