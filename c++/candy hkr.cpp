#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
        {
        int m,n,a1,a2;
        cin>>m>>n;
        int a[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        int flag=0;
              for(int j=0;j<n-1;j++)
            {
                  if(flag==1)
                break;
            for(int k=j+1;k<n;k++)
                {
                if(a[j]+a[k]==m)
                    {
                    a1=j+1;
                    a2=k+1;
                    flag=1;
                    break;
                }
            }
        }
       cout<<a1<<" "<<a2<<endl;
    }
    return 0;
}
