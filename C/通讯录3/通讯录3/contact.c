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
	//加载文件信息到通讯录
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
		//增容
		Peoinfo* ptr = (Peoinfo*)realloc(pc->data, (pc->cacpcity + 2) * sizeof(Peoinfo));
		if (ptr == NULL)
		{
			printf("增加容量失败\n");
			perror("check_capacity::realloc");
			return;
		}
		pc->data = ptr;
		pc->cacpcity += INC_SIZE;
		printf("增容成功\n");
	}
}

void Add_Contact(Contact* pc)
{
	assert(pc);
	check_capacity(pc);
	//增加一个联系人的信息
	printf("请输入姓名：");
	scanf("%s", pc->data[pc->size].name);
	printf("请输入年龄：");
	scanf("%d", &pc->data[pc->size].age);
	printf("请输入性别：");
	scanf("%s", pc->data[pc->size].sex);
	printf("请输入住址：");
	scanf("%s", pc->data[pc->size].address);
	printf("请输入电话号码：");
	scanf("%s", pc->data[pc->size].telephone_number);

	pc->size++;

	printf("增添成功\n");
}

void Show_Contact(const Contact* pc)
{
	assert(pc);
	printf("-----------------------------\n");
	int i = 0;
	for (i = 0; i < pc->size; i++)
	{
		printf("姓名：%s\n", pc->data[i].name);
		printf("年龄：%d\n", pc->data[i].age);
		printf("性别：%s\n", pc->data[i].sex);
		printf("住址：%s\n", pc->data[i].address);
		printf("电话号码：%s\n", pc->data[i].telephone_number);
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
		printf("通讯录为空，无法删除\n");
		return;
	}
	//删除一个联系人的信息
	printf("请输入要删除联系人的姓名：");
	scanf("%s", name);
	int ret = Find_By_Name(pc, name);
	if (ret == -1)
	{
		printf("该联系人不存在\n");
		return;
	}
	int i = 0;
	//删除
	for (i = ret; i < pc->size - 1; i++)
	{
		pc->data[i] = pc->data[i + 1];
	}
	pc->size--;
	printf("删除成功\n");
}

void Search_Contact(const Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找的联系人名字：");
	scanf("%s", name);
	int pos = Find_By_Name(pc, name);
	if (pos == -1)
	{
		printf("要查找的联系人不存在\n");
		return;
	}
	printf("姓名：%s\n", pc->data[pos].name);
	printf("年龄：%d\n", pc->data[pos].age);
	printf("性别：%s\n", pc->data[pos].sex);
	printf("住址：%s\n", pc->data[pos].address);
	printf("电话号码：%s\n", pc->data[pos].telephone_number);
	printf("-----------------------------\n");
}

void Modify_Contact(Contact* pc)
{
	assert(pc);
	char name[NAME_MAX] = { 0 };
	printf("请输入要修改的联系人名字：");
	scanf("%s", name);
	int pos = Find_By_Name(pc, name);
	if (pos == -1)
	{
		printf("要查找的联系人不存在\n");
		return;
	}
	printf("请输入姓名：");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄：");
	scanf("%d", &pc->data[pos].age);
	printf("请输入性别：");
	scanf("%s", pc->data[pos].sex);
	printf("请输入住址：");
	scanf("%s", pc->data[pos].address);
	printf("请输入电话号码：");
	scanf("%s", pc->data[pos].telephone_number);

	printf("修改完成\n");
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
	printf("已清空所有联系人\n");
}

int cmp_stu_by_name(const void* e1, const void* e2)
{
	return strcmp(((Contact*)e1)->data->name, ((Contact*)e2)->data->name);
}

void Sort_Contact(Contact* pc)
{
	qsort(pc->data, pc->size, sizeof(pc->data[0]), cmp_stu_by_name);
	printf("排序成功\n");
}

void Save_Contact(Contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		perror("Save_Contact");
	}
	else
	{
		//写数据
		int i = 0;
		for (i = 0; i < pc->size; i++)
		{
			fwrite(pc->data + i, sizeof(Peoinfo), 1, pf);
		}
		fclose(pf);
		pf = NULL;
		printf("保存成功\n");
	}
}

void Load_Contact(Contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		perror("Load_Contact");
	}
	else
	{
		//读数据
		Peoinfo tmp = { 0 };
		int i = 0;
		while (fread(&tmp, sizeof(Peoinfo), 1, pf))
		{
			//考虑增容
			check_capacity(pc);
			pc->data[i] = tmp;
			pc->size++;
			i++;
		}
		fclose(pf);
		pf = NULL;
	}
}

