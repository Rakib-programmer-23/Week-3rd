#include<stdio.h>
#include<string.h>
int main()
{
    int n,val,sum=0;
    scanf("%d",&n);
    char x[1000000];
    scanf("%s",x);
    x[1000001]='\0';
    for(int i=0;i<n;i++)
    {
         
        val=x[i]-'0';
        sum=sum+val;
    }
    
    
    printf("%d\n",sum);

    return 0;
}