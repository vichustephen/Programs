#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    cin>>s;
    int len,j=0;
    len=s.size();
    while(j!=len){
    for(int i=0;i<len;i++)
        {
        if(s[i]==s[i+1])
            s.erase(i,2);
    }
        j++;
    }
    len=s.size();
    if(len==0)
        cout<<"Empty String";
        else
    cout<<s;

    return 0;
}
