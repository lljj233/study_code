#define _CRT_SECURE_NO_WARNINGS

//#include <stdio.h>
//void DrawTriangle(int n, char c)
//{
//	int i, j;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= n - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("%c", c);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n;
//	char c;
//	DrawTriangle(5, '*');
//	printf("\n");
//	DrawTriangle(10, '#');
//	return 0;
//}



//#include<math.h>
//int main()
//{
//	int i,j,n;
//	scanf("%d", &n);
//	for (i = 1; i <= (n + 1) / 2; i++)
//	{
//		for (j = 1; j <= (n + 1) / 2 - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = (n - 1) / 2; i >= 1; i--)
//	{
//		for (j = (n - 1) / 2; j >= i; j--)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	double num1, num2;
//	printf("Enter two nums:");
//	scanf("%lf %lf", &num1, &num2);
//	if( (0<=num1&&num1<1.0)&&(0 <= num2&&num2 < 1.0))
//	{
//	if (num1 > num2)
//	{
//		printf("The smaller num is %lf\n", num2);
//	}
//	else
//	{
//		printf("The smaller num is %lf\n", num1);
//	}
//	}
//	else
//	{
//		printf("Error input!\n");
//	}
//	return 0;
//}
//



//int a = 1;
//int f(int a)
//{
//    auto int b = 2;
//    static int c = 3;
//    a = a + 1;
//    b = b + 1;
//    c = c + 1;
//    return (a + b + c);
//}
//
//int main()
//{
//    int i;
//    for (i = 0; i < 3; i++)
//    {
//        a = a + 2;
//        printf("%d \n", f(a));
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int* p;
//	int a = 5;
//	p = &a;
//	printf("a的值为:%d\n", a);
//	printf("p的值为：%p\n", p);
//	printf("*p的值为：%d\n", *p);
//}



//void swap1(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}


//void swap2(int* a, int b)
//{
//	int temp = *a;
//	*a = b;
//	b = temp;
//
//}


//void swap3(int* a, int* b)
//{
//	int temp = *a;
//	*a = *b;
//	*b = temp;
//}

//
//void swap4(int* a, int* b)
//{
//	int* temp = a;
//	a = b;
//	b = temp;
//}
//int main()
//{
//	int x = 1, y = 2;
//	swap4(&x, &y);  
//	printf("x=%d,y=%d\n", x, y);
//	return 0;
//}




//#include<string.h>
//#define N 100
//int reverse(int* b, int n);
//int main()
//{
//	int str[N], i, n;
//	printf("请输入个数:\n");
//	scanf("%d", &n);
//	printf("请输入一个数组:\n");
//	for (i = 0; i < n; i++)
//		scanf("%d", &str[i]);
//	reverse(str, n);
//	printf("逆置后:");
//	for (i = 0; i < n; i++)
//		printf("%d", str[i]);
//	return 0;
//}
//int reverse(int* b, int n)//逆置函数
//{
//	int t, * p = &b[n - 1];
//	while (b < p)
//	{
//		t = *b;
//		*b = *p;
//		*p = t;
//		b++;
//		p--;
//	}
//	return *b;
//}



//#include<string.h>
//#define N 100
//unsigned int strlen(const char* str);
//char* strdel(char* str);
//int main()
//{
//	char str[N];
//	printf("please input a string:\n");
//	gets(str);
//	*str = *strdel(str);
//	puts(str);
//	return 0;
//}
//char* strdel(char* str)//去空格
//{
//	int i, j;
//	for (i = 0; i < strlen(str); i++)
//	{
//		if (str[i] != 32)
//			continue;
//		else
//		{
//			for (j = i; j < strlen(str); j++)
//				str[j] = str[j + 1];
//		}
//	}
//	return str;
//}



//#include<stdio.h>
//#include<string.h>
//#define N 100
//void get_id(char* str1);
//void get_secret(char* str2);
//int main()
//{
//	char str1[N], str2[N];
//	int i;
//	printf("please input the first string with several abcs:");
//	gets(str1);
//	printf("please input the second string with several numbers:");
//	gets(str2);
//	get_id(str1);
//	printf("The id is:");
//	for (i = 0; i < strlen(str1); i += 2)//注意奇数项
//		printf("%c", str1[i]);
//	printf("\n");
//	get_secret(str2);
//	printf("The secret is:");
//	for (i = 1; i < strlen(str2); i += 2)//注意偶数项
//		printf("%c", str2[i]);
//	printf("\n");
//	return 0;
//}
//void get_id(char* str1)//获得用户名
//{
//	char str3[N] = "0";
//	int i, j = 0;
//	for (i = 0; i < strlen(str1); i++)
//		if ((str1[i] >= 'a' && str1[i] <= 'z') || (str1[i] >= 'A' && str1[i] <= 'Z'))
//		{
//			str3[j] = str1[i];
//			j++;
//		}
//	strcpy(str1, str3);
//}
//void get_secret(char* str2)//获得密码
//{
//	char str4[N] = "0";
//	int i, j = 0;
//	for (i = 0; i < strlen(str2); i++)
//		if (str2[i] >= '0' && str2[i] <= '9')
//		{
//			str4[j] = str2[i];
//			j++;/*
//		}
//	strcpy(str2, str4);
//}*/

//#include<stdio.h>
//#define SIZE 5
//int main(void)
//{
//	int arr[SIZE] = { 56,35,95,59,95 };
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	for (i = 4; i >= 0; i--)//逆序
//	printf("%d\n", arr[i]);
////和下面一样的效果，更简洁。
//	printf("%d\n", arr[0]);
//	printf("%d\n", arr[1]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", arr[3]);
//	printf("%d\n", arr[4]);
//	return 0;
//}

//#define SIZE 5
//int main(void)
//{
//	int arr[SIZE] = {0};
//	int i = 0;
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("第%d个数据是:\n",i);
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < SIZE; i++)
//	{
//		printf("第%d个数据是:%d\n", i,arr[i]);
//	}
//	return 0;
//}

//按行输出
//#define M 3
//#define N 4
//int main(void)
//{
//	int arr[M][N] = { {1,2,3,4},{5,6,7,8},{2,4,6,8} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < M; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			printf("%d\t", arr[i][j]);
//		}
//		printf("%\n");
//	}
//	return 0;
//}

//按列输出
//#define M 3
//#define N 4
//int main(void)
//{
//	int arr[M][N] = { {1,2,3,4},{5,6,7,8},{2,4,6,8} };
//	int i = 0;
//	int j = 0;
//	for (j = 0; j < N; j++)
//	{
//		for (i = 0; i < M; i++)
//		{
//			printf("%d\t", arr[i][j]);
//		}
//		printf("%\n");
//	}
//	return 0;
//}


//函数的功能：输出二维数组的所有元素
//#include<stdio.h>
//#define M 3
//#define N 4
//void output(int b[M][N], int row, int column)//或 int b[][N]
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{		for (j = 0; j < column; j++)
//			{
//				printf("%d\t",b[i][j]);
//			}
//			printf("%\n");
//	}
//}int main(void)
//{
//	int arr[M][N] = { {1,2,3,4},{5,6,7,8},{2,4,6,8} };
//	int i = 0;
//	int j = 0;
//	output(arr,M ,N);
//	return 0;
//}




//#define DAYS_FEB(year) (year % 4 == 0 && year % 100 != 0) || year % 400 == 0
//#include <stdio.h>
//int main()
//{
//	int year, days;
//	scanf("%d", &year);
//	if (year > 999 && year < 10000) {
//		if (DAYS_FEB(year))
//		{
//			days = 29;
//		}
//		else { days = 28; }
//	}
//	else {
//		printf("Input error!");
//	}
//
//	printf("days of the FEB.: %d\n", days);
//	return 0;
//}

//
//#include <stdio.h>
//struct Date
//{
//	int year;
//	int month;
//	int day;
//}date;
//typedef struct Date Date;
//int checkDate(Date date);
//int main()
//{
//	int x;
//	do
//	{
//		printf("Please input the date!\n");
//		scanf("%d%d%d", &date.year, &date.month, &date.day);
//		x = checkDate(date);
//	} while (x == 0);
//	if (x)
//		printf("Correct!\n");
//	return 0;
//}
//int checkDate(Date date)
//{
//	int y = 0;
//	if (date.month == 1 || date.month == 3 || date.month == 5 || date.month == 7 || date.month == 8 || date.month == 10 || date.month == 12)
//		y = 1;
//	if (date.month == 4 || date.month == 6 || date.month == 9 || date.month == 11)
//		y = 4;
//	if (date.month == 2)
//	{
//		if ((date.year % 4 == 0 && date.year % 100 != 0) || date.year % 400 == 0)
//			y = 2;
//		else
//			y = 3;
//	}
//	if (date.year < 1900 || date.year>2018)
//		return 0;
//	else if (date.month < 1 || date.month>12)
//		return 0;
//	else if (y == 1 && (date.day < 1 || date.day>31))
//		return 0;
//	else if ((y == 4) && (date.day < 1 || date.day>30))
//		return 0;
//	else if ((y == 2) && (date.day < 1 || date.day>29))
//		return 0;
//	else if ((y == 3) && (date.day < 1 || date.day>28))
//		return 0;
//	else
//		return 1;
//}


//#include<stdio.h>
//#include<stdlib.h>
//void writefile(int ch, FILE* fp);
//void readfile(int ch, FILE* fp);
//int main()
//{
//	FILE* fp; //首先定义文件指针
//	char ch = 0;
//	fp = fopen("D:\\f1.txt", "w+");
//	if (fp == 0)                       //文件打开后需判断是否正确
//	{
//		printf("file error\n");
//		exit(1);
//	}
//	writefile(ch, fp);
//	rewind(fp);
//	readfile(ch, fp);
//	fclose(fp);
//	return 0;
//}
//void writefile(int ch, FILE* fp)        //使用函数将键盘键入的字符写入文件，直到遇到字符#为止
//{
//	printf("Enter a text (end with '#'):\n");
//	ch = getchar();
//	while (ch != '#')
//	{
//		fputc(ch, fp);
//		ch = getchar();
//	}
//}
//void readfile(int ch, FILE* fp)         //使用文件读取函数fgetc从该文件中读取字符，并显示出来
//{
//	while ((ch = fgetc(fp)) != EOF)
//	{
//		putchar(ch);
//	}
//	putchar('\n');
//}



//#include<stdio.h>
//#include<stdlib.h>
//struct Student
//{
//	char ID[20];
//	char name[30];
//	int age;
//	double score;
//};
//typedef struct Student Stu;
//#define N 50
//void CreateFile(Stu[], int n, FILE* fp);
//void ReadOut(Stu[], int n, FILE* fp);
//void Sort(Stu[], int len);
//int main()
//{
//	int n, i, x;
//	Stu stu[N];
//	FILE* fp = NULL;                       //首先定义文件指针
//	do
//	{
//		printf("Please input the number of students:\n");
//		scanf("%d", &n);
//	} while (n < 1 || n>40);
//	for (i = 0; i < n; i++)
//	{
//		x = i + 1;
//		printf("%d(ID name age score):\n", x);
//		scanf("%s%s%d%lf", stu[i].ID, stu[i].name, &stu[i].age, &stu[i].score);
//	}
//	CreateFile(stu, n, fp);
//	printf("before being sorted:\n");
//	ReadOut(stu, n, fp);
//	printf("after being sorted:\n");
//	Sort(stu, n);
//	return 0;
//}
//void CreateFile(Stu stu[], int n, FILE* fp)
//{
//	fp = fopen("D:\\Info.dat", "wb+");
//	if (fp == 0)                       //文件打开后需判断是否正确
//	{
//		printf("file error\n");
//		exit(1);
//	}
//	fwrite(stu, sizeof(Stu), n, fp);
//	fclose(fp);
//}
//void ReadOut(Stu stu[], int n, FILE* fp)
//{
//	int i = 0;
//	fp = fopen("D:\\Info.dat", "rb");
//	if (fp == 0)                       //文件打开后需判断是否正确
//	{
//		printf("file error\n");
//		exit(1);
//	}
//	fread(&stu[i], sizeof(Stu), n, fp);
//	for (i = 0; i < n; i++)
//		printf("%s %s %d %.2f\n", stu[i].ID, stu[i].name, stu[i].age, stu[i].score);
//	fclose(fp);
//}
//void Sort(Stu stu[], int len)
//{
//	int i, k, index;
//	Stu temp;
//	for (k = 0; k < len - 1; k++)
//	{
//		index = k;
//		for (i = k + 1; i < len; i++)
//			if (stu[i].score > stu[index].score)
//				index = i;
//		if (index != k)
//		{
//			temp = stu[index];
//			stu[index] = stu[k];
//			stu[k] = temp;
//		}
//	}
//	for (i = 0; i < len; i++)
//		printf("%s %s %d %.2f\n", stu[i].ID, stu[i].name, stu[i].age, stu[i].score);
//}



//#include
//
//structSTU{ char ID[20]; char Name[20]; floatmath; floatphysic; floatenglish;
//
//};
//int main()
//
//{
//	int n, i, j, k; floatres;
//
//	scanf("%d", &n);
//  if (n > 10)
//  {
//		return 0;
//
//	}
// struct STU* mySTU = (struct STU*)malloc(sizeof(struct STU) * n); //动态内存分配关键 mallocstruct STU* p =mySTU;for (i = 0; i < n; i++)
//
//	{
//		scanf("%s", &p->Name);
//
//		scanf("%s", &p->ID);
//
//		scanf("%f", &p->math);
//
//		scanf("%f", &p->english);
//
//		scanf("%f", &p->physic); *(p++);
//
//	}struct STU* q = mySTU; for (j = 0; j < n; j++)
//
//	{
//		res = (q->math + q->physic + q->english) / 3;
//
//		k = (int)res;
//
//		printf("The average score of the %dth student is %d.\n", j + 1, k); *(q++);
//
//	}return 0;
//
//}

//#include<stdio.h>


//#include <stdio.h>
//typedef struct  st
//{
//    int  x, y;
//}ST;
//ST data[2] = { {1,2},{3,4} };
//int main()
//{
//    ST* p = data;
//    printf("%d\n", (++p)->x++);
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char* p;
//    char c1[10] = "white", c2[10] = "blue";
//    p = c1 + 1;
//    p++;
//    strcat(p, c2);
//    printf("%s", p);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int array[] = { 1,2,3,4,5 }, y = 0x10, i, * p;
//    p = array + 3;
//    for (i = 0; i < 4; i++)
//    {
//        y = y + *p;
//        p--;
//    }
//    printf("%d\n", y);
//    return 0;
//}

//#include<stdio.h>
//#include<stdio.h>
//int func(int a, int b)
//{
//    static int m = 2;
//    int i = 1;
//    i += m + 1;
//    m = i + a + b;
//    return m;
//}
//int main()
//{
//    int k = 1, m = 2, p, i;
//    for (i = 1; i <= 2; i++)
//        p = func(k, m);
//    printf("%d", p);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 3, b = 10;
//	do { b -= a;  a++; } 
//	while (b-- < 0);
//	printf("%d", a);
//}





//#include<stdio.h>
//int main()
//{
//	char a = 5;
//	printf("%d\n", sizeof(a));//字节数为1
//	printf("%d\n", sizeof(a + 5));//字节数为4
//	//混合运算时，为提高精度，char转成int，float转成double，int转成double
//	return 0;
//}


//复合语句
//#include<stdio.h>
//int main()
//{
//	int a = 10, b = 5;
//	{
//		int a = 20;
//		printf("%d\n",a);
//		b++;
//	}
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int a = 0 ;
//	int b = 0 ;
//	scanf("%d%d", &a, &b);
//	if (a > b)
//	{
//		printf("%d",a);
//	}
//	else//a<=b
//	{
//		printf("%d",b);
//	}
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("输入a的值:");
//	scanf("%d", &a);
//	if (a % 2 == 0)
//	{
//		printf("a是偶数");
//	}
//	else
//	{
//		printf("a是奇数");
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int week = 0;
//	printf("今天是星期几：");
//	scanf("%d", &week);
//	switch(week)
//	{
//		//不是从上到下，而是匹配，顺序不一定
//	case 1:printf("今天是星期一\n"); break;
//	case 2:printf("今天是星期二\n"); break;
//	case 3:printf("今天是星期三\n"); break;
//	case 4:printf("今天是星期四\n"); break;
//    case 5:printf("今天是星期五\n"); break;
//	case 6:printf("今天是星期六\n"); break;
//	case 7:printf("今天是星期日\n"); break
//	default:printf("输入错误\n"); break;
//   }
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int x = 1, y = 1, z = 1;
//	switch (x)
//	{
//	case 1:
//		switch (y)
//		{
//		case 1:printf("!!"); break;
//		case 2:printf("@@"); break;
//		case 3:printf("##"); break;
//		}
//	case 0:
//		switch (z)
//		{
//		case 0:printf("$$");
//		case 1:printf("^^");
//		case 2:printf("&&");
//		}
//	default:printf("**");
//	}
//	return 0;
//}


//条件表达式 ？：（前面为真则执行冒号左边，否则执行右边）
//#include<stdio.h>
//int main()
//{
//	int a = 0, b = 0,max=0;
//	printf("输入a，b的值");
//	scanf("%d%d", &a, &b);
//	max = a > b ? a : b;
//	printf("max:%d", max);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int m = 0, n = 4521;
//	do
//	{
//		m = m * 10 + n % 10;
//		n /= 10;
//	} while (n);
//	printf("m=%d\n", m);
//	printf("n=%d\n", n);
//	return 0;
//}



//#include<stdio.h>
//int main()
//{
//	int a = 1, b = 2;
//	for (; a < 8; a++)
//	{
//		a += 2;
//		if (a == 6)
//			continue;
//		if (a > 7)
//			break;
//		b++;
//    }
//	printf("%d %d\n", a, b);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i = 1, n = 0, multiply = 1;
//	printf("输入n的值：");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		multiply *= i;
//	}
//	printf("%d", multiply);
//	return 0;
//}












//#include<stdio.h>
//#define MUL(x,y) x*y
//int main()
//
//    int c = 0;
//    c = MUL(4+2, 5+1);
//    printf("c=%d", c);
//    return 0;
//}


//#include<stdio.h>
//#define MUL(x,y) (x)*(y)
//int main()
//{
//    int c = 0;
//    c = MUL(4 + 2, 5 + 1);
//    printf("c=%d", c);
//    return 0;
//}



//#include <stdio.h>
//int cal(int n)
//{
//	static int f = 20;
//	f += n;
//	return f;
//}
//int main()
//{
//	int i;
//	for (i = 1; i < 7; i++)
//	if (i % 2)
//	{
//		printf("%d  ", cal(i));
//	}
//	return 0;
//}



//#include <stdio.h> 
//main()
//{
//	char ch;
//	ch = getchar();
//	printf("%d\n", ch);
//	printf("%d\n", ch - 32);
//	printf("%c %d\n", ch, ch);
//	printf("%c %d\n", ch - 32, ch - 32);
//	return 0;
//}



//#include <stdio.h>
//main()
//{
//	int p;
//	char q; //此时定义的是字符变量，不是字符串，所以只能将一个字符的值赋予q
//	p = 98;//b
//	q = 'a';
//	putchar(p);
//	printf("\n");
//	putchar(q);
//	return 0;
//}


//ch = getchar();//相当于scanf("%c", &ch);
//putchar(ch);//相当于printf("%c", ch);

//#include<stdio.h>
//#define M 5
//#define N M+1
//#define L N*M/2
//int main()
//{
//	printf("%d,%d", L, M);
//	return 0;
//}


//void reverse(SqList *L)
//{
//
//	Elemtype temp;
//
//	for (i = 0; i < L.length / 2; i++)
//
//	{
//
//		temp = L.data[i];         //引入一个中间元素，实现元素的两两对换
//
//		L.data[i] = L.data[L.length - i - 1];
//
//		//L.length-1得到的是最后一位元素的下标，再减去i得到顺序表中和L.data[i]对称的元素下标，例如上图1的下标为i=0,4的下标为length-1-i=4-1-0=3，1对称的元素是4
//
//		L.data[L.length - i - 1] = temp;
//
//	}
//
//}


//typedef int Status;
//Status Init(Seqlist* L, int mSize)
//{
//	L->maxLength = mSize;
//	L->n = 0;
//	L->element = (ElemType*)malloc(sizeof(Element) * mSize);
//	if (!L->element)
//		return ERROR;
//	return OK;
//}



/*
#include<stdio.h>
#include<stdlib.h>
#define ERROR 0
#define OK 1
typedef int ElemType;
typedef int Status;

typedef struct {
    int n;
    int maxLength;
    ElemType* element;
}SeqList;


Status Init(SeqList* L, int mSize);
Status Output(SeqList L);
void Inverse(SeqList* L, int mSize);
Status Insert(SeqList* L, int i, ElemType x);
Status Delete(SeqList* L, int i);
void Destory(SeqList* L);


// 顺序表初始化
Status Init(SeqList* L, int mSize) {
    L->maxLength = mSize;
    L->n = 0;
    L->element = (ElemType*)malloc(sizeof(ElemType) * mSize);
    if (!L->element)
        return ERROR;
    return OK;
}

//实现对顺序表的逆置。

void Inverse(SeqList* L, int mSize) {
    int i, temp;
    for (i = 0; i < mSize / 2; i++) {
        temp = L->element[i];
        L->element[i] = L->element[mSize - 1 - i];
        L->element[mSize - 1 - i] = temp;
    }
}

Status Insert(SeqList* L, int i, ElemType x) {
    int j;
    if (i<-1 || i>L->n - 1)
        return ERROR;
    if (L->n == L->maxLength)
        return ERROR;
    for (j = L->n - 1; j > i; j--) {
        L->element[j + 1] = L->element[j];
    }
    L->element[i + 1] = x;
    L->n = L->n + 1;
    return OK;
}


// 顺序表输出
Status Output(SeqList L) {
    int i;
    if (!L.n)
        return ERROR;
    for (i = 0; i <= L.n - 1; i++)
        printf("%d ", L.element[i]);  //从前往后逐个输出元素
    return OK;
}


Status Delete(SeqList* L, int i) {
    int j;
    if (i<0 || i>L->n - 1)
        return ERROR;
    if (!L->n)
        return ERROR;
    for (j = i + 1; j < L->n; j++) {
        L->element[j - 1] = L->element[j];
    }
    L->n--;
    return OK;
}

void Destory(SeqList* L) {
    (*L).n = 0;
    (*L).maxLength = 0;
    free((*L).element);
}


int main()
{
    int i, x, nn;
    scanf("%d", &nn);
    //printf("\n");
    SeqList list;
    Init(&list, nn);  // 对线性表初始化
    for (i = 0; i < nn; i++) {
        scanf("%d", &x);
        Insert(&list, i - 1, x);
    }
    Output(list);
    Inverse(&list, nn);
    printf("\n");
    Output(list);
    printf("\n");
    Delete(&list, 0);
    Destory(&list);
}
*/


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
//    int input = 0;
//    printf("lijun是不是SB(是的话打1，否则打0)\n");
//    scanf("%d", &input);
//    if (input == 1)
//        printf("回答正确！！\n");
//    else if (input == 0)
//        printf("你是SB吧，这都答不对。\n");
//    else
//        printf("你是SB吧，这种答案你也打的出来？？？\n");
//    return 0;
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