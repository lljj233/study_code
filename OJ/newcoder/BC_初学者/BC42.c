//https://www.nowcoder.com/practice/8312e497509a450f968d9a6a2381ce32?tpId=107&&tqId=33323&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main()
 {
    int a=0;
    while(scanf("%d",&a)!=EOF)
    {
      if(a>=0&&a<=100)
      {
          if(a>=90&&a<=100)
          {
              printf("Perfect\n");
          }
          else
          {
              printf("Noperfect\n");
          }  
      }
      else
      {
          printf("error");
      }
    }
    return 0;
}