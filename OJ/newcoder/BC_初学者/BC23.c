//https://www.nowcoder.com/practice/c4ae7bcac7f9491b8be82ee516a94899?tpId=107&&tqId=33304&rp=1&ru=/ta/beginner-programmers&qru=/ta/beginner-programmers/question-ranking

#include <stdio.h>

int main()
{
    int seconds = 0;
    int hours = 0;
    int minutes = 0;
    scanf("%d", &seconds);
    if (seconds > 0 && seconds < 100000000)
    {
        if (seconds > 3600)
        {
            hours = seconds / 3600;

            {
                if (seconds - hours * 3600 > 60)
                {
                    int a = seconds - hours * 3600;
                    minutes = a / 60;
                    seconds = a - minutes * 60;
                    printf("%d ", hours);
                    printf("%d ", minutes);
                    printf("%d ", seconds);
                }
            }
        }
        else
        {
            hours = 0;
            minutes = seconds / 60;
            int b = seconds - minutes * 60;
            seconds = b;
            printf("%d ", hours);
            printf("%d ", minutes);
            printf("%d ", seconds);
        }
    }
    else
    {
        printf("error\n");
    }
    return 0;
}
