//  Take an array from input and print 
//  the maximum value of that array.

 #include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
int a[n];
int max=0;
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(int i=0;i<n;i++)
{
 if(max < a[i])
 {
    max = a[i]; 
 }
}
printf("%d",max);
    return 0;
}