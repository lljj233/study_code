#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<ctype.h>


//�Զ��庯�������ַ�������

//����
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
////�ݹ�
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
////ָ��-ָ��
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



//strlen�����ַ������ȵģ�����ĳ��Ȳ�����Ϊ���������Է�������Ϊsize_t,���޷��ŵ�����
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



//strcpy - �����ַ�������
//Դ�ַ��������� '\0' ����
//�ὫԴ�ַ����е� '\0' ������Ŀ��ռ䡣
//Ŀ��ռ�����㹻����ȷ���ܴ��Դ�ַ�����
//Ŀ��ռ����ɱ�
//int main()
//{
//	char arr1[20] = { "xxxxxxxxx" };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);//��arr2�ŵ�arr1
//
//	//char* p = "sdhisidjs";//�����ַ���
//	//strcpy(p, arr2);//�����ַ������ܱ��޸�
//	return 0;
//}

//ģ��ʵ��strcpy����
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
//	my_strcpy(arr1, arr2);//��arr2�ŵ�arr1
//	printf("%s\n", arr1);
//	return 0;
//}



//strcat - ��һ���ַ���������ַ���
//Դ�ַ��������� '\0' ������
//Ŀ��ռ�������㹻�Ĵ���������Դ�ַ��������ݡ�
//Ŀ��ռ������޸ġ�
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = " world";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//ģ��ʵ��strcat
//char* my_strcat(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* ret = dest;
//	//1.��Ŀ��ռ�ĩβ��\0
//	while (*dest)
//	{
//		dest++;
//	}
//	//2.׷��
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



//strcmp - �Ƚ������ַ����Ĵ�С
//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//��һ���ַ������ڵڶ����ַ������򷵻�0
//��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//int main()
//{
//	char arr1[] = "abadef";
//	char arr2[] = "abc";
//	int ret = strcmp(arr1, arr2);
//	printf("%d", ret);
//	return 0;
//}

//ģ��ʵ��strcmp
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
//����num���ַ���Դ�ַ�����Ŀ��ռ䡣
//���Դ�ַ����ĳ���С��num���򿽱���Դ�ַ���֮����Ŀ��ĺ��׷��0��ֱ��num��
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

//ģ��ʵ��strncpy
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

//ģ��ʵ��strncat
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
//�Ƚϵ���������ַ���һ������һ���ַ�����������num���ַ�ȫ���Ƚ���
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abciuf";
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	return 0;
//}



//strstr - �ַ�������
//char * strstr ( const char *str1, const char * str2);
//int main()
//{
//	char arr1[] = "uhusdihdf";
//	char arr2[] = "sdih";
//	char* ret = strstr(arr1, arr2);//����s�ĵ�ַ
//	if (ret == NULL)
//		printf("�Ҳ���\n");
//	else
//		printf("%s\n", ret);;
//	return 0;
//}

//ģ��ʵ��strstr
//������ⷨ
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
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//strtok
//char * strtok ( char * str, const char * sep );
//sep�����Ǹ��ַ����������������ָ������ַ�����
//��һ������ָ��һ���ַ�������������0�����߶����sep�ַ�����һ�����߶���ָ����ָ�ı�ǡ�
//strtok�����ҵ�str�е���һ����ǣ��������� \0 ��β������һ��ָ�������ǵ�ָ�롣
//��ע��strtok������ı䱻�������ַ�����������ʹ��strtok�����зֵ��ַ���һ�㶼����ʱ���������ݲ��ҿ��޸ġ���
//strtok�����ĵ�һ��������Ϊ NULL ���������ҵ�str�е�һ����ǣ�strtok���������������ַ����е�λ�á�
//strtok�����ĵ�һ������Ϊ NULL ����������ͬһ���ַ����б������λ�ÿ�ʼ��������һ����ǡ�
//����ַ����в����ڸ���ı�ǣ��򷵻� NULL ָ�롣
//int main()
//{
//	char arr[] = "963543574@qq.com";
//	//963543574 qq com
//	char* p = "@.";//strtok��������е�@��.�ĳ�\0
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
//���ش����룬����Ӧ�Ĵ�����Ϣ��
//C���ԵĿ⺯��������ʱ������������󣬻Ὣ���������һ������errno��
//��������һЩ���֣�1��2��3��4��5
//��Ҫ�������뷭��ɴ�����Ϣ
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

//ʵ����ʹ��strerror�����
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("���ļ�ʧ��\n");
//		printf("%s\n", strerror(errno));
//	}
//	else
//		printf("���ļ��ɹ�\n");
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//�ַ����ຯ��
//����     |������Ĳ����������������ͷ�����
//iscntrl  |�κο����ַ�
//isspace  |�հ��ַ����ո� ������ҳ��\f��������'\n'���س���\r�����Ʊ��'\t'���ߴ�ֱ�Ʊ��'\v'
//isdigit  |ʮ�������� 0~9
//isxdigit |ʮ���������֣���������ʮ�������֣�Сд��ĸa~f����д��ĸA~F
//islower  |Сд��ĸa~z
//isupper  |��д��ĸA~Z
//isalpha  |��ĸa~z��A~Z
//isalnum  |��ĸ�������֣�a~z, A~Z, 0~9
//ispunct  |�����ţ��κβ��������ֻ�����ĸ��ͼ���ַ����ɴ�ӡ��
//isgraph  |�κ�ͼ���ַ�
//isprint  |�κοɴ�ӡ�ַ�������ͼ���ַ��Ϳհ��ַ�



//�ж��Ƿ���Сд�ַ�
//int main()
//{
//	char ch = 'a';
//	int ret = islower(ch);
//	if (ret != 0)
//		printf("��Сд�ַ�\n");
//	else
//		printf("����Сд�ַ�\n");
//	return 0;
//}

//�ж��Ƿ��������ַ�
//int main()
//{
//	char ch = 'q';
//	int ret = isdigit(ch);
//	if (ret != 0)
//		printf("�������ַ�\n");
//	else
//		printf("���������ַ�\n");
//	return 0;
//}



//�ַ���Сдת��
//int main()
//{
//	int ret = toupper('a');
//	printf("%c\n", ret);
//	return 0;
//}

//�����������е�Сд��ĸת���ɴ�д��ĸ�����ı�ԭ����
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

//�����������е�Сд��ĸת���ɴ�д��ĸ���ı�ԭ����
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



//memcpy - �ڴ濽������
//void * memcpy ( void * destination, const void * source, size_t num );
//����memcpy��source��λ�ÿ�ʼ�����num���ֽڵ����ݵ�destination���ڴ�λ�á�
//������������� '\0' ��ʱ�򲢲���ͣ������
//���source��destination���κε��ص������ƵĽ������δ����ġ�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//memcpy(arr2, arr1, 8);//8���ֽ���
//	memcpy(arr2, arr1 + 3, 20);
//	return 0;
//}



//ģ��ʵ��memcpy
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



//memmove - ʵ�����ҿ���
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr1, arr1 + 2, 20);
//	return 0;
//}

//memmove��ģ��ʵ��
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//��ǰ��󿽱�
//		while (num--)
//		{
//			*(char*)dest = *(char*)src;
//			dest = (char*)dest + 1;
//			src = (char*)src + 1;
//		}
//	}
//	else
//	{
//		//�Ӻ���ǰ����
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



//memcmp - �Ƚϴ�ptr1��ptr2ָ�뿪ʼ��num���ֽ�
//int memcmp ( const void * ptr1, const void* ptr2,size_t num );
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	int arr2[] = { 1,2,3,5 };
//	int ret = memcmp(arr1, arr2, 13);
//	printf("%d", ret);
//	return 0;
//}



//memset - �ڴ����ú���
//���ֽ�Ϊ��λ�������ڴ��е�����
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

