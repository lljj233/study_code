#define _CRT_SECURE_NO_WARNINGS 11

//#include <stdio.h>

//дһ�����������������Ľϴ�ֵ
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
//    //Ҫ�����get_max����
//    int max = get_max(num1, num2);
//    printf("max = %d\n", max);
//    return 0;
//}




//����һ���༶5��ѧ����5�Ƴɼ������5��ѧ����5�Ƴɼ����ܷ֡�
//���У�ÿ������һ��ѧ����5�Ƴɼ�����������ʾ����Χ0.0~100.0�����ÿո�ָ���
//���У���������˳��ÿ�����һ��ѧ����5�Ƴɼ����ܷ֣�С���㱣��1λ�����ÿո�ָ���
//int main()
//{
//    int i = 0;
//
//    //5��ѧ��
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



//�����
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
////��ӡ�������ѭ��5



//�����
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


//��ӡ100~200֮�������
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




//��ӡ1000�굽2000��֮�������
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


//�����
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



//д���뽫�������������Ӵ�С�����
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


//�����
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



//���9*9�˷��ھ���
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



//��ʮ���������ֵ
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
//	printf("���ֵΪ:%d", max);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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



//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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



//���ֲ���
//��д������һ���������������в��Ҿ����ĳ������
//Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����

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
//			printf("�ҵ����±�Ϊ%d\n", mid);
//			flag = 1;
//			break;
//		}
//	}
//	if (flag == 0)
//	{
//		printf("δ�ҵ�");
//	}
//	return 0;
//}



//���������м��ӡ
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
//		Sleep(1000);  //Sleep������ʵ��˯�ߵĺ�������λ�Ǻ��룬��windows������SҪ��д����linux��sҪСд
//		              //����1000ms��ִ����һ��
//		system("cls");//systemҲ��һ���⺯��,����ִ��ϵͳ���cls�������Ļ��ָ��
//
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}




//ģ���û���¼�龰����ֻ�ܵ�½���Σ������������δ�����˳�����
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };//�ַ����飬���Դ���ַ���
//	int flag = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");//��������Ϊ�ַ�����123456��
//		scanf("%s", password);
//		//�ж������ַ����Ƿ���ȣ�Ҫ����strcmp����������ֱ��ʹ��==
//		//int ret=strcmp(password,"123456");
//		//�����һ���ַ���С�ڵڶ����ַ���������һ��<0������
//		//�����һ���ַ������ڵڶ����ַ���������һ��>0������
//		//�����һ���ַ������ڵڶ����ַ���������0
//		if (strcmp(password, "123456")==0)
//		{
//			printf("������ȷ");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("��%d���������\n",i+1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("�����������������˳�����\n");
//	}
//	return 0;
//}



//��������Ϸ��ʵ��
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//#include<Windows.h>
//void game()
//{
//	  //rand���������������������һ��������ͷ�ļ���stdlib.h
//    //rand�������ص���0-rand_max(32767)��һ�������
//    //rand������ʹ��֮ǰҪʹ��һ��srand�����������������������
//    //srand�����ڳ�����ֻ����һ�μ��ɣ�����Ҫ�ظ�����
//    //c�����У�time���������᷵��ʱ�����ͷ�ļ���time.h�������������������
//
//	int ret = rand() % 100 + 1;
//	int num = 0;
//	while(1)
//	{
//		printf("����������");
//		scanf("%d", &num);
//		if (num > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (num < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("������ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 2:
//			printf("�뿪��Ϸ\n");
//          	break;
//		default:
//			printf("����������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//һ���ػ�����
//ִ�г����60s��ػ�
//�����룺abc����ȡ���ػ�
//shutdown -s -t 60
//shutdown _a   ȡ���ػ�

//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int main()
//{
//	char input[10] = { 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("���Խ���60s��ػ������롰abcȡ���ػ���\n");
//	scanf("%s", input);
//	if (strcmp(input, "abc") == 0)
//	{
//		system("shutdown -a");
//		printf("��ȡ���ػ�");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}



//�������������Լ��
//(1)
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int min = (a > b ? a : b);
//	//�������Լ������a��b�Ľ�Сֵ
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



//ͨ������ʵ��һ����������Ķ��ֲ���
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
//	return -1;//�Ҳ���
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,17,18,19,20,21 };//10
//	//0~9
//	int k = 21;
//	//�ҵ��˾ͷ����±�
//	//�Ҳ�������-1
//	//���������Ԫ�ظ���
//	// 
//	//printf("%d\n", sizeof(arr));//40,���������������Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(arr[0]));//4��������������һ��Ԫ�صĴ�С����λ���ֽ�
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int pos = binary_search(arr, k, sz);
//	if (-1 == pos)
//		printf("�Ҳ���\n");
//	else
//		printf("�ҵ��ˣ��±���:%d\n", pos);
//
//	return 0;
//}


//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��.
//���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19
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


//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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


//�����
//#include <stdio.h>
//int main()
//{
//    int arr[] = { 1,2,(3,4),5 };
//    printf("%d\n", sizeof(arr));
//    return 0;
//}


//�����
//#include <stdio.h>
//int main()
//{
//    char str[] = "hello bit";
//    printf("%d %d\n", sizeof(str), strlen(str));
//    return 0;
//}


//������A�е����ݺ�����B�е����ݽ��н�����������һ����
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



//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
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