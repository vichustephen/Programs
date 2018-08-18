#include<iostream>
#include<list>
#include<vector>
#include<cstdio>
#include<utility>
using namespace std;

int main()
{
    int ver,edg,v1,v2;
    cout<<"Enter Vertices:";
    cin>>ver;
    cout<<"\n Enter number of edges:";
    cin>>edg;
    vector<list<pair<int,int> > > adj(ver+1);
    cout<<"\nEnter the edge connections:";
    for(int i=1; i<=edg; i++)
    {
        cin>>v1>>v2;
        adj[v1].push_back(make_pair(v2,6));
        adj[v2].push_back(make_pair(v1,6));

;    }
    cout<<"\nThe given list is:"<<endl;
    for(int i=1; i<=ver; i++)
    { cout<<"Adj list no: "<<i;
     list<pair<int,int> >::iterator it=adj[i].begin();
     while(it!=adj[i].end())
     {
         cout<<" "<<it->first<<" "<<endl;
         it++;
     }
     cout<<"\n";

    }

    return 0;
}






