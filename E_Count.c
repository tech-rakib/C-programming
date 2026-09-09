 #include<stdio.h>
 #include<string.h>
int main ()
{
    char str[1000001];
    
   // fgets(str,1000000,stdin);
   scanf("%s",&str);
    
    int sum=0;
   // int lenght = strlen(str);
   //for(int i=0; i<lenght;i++)
    for(int i=0;str[i] != '\0';i++)
    {
  sum = sum +str[i]-'0';
    }
    printf("%d",sum); 
    return 0;
}