#define _CRT_SECURE_NO_WARNINGS

/*
#include<stdio.h>
struct student//student是结构体名
{
    int num;
    int c_score;
};
int main()
{
    struct student Tom = { 50,90 };//赋初值1。
    //struct student是类型名，Tom是变量名。
    printf("序号：%d\n", Tom.num);
    printf("c语言成绩：%d分\n", Tom.c_score);
    return 0;
}
*/

/*
#include<stdio.h>
struct student//student是结构体名
{
    int num;
    int c_score;
};//(可以在括号和分号中间写Tom）
int main()
{
    struct student Tom;//struct student是类型名，Tom是变量名。
    Tom.c_score = 90;
    Tom.num = 50;
    printf("序号：%d\n", Tom.num);
    printf("c语言成绩：%d分\n", Tom.c_score);
    return 0;
}
*/


/*
//模式：typedef 已有的类型名 别名
//使用关键字 typedef 可以为类型起一个新的别名
#include<stdio.h>
typedef int TYPE;//int a;相当于TYPE a;
#define size 5
int main()
{
    int a = 5;
    int c[size];//相当于int c[5];
    TYPE b = 10;//相当于int b。
    printf("b=%d",b);
    return 0;
}
*/


/*
#include<stdio.h>
int fun(int n);
int main()
{
    int m = 0;
    printf("输入m:");  
    scanf("%d", &m);
    printf("%d",fun(m));
    return 0;
}
int fun(int n)
{
    if (n < 1)
        return -1;
    else if (n == 1)
        return 1;
    else
        return n * fun(n - 1);
}
*/


/*
#include<stdio.h>
int c = 10;//c的作用域是文件作用域。(全局变量）
extern int fun(int b);//函数的声明：扩展函数的使用范围（作用域）。
int main()
{
    int a = 5;//a的作用域是函数作用域。
    c = 11;
    {
        int a = 9;
        int j;//语句块作用域。
        j = 5;
        c = 12;
    }
    a = fun(5);
    return 0;
}
int fun(int b)//函数名是文件作用域。
{
    b = 20;//b的作用域是函数作用域。
    c = 13;
    return b;//返回值是文件作用域。
}
*/


/*
#include<stdio.h>
void fun();
int main()
{
    int a = 10;
    fun(a);
    printf("a=%d", a);
    return 0;
}
void fun()
{
    int b = 20;
}
*/




//#include<stdio.h>
//void fun();
//int main()
//{
//    //只有局部变量可以用auto修饰，全局变量不行，一般忽略auto
//    auto int a = 10;//开辟a的内存块
//    {
//        int j = 20;//开辟j的内存块
//    }//销毁j的内存块
//    fun(a);
//    printf("a=%d", a);//a=10.
//    return 0;
//}
//void fun(int b)//函数调用时开辟b的内存块
//{
//    int i = 0;//函数执行时开辟i的内存块
//    b = 20;
//}//执行结束后销毁i和b的内存块


//#include<stdio.h>
//int c = 0;//全局变量在编译时开辟内存块，在主函数结束时销毁
//void fun(int a);
//int main()
//{
//    fun(1);
//    fun(2);
//    printf("%d\n", c);
//    return 0;
//}
//void fun(int a)
//{
//    static int b ;//static修饰的变量在编译时开辟内存块，在主函数结束时销毁
//    //形参不能修饰声明为为static，只能声明为auto
//    //变量声明为static时不赋值默认为0
//    b++;
//    printf("%d\n", b);
//}


/*
#include<stdio.h>
typedef struct student
{
    int num;
    int score;
}STU;
int main()
{
    STU Tom = { 10,90 };
    STU* p;//结构体指针变量，存放STU型结构体变量的地址
    p = &Tom;
    Tom.score = 95;
    p->score = 100;//相当于Tom.score = 100
    (*p).score = 110;//相当于Tom.score = 110
    printf("请输入序号：");
    scanf("%d", &p->num);//相当于scanf("%d",&Tom.num);
    printf("序号：%d\n", p->num);
    printf("成绩：%d\n", p->score);
    return 0;
}
*/





//#include<stdio.h>
//typedef struct student
//{
//    int num;
//    int score[3];
//}STU;
//int main()
//{
//    STU Tom = { 10,{90,95,100} };
//    STU* p;//结构体指针变量，存放STU型结构体变量的地址
//    p = &Tom;
//    Tom.score[0] = 95;
//    p->score[0] = 100;//相当于Tom.score[0] = 100
//   (*p).score[0] = 110;//相当于Tom.score[0] = 110
//   return 0;
//}




//从键盘输入五个同学的序号及三门成绩
//#include<stdio.h>
//#define SIZE 3
//#define N 5
//typedef struct student
//{
//    int num;
//    int score[SIZE];
//}STU;
//int main()
//{
//    STU* p;
//    STU class7[N] = { 0 };
//    p = class7;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < N; i++)
//    {
//        printf("输入第%d个同学的序号：",i+1);
//        scanf("%d",&p->num);
//        for (j = 0; j < SIZE; j++)
//        {
//            printf("输入第%d门学科的成绩：",j+1);
//            scanf("%d",&p->score[j]);
//        }
//        p++;
//    }
//    printf("-------------------------------------\n");
//    p = class7;
//    for (i = 0; i < N; i++)
//    {
//        printf("第%d个同学的序号：%d\n", i + 1,(*p).num);
//        for (j = 0; j < SIZE; j++)
//        {
//            printf("第%d门学科的成绩为：%d分\n", j + 1,p->score[j]);
//        }
//        p++;
//        printf("-------------------------------------\n");
//    }
//    return 0;
//}


