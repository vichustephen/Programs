#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{
int a,b;
FILE *fp=0;
char c[5],d[5],e[20];
scanf("%s",&e);
fp=fopen(e,"r");
fscanf(fp,"%s%s",&c,&d);
a=atoi(c);
b=atoi(d);

if(a&&b!=0)
{
     a=a+b;
  printf("%d\n",a);
}
else{
    printf("Invalid Input\n");
}
fclose(fp);
return 0;
}
