//https://www.nowcoder.com/practice/56513524333148b38945e1989bc7df4e?tpId=107&&tqId=33324&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main()
 {
    int a=0;
    while(scanf("%d",&a)!=EOF)
    {
      if(a>=0&&a<=100)
      {
          if(a<60)
          {
              printf("Fail\n");
          }
          else
          {
              printf("Pass\n");
          }  
      }
      else
      {
          printf("error");
      }
    }
    return 0;
}