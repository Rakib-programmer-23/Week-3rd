#include<stdio.h>
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int b[3];
    for(int j=0;j<3;j++)
    {
        scanf("%d",b[j]);
    }

    int copy[8];
    for(int i=0;i<8;i++)
    {
        copy[i]=a[i];

    }
    int i=5;
    for(int j=0;j<3;j++)
     {
        copy[i]=b[j];
     }
    for(int i=0;i<8;i++)
    {
        printf("%d ",copy[i]);
    }

    return 0;
}
