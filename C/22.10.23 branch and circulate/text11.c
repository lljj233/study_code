#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//if分支结构
//(0为假，非0为真)
//else和离它最近的if匹配


//int main()
//{
//	int age = 0;
//	scanf("%d",&age);
//	if (age > 18)
//	{
//		printf("成年")；
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 18)
//	{
//		printf("成年")；
//	}
//	else
//	{
//		printf("未成年")；
//	}
//	return 0;
//}


//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//	else if(age>18&&age<50)
//	{
//		printf("青年");
//	}
//	else
//	{
//		printf("老年");
//	}
//	return 0;
//}


//switch分支结构
//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)//括号里只能放整型表达式
//	{
//	case 1://case后面必须是整型常量表达式
//		printf("星期一\n");
//		break;
//	case 2://case 1+1
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	default://异常情况处理
//		printf("Error!!!");
//		break;
//	}
//	//只要逻辑正确，case语句和default语句可以改变顺序
//	return 0;
//}


//多个case语句执行同一条语句时
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("Error!!!");
//		break;
//	}
//	return 0;
//}



//循环结构

//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//		{
//			break;//终止本层循环
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	while (i < 11)
//	{
//		if (i == 5)
//		{
//			continue;//终止本次循环，跳过后面代码部分，直接跳到语句的判断部分，进行下一次循环的入口判断
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	while((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}



//int main()
//{
//	char password[20] = {0};
//    int ch = 0;
//
//	printf("请输入密码：");
//	scanf("%s",password);//数组名是地址，不需要&
//
//	//清除缓存区(清理\n)
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("确认密码（Y/N）");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}



//for循环

//打印1-10
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			//break;//输出1 2 3 4
//			continue;//输入1 2 3 4 6 7 8 9 10
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	//int i = 0;
//	for (int i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			//break;//输出1 2 3 4
//			continue;//输入1 2 3 4 6 7 8 9 10
//		printf("%d ", i);
//	}
//	return 0;
//}



//int main()
//{
//	//for循环的初始化，调整和判断3个部分可以省略
//	//若省略判断部分，则判断恒为真，进入死循环
//	for (;;)
//	{
//		printf("1");
//	}
//	return 0;
//}



//int main()
//{
//  int i = 0;
//  int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("A ");//输出9个A
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for ( ; i < 3; i++)
//	{
//		for ( ; j < 3; j++)
//		{
//			printf("A ");//输出3个A
//		}
//	}
//	return 0;
//}



//使用多于一个变量控制循环
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; x++, ++y)
//	{
//		printf("A ");//输出2个A
//	}
//	return 0;
//}


//求几次循环
//int main()
//{
//	int i, j;
//	for (i = 0, j = 0; j = 0; i++, j++)
//		j++;
//	return 0;
//}
//0次循环，因为for循环中判断语句是赋值操作，j=0，即为假，不进入循环



//do while循环
//先执行后判断

//打印1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

// int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		if (i == 5)
//			//break;//输出1 2 3 4 5 
//			continue;//输出1 2 3 4 5 5 5 5 5
//		i++;
//	} while (i < 11);
//	return 0;
//}


//goto语句(很少使用)

//int main()
//{
//flag:
//	printf("AAA\n");
//	goto flag;
//	return 0;
//}

//在多层循环嵌套的时候使用gato可以很快跳出循环，不需要使用多个break