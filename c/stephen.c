#include<stdio.h>
void main()
{
FILE *fp=0;
int i=0,j=0,k=0,l=0,m=0,sum=0;
char c[20];
scanf("%s",c);
fp=fopen(c,"r");
if(fscanf(fp,"%d%d%d%d%d",&i,&j,&k,&l,&m)>0)
{
sum=i+j+k+l+m;
printf("%d\n",sum);
}
else
{
printf("invalid input");
}
fclose(fp);
return;
}
