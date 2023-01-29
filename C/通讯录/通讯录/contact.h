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
	Peoinfo data[MAX];//ͨѶ¼�ܴ����ϵ�˵��������
	int size;//ͨѶ¼Ŀǰ�Ѵ����ϵ�˵�����
}Contact;

void Init_Contact(Contact* pc);//��ʼ��ͨѶ¼
void Add_Contact(Contact* pc);//������ϵ��
void Del_Contact(Contact* pc);//ɾ����ϵ��
void Search_Contact(const Contact* pc);//������ϵ��
void Modify_Contact(Contact* pc);//�޸���ϵ��
void Show_Contact(const Contact* pc);//��ʾ��ϵ��
void Clear_Contact(Contact* pc);//�����ϵ��
void Sort_Contact(Contact* pc);//������ϵ��

