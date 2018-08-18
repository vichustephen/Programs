#include<stdio.h>
#include<string.h>
struct teams
{
    char name[20];
    int gd,gf,ga,p;
};
int main()
{
    int n,i,m,j;
    char team1[30],team2[20];
    scanf("%d",&n);
    struct teams t[n];
    int g1,g2;
    for(i=0;i<n;i++)
        scanf("%s",&t[i].name);
        scanf("%d",&m);
        for(i=0;i<m;i++)
        {
            scanf("%s%s%d%d",&team1,&team2,&g1,&g2);
            for(j=0;j<n;j++){
            if(strcmp(team1,t[j].name)==0){
            t[j].gf=g1;
            t[j].ga=g2;
            if(g1>g2)
                t[j].p=2;
            else if(g1<g2)
                t[j].p=0;
            else
                t[j].p=1;
            }
            if(strcmp(team2,t[j].name)==0){
                t[j].ga=g1;
                t[j].gf=g2;
            if(g1<g2)
                t[j].p=2;
            else if(g1<g2)
                t[j].p=0;
            else
                t[j].p=1;
            }
            }

        }
}
