#include<stdio.h>
#include<ctype.h>
int isdigit(int);
void main()
{

int a,b;
int c,d;
scanf("%d",&a);
if(isdigit(a))
{
    printf("digit");
}
else
{
    printf("no");
}
printf("%d",a);
}
