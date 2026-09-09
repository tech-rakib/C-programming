 #include<stdio.h>
int main ()
{
    char str[101];
    //scanf("%s",&str);//without space Input
    gets(str); //With space Input
    int coutn=0;
for(int i =0;str[i] != '\0';i++)
{
coutn++;
}
printf("%d",coutn);

    return 0;
}