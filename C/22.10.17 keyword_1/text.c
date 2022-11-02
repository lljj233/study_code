#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS

//类型：auto,const,char,enum,int,short,long,float,double
//     union,struct,sizeof,typedef,signed,unsigned,static,void

//循环：break,continue.do,while,for

//分支：if,else,switch,case,break,default,goto

//函数：return

//extern:声明外部符号

//register:寄存器

//sizeof:计算内存大小

//volatile



#include<stdio.h>


//int main()
//{
//	register int a = 10;//建议编译器a的值放在寄存器里
//	return 0;
//}


//typedef unsigned int uint;//重命名unsigned int为unit
//int maih()
//{
//	unsigned int a;
//	uint b;
//	return 0;
//}



//static 静态的
//用法：
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数


//修饰局部变量
//test()
//{
//	static int a = 0;//有static输出1-10，无static输出10个1；static将a从栈区移到静态区，创建变量a后直到程序结束才销毁，但不影响作用域
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}




//static int a = 5;
////全局变量具有外部链接属性，在a文件中定义的变量在b文件可以通过链接使用
////如果全局变量被static修饰，则此外部链接属性就变成内部链接属性，只能在自己的源文件内部使用，使作用域变小
//int main()
//{
//	printf("%d\n", a);
//	return 0;
//}



//修饰函数

//int add(int x,int y)
//{
//	return x + y;
//}

//extern int add(int x, int y);

//static int add(int x, int y);
//函数本身具有外部链接属性，被static修饰后，则此外部链接属性就变成内部链接属性，只能在自己的源文件内部使用，其他源文件无法使用，使作用域变小

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}



//#define  定义符号/宏

//int MAX(int x,int y)
//{
//	return (x > y ? x : y);
//}

#define add(x,y) ((x)+(y))
#define MAX(x,y) (x>y?x:y)
int main()
{
	int a = 6;
	int b = 9;
	int c = MAX(a, b);
	int d = add(a, b);
	printf("%d\n", c);
	printf("%d\n", d);
	return 0;
}