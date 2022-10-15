#define _CRT_SECURE_NO_WARNINGS



//逻辑或（短路）从左到右，一为真则全为真
/*
#include<stdio.h>
int main(void)
{
	int a = 10, b = 5;
	printf("%d\n", b==5 || b++ );//左为真，右边不运算，b=5
	printf("%d\n", a<5 || b++ );//左为假，运算右边,b=6
	printf("%d",b);
    return 0;
}
*/



//逻辑与（短路）从左到右，一为假则全为假，符号两边都不为0则为真
/*
#include<stdio.h>
int main(void)
{
	int a = 10, b = 5;
	printf("%d\n", b!=5 && b++ );//左为假，右边不运算，b=5
	printf("%d\n", a==10 && b++ );//左为真，运算右边,b=6
	printf("%d",b);
    return 0;
}
*/

//逻辑非
/*
#include<stdio.h>
int main(void)
{
	int a = 10, b = 5;
	printf("%d\n",!(a>b));
	printf("%d\n", !a>b );//逻辑非优先级大于关系运算符
    return 0;
}
*/



//#include<stdio.h>
//int main()
//{
//    int score = 0;
//	scanf("%d", &score);
//	if (score >= 0 && score <= 100)
//		if (score >= 0 && score < 60)
//			printf("不及格");
//		else
//		{
//			printf("及格");
//		}
//	else
//	{
//		printf("输入错误");
//	}
//	return 0;
//}