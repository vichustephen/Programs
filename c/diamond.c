#include<stdio.h>
int main()
{
    int i,n,j,a=0,b=0,k;
    scanf("%d",&n);
    b=n;
    for(i=0;a<n;i++)
    {  b--;
        a++;
        for(k=0;k<b;k++)
        {if(a!=n)
            printf(" ");
        }
        for(j=0;j<a;j++)
        {
            printf("* ");
        }
         if(a==n-3)
            a+=2;
        printf("\n");


    }a=n-2;
       for(i=0;i<=n;i++)
    {
        a--;
        b++;
           for(k=0;k<b;k++)
        {
            printf(" ");
        }
        for(j=0;j<a;j++)
        {
            printf("* ");
        }

        printf("\n");

    }

    return 0;
}
