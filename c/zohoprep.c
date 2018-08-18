#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char s[100],c[2];
    scanf("%s",s);
    int len ,i,j,f=0;
    len = strlen(s);
    for(i=1; i<len;i++)
    {
        int count=0;
        if(s[i]>=48 && s[i]<=57)
        {
            if(s[i+1]>=48&&s[i+1]<=57)
            {
              c[0]=s[i];
              c[1]=s[i+1];
              count = atoi(c);
              c[1] = '\0';
              f = 1;
            }
            else
            {
                c[0] = s[i];
            count = atoi(c);
            }
        }
        for(j=0;j<count;j++)
        {
            printf("%c",s[i-1]);
        }
        if(f)
            i++;
        f=0;
    }
}
