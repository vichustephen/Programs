#include<stdio.h>
#include<string.h>
void main()
{
    int len,i,len1;
    char s[]="ifofwithinon";
    char a[100],ans[100];
    scanf("%[^\n]",&a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]!=s[i])
            ans[i]=a[i];
    }
    printf("%s",ans);
}
