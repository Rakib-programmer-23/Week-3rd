#include<stdio.h>
#include<string.h>
int main()
{
    char x[1001];
    char y[1001];
   
    int i,j=0,z=0;
    scanf("%s",x);
    

    int size=strlen(x);

    for(int i=size-1;i>=0;i--)
    {
        
       y[j]=x[i];
       j++;
      
    }
    y[j]='\0';
 if(strcmp(y, x) == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
 return 0;
}