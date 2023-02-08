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

#define DEFAULT_SIZE 3//Ĭ�ϴ�СΪ3
#define INC_SIZE 2//ÿ������2


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
	Peoinfo* data;//ָ������ϵ�˵Ŀռ�
	int size;//ͨѶ¼Ŀǰ�Ѵ����ϵ�˵�����
	int cacpcity;//��ǰͨѶ¼���������
}Contact;

void Init_Contact(Contact* pc);//��ʼ��ͨѶ¼
void Destroy_Contact(Contact* pc);//���ٻ�ͨѶ¼
void Add_Contact(Contact* pc);//������ϵ��
void Del_Contact(Contact* pc);//ɾ����ϵ��
void Search_Contact(const Contact* pc);//������ϵ��
void Modify_Contact(Contact* pc);//�޸���ϵ��
void Show_Contact(const Contact* pc);//��ʾ��ϵ��
void Clear_Contact(Contact* pc);//�����ϵ��
void Sort_Contact(Contact* pc);//������ϵ��

void Save_Contact(Contact* pc);//����ͨѶ¼����Ϣ���ļ���
void Load_Contact(Contact* pc);//�����ļ���Ϣ��ͨѶ¼

