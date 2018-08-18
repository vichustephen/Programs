#include<stdio.h>
void main()
{
FILE *fp=0;
char q[20];
int a,b,c,d,e;
scanf("%s",q);
fp=fopen(q,"r");
fscanf(fp,"%d%d%d%d%d",&a,&b,&c,&d,&e);
if(a&&b&&c&&d&&e>0)
{
a=a+b+c+d+e;

printf("%d\n",a);
}
else
{
printf("Invalid Input");
}

}
