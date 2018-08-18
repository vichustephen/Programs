#include <iostream>
#include <algorithm>
#include <list>
#include <cmath>
#include <cstdio>
#include <vector>

using namespace std;

vector<list<long> > adlist(10000);
long v,e,h;
 int visited[10000];
long ct=0;

void dfs(long h)
{
  visited[h]=1;
   ct++;

  list<long>::iterator it;
  for(it=adlist[h].begin(); it!=adlist[h].end(); it++)
  {
     // cout<<visited[*it]<<endl;
      //for(int i=1; i<=v; i++)
      // cout<<visited[i]<<endl;
      if(visited[*it]==-1||visited[*it]==0)
      {

      dfs(*it);
      }
  }

}

int main()
{
    long N,M,i;
    cin>>N>>M;


    for(i=0; i<M; i++)
    {
        cin>>v>>e;
        adlist[v].push_back(e);
        adlist[e].push_back(v);

    }
    cin>>h;
    for(int i=0; i<=v; i++)
     visited[i]=-1;
     dfs(h);
     cout<<N-ct;

    return 0;
}
