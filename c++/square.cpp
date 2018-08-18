#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<vector>
using namespace std;
int main()
{
    int n,k,p=0,b=0;
    cin>>n>>k;
    vector<int> a(n);
for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            b=a[i]+a[j];
            cout<<"its i"<<a[i]<<"\n"<<"its j"<<a[j]<<endl;
            if(b%k==0)
                p++;
        }
    }
    cout<<p;
    return 0;
}
