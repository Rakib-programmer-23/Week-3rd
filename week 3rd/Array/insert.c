#include<stdio.h>
int main()
{
    int a[6],i;
    for(int i=0;i<5;i++)
    {
        scanf("%d ",&a[i]);
    }
    int pos,e;
    scanf("%d %d",&pos,&e);

    
    for(int i=5;i>=pos+1;i--)
    {
       a[i]=a[i-1];
    }
    a[pos]=e;
    
  for(int i=0;i<6;i++)
  {
      printf("%d ",a[i]);
  }




    return 0;
}