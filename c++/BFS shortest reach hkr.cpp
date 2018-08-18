#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

void BFS(vector< list<int> > adlist, int s, int level[])
{
    list<int> que;
    list<int>::iterator it;
    level[s]=0;
    que.push_back(s);
    while(!que.empty())
    {
        int new_source =que.front();
        it=adlist[new_source].begin();

        while(it!=adlist[new_source].end())
        {
            if(level[*it]==-1)
            {

                level[*it]=level[new_source]+1;
                que.push_back(*it);
            }

            it++;
        }
        que.pop_front();
    }

}
int main()
{
    int t;
    cin>>t;
    for(int k=0; k<t; k++)
    {

    int v,e,v1,e1,s;
    cin>>v>>e;
    vector <list <int> > adlist(v+1);
    int visited[v+1];
    for(int i=1; i<=v; i++)
    {
     visited[i]=-1;
    }
    for(int i=0; i<e; i++)
    {
        cin>>v1>>e1;
        adlist[v1].push_back(e1);
        adlist[e1].push_back(v1);
    }
    cin>>s;

    BFS(adlist,s,visited);
    for(int i=1; i<=v; i++)
    {
        if(visited[i]!=0)
            printf("%d ",visited[i]== -1 ? visited[i]:visited[i]*6);

    }
    cout<<endl;
    }
}
