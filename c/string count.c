#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],e=0;
    int len,i,j=1,k=1,count[50];
    len=strlen(a);
    scanf("%[^\n]",&a);
    for(i=0;i<len;i++)
    {
        if((a[i]-'0')==0>=9&&9<=0)
            e++;
    }
if(e>0)
    printf("error");
else{
    for(i=0;i<len;i++)
    {
        if((a[i]-64)==j&&(a[i]-96)==k)
        {
            count[i]++;
        }
j++;k++;
    }
    for(i=0;i<j;i++)
        printf("%d",count[i]);
        }
}
