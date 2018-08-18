
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main()
{  typedef multimap<string,string>map;
   map phb;
    map::iterator it;
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
        {string k,p,s;
        cin>>k>>p;
        phb.insert(pair<string,string>(k,p));
        }
 string s;
 while(cin>>s)
     {
        it=phb.find(s);
     if(it!=phb.end())
        cout<<it->first<<"="<<it->second<<endl;
     else
         cout<<"Not found"<<endl;
 }

    return 0;
}

