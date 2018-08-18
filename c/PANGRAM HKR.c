
#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int len,a;
    scanf("%[^\n]",&s);
    int count=0,i,j;
  strupr(s);
    for(i=1;i<=26;i++)
        {
        for(j=0;j<strlen(s);j++)
            {
            if(s[j]-64==i)
                {
                count++;
    printf("its count %d \n",count);
                break;
            }

        }
    }
    if(count==26)
       printf("pangram\n");
           else
        printf("not pangram\n");
    return 0;
}
