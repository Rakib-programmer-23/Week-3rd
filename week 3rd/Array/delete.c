#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int pos;
    scanf("%d ",&pos);
    
    for (int i=pos;i<4;i++)
    {
        a[i]=a[i+1];
    }

    for(int i=0;i<4;i++)
    {
        printf("%d ",a[i]);
    }


    return 0;
}