//https://www.nowcoder.com/practice/a95744270f274a14a8a0dafe10421589?tpId=107&&tqId=33337&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main()
{
    int n = 0;
    int i = 0;
    
    while (scanf("%d", &n) != EOF )
    {
        for (i = 0; i < n; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
