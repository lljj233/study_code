#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//写一个函数求两个整数的较大值
//int get_max(int x, int y)
//{
//    if (x > y)
//        return x;
//    else
//        return y;
//}
//
//
//int main()
//{
//    int num1 = 10;
//    int num2 = 20;
//    scanf("%d%d", &num1, &num2);
//    //要求：完成get_max函数
//    int max = get_max(num1, num2);
//    printf("max = %d\n", max);
//    return 0;
//}




//输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分。
//五行，每行输入一个学生各5科成绩（浮点数表示，范围0.0~100.0），用空格分隔。
//五行，按照输入顺序每行输出一个学生的5科成绩及总分（小数点保留1位），用空格分隔。
//int main()
//{
//    int i = 0;
//
//    //5个学生
//    for (i = 0; i < 5; i++)
//    {
//        double sum = 0.0;
//        int j = 0;
//        double score = 0.0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &score);
//            sum += score;
//            printf("%.1lf ", score);
//        }
//        printf("%.1lf\n", sum);
//    }
//    return 0;
//}




//给定秒数 seconds ，把秒转化成小时、分钟和秒。
//int main()
//{
//    int sec = 0;
//    scanf("%d", &sec);
//    int h = sec / 60 / 60;
//    int m = sec / 60 % 60;
//    int s = sec % 60;
//    printf("%d %d %d\n", h, m, s);
//    return 0;
//}




//求输出
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (i = 5)//不是==
//            printf("%d ", i);
//    }
//    return 0;
//}
////打印结果是死循环5



//求输出
//#include <stdio.h>
//int main()
//  {
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y)
//		{
//		case 0:
//			printf("first");
//		case 1:
//			printf("second");
//			break;
//		default: printf("hello");
//		}
//	case 2:
//		printf("third");
//	}
//	return 0;
//}


//打印100~200之间的素数
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 100; i <= 200; i++)
//    {
//        for (j = 2; j < i; j++)
//        {
//            if (i % j == 0)
//                break;
//        }
//        if (i == j)
//            printf("%d ", i);
//    }
//    printf("\n");
//    return 0;
//}



//打印1000年到2000年之间的闰年
//#include<stdio.h>
//int main()
//{
//    int i, j;
//    for (i = 1000; i <= 2000; i++)
//    {
//        if( i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//        {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");
//    return 0;
//}


//求输出
//int func(int a)
//{
//    int b;
//    switch (a)
//    {
//    case 1: b = 30;
//    case 2: b = 20;
//    case 3: b = 16;
//    default: b = 0;
//    }
//    return b;
//}
//int main()
//{
//    int m = func(1);
//    printf("%d", m);
//    return 0;
//}