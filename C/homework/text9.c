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