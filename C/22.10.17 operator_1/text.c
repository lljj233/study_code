#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//int main()
//{
//	int a = 17 / 4;
//	float b = 17 / 4;//���bΪ����
//	float c = 17 / 4.0;//Ҳ������17.0/4��17.0/4.0
//	//int d = 17.0 % 4.0;����ȡ�ࣨȡģ�����������߱���������
//	int d = 17 % 4;
//
//	printf("a=%d\n", a);
//	printf("b=%f\n", b);
//	printf("c=%f\n", c);
//	printf("d=%d\n", d);
// 
//	return 0;
//}


//int main()
//{
//	int a = 5;
//	float b = 1.1f;
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(b));
//	printf("%d\n", sizeof(float));
//
//	return 0;
//}



//int main()
//{
//	int flag1 = 3;
//	int flag2 = 0;
//	if (flag1)
//	{
//		printf("right\n");
//	}
//
//	if (!flag2)
//	{
//		printf("wrong\n");
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 10;
//
//	a = c++;//����++����ʹ�ã���++���൱��int a = c;c = c + 1;
//	b = ++c;//ǰ��++����ǰ�ã���++���൱��c = c + 1;int a = c;
//
//	printf("a=%d\n", a);//10
//	printf("c=%d\n", c);//12
//
//	return 0;
//}



//int main()
//{
//	//int a = 3.14;�������Ͳ���ͬ
//	int a = (int)3.14;//ֻȡ��������
//	printf("a=%d", a);//��ȷ��ǿ������ת��
//	return 0;
//}



//�߼�������
//&& �߼��루������  ����ͬʱΪ���Ϊ��
//|| �߼��򣨣�����  ����ͬʱΪ�ٲ�Ϊ��
//int main()
//{
//	int a = 3;
//	int b = 6;
//	int c = 0;
//	int d = 0;
//
//	if (a && b)
//	{
//		printf("ok\n");
//	}
//	if (a && c)
//	{
//		printf("okk\n");
//	}
//	if (a || b)
//	{
//		printf("okkk\n");
//	}
//	if (a || c)
//	{
//		printf("okkkk");
//	}
//	if (c && d)
//	{
//		printf("okkkkk");
//	}
//
//	return 0;
//}



//����������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int m = 0;
//	scanf("%d %d", &a, &b);
//	m = (a > b ? a : b);
//	//�൱��
//	/*if (a > b)
//		m = a;
//	if (a < b)
//		m = b;*/
//	printf("m=%d\n", m);
//	return 0;
//}


//void copy()
//{
//	printf("ABCD\n");
//}
//
//int main()
//{
//	copy();//()Ϊ�������ò�����
//	return 0;
//}



//int main()
//{
//	int arr[3] = { 1,2,3 };
//	printf("%d\n", arr[2]);//[]Ϊ�±����ò�����
//	return 0;
//}