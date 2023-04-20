#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);

    char s[101];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s);
       int  length=strlen(s);
       if(length<=10)
       {
        printf("%s\n",s);
       }
       else if(length>10)
       {
        char x=s[0];
        int y=length-2;
        char z=s[length-1];
        printf("%c%d%c\n",x,y,z);
       }
    }




    return 0;
}