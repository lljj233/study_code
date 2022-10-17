//https://www.nowcoder.com/practice/61a0f16117484d219b59c62224b33b1c?tpId=107&&tqId=33365&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main()
{
    int x=0;
    int y=0;
    scanf("%d",&x);
    if(x<0)
      y=1;
    else if(x==0)
      y=0;
    else
      y=-1;  
    printf("%d",y); 
    return 0;
}