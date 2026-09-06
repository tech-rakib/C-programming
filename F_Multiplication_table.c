 #include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int x;
    for(int i=1; i<=12;i++)
    {
        x=n*i;
        printf("%d * %d = %d\n",n,i,x);
    }
    return 0;
}