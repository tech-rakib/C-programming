 #include<stdio.h>
int main ()
{
    char str[10];
    scanf("%s",&str);
    printf("%s\n",str);
    // nicher line e index 5 ke print kora
    // hoice karon input 4 index porjonto
    // jabe then string er theory mote
    // input sesh hoyei tar porer index e ekta 
    // null character input auto niye ney 
    // and seta thekei programe bujhe je 
    // ekahnei input newa sesh ekahnei print 
    // kora ssesh ar value nai .index 4 
    // porjonto input geche then index 5 e null
    // value ache .index 5 e je null ache seta 
    // dekhar jonno str[5]print kore dekha 
    // null er assci value=0; 
    printf("%c\n",str[5]);
    printf("%d",str[5]);
    return 0;
}