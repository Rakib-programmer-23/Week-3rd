#include<stdio.h>
#include<string.h>
int main()
{
    char x[11];
    char y[11];
    char temp[11];
    scanf("%s\n%s",x,y);
   int size1=strlen(x);
   int size2=strlen(y);
   
   char Z[22];
   int z=0,j;
   for(int i=0;i<size1;i++)
   {
       Z[z]=x[i];
       z++;
   }
    z=size1;
   for(int j=0;j<size2;j++)
   {
       Z[z]=y[j];
       z++;
   }
   Z[z]='\0';
   temp[0]=x[0];
   x[0]=y[0];
   y[0]=temp[0];
   
   printf("%d %d\n",size1,size2);
   printf("%s\n",Z);
   printf("%s %s\n",x,y);


    return 0;
}