#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"


void Init_Contact(Contact* pc)
{
	assert(pc);
	pc->size = 0;
	Peoinfo* ptr = (Peoinfo*)calloc(DEFAULT_SIZE, sizeof(Peoinfo));
	if (ptr == NULL)
	{
		perror("InitContact::calloc");
		return;
	}
	pc->data = ptr;
	pc->cacpcity = DEFAULT_SIZE;
	//�����ļ���Ϣ��ͨѶ¼
	Load_Contact(pc);
}

void Destroy_Contact(Contact* pc)
{
	free(pc->data);
	pc->data = NULL;
	pc->cacpcity = 0;
	pc->size = 0;
	pc = NULL;
}

void check_capacity(Contact* pc)
{
	if (pc->size == pc->cacpcity)
	{
		//����
		Peoinfo* ptr = (Peoinfo*)realloc(pc->data, (pc->cacpcity + 2) * sizeof(Peoinfo));
		if (ptr == NULL)
		{
			printf("��������ʧ��\n");
			perror("check_capacity::realloc");
			return;
		}
		pc->data = ptr;
		pc->cacpcity += INC_SIZE;
		printf("���ݳɹ�\n");
	}
}

void Add_Contact(Contact* pc)
{
	assert(pc);
	check_capacity(pc);
	//����һ����ϵ�˵���Ϣ
	printf("������������");
	scanf("%s", pc->data[pc->size].name);
	printf("���������䣺");
	scanf("%d", &pc->data[pc->size].age);
	printf("�������Ա�");
	scanf("%s", pc->data[pc->size].sex);
	printf("������סַ��");
	scanf("%s", pc->data[pc->size].address);
	printf("������绰���룺");
	scanf("%s", pc->data[pc->size].telephone_number);

	pc->size++;

	printf("����ɹ�\n");
}

void Show_Contact(const Contact* pc)
{
	assert(pc);
	printf("-----------------------------\n");
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		printf("������%s\n", pc->data[i].name);
		printf("���䣺%d\n", pc->data[i].age);
		printf("�Ա�%s\n", pc->data[i].sex);
		printf("סַ��%s\n", pc->data[i].address);
		printf("�绰���룺%s\n", pc->data[i].telephone_number);
		printf("-----------------------------\n");
	}
}

int Find_By_Name(const Contact* pc, char name[])
{
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		if (strcmp(pc->data[i].name, name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void Del_Contact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	if (pc->size == 0)
	{
		printf("ͨѶ¼Ϊ�գ��޷�ɾ��\n");
		return;
	}
	//ɾ��һ����ϵ�˵���Ϣ
	printf("������Ҫɾ����ϵ�˵�������");
	scanf("%s", name);
	int ret = Find_By_Name(pc, name);
	if (ret == -1)
	{
		printf("����ϵ�˲�����\n");
		return;
	}
	int i = 0;
	//ɾ��
	for (i = ret; i < pc->size - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("ɾ���ɹ�\n");
}

void Search_Contact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ���ҵ���ϵ�����֣�");
	scanf("%s", name);
	int pos = Find_By_Name(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
		return;
	}
	printf("������%s\n", pc->data[pos].name);
	printf("���䣺%d\n", pc->data[pos].age);
	printf("�Ա�%s\n", pc->data[pos].sex);
	printf("סַ��%s\n", pc->data[pos].address);
	printf("�绰���룺%s\n", pc->data[pos].telephone_number);
	printf("-----------------------------\n");
}

void Modify_Contact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("������Ҫ�޸ĵ���ϵ�����֣�");
	scanf("%s", name);
	int pos = Find_By_Name(pc, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ���ϵ�˲�����\n");
		return;
	}
	printf("������������");
	scanf("%s", pc->data[pos].name);
	printf("���������䣺");
	scanf("%d", &pc->data[pos].age);
	printf("�������Ա�");
	scanf("%s", pc->data[pos].sex);
	printf("������סַ��");
	scanf("%s", pc->data[pos].address);
	printf("������绰���룺");
	scanf("%s", pc->data[pos].telephone_number);

	printf("�޸����\n");
}

void Clear_Contact(Contact* pc)
{
	assert(pc);
	pc->size = 0;
	Peoinfo* ptr = (Peoinfo*)calloc(DEFAULT_SIZE, sizeof(Peoinfo));
	if (ptr == NULL)
	{
		perror("InitContact::calloc");
		return;
	}
	pc->data = ptr;
	pc->cacpcity = DEFAULT_SIZE;
	printf("�����������ϵ��\n");
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((Contact*)e1)->data->name, ((Contact*)e2)->data->name);
}

void Sort_Contact(Contact* pc)
{
	qsort(pc->data, pc->size, sizeof(pc->data[0]), cmp_stu_by_name);
	printf("����ɹ�\n");
}

void Save_Contact(Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		perror("Save_Contact");
	}
	else
	{
		//д����
		int i = 0;
		for (i = 0; i < pc->size; i++)
		{
			fwrite(pc->data + i, sizeof(Peoinfo), 1, pf);
		}
		fclose(pf);
		pf = NULL;
		printf("����ɹ�\n");
	}
}

void Load_Contact(Contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		perror("Load_Contact");
	}
	else
	{
		//������
		Peoinfo tmp = { 0 };
		int i = 0;
		while (fread(&tmp, sizeof(Peoinfo), 1, pf))
		{
			//��������
			check_capacity(pc);
			pc->data[i] = tmp;
			pc->size++;
			i++;
		}
		fclose(pf);
		pf = NULL;
	}
}

