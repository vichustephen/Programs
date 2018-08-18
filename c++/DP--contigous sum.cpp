#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void msum(long ar[],long n)
    {
     long csum=0,i,msum=0,nsum=0,f=0,high=-10;
         for(i=0;i<n;i++)
         {
         csum=csum+ar[i];
         if(msum<csum)
             msum=csum;

          if(csum<0)
              csum=0;

             if(ar[i]>0)
             nsum=nsum+ar[i];

             if(ar[i]<0)
                 f++;
                 if(high<ar[i])
                    high=ar[i];
     }
     if(f==n)
    cout<<high<<" "<<high<<endl;
    else
    cout<<msum<<" "<<nsum<<endl;
}

int main() {
   long t,j=0,f=0;
   cin>>t;
    for(long i=0;i<t;i++)
        {
            long n;
         cin>>n;
        long a[n];
         for(j=0;j<n;j++)
         {
             cin>>a[j];

         }
         if(n==1)
            cout<<a[0]<<" "<<a[0]<<endl;
         else
         msum(a,n);
    }

    return 0;
}
