#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
int check(string s)
    {
    string rev=s;
    for(long i=s.size()-1,j=0; i >=0 ; i--,j++)
          rev[j]=s[i];
    if(rev==s)
        return 1;
    else
        return 0;
}

int main() {
    int t,f;
    long j;
    cin>>t;
    for(int i=0;i<t;i++)
        {
    string s;
    cin>>s;
    int a;
    a=check(s);
        if(a==1)
            cout<<"-1"<<endl;
        else{
        for(j=0;j<s.size();j++)
            {
            string temp=s;
            temp.erase(j,1);
                a=check(temp);
            if(a==1)
                {
             f=1;
                break;
            }
        }
        if(f==1)
            cout<<j<<endl;
        else
            cout<<"-1";
    }
    }
    return 0;
}
