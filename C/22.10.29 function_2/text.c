#define _CRT_SECURE_NO_WARNINGS 1

//�⺯��

//strcpy����  �����ַ�������
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "Hello World";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	char* ret = strcpy(arr1, arr2);
//	printf("%s\n", ret);
//	return 0;
//}


//memset  �޸�ǰn���ַ���
//int main()
//{
//	char arr[] = "Hello World";
//	printf("%s\n", arr);
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}


//�Զ��庯��


//#include<stdio.h>
//void swap(int* x, int* y)
//{
//    int temp = *x;
//    *x = *y;
//    *y = temp;
//}
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    swap(&a,&b);
//    printf("%d,%d", a, b);
//    //�������õ�ʱ��ʵ�δ��ݸ��βΣ���ʱ�β���ʵ�ε�һ����ʱ���������βε��޸Ĳ�Ӱ��ʵ��
//    return 0;
//}


//��������ֵ��дʱĬ�Ϸ���int����,Ҫд����Ƿ��з���ֵ���Ƿ���Ҫ����
//#include<stdio.h>
//test()
//{
//	printf("avc\n");
//}
//int main()
//{
//	int a = test();
//	printf("%d", a);
//	return 0;
//}


//��ʽ����  ��һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//#include<stdio.h>
//int main()
//{
//	printf("%d", printf("%d", printf("%d", 58)));//printf��������ֵ�Ǵ�ӡ����Ļ�ϵ��ַ�����
//	return 0;
//}


//�����������Ͷ���
//����Ҳ��һ�����������
//#include<stdio.h>
//int add(int x, int y);//����������
//
//int mul(int x, int y)//�����Ķ���
//{
//	return x * y;
//}
//
//int main()
//{
//	int a = add(4, 5);
//	int b = mul(4, 5);
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}