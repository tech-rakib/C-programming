 #include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int index;
    int value;
    scanf("%d %d",&index,&value);
    
//    nicher for loop er kahini
 //jehetu je index e value insert korbo 
//     tar ek index age porjonto mane 3 index
//     e insert korte chaile index 4 porjont loop 
//     cholle index 3 er man ek ghor right shift 
//     hoye index 4 e chole gelo then index 3 faka 
//     hoye gelo tokhon setay new value insert kora 
//     jabe ekhon loop er condition ta hobe 
//     for(int i=n;i>=index+1;i--)
//  mane je index e value rakhbo i sei index er cheye
//  boro ba tar porer index er soman hobe 
//ei logic thik abar jodi 
//  for(int i=n;i>index;i--) ei logic use kori 
//  taw seta thik kaj korbe karon je indexe insert korbo tar 
//  poroborti last index e value ek ghor kore kore 
//  shift hoye jabe jawar pore je index e value dibo 
//  i tar cheye boro mane index+1 hoy index+1 na use korle 
//  i>index use korleo hobe 

//for(int i=n;i>index;i--)
for(int i=n;i>=index+1;i--)
    {
        a[i]=a[i-1];
        
    }
 
    
  a[index]=value;
//   nichr for loop e i =0 theke start hoice sehetu i<n
//   howar kotha cilo but i<=n newa holo karon mul array er
//   size ta holo n but ekghor baray newa hoice tai n porjronto na gele 
//   last index ta bad pore jabe.mane hoiolo jodi array er size 3 hoy 
//   tahole i=0;i<n;i++ mane 2 porjonto gelei hobe but ekghor
//   barano hoice ekta value insert er jonno tai i=0;i<=n;i++ porjonto 
//   gele tobei last index ta print hobe 
    for(int i=0;i<=n;i++)
    {   
        printf("%d ",a[i]);
         
    }
    return 0;
    
}