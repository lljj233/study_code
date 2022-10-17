//https://www.nowcoder.com/practice/34d3911bf2fd48a285f6396e886a1259?tpId=107&&tqId=33299&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main()
 {
    int a=0;
    int b=0;
    int quotient=0;
    int remainder=0;
    scanf("%d%d",&a,&b);
    quotient=a/b;
    remainder=a%b;
    printf("%d %d",quotient,remainder);
    return 0;
}