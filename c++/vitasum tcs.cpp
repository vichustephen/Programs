#include<iostream>
#include<cstdio>
#include<math.h>
#define INF 1000000007;

using namespace std;

long long fact(long long n)
{
 if(n==1)
    return 1;
 else
    return n*fact(n-1);

}
long long combination(long long n,long long k)
{

    long long nPr = fact(n)/fact(n-k);
    long long nCr = nPr/fact(k);
    return nCr;
}

int main()
{
 long long n,i=0;
 cin>>n;
 long long k,total=0;
 cin>>k;
 n %= INF;
 k %= INF;
 while(i<=k)
 {

     i += 2;
 }

 cout<<total;
}
