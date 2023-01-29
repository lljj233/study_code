#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define ADDRESS_MAX 30
#define TELE_MAX 12


typedef struct People_Information
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char address[ADDRESS_MAX];
	char telephone_number[TELE_MAX];
}Peoinfo;

typedef struct Contact
{
	Peoinfo data[MAX];//通讯录能存放联系人的最大数量
	int size;//通讯录目前已存放联系人的数量
}Contact;

void Init_Contact(Contact* pc);//初始化通讯录
void Add_Contact(Contact* pc);//增加联系人
void Del_Contact(Contact* pc);//删除联系人
void Search_Contact(const Contact* pc);//查找联系人
void Modify_Contact(Contact* pc);//修改联系人
void Show_Contact(const Contact* pc);//显示联系人
void Clear_Contact(Contact* pc);//清空联系人
void Sort_Contact(Contact* pc);//排序联系人

