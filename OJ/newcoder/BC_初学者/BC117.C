//https://www.nowcoder.com/practice/ebf04de0e02c486099d78b7c3aaec255?tpId=107&&tqId=33398&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int func(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else 
        return func(n - 2) + func(n - 1);
}
int main()
{
    int n = 0;
    scanf("%d", &n);
    int ret = func(n);
    printf("%d", ret);
    return 0;
}