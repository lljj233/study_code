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
//	while(ch = getchar() != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20];
//	printf("输入密码：");
//	scanf("%s", password);
//	printf("确认密码(Y/N)");
//	char ch = getchar();
//	scanf("%c", &ch);
//	if (ch == Y)
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//	return 0;
//}