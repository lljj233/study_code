#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//    char ch = 'a';
//    printf("ch = %d\n", ch);
//    printf("ch = %c\n", ch);
//} 




//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int j = 0;
//    char ch[3] = { 'a','b','c' };
//    int arr[5] = {0,1,2,3,4};
//    while (i < 5)
//    {
//        printf("%d\n", arr[i]);
//        i++;
//    }
//    printf("\n\n");
//    for (j = 0; j < 5; j++)
//    {
//        printf("%d\n", arr[j]);
//    }
//    return 0;
//}

//#include<stdio.h>
//
//int compare(int a,int b)
//{
//    int c = (a > b ? a : b);
//    return c;
//}
//
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    int max = 0;
//    scanf("%d %d", &num1, &num2);
//    max = compare(num1, num2);
//    printf("%d", max);
//    return 0;
//}



//#include <stdio.h>
//int main()
//{
//    int num1 = 0;
//    int num2 = 0;
//    while (scanf("%d %d", &num1, &num2)!=EOF)
//    {
//        if (num1 == num2)
//        {
//            printf("%d", num1);
//            printf("=");
//            printf("%d\n", num2);
//        }
//        else if (num1 > num2)
//        {
//            printf("%d", num1);
//            printf(">");
//            printf("%d\n", num2);
//        }
//        else
//        {
//            printf("%d", num1);
//            printf("<");
//            printf("%d\n", num2);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    float a = 0;
//    float b = 0;
//    float c = 0;
//    float d = 0;
//    float e = 0;
//    int i = 0;
//    while (i < 5)
//    {
//        scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//        printf("%f ", a);
//        printf("%f ", b);
//        printf("%f ", c);
//        printf("%f ", d);
//        printf("%f ", e);
//        printf("%f ", a+b+c+d+e);
//        i++;
//    }
//    return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    while (scanf("%d", &n) != EOF )
//    {
//        for (i = 0; i < n; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    return 0;
//}





//#include <stdio.h>
//int main()
//{
//    int seconds = 0;
//    int hours = 0;
//    int minutes = 0;
//    scanf("%d", &seconds);
//    if (seconds > 0 && seconds < 100000000)
//    {
//        if (seconds > 3600)
//        {
//            hours = seconds / 3600;
//
//            {
//                if (seconds - hours * 3600 > 60)
//                {
//                    int a = seconds - hours * 3600;
//                    minutes = a / 60;
//                    seconds = a - minutes * 60;
//                    printf("%d ", hours);
//                    printf("%d ", minutes);
//                    printf("%d ", seconds);
//                }
//            }
//        }
//        else
//        {
//            hours = 0;
//            minutes = seconds / 60;
//            int b = seconds - minutes * 60;
//            seconds = b;
//            printf("%d ", hours);
//            printf("%d ", minutes);
//            printf("%d ", seconds);
//        }
//    }
//    else
//    {
//        printf("error\n");
//    }
//    return 0;
//}




//#include <stdio.h>
//void fun(int a)
//{
//    if (a > 0)
//    {
//        printf("1\n");
//    }
//    else if (a < 0)
//    {
//        printf("0\n");
//    }
//    else
//    {
//        printf("0.5\n");
//    }
//}
//int main()
//{
//    int t = 0;
//    while (scanf("%d", &t) != EOF)
//    {
//        fun(t);
//    }
//    return 0;
//}





//#号控制前导
//十进制整数1234对应的八进制和十六进制（字母大写），用空格分开，并且要求，在八进制前显示前导0，在十六进制数前显示前导0X。
//printf可以使用使用格式控制串“%o”、“%X”分别输出八进制整数和十六进制整数，并使用修饰符“#”控制前导显示
//#include<stdio.h>
//
//int main(void)
//{
//    int a = 1234;
//    printf("%#o %#X\n", a, a);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 10; i++)
//    {
//        if (i == 5)
//            printf("%d ", i);
//    }
//    return 0;
//}


//打印3的倍数
//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    for (i = 1; i < 100; i++)
//    {
//        if (i % 3 == 0)
//        {
//            printf("%d ",i);
//        }
//    }
//    return 0;
//}


//#include<stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    scanf("%d %d %d", &a, &b, &c);
//    if (a > b && a > c && b > c)
//    {
//        printf("%d %d %d",a, b, c);
//    }
//    else if (a > c && c > b && b > c)
//    {
//        printf("%d %d %d",a, c, b);
//    }
//    else if (b > a && b > c && a > c)
//    {
//        printf("%d %d %d",b, a, c);
//    }
//    else if (b > c && b > a && c > a)
//    {
//        printf("%d %d %d",b, c, a);
//    }
//    else if (c > b && c > a && b > a)
//    {
//        printf("%d %d %d",c, b, a);
//    }
//    else 
//    {
//        printf("%d %d %d",c, a, b);
//    }
//    return 0;
//}



//计算10的阶乘
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int mul = 1;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        mul *= i;
//    }
//    printf("%d\n", mul);
//    return 0;
//}



//计算阶乘相加
//#include<stdio.h>
//int main()
//{
//    int i = 0;
//    int n = 0;
//    int mul = 1;
//    int sum = 0;
//    scanf("%d", &n);
//    for (i = 1; i <= n; i++)
//    {
//        mul *= i;
//        sum += mul;
//    }
//    printf("mul=%d\n", mul);
//    printf("sum=%d\n", sum);
//    return 0;
//}



//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long sum = 0;
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;
//    }
//    printf("%ld", sum);
//}


//用函数判断是否为素数
//#include<math.h>
//#include<stdio.h>
//int judgement(int n)
//{
//    int j = 0;
//    for (j = 2; j <= sqrt(n); j++)
//    {
//        if (n % j == 0)
//        {
//            return 0;//不是素数
//        }
//    }
//    return 1;//是素数
//}
//int main()
//{
//    int i = 0;
//    for (i = 100; i <= 200; i++)
//    {
//        if (judgement(i))
//        {
//            printf("%d ", i);
//        }
//    }
//    return 0;
//}


//#include<stdio.h>
//int Fun(int n)
//{
//    if (n == 5)
//        return 2;
//    else
//        return 2 * Fun(n + 1);
//}
//int main()
//{
//    int m = Fun(2);
//    printf("%d", m);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = arr[0];
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}


//汉诺塔问题
//#include<stdio.h>
//
//void Move_(char From, char Dest)					//移动一个圆盘，将圆盘从来源移动到目的地  从From 移动到Dest 
//{
//	printf("将一个圆盘从%c柱子 -> %c柱子\n", From, Dest);
//}
//void Hanoi(char A, char B, char C, int  n)	//总共有n个圆盘，将这n个圆盘  借助 B 柱子 从 A 柱子移动到  C 柱子
//{
//	if (n == 1)								//当只有一个圆盘时，直接圆盘从 A 柱 移动到 C 柱
//	{
//		Move_(A, C);
//	}
//	else
//	{
//		Hanoi(A, C, B, n - 1);		    //当不只一个圆盘时，我们先将上面 （n -1）个圆盘 借助 C柱子  从 A 柱子移动到 B 柱子
//
//		Move_(A, C);					//A柱剩余一个圆盘，将剩下的一个圆盘从 A 移动到 C
//		Hanoi(B, A, C, n - 1);			//再将（n-1）个圆盘 借助 A柱子 从 B柱子 移动到 C柱子
//	}
//}
//int main()
//{
//
//	int  n = 0;							//汉诺塔层数
//	char A = 'A';						//A柱子
//	char B = 'B';						//B柱子
//	char C = 'C';						//C柱子
//	scanf("%d", &n);
//
//	Hanoi(A, B, C, n);						//将n个圆盘，借助于B柱子，从A柱子移动到C柱子
//	return 0;
//}


//函数栈帧
//#include<stdio.h>
//int func(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//	c = func(a, b);
//	return 0;
//}


//将参数字符串中的字符反向排列

//非递归
//#include<stdio.h>
//#include<string.h>
//void func(char* arr)
//{
//	int left = 0;
//	char right = strlen(arr) - 1;
//	while (left < right)
//	{
//		int temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	func(arr);
//	printf("%s\n", arr);
//	return 0;
//}


//#include<stdio.h>
//#define ROW 3
//#define COL 3
//void Init_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//void Print_board(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if(j<col-1)
//				printf("|");
//		}
//		printf("\n");
//		if (i < row-1)
//		{
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//					printf("|");
//			}
//		}
//		printf("\n");
//	}
//}
//	
//int main()
//{
//	char board[ROW][COL];
//	Init_board(board, ROW, COL);
//	Print_board(board, ROW, COL);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	printf("%d %d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	return 0;
//}


//#include <stdio.h>
//int func(int n)
//{
//    if (n == 1 || n == 0)
//        return 1;
//    else 
//        return func(n - 2) + func(n - 1);
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = func(n);
//    printf("%d", ret);
//    return 0;
//}


//#include <stdio.h>
//int func(int y, int m)
//{
//    if ((y % 4 == 0 && y % 100 != 0) || ((y % 400) == 0))
//    {
//        if (m == 2)
//            return 29;
//        else if (m == 4 || m == 6 || m == 9 || m == 11)
//            return 31;
//        else
//            return 30;
//    }
//    else
//    {
//        if (m == 2)
//            return 28;
//        else if (m == 4 || m == 6 || m == 9 || m == 11)
//            return 31;
//        else
//            return 30;
//    }
//}
//int main()
//{
//    int year = 0;
//    int month = 0;
//    scanf("%d %d", &year, &month);
//    int ret = func(year, month);
//    printf("%d", ret);
//}