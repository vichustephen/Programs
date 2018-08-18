#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
int n;
    cin>>n;
    string s;
    int count=0;
         int flag=0;
    cin>>s;
    for(int i=1; i<n; i++)
        {
        string t;
        cin>>t;
        for(int j=0; j<s.size(); j++)
            {
            for(int k=0; k<t.size(); k++)
                {
                if(s[j]==t[k])
                {
                    count++;
                    break;
                }
            }
            if(count==0)
                s.erase(j,1);

         count=0;
         cout<<" its s "<<s<<"\n its size "<<s.size()<<endl;
        }

    }
    cout<<flag;
    return 0;
}
