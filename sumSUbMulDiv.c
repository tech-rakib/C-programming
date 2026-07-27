#include<stdio.h>
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int sum=num1+num2;
    int sub=num1-num2;
    int mul=num1*num2;
    int div=num1/num2;
    int mod=num1%num2;
    printf("summation is : %d\n",sum);
    printf("Subtraction is : %d\n",sub);
    printf("Multiplication is : %d\n",mul);
    printf("Division is : %d\n",div);
    printf("Modulus is : %d\n",mod);
    return 0 ; 
}
