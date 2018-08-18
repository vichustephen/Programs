#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int check(char *st[5])
{
    char ch[100];
    strcpy(ch,st);
    int i,j,count=0;
    printf("\n%s",ch);

}
int main()
{
    int i,n,j;
    char *a[50][300];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       scanf("%s",*(a+i));
    }
    i=1;
    check(*a);

    return 0;
}
