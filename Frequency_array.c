// frequency array mane potita element koybar ache 
// seta bolte hobe..
// __ekta frequency_array nam e ekta array nibo 
// ar setar sob index e zero rekhe dibo .input array er element value zero hole frequency_array
// er zero  indez e jeye increment hobe ei logic er pichone mela kahini
// ache just etuktu mone rakhte hobe je 
// frequency-array[ a[i] ] ++;ekhane a[i] ta holo input array
// input array a[i] er value ke ekta varibale e rekheo kora jabe kaj ta 
// int vlaue = a[i] then frequency_array[value] rekhe dile value te je 
// number asbe frequency-array er sei index ke jeye increment korbe
// __frequency_array er  size ta nije theke dekhe dite hobe mane 
// input list dekhe bujhte hobe je element zero minimun value theke 
// maximum koto value porjonto ache sei maximum value er soman value 
// mane jodi input e maximum value ta 5 hoy tahole 5 size er ekta  
// frequency_array nite hobe.
//__frequency arrray er size question e dewa thakbe 


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
     int frequency_array[5]={0};
     for(int i=0;i<n;i++)
     {
        int value = a[i];
        frequency_array[value]++;
     }
     for(int i=0;i<5;i++)
     {
        printf("%d -> %d\n",i,frequency_array[i]);
     }
     return 0;
 }