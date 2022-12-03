//https://www.nowcoder.com/practice/cd052308a1c44a88ad00255f312c3e14?tpId=107&tags=&title=&difficulty=0&judgeStatus=0&rp=1&sourceUrl=

#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[50] = { 0 };
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int j = 0;
    for (j = 0; j < n - 1; j++)
    {
        for (i = 0; i < n - j -1; i++)
        {
            if (arr[i] < arr[i + 1])
            {
                int tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}