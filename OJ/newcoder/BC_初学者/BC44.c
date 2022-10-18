//https://www.nowcoder.com/practice/a8b018667e274af29b5f76a6673450fc?tpId=107&&tqId=33325&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main() 
{
    int a=0;
    while(scanf("%d",&a)!=EOF)
    {
        if(a%2==0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd\n");
        }
    }
   
    return 0;
}