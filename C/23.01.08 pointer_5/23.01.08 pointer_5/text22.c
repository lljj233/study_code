#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//һά����ϰ��

//1.sizeof(������)����������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&����������������ʾ�������飬ȡ����������������ĵ�ַ
//3.����֮�⣬���е�����������������Ԫ�صĵ�ַ
//int main()
//{
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//a+0�������һ��Ԫ�صĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(*a));//*a��������Ԫ�أ��������������Ԫ�صĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(a + 1));//a+1������ڶ���Ԫ�صĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(a[1]));//a[1]������ڶ���Ԫ�أ�������ǵڶ���Ԫ�ص��ֽڴ�С
//	printf("%d\n", sizeof(&a));//&a����������ĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(*&a));//&a���������飬*&a��ȡ���������飬Ϊ16
//	printf("%d\n", sizeof(&a + 1));//&a���������飬&a + 1�������������飬ָ�������Ŀռ��ַ��Ϊ4��8
//	printf("%d\n", sizeof(&a[0]));//&a[0]����Ԫ�صĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0] + 1������ڶ���Ԫ�صĵ�ַ��Ϊ4��8
//	return 0;
//}



//�ַ�����ϰ��

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//ÿ���ַ�һ���ֽڣ�Ϊ6
//	printf("%d\n", sizeof(arr + 0));//arr+0��������Ԫ�ص�ַ��Ϊ4��7
//	printf("%d\n", sizeof(*arr));//*arr��������Ԫ�أ��������������Ԫ�صĴ�С��Ϊ1
//	printf("%d\n", sizeof(arr[1]));//arr[1]������ڶ���Ԫ�أ�Ϊ1
//	printf("%d\n", sizeof(&arr));//&arr��ȡ����������ĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(&arr + 1));//&arr��ȡ����������ĵ�ַ��&arr + 1�������������飬ָ�������Ŀռ��ַ��Ϊ4��8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1)������ڶ���Ԫ�صĵ�ַ��Ϊ4��8
//	return 0;
//}

//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", strlen(arr));//���ֵ����ΪҪ��'\0'��λ��
//	printf("%d\n", strlen(arr + 0));//���ֵ��ͬ��
//	printf("%d\n", strlen(*arr));//*arr��������Ԫ�أ��൱��strlen('a')��strlen(97),�Ƿ�����
//	printf("%d\n", strlen(arr[1]));//arr[1]������ڶ���Ԫ�أ�ͬ�ϣ��Ƿ�����
//	printf("%d\n", strlen(&arr));//���ֵ��&arr��ȡ�������ַ��ͬ��һ��
//	printf("%d\n", strlen(&arr + 1));//���ֵ��&arr + 1��������������ĵ�ַ���Ƿ�����
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ��&arr[0] + 1������ڶ���Ԫ�ص�ַ������Ҫ��'\0'��λ��
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";//�����СΪ7��[a,b,c,d,e,f,\0]
//	printf("%d\n", sizeof(arr));//���������������ֽڴ�С��Ϊ7
//	printf("%d\n", sizeof(arr + 0));//arr + 0��������Ԫ�ص�ַ���������������Ԫ�ص�ַ���ֽڴ�С��Ϊ4��8
//	printf("%d\n", sizeof(*arr));//*arr��������Ԫ����Ԫ�أ��������������Ԫ�ص��ֽڴ�С��Ϊ1
//	printf("%d\n", sizeof(arr[1]));//arr[1]������ڶ���Ԫ�أ�ͬ�ϣ�Ϊ1
//	printf("%d\n", sizeof(&arr));//&arrȡ����������ĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(&arr + 1));//&arr��ȡ����������ĵ�ַ��&arr + 1�������������飬ָ�������Ŀռ��ַ��Ϊ4��8
//	printf("%d\n", sizeof(&arr[0] + 1));//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ��Ϊ4��8
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", strlen(arr));//arr��������Ԫ�صĵ�ַ��strlen����Ԫ�ص�ַ��ʼͳ��\0֮ǰ���ֵ��ַ�������Ϊ6
//	printf("%d\n", strlen(arr + 0));//arr + 0��������Ԫ�صĵ�ַ,ͬ��
//	printf("%d\n", strlen(*arr));//*arr��������Ԫ�أ��൱��strlen('a')��strlen(97),�Ƿ�����
//	printf("%d\n", strlen(arr[1]));//����ͬ��
//	printf("%d\n", strlen(&arr));//&arrΪ����ĵ�ַ��ҲΪ������Ԫ�ص�ַͬ��һ����Ϊ6
//	printf("%d\n", strlen(&arr + 1));//���ֵ��&arr + 1�����������飬�����İ���\0
//	printf("%d\n", strlen(&arr[0] + 1));//(&arr[0] + 1������ڶ���Ԫ�صĵ�ַ��strlen�ӵڶ���Ԫ�ص�ַ��ʼͳ��\0֮ǰ���ֵ��ַ�������Ϊ5
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//p��ָ���������СΪ4��8�ֽ�
//	printf("%d\n", sizeof(p + 1));//p+1�ǵڶ���Ԫ�صĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(*p));//p��ŵ�����Ԫ�صĵ�ַ��*p������Ԫ�أ����������Ԫ�ص��ֽڣ�Ϊ1
//	printf("%d\n", sizeof(p[0]));//p[0]����*(p+0),Ҳ����*p��ͬ��
//	printf("%d\n", sizeof(&p));//&p�Ǵ��p�ĵ�ַ���Ƕ���ָ�룬Ϊ4��8
//	printf("%d\n", sizeof(&p + 1));//&p + 1������p������ĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(&p[0] + 1));//&p[0]��������Ԫ�ص�ַ��&p[0] + 1�ǵڶ���Ԫ�صĵ�ַ��Ϊ4��8
//	return 0;
//}

//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", strlen(p));//p��ŵ���a�ĵ�ַ����a����ֱ��\0,Ҳ�������ַ������ȣ�Ϊ6
//	printf("%d\n", strlen(p + 1));//p+1��b�ĵ�ַ����b����ֱ��\0��Ϊ5
//	printf("%d\n", strlen(*p));//*p�����ַ�a���Ƿ�����
//	printf("%d\n", strlen(p[0]));//ͬ�ϣ��Ƿ�����
//	printf("%d\n", strlen(&p));//���ֵ��&p��p���ָ���������ʼ��ַ��ȡ����\0��λ��
//	printf("%d\n", strlen(&p + 1));//���ֵ��&p+1������p�����ĵ�ַ������ͬ��
//	printf("%d\n", strlen(&p[0] + 1)); //&p[0] + 1��b�ĵ�ַ����b����ֱ��\0��Ϊ5
//	return 0;
//}



//��ά����ϰ��

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//12*4=48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//a[0]�ǵ�һ�е���������������Ǹ�������Ĵ�С��4*4=16
//	printf("%d\n", sizeof(a[0] + 1));//a[0]��������Ԫ�صĵ�ַ��Ҳ����a[0][0],a[0] + 1����a[0][1]�ĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(*(a[0] + 1)));//*(a[0] + 1)�ǵ�һ�еڶ���Ԫ�أ�������Ǹ�Ԫ�صĴ�С��Ϊ4
//	printf("%d\n", sizeof(a + 1));//a��a[0]�ĵ�ַ��a+1���ǵڶ��еĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(*(a + 1)));//*(a + 1)�ǵڶ��У�������ǵڶ��еĴ�С��Ϊ16
//	printf("%d\n", sizeof(&a[0] + 1));//&a[0] + 1�ǵڶ��еĵ�ַ��Ϊ4��8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//*(&a[0] + 1)�ǵڶ��еĵ�ַ�����ã�������ǵڶ��еĴ�С��Ϊ16
//	printf("%d\n", sizeof(*a));//*a�Ƕ�������Ԫ�ص�ַ�����ã�Ҳ���ǵ�һ�У�Ϊ16
//	printf("%d\n", sizeof(a[3]));//���������ڵ����С���ôa[3]�ǵ����е���������Ϊ16
//	return 0;
//}




//ָ�������

//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int* ptr = (int *)(&a+1);
//	printf("%d %d", *(a + 1), *(ptr - 1));
//	return 0;
//}

//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//  p = (struct Test*)0x1000000;
//	printf("%p\n", p + 0x1);//0x00100014
//	printf("%p\n", (unsigned long)p + 0x1);//0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);//0x00100004
//	return 0;
//}

//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}

//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}