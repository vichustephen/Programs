#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;
void evenodd(string s)
    {
    int len;
    len=s.size();
    for(int i=0;i<len;i++)
        {
        if(i%2==0)
            cout<<s[i];
    }
    cout<<" ";
    for(int i=0;i<len;i++)
        {
        if(i%2!=0)
            cout<<s[i];
    }
}

int main() {
    int n;
    cin>>n;
    string s;
    for(int i=0;i<n;i++)
        {
        cin>>s;
          evenodd(s);
        cout<<"\n";
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
