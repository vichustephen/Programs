#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()

{
int a,b;
char c[5],d[5];
scanf("%s%s",&c,&d);
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
return 0;
}
