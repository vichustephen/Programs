#include<stdio.h>
long sum=2;
int ans=0;
void add(long int a,long int n)
{ int c=0;
    sum=sum+a;
    c=check(sum);
    if(c==1 && sum <=n){
       ans++;
    }
}
int check(long int a)
{
    int i,flag=0;
    for(i=2;i<=a/2;i++)
    {
        if(a%i==0){
            flag=1;
            break;
    }
    }
    if(flag==0)
        return 1;
}
int main()
{
    int j,flag=0,sum;
    long int n,i;
    scanf("%d",&n);
    for(i=3;i<=n;i++)
    {flag=0;
     for(j=2;j<=i/2;j++)
        {
            if(i%j==0){
                flag=1;
                break;}
                }
                if(flag==0 && n!=1)
                    add(i,n);
        }
        printf("%d",ans);
        return 0;
    }
