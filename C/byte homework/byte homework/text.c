#define _CRT_SECURE_NO_WARNINGS 11

//#include <stdio.h>

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



//求输出
//#include <stdio.h>

//int main()
//{
//int i = 0;
//for (i = 0; i < 10; i++)
//{
//	if (i = 5)
//		printf("%d ", i);
//}
//return 0;
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



//写代码将三个整数数按从大到小输出。
//#include <stdio.h>
//int main()
//{
//    int a = 2;
//    int b = 3;
//    int c = 1;
//    scanf("%d%d%d", &a, &b, &c);
//    if (a < b)
//    {
//        int tmp = a;
//        a = b;
//        b = tmp;
//    }
//    if (a < c)
//    {
//        int tmp = a;
//        a = c;
//        c = tmp;
//    }
//    if (b < c)
//    {
//        int tmp = b;
//        b = c;
//        c = tmp;
//    }
//    printf("%d %d %d\n", a, b, c);
//    return 0;
//}


//求输出
//#include <stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20) break;
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}



//输出9*9乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d	", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//求十个数的最大值
//#include<stdio.h>
//int main()
//{
//	int max = 0;
//	int i = 0;
//	int num = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &num);
//		if (num > max)
//		{
//			max = num;
//		}
//	}
//	printf("最大值为:%d", max);
//	return 0;
//}


//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double sum = 0.0;
//	for (i = 1; i < 100; i += 2)
//	{
//		sum1 += 1.0 / (i);
//	}
//	for (i = 2; i < 101; i += 2)
//	{
//		sum2 += 1.0 / (i);
//	}
//	sum = sum1 - sum2;
//	printf("%lf", sum);
//	return 0;
//}



//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n");
//	printf("%d", count+1);
//	return 0;
//}



//二分查找
//编写代码在一个整形有序数组中查找具体的某个数。
//要求：找到了就打印数字所在的下标，找不到则输出：找不到。

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 3,5,11,48,51,58,69,73,81,99 };
//	int flag = 0;
//	int k = 0;
//	int left = 0;
//	int right = 9;
//	scanf("%d", &k);
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到，下标为%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("未找到");
//	}
//	return 0;
//}



//从两端往中间打印
//#include<stdio.h>
//#include<string.h>
//#include<Windows.h>
//#include<stdlib.h>
//int main()
//{
//	char arr1[] = "Hello World";
//	char arr2[] = "***********";
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//
//		printf("%s\n", arr2);
//
//		Sleep(1000);  //Sleep函数是实现睡眠的函数，单位是毫秒，在windows环境是S要大写，在linux里s要小写
//		              //即在1000ms后执行下一步
//		system("cls");//system也是一个库函数,可以执行系统命令。cls是清空屏幕的指令
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}




//模拟用户登录情景，且只能登陆三次，输入密码三次错误后退出程序
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };//字符数组，可以存放字符串
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");//假设密码为字符串”123456“
//		scanf("%s", password);
//		//判断两个字符串是否相等，要是有strcmp函数，不能直接使用==
//		//int ret=strcmp(password,"123456");
//		//如果第一个字符串小于第二个字符串，返回一个<0的数字
//		//如果第一个字符串大于第二个字符串，返回一个>0的数字
//		//如果第一个字符串等于第二个字符串，返回0
//		if (strcmp(password, "123456")==0)
//		{
//			printf("输入正确");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("第%d次输入错误\n",i+1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}



//猜数字游戏的实现
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<Windows.h>
//void game()
//{
//	  //rand函数是用来生成随机数的一个函数，头文件是stdlib.h
//    //rand函数返回的是0-rand_max(32767)的一个随机数
//    //rand函数在使用之前要使用一个srand函数来设置随机数的生成器
//    //srand函数在程序中只调用一次即可，不需要重复调用
//    //c语言中，time（）函数会返回时间戳，头文件是time.h，利用它来生成随机数
//
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while(1)
//	{
//		printf("请输入数字");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (num < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			Sleep(1000);
//			system("cls");
//			break;
//		}
//	}
//}
//void menu()
//{
//	printf("------------------\n");
//	printf("----  1.play  ----\n");
//	printf("----  2.exit  ----\n");
//	printf("------------------\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入选项");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("离开游戏\n");
//          	break;
//		default:
//			printf("请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//一个关机程序
//执行程序后60s后关机
//若输入：abc，则取消关机
//shutdown -s -t 60
//shutdown _a   取消关机

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("电脑将在60s后关机，输入“abc取消关机”\n");
//	scanf("%s", input);
//	if (strcmp(input, "abc") == 0)
//	{
//		system("shutdown -a");
//		printf("已取消关机");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//求两个数的最大公约数
//(1)
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a > b ? a : b);
//	//假设最大公约数就是a和b的较小值
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n", min);
//	return 0;
//}

//(2)
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int mcd = 0;
//	while (mcd=a%b)
//	{
//		a = b;
//		b = mcd;
//	}
//	printf("%d\n", b);
//	return 0;
//}



//通过函数实现一个整型数组的二分查找
//#include<stdio.h>
//int binary_search(int arr[], int k, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//找不到
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,17,18,19,20,21 };//10
//	//0~9
//	int k = 21;
//	//找到了就返回下标
//	//找不到返回-1
//	//计算数组的元素个数
//	// 
//	//printf("%d\n", sizeof(arr));//40,这里计算整个数组的大小，单位是字节
//	//printf("%d\n", sizeof(arr[0]));//4，这里计算数组第一个元素的大小，单位是字节
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos = binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("找不到\n");
//	else
//		printf("找到了，下标是:%d\n", pos);
//
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和.
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//#include <stdio.h>
//int DigitSum(int n)
//{
//	int sum = 0;
//	int m = 0;
//	if (n != 0)
//	{
//		m = n % 10;
//		sum = m + DigitSum(n = n / 10);
//	}
//	return sum;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	int ret = DigitSum(a);
//	printf("%d\n", ret);
//	return 0;
//}


//递归方式实现打印一个整数的每一位
//#include<stdio.h>
//void func(int i)
//{
//	if (i > 9)
//	{
//		func(i / 10);
//	}
//	printf("%d ", i % 10);
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	func(a);
//	return 0;
//}


//求输出
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}


//求输出
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 'a','b','c','e','f' };
//	int arr2[5] = { 'g','h','i','j','k' };
//	int i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		int temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", arr1[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}



//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
//#include<stdio.h>
//void init(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int sz,int arr[])
//{
//	int l = 0;
//	int r = sz-1;
//	while (l < r)
//	{
//		int temp = arr[l];
//		arr[l] = arr[r];
//		arr[r] = temp;
//		l++;
//		r--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//init(arr);
//	reverse(sz,arr);
//	print(arr);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//
//	printf("sizeof(acX)=%d\n", sizeof(acX));//数组中总共有8个元素，分别是：'a','b','c','d','e','f','g','\0'
//	printf("sizeof(acY)=%d\n", sizeof(acY));//数组中总共有7个元素，分别是：'a','b','c','d','e','f','g'
//
//	printf("strlen(acX)=%d\n", strlen(acX));
//	printf("strlen(acY)=%d\n", strlen(acY));
//	//strlen求的是字符串长度，从首元素开始计算，遇见‘\0’停止，由于acY数组没有'\0‘，所以strlen(acY)的结果是个随机值
//	return 0;
//}


//实现一个对整形数组的冒泡排序
//#include<stdio.h>
//void func(int arr[], int size)
//{
//	int i = 0;
//	for (i = 0; i < size - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int size = sizeof(arr) / sizeof(arr[0]);
//	func(arr,size);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//输入一个整数 n ，输出该数32位二进制表示中1的个数。其中负数用补码表示。
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	int i = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (a >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}


//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？ 
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//		if (((c >> i) & 1) == 1)
//			count++;
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int count = 0;
//	int c = a ^ b;
//	while (c)
//	{
//		c = c & (c - 1);
//		count++;
//	}
//	printf("%d", count);
//	return 0;
//}

//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d %d", &a, &b);
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//		if (((a >> i) & 1) != ((b >> i) & 1))
//			count++;
//	printf("%d", count);
//	return 0;
//}


//走台阶问题。每次可以选择走一阶或二阶，求有几种走法
//#include<stdio.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return n;
//	else
//		return Fib(n - 2) + Fib(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//}


//输入一个正整数n,输出一行为正整数n表示为六进制的结果
//#include<stdio.h>
//非递归
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	while(n)
//	{
//		arr[i++] = n % 6;
//		n /= 6;
//	}
//	for (--i; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}
//递归
//void func(int n)
//{
//	if (n > 5)
//	{
//		func(n / 6);
//	}
//  printf("%d", n % 6);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	func(n);
//	return 0;
//}


//删除序列中的指定数字
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	scanf("%d", &del);
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//#include<stdio.h>
//void print(int* p,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p++));
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}



//写一个函数，可以逆序一个字符串的内容。
//#include<stdio.h>
//void func(char* p)
//{
//	char* start = p;
//	while (*p != '\0')
//		p++;
//	int sz = p - start;
//	p -= 1;
//	while (start <= p)
//	{
//		int tem = *start;
//		*start = *p;
//		*p = tem;
//		start++;
//		p--;
//	}
//}
//int main()
//{
//	char ch[20] = { 0 };
//	int i = 0;
//	while((ch[i++]=getchar())!='\n');
//	func(ch);
//	printf("%s", ch);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void reverse(char* str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *(str + left);
//		*(str + left) = *(str + right);
//		*(str + right) = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str)-1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}




//打印菱形
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 7; ++i)
//	{
//		for (j = 1; j <=14 - 2 * i; ++j)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; ++j)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <= 6; ++i)
//	{
//		for (j = 1; j <= 2 * i; ++j)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 13 - 2 * i; ++j)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line-1; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}




//求出0～100000之间的所有“水仙花数”并输出。
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100000; i++)
//	{
//		int count = 1;
//		int some = i;
//		while (some / 10)
//		{
//			count++;
//			some = some / 10;
//		}
//		some = i;
//		int sum = 0;
//		while (some)
//		{
//			sum = sum + pow(some % 10,count);
//			some = some / 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		sum += num;
//		num = num * 10 + num % 10;
//	}
//	printf("%d", sum);
//	return 0;
//}



//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//#include<stdio.h>
//void get_water(int money)
//{
//	int bottle = 0;
//	int some = money;
//	while (some)
//	{
//		some /= 2;
//		bottle += some;
//	}
//	printf("%d", bottle + money);
//}
//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	get_water(money);
//	return 0;
//}



//判断一个n阶方矩是否为上三角矩阵
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	int flag = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (flag == 1)
//			break;
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//				flag = 1;
//		}
//	}
//	if (flag == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}



//判断两个矩阵是否相等
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int arr1[10][10] = { 0 };
//	int arr2[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		if (flag = 0)
//			break;
//		for (j = 0; j < m; j++)
//		{
//			if(arr1[i][j]!=arr2[i][j]);
//			flag = 0;
//		}
//	}
//	if (flag == 0)
//		printf("No");
//	else
//		printf("Yes");
//	return 0;
//}