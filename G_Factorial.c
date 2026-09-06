#include <stdio.h>
int main()
{
    long long int fact;
    int test_case;
    scanf("%d", &test_case);
    int x;
    for (int i = 0; i <= test_case; i++)
    {      scanf("%d",&x);
        fact=1;
        for(int j =1;j<=x;j++)
            {
                fact=x*i;
            }
        printf("%lld",fact);
    }
    

    return 0;
}