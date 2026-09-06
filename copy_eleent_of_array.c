 #include<stdio.h>
int main ()
{
    int n;//first array size input
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)//first array input
    {
        scanf("%d",&a[i]);
    }
    int m;//second array size input
    scanf("%d",&m);
    int b[m];
    for(int i=0;i<m;i++)// second array input
    {
        scanf("%d",&b[i]);
    }
    int c[n+m];//copy kore jetay rakhbo seta declar
    for(int i=0;i<n;i++)//first array copy kora 
    {
        c[i]=a[i];
    }
    for(int i=0;i<m;i++) // second array copy kora 
    {
        c[i+n]=b[i];
//  i+n newar karon holo  a array copy kore rakhar pore 
//  a array er size theke ek ghor kom n-1 porjonto jayga
//  niche c array te.0 to n-1 index porjonto value insert   
//  hoice c te .tarpor tahole a array er value dewar pore jokhon 
//  b array er value dite jabo tokhon seta je index theke rakha 
//  suru hobe c array te sei index er value ta a array er size er 
//  soman karon 0 to n-1 porjonto rakha hoice size jodi n hoy 
//  tahole n er value ja sei value tai hobe index er man ar sei index
//  thekei b array er value insert start hobe..i+n mane holo
//  jokhon loop suru hobe i=0 tahole i+n mane i+ a array er size 
//  tahole 0+n hobe jodi a array er size 5 hoy 0 to 4 porjonto index e 
//  value insert sesh ekhon 5 index theke suru hobe tahole i+n
//  dile i=0 hole 5 index e b er first value i=1 hole 6 index e 
//  b er second value evabe insert hote thakbe.
 for(int i=0;i<n+m;i++)//full array print
 {
    printf("%d ",c[i]);
 }


    return 0;
}