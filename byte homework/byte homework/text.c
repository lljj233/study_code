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


//#include<stdio.h>
//int main()
//{
//	char acX[] = "abcdefg";
//	char acY[] = { 'a','b','c','d','e','f','g' };
//
//	printf("sizeof(acX)=%d\n", sizeof(acX));//�������ܹ���8��Ԫ�أ��ֱ��ǣ�'a','b','c','d','e','f','g','\0'
//	printf("sizeof(acY)=%d\n", sizeof(acY));//�������ܹ���7��Ԫ�أ��ֱ��ǣ�'a','b','c','d','e','f','g'
//
//	printf("strlen(acX)=%d\n", strlen(acX));
//	printf("strlen(acY)=%d\n", strlen(acY));
//	//strlen������ַ������ȣ�����Ԫ�ؿ�ʼ���㣬������\0��ֹͣ������acY����û��'\0��������strlen(acY)�Ľ���Ǹ����ֵ
//	return 0;
//}


//ʵ��һ�������������ð������
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



//����һ������ n ���������32λ�����Ʊ�ʾ��1�ĸ��������и����ò����ʾ��
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


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
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


//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ����У��ж��ٸ�λ(bit)��ͬ�� 
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


//��̨�����⡣ÿ�ο���ѡ����һ�׻���ף����м����߷�
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


//����һ��������n,���һ��Ϊ������n��ʾΪ�����ƵĽ��
//#include<stdio.h>
//�ǵݹ�
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
//�ݹ�
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


//ɾ�������е�ָ������
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


//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
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



//дһ����������������һ���ַ��������ݡ�
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




//��ӡ����
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




//���0��100000֮������С�ˮ�ɻ������������
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


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
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



//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
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



//�ж�һ��n�׷����Ƿ�Ϊ�����Ǿ���
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



//�ж����������Ƿ����
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



//���������������е����У����������кϲ�Ϊһ���������в������
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0; j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n && j < m)
//        for (; j < m; j++)
//            printf("%d ", arr2[j]);
//    else
//        for (; i < n; i++)
//            printf("%d ", arr1[i]);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr1[1000] = { 0 };
//    int arr2[1000] = { 0 };
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0; j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n)
//    {
//        while (j < m)
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    else
//    {
//        while (i < n)
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//    }
//    return 0;
//}



//��������ʹ����ȫ����λ��ż��ǰ�档
//#include<stdio.h>
//void move(int arr[], int n)
//{
//	int* left = arr;
//	int* right = arr + n - 1;
//	while (left < right)
//	{
//		if ((*left) % 2 != 0)
//			left++;
//		else if ((*right) % 2 == 0)
//			right--;
//		else
//		{
//			int tem = *left;
//			*left = *right;
//			*right = tem;
//		}
//	}
//}
//int main()
//{
//	int arr[20] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	move(arr, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



//�ж�һ�����������Ƿ�����������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int count = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[0] <= arr[1])
//		{
//			count++;
//			if (arr[i] > arr[i + 1])
//				break;
//		}
//		else
//		{
//			count++;
//			if (arr[i] < arr[i + 1])
//				break;
//		}
//	}
//	if (count == n)
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag1 = 0;//�������
//	int flag2 = 0;//��ǽ���
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i - 1] < arr[i])
//		{
//			flag1 = 1;
//		}
//		else
//		{
//			flag2 = 1;
//		}
//	}
//	if (flag1 + flag2 == 2)
//	{
//		printf("unsorted\n");
//	}
//	else
//	{
//		printf("sorted\n");
//	}
//	return 0;
//}



//ģ��ʵ�ֿ⺯��strcpy(�����ַ���)
//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
////void my_strcpy1(char* dest, char* src)
////{
////	while (*src != '\0')
////	{
////		*dest = *src;
////		src++;
////		dest++;
////	}
////	*dest = *src;
////}
////
//////��my_strcpy1�����Ż�
////void my_strcpy2(char* dest, char* src)
////{
////	while (*dest++ = *src++)//'\0'��ASCIIֵΪ0���˳�ѭ��
////	{
////		;
////	}
////}
////
//////��my_strcpy2�����Ż�
////void my_strcpy3(char* dest, char* src)
////{
////	/*if (dest == NULL || src == NULL)
////	{
////		return;
////	}*/
////
////	/*assert(src != NULL);
////	assert(dest!= NULL);*/
////	assert(src && dest);
////	//����ָ�����Ч��
////	//assert����Է�һ������ʽ������ʽ���Ϊ���򱨴����������·���
////
////	while (*dest++ = *src++)
////	{
////		;
////	}
////}
//
////��my_strcpy3�����Ż�
//void my_strcpy4(char* dest, const char* src)
//{
//	assert(src && dest);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//int main()
//{
//	/*char arr1[20] = "xxxxxxxxxxx";
//	char arr2[] = "hello";
//
//	char arr3[10] = { 0 };
//	char* p1 = NULL;*/
//
//	char arr4[20] = { 0 };
//	char* p2 = "hello";
//
//	/*my_strcpy2(arr1, arr2);
//	my_strcpy3(arr3, p1);*/
//	my_strcpy4(p2, arr4);
//
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(src && dest);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = { 0 };
//	char* p = "hello";
//	printf("%s\n", my_strcpy(arr1, p));
//	return 0;
//}



//ģ��ʵ�ֿ⺯��strlen
//strlen���ص���size_t,�޷��ŵ�����
//#include<stdio.h>
//#include<assert.h>
//unsigned int my_strlen(const char* p)
//{
//	assert(p!=NULL);
//	unsigned int len = 0;
//	while (*p++!='\0')
//	{
//		len++;
//	}
//	return len;
//}
//int main()
//{
//	char arr[] = "hello";
//	printf("%d", my_strlen(arr));
//	return 0;
//}



//ʵ�ֽ�һ�仰�ĵ��ʽ�������
//#include <stdio.h>
//#include <string.h>
//void reverse(char* left, char* right)
//{
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
//	char arr[100] = { 0 };
//	gets(arr);
//	char* cur = arr;
//	while (*cur)
//	{
//		char* start = cur;
//		char* end = cur;
//		while (*end != ' ' && *end != '\0')
//		{
//
//			end++;
//		}
//		reverse(start, end - 1);
//		if (*end != '\0')
//			cur = end + 1;
//		else
//			cur = end;
//	}
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	printf("%s\n", arr);
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//#include<assert.h>
//void reverse(char* left, char* right)
//{
//	assert(left && right);
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
//	char arr[100] = { 0 };
//	gets(arr);
//	int len = strlen(arr);
//	reverse(arr, arr + len - 1);
//	char* cur = arr;
//	while (*cur)
//	{
//		char* start = cur;
//		while (*cur != ' ' && *cur != '\0')
//		{
//			cur++;
//		}
//		reverse(start, cur - 1);
//		if (*cur != '\0')
//			cur++;
//	}
//	printf("%s", arr);
//}


//������������С������
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	int i = 1;
//	while (1)
//	{
//		if ((a * i) % b == 0)
//		{
//			break;
//		}
//		i++;
//	}
//	printf("%d", a * i);
//	return 0;
//}



//������
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if ((a * b * c * d * e == 120) && (a + b + c + d + e == 15))
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}



//������
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ���:
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
//#include<stdio.h>
//int main()
//{
//	char killer = '0';
//	for (killer = 'A'; killer < 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("������%c\n", killer);
//		}
//	}
//	return 0;
//}



//��ӡ�������
//#include<stdio.h>
//#define N 4
//int main()
//{
//	int arr[100][100] = { 0 };
//	int x = 0;
//	int y = 0;
//	for (x = 1; x <= N; x++)
//	{
//		for (y = 1; y <= x; y++)
//		{
//			if (y == 1 || y == x)
//			{
//				arr[x][y] = 1;
//				printf("%d ", arr[x][y]);
//			}
//			else
//			{
//				arr[x][y] = arr[x - 1][y - 1] + arr[x - 1][y];
//				printf("%d ", arr[x][y]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//#include<stdio.h>
//void find_key(int a[3][3], int row, int col, int key)
//{
//	int i = 0;//�ӵ�0�п�ʼ��
//	int j = col - 1;//�ӵ�0�е����һλ��ʼ��
//	while (i < row && j >= 0)//����С�ڵ�row��,���ڵ��ڵ�0λ
//	{
//		if (key > a[i][j])//�������һλ������+1
//		{
//			i++;
//		}
//		else if (key < a[i][j])//С�����һλ��λ����ǰ-1
//		{
//			j--;
//		}
//		else 
//		{
//			printf("�ҵ���,�±�Ϊ%d %d\n", i, j);
//			return;
//		}
//	}
//	printf("�Ҳ���");
//	return 0;
//}
//
//int main()
//{
//	int a[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int key;
//	scanf("%d", &key);
//	find_key(a, 3, 3, key);
//	return 0;
//}



//ʵ��һ�����������������ַ����е�k���ַ���
//#include<stdio.h>
//void levorotation(char* p, int s, int n)
//{
//	int i = 0, j = 0;
//	for (; j < n; j++)
//	{
//		char a = *(p + 0);
//		for (i = 1; i < s; i++)
//		{
//			*(p + i - 1) = *(p + i);
//		}
//		*(p + i - 1) = a;
//	}
//}
//int main() {
//	char arr[] = { 'A', 'B', 'C', 'D', 'E' };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	levorotation(arr, sz, k);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}



//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//#include <stdio.h>
//#include <string.h>
//int is_left_revolve(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	strncat(str1, str1, len1);
//	char* ret = strstr(str1, str2);
//	if (ret == NULL) 
//		return 0;
//	else 
//		return 1;
//}
//int main() {
//	char arr1[30] = "AABCD";
//	char arr2[30] = " BCDAA";
//	int ret = is_left_revolve(arr1, arr2);
//	if (ret == 1) 
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}



//һ��������ֻ�����������ǳ���һ�Σ������������ֶ����������Ρ�
//��дһ�������ҳ�������ֻ����һ�ε����֡�
//#include<stdio.h>
//void Find(const int* arr, size_t num)
//{
//	for (int i = 0; i < num; i++)
//	{
//		int flag = 1;
//		for (int j = 0; j < num; j++)
//		{
//			if (j == i)
//			{
//				continue;
//			} 
//			if (arr[j] == arr[i])
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", arr[i]);
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,1,4,4,5,6,8,8,9,9 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Find(arr, size);
//	return 0;
//}



//ģ��ʵ��atoi - ��һ���ַ���ת����һ������
//#include <stdio.h>
//#include <stdlib.h>
//#include <assert.h>
//#include <ctype.h>
//enum State
//{
//	VALID,//0
//	INVALID//1
//};
//enum State state = INVALID;//�Ϸ������һ�֣�����Ϊ�Ƿ����������жϽ�Ϊ����
//int my_atoi(const char* str)
//{
//	long long ret = 0;
//	int flag = 1;
//	assert(str);
//	if (*str == '\0')//�ж��Ƿ�Ϊ���ַ���
//	{
//		return 0;
//	}
//	while (isspace(*str))//�����հ��ַ�
//	{
//		str++;
//	}
//	if (*str == '+')//��������
//	{
//		str++;
//	}
//	else if (*str == '-')//��������
//	{
//		str++;
//		flag = -1;
//	}
//	while (isdigit(*str))//��ʼת�������ַ�ֱ���������ַ�
//	{
//		ret = ret * 10 + (*str - '0') * flag;
//		if ((ret > INT_MAX) || (ret < INT_MIN))//�ж��Ƿ�Խ��
//		{
//			return 0;
//		}
//		str++;
//	}
//	if (*str == '\0')//����ֹͣ
//	{
//		state = VALID;
//		return (int)ret;
//	}
//	else            //�����������ַ�
//	{
//		state = VALID;
//		return (int)ret;
//	}
//}
//int main()
//{
//	char* p = "  -135ab78";
//	int ret = my_atoi(p);
//	if (state == VALID)
//	{
//		printf("%d\n", ret);//-12345
//	}
//	return 0;
//}



//дһ���꣬����ṹ����ĳ����������׵�ַ��ƫ�ƣ�������˵��
//offsetof���ʵ��
//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int i;
//	char c2;
//};
//#define OFFSETOF(type,member)   (size_t)&(((type*)0)->member)
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, i));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}



//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������
//#include<stdio.h>
//#define SWAP(x)  x = (((x&0x55555555)<<1)+((x&0xaaaaaaaa)>>1))
//int main()
//{
//	int a = 10;
//	SWAP(a);
//	printf("%d\n", a);
//	return 0;
//}
