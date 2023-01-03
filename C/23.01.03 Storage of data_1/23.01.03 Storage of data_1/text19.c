#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//在计算机系统中，数值一律用补码来表示和存储

//int main()
//{
//	int a = 20;
//	int b = -10;
//
//	// 20是正数，原码，反码，补码都一样
//	// 00000000 00000000 00000000 00010100 - 原码
//	// 00000000 00000000 00000000 00010100 - 反码
//	// 00000000 00000000 00000000 00010100 - 补码
//	// 00 00 00 14 - 十六进制
//	// 实际上存储的是 14 00 00 00
//
//	// -10是负数
//	// 10000000 00000000 00000000 00001010 - 原码
//	// 11111111 11111111 11111111 11110101 - 反码（符号位不变，其余位按位取反）
//	// 11111111 11111111 11111111 11110110 - 补码
//	// ff ff ff f6 - 十六进制
//	// 实际上存储的是 f6 ff ff ff
//	return 0;
//}


//假设一个地址为0x 11 22 33 44
//          高位             低位  
//大端存储（大端字节序存储）：11 22 33 44 - 高位字节数据放在低地址处
//小端存储（小端字节序存储）：44 33 22 11 - 低位字节数据放在低地址处
//int main()
//{
//	int a = 0x11223344;
//	return 0;
//}



//通过代码判断是大端存储还是小端存储

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端存储");
//	}
//	else
//	{
//		printf("大端存储");
//	}
//	return 0;
//}

//int check_sys()//如果是小端存储返回1，大端存储返回0
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int ret = check_sys();
//	if(ret==1)
//		printf("小端存储");
//	else
//		printf("大端存储");
//	return 0;
//}

//int check_sys()//如果是小端存储返回1，大端存储返回0
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端存储");
//	else
//		printf("大端存储");
//	return 0;
//}