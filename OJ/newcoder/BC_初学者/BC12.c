//https://www.nowcoder.com/practice/0fae60c3b5c64699b7c0f031c2187dde?tpId=107&rp=1&ru=%2Fta%2Fbeginner-programmers&qru=%2Fta%2Fbeginner-programmers%2Fquestion-ranking&difficulty=&judgeStatus=&tags=&title=&sourceUrl=&gioEnter=menu

#include <stdio.h>

int main() 
{
   char a=0;
   scanf("%c",&a);
   int i=0;
   int j=0;
   for(i=0;i<5;i++)
   {
       for(j=0;j<4-i;j++)
       {
           printf(" ");
       }
       for(j=0;j<=i;j++)
       {
           printf("%c ",a);
       }
       printf("\n");
   }
}