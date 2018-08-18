#include<stdio.h>
#include<stdlib.h>
int main()
{
 int a,b=7,c,d=0,i,n=7,j=72;
 while(n!=0)
 {b--;
  for(i=b,a=65;i>=1;i--,a++)
     {
         printf("%c ",a);
     }
     for(i=0;i<d;i++)
     {
     printf(" ");
     }
     for(i=b,a=j;i>=0;i--,a--)
     {
         printf("%c ",a);
     }
     n--;
     printf("\n");
     d=d+4;j--;
 }

}
