//https://www.nowcoder.com/practice/f05358b9e8164b27871c87d3097f4dab?tpId=107&&tqId=33330&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>
int main()
{
    int num1 = 0;
    int num2 = 0;
    while( scanf("%d %d", &num1, &num2)!=EOF)
    {
      if(num1==num2)
        {
          printf("%d",num1);
          printf("=");
          printf("%d\n",num2);
        }
      else if(num1>num2)
        {
          printf("%d",num1);
          printf(">");
          printf("%d\n",num2);
        }
      else
        {
          printf("%d",num1);
          printf("<");
          printf("%d\n",num2);
        }
    }
    return 0;
}