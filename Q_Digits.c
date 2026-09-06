 #include <stdio.h>
int main()
{

    int a, b;
    int test_case;
    scanf("%d", &test_case);
    int n;
    for (int i = 1; i <= test_case; i++)
    {
        scanf("%d", &n);
        if( n == 0)
        {
            printf("0");
        }
         while (n != 0)
        // evabe korleo hobe ba do while diye korleo hobe.
        // do
        {
            printf("%d ", n % 10);
            n /= 10;
         }
        //  while (n != 0);
        printf("\n");
    }

    return 0;
}