#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
     int b,n,k,q,ans=0;
    cin>>n>>k>>q;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
        if(k==n){
            for(int i=0;i<q;i++)
        {
         cin>>b;
         cout<<a[b]<<endl;
        }
        }
        else if(k>n)
        { while(k>n)
            k=k-n;
            for(int i=0;i<q;i++)
            {
                ans=n-k;

                cin>>b;
                ans+=b;
                if(ans>n-1)
                    ans-=n;
                cout<<a[ans]<<endl;
            }
        }
            else if(k<n)
            {

               for(int i=0;i<q;i++)
            {
                ans=n-k;
                cin>>b;
                ans+=b;
                if(ans> n-1)
                    ans-=n;
                cout<<a[ans]<<endl;
            }
            }

    return 0;
}
