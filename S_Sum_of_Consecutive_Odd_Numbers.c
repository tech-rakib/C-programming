 #include<stdio.h>
int main ()
{
    int a,b;
    int odd=0;
    int test_case;
    scanf("%d",&test_case);
    for(int i=1;i<=test_case;i++)
    {
scanf("%d %d ",&a,&b);
for(int j = a; j<=b; j++)
    
if( j%2 ==1)
{
 odd=odd+j;
}
    }
    printf("%d\n",odd);
    
    return 0;
}