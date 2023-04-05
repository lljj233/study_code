//https://leetcode.cn/problems/valid-parentheses/

#include<assert.h>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef char STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;
	int capacity;
}ST;
void STInit(ST* ps)
{
	assert(ps);
	ps->a = (STDataType*)malloc(sizeof(STDataType) * 4);
	if (ps->a == NULL)
	{
		perror("malloc fail");
		return;
	}
	ps->capacity = 4;

	ps->top = 0;
}

void STDestroy(ST* ps)
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void STPush(ST* ps, STDataType x)
{
	assert(ps);
	if (ps->top == ps->capacity)
	{
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * ps->capacity * 2);
		if (tmp == NULL)
		{
			perror("realloc fail");
			return;
		}
		ps->a = tmp;
		ps->capacity *= 2;
	}
	ps->a[ps->top] = x;
	ps->top++;
}

bool STEmpty(ST* ps)
{
	assert(ps);
	return ps->top == 0;
}

void STPop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));
	ps->top--;
}

int STSize(ST* ps)
{
	assert(ps);
	return ps->top;
}

STDataType STTop(ST* ps)
{
	assert(ps);
	assert(!STEmpty(ps));
	return ps->a[ps->top - 1];
}
bool isValid(char * s){
    ST st;
    STInit(&st);
    while(*s)
    {
        if(*s=='(' || *s=='[' || *s=='{')
        {
            STPush(&st,*s);
        }
        else
        {
            if(STEmpty(&st))
            {
                STDestroy(&st);
                return false;
            }
            char top=STTop(&st);
            STPop(&st);
            if((*s==')' && top!='(')
            ||(*s==']' && top!='[')
            ||(*s=='}' && top!='{'))
            {
                STDestroy(&st);
                return false; 
            }
        }
        s++;
    }
    bool ret=STEmpty(&st);
    STDestroy(&st);
        return ret;
}

