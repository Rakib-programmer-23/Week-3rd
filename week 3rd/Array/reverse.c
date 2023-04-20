#include<stdio.h>
int main()
{
    int a[5],i,temp;
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }

   i=0;
  int j=4;
  while(i<j)
  {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;

  }

  for( int i=0;i<5;i++)
  {
    printf("%d ",a[i]);
  }

    return 0;
}