//https://www.nowcoder.com/practice/0b23793ae48a4e6cb7dfff042c959a04?tpId=107&&tqId=33331&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
void fun(int a)
{
    if (a > 0)
    {
        printf("1\n");
    }
    else if (a < 0)
    {
        printf("0\n");
    }
    else
    {
        printf("0.5\n");
    }
}
int main()
{
    int t = 0;
    while (scanf("%d", &t) != EOF)
    {
        fun(t);
    }
    return 0;
}