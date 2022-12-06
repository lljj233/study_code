//https://www.nowcoder.com/practice/7eb4df4d52c44d309081509cf52ecbc4?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=


#include <stdio.h>

int main()
{
    char ch=0;
    while((scanf("%c",&ch)!=EOF))
    {
        if(ch=='\n')
        {
            continue;
        }
        if(ch=='A'||ch=='a'||ch=='E'||ch=='e'||ch=='I'||ch=='i'||ch=='O'||ch=='o'||           ch=='U'||ch=='u')
        {
            printf("Vowel\n");
        }
        else
        {
            printf("Consonant\n");
        }
    }
}