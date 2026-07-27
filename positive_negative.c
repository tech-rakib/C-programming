#include<stdio.h>
int main()
{ int num;
    scanf("%d",&num);
    if(num > 0 )
    {
        printf("Positive Number");
    }
    else if( num == 0 )
    {
        printf("zero");
    }
    else 
    {
        printf("Negative Number");
    }
    return 0 ; 
}