#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>


//自定义函数计算字符串长度

//常规
//int my_strlen1(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////递归
//int my_strlen2(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	if (*str != '\0')
//	{
//		return 1 + my_strlen2(str + 1);
//	}
//	else
//		return 0;
//}
////指针-指针
//int my_strlen3(const char* str)
//{
//	assert(str != NULL);
//	const char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen3(arr);
//	printf("%d", len);
//	return 0;
//}



//strlen是求字符串长度的，求出的长度不可能为负数，所以返回类型为size_t,即无符号的整型
//typedef unsigned int size_t;
//size_t strlen(const char* string);

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//		printf(">\n");
//	else
//		printf("<=n");
//	return 0;
//}



//strcpy - 拷贝字符串函数
//源字符串必须以 '\0' 结束
//会将源字符串中的 '\0' 拷贝到目标空间。
//目标空间必须足够大，以确保能存放源字符串。
//目标空间必须可变
//int main()
//{
//	char arr1[20] = { "xxxxxxxxx" };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//把arr2放到arr1
//
//	//char* p = "sdhisidjs";//常量字符串
//	//strcpy(p, arr2);//常量字符串不能被修改
//	return 0;
//}

//模拟实现strcpy函数
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest && src);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "";
//	char arr2[] = "hello world";
//	my_strcpy(arr1, arr2);//把arr2放到arr1
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat - 在一个字符串后加上字符串
//源字符串必须以 '\0' 结束。
//目标空间必须有足够的大，能容纳下源字符串的内容。
//目标空间必须可修改。
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.找目标空间末尾的\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.追加
// 	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcmp - 比较两个字符串的大小
//第一个字符串大于第二个字符串，则返回大于0的数字
//第一个字符串等于第二个字符串，则返回0
//第一个字符串小于第二个字符串，则返回小于0的数字
//int main()
//{
//	char arr1[] = "abadef";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//模拟实现strcmp
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	char arr1[] = "abuisd";
//	char arr2[] = "abc";
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}



//strncpy
//拷贝num个字符从源字符串到目标空间。
//如果源字符串的长度小于num，则拷贝完源字符串之后，在目标的后边追加0，直到num个
//char* strncpy(char* destination, const char* source, size_t num);
//int main()
//{
//	char arr1[20] = "---------";
//	char arr2[] = "abcdef";
//	strncpy(arr1, arr2, 3);
//	//strncpy(arr1, arr2, 10);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strncpy
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest&&src);
//	char* str = dest;
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	return str;
//}
//int main()
//{
//	char arr1[20] = "---------";
//	char arr2[] = "abcdef";
//	my_strncpy(arr1, arr2, 3);
//
//	printf("%s\n", arr1);
//	return 0;
//}




//strncat
//char* strncat(char* destination, const char* source, size_t num);
//int main()
//{
//	char arr1[20] = "---------";
//	char arr2[] = "abcdef";
//	strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strncat
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest && src);
//	char* str = dest;
//	while (*dest)
//		dest++;
//	while (num--)
//	{
//		*dest++ = *src++;
//	}
//	*dest = '\0';
//	return str;
//}
//int main()
//{
//	char arr1[20] = "---------";
//	char arr2[] = "abcdef";
//	my_strncat(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}




//strncmp
//int strncmp(const char* str1, const char* str2, size_t num);
//比较到出现另个字符不一样或者一个字符串结束或者num个字符全部比较完
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abciuf";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr - 字符串查找
//char * strstr ( const char *str1, const char * str2);
//int main()
//{
//	char arr1[] = "uhusdihdf";
//	char arr2[] = "sdih";
//	char* ret = strstr(arr1, arr2);//返回s的地址
//	if (ret == NULL)
//		printf("找不到\n");
//	else
//		printf("%s\n", ret);;
//	return 0;
//}

//模拟实现strstr
//暴力求解法
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	if (*str2 == '\0')
//	{
//		return (char*)str1;
//	}
//	const char* s1 = NULL;
//	const char* s2 = NULL;
//	const char* cp = str1;
//	while (*cp)
//	{
//		s1 = cp;
//		s2 = str2;
//		while (*s1 !='\0' && *s2!='\0' && *s1 == *s2)
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return (char*)cp;
//		}
//		cp++;
//	}
//	return NULL;
//}
//int main()
//{
//	char arr1[] = "abbbcdbbcef";
//	char arr2[] = "bbc";
//	char* ret = my_strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//strtok
//char * strtok ( char * str, const char * sep );
//sep参数是个字符串，定义了用作分隔符的字符集合
//第一个参数指定一个字符串，它包含了0个或者多个由sep字符串中一个或者多个分隔符分割的标记。
//strtok函数找到str中的下一个标记，并将其用 \0 结尾，返回一个指向这个标记的指针。
//（注：strtok函数会改变被操作的字符串，所以在使用strtok函数切分的字符串一般都是临时拷贝的内容并且可修改。）
//strtok函数的第一个参数不为 NULL ，函数将找到str中第一个标记，strtok函数将保存它在字符串中的位置。
//strtok函数的第一个参数为 NULL ，函数将在同一个字符串中被保存的位置开始，查找下一个标记。
//如果字符串中不存在更多的标记，则返回 NULL 指针。
//int main()
//{
//	char arr[] = "963543574@qq.com";
//	//963543574 qq com
//	char* p = "@.";//strtok会把数组中的@和.改成\0
//	char buf[20] = { 0 };
//	strcpy(buf, arr);
//	char* ret = NULL;
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL,p))
//	{
//		printf("%s\n", ret);
//	}
//	/*char* ret = strtok(buf, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	return 0;
//}



//strerror
//char * strerror ( int errnum );
//返回错误码，所对应的错误信息。
//C语言的库函数在运行时，如果发生错误，会将错误码存在一个变量errno中
//错误码是一些数字：1，2，3，4，5
//需要将错误码翻译成错误信息
//int main()
//{
//	printf("%s\n", strerror(0));//No error
//	printf("%s\n", strerror(1));//Operation not permitted
//	printf("%s\n", strerror(2));//No such file or directory
//	printf("%s\n", strerror(3));//No such process
//	printf("%s\n", strerror(4));//Interrupted function call
//	printf("%s\n", strerror(5));//Input/output error
//	return 0;
//}

//实际中使用strerror的情况
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("打开文件失败\n");
//		printf("%s\n", strerror(errno));
//	}
//	else
//		printf("打开文件成功\n");
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//字符分类函数
//函数     |如果他的参数符合下列条件就返回真
//iscntrl  |任何控制字符
//isspace  |空白字符：空格‘ ’，换页‘\f’，换行'\n'，回车‘\r’，制表符'\t'或者垂直制表符'\v'
//isdigit  |十进制数字 0~9
//isxdigit |十六进制数字，包括所有十进制数字，小写字母a~f，大写字母A~F
//islower  |小写字母a~z
//isupper  |大写字母A~Z
//isalpha  |字母a~z或A~Z
//isalnum  |字母或者数字，a~z, A~Z, 0~9
//ispunct  |标点符号，任何不属于数字或者字母的图形字符（可打印）
//isgraph  |任何图形字符
//isprint  |任何可打印字符，包括图形字符和空白字符



//判断是否是小写字符
//int main()
//{
//	char ch = 'a';
//	int ret = islower(ch);
//	if (ret != 0)
//		printf("是小写字符\n");
//	else
//		printf("不是小写字符\n");
//	return 0;
//}

//判断是否是数字字符
//int main()
//{
//	char ch = 'q';
//	int ret = isdigit(ch);
//	if (ret != 0)
//		printf("是数字字符\n");
//	else
//		printf("不是数字字符\n");
//	return 0;
//}



//字符大小写转换
//int main()
//{
//	int ret = toupper('a');
//	printf("%c\n", ret);
//	return 0;
//}

//将数组中所有的小写字母转换成大写字母，不改变原数组
//int main()
//{
//	char arr[] = "i HAVE aN APPle.";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			printf("%c", toupper(arr[i]));
//		}
//		else
//			printf("%c", arr[i]);
//		i++;
//	}
//	return 0;
//}

//将数组中所有的小写字母转换成大写字母，改变原数组
//int main()
//{
//	char arr[] = "i HAVE aN APPle.";
//	int i = 0;
//	while (arr[i])
//	{
//		if (islower(arr[i]))
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}



//memcpy - 内存拷贝函数
//void * memcpy ( void * destination, const void * source, size_t num );
//函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
//这个函数在遇到 '\0' 的时候并不会停下来。
//如果source和destination有任何的重叠，复制的结果都是未定义的。
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, 8);//8是字节数
//	memcpy(arr2, arr1 + 3, 20);
//	return 0;
//}



//模拟实现memcpy
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		/*dest = (char*)dest + 1;
//		src = (char*)src + 1;*/
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1 + 3, 20);
//	return 0;
//}



//memmove - 实现自我拷贝
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr1, arr1 + 2, 20);
//	return 0;
//}

//memmove的模拟实现
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//从前向后拷贝
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//从后向前拷贝
//		while (num--)
//		{
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	my_memmove(arr1, arr1 + 2, 20);
//	return 0;
//}



//memcmp - 比较从ptr1和ptr2指针开始的num个字节
//int memcmp ( const void * ptr1, const void* ptr2,size_t num );
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 1,2,3,5 };
//	int ret = memcmp(arr1, arr2, 13);
//	printf("%d", ret);
//	return 0;
//}



//memset - 内存设置函数
//以字节为单位来设置内存中的数据
//int main()
//{
// 	char arr[] = "hello world";
//	memset(arr, 'x', 5);
//	memset(arr+6, 'y', 5);
//	printf("%s\n",arr);
//
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memset(arr1, 0, 40);
//	return 0;
//}

