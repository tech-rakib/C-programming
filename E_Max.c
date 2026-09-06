#include <stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d", &n);

    int max =  INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        if (max < a)
        {
            max = a;
            
        }
        // else
        // {
        //     printf("%d", a);
        // }
    }
    printf("%d", max);
    return 0;
}