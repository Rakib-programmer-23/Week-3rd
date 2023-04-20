#include<stdio.h>
#include<string.h>
int main()
{
    char a[21],b[21];
    scanf("%s\n%s",a,b);
    int value=strcmp(a,b);
    int value1=strcmp(b,a);
   

    if(value<0)
    {
        printf("%s",a);
    }
    if(value1<0)
   {
     printf("%s",b);
   }
   if(value==0 && value1==0)
   {
    printf("%s",a);
   }
    return 0;
}