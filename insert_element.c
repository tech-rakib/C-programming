 #include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    //array size ek baray nite hobe karon 
    //ekta new element rakhte hobe 
    for(int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    int index,value;
    scanf("%d %d",&index,&value);
    // nicher loop e i=n theke suru kora hoice
    // but index to n-1 hoy but ekhane je element
    // ta insesrt hobe seta  insesrt hole index ekta
    // bere jabe mane index array er size er soman hoye 
    // jabe tai i=n newa.i>=index+1 mane holo je
    // index e value add kora hobe tar porer index porjonto
    // loop chalate hobe mane je index e insert korbo 
    // tar poroboroti index porjonto loop cholbe
    // last index theke suru kore ...
    for(int i=n;i>=index+1;i--)
    {
        a[i]=a[i-1];
    }
    a[index]=value;
    for(int i=0;i<=n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}