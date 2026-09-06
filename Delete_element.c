 #include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n];
   for(int i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   int index;
   scanf("%d",&index);
   for( int i = index;i<n-1;i++)
   {
    a[i]=a[i+1];
   }
   n--;
//    //n jodi n ke decrement kore nei tar mane holo
//    size n hole index n-1 porjonto loop cholce 
//    mane last index porjonto but last index ke to ignore 
//    kore jete hobe mane i<n-1 porjontro print korte hobe 
//    tai size ek komay dile index ekta emnitei kome jacce last 
//    theke ..othoba print er somoy i<n-1 kore print korleo hobe 

   for(int i =0;i<n;i++)//i<=n-2 dileo cholbe
   {
    printf("%d ",a[i]);
   }
   
    return 0;
}