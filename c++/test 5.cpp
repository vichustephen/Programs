#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

const int MAX = 1000;
int f[MAX] = {0};

int fib(int n)
{
    // Base cases
    if (n == 0)
        return 0;
    if (n == 1 || n == 2)
        return (f[n] = 1);

    if (f[n])
        return f[n];

    int k = (n & 1)? (n+1)/2 : n/2;
    f[n] = (n & 1)? (fib(k)*fib(k) + fib(k-1)*fib(k-1))
           : (2*fib(k-1) + fib(k))*fib(k);

    return f[n];
}

unsigned long M = 1000000007;

int fast_pow(long long base, long long n,long long M)
{
    if(n==0)
       return 1;
    if(n==1)
    return base;
    long long halfn=fast_pow(base,n/2,M);
    if(n%2==0)
        return ( halfn * halfn ) % M;
    else
        return ( ( ( halfn * halfn ) % M ) * base ) % M;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
    long long num,num1;
    long long x,n,result;

    cin>>x;
    x += 2;
     num1 =pow(1.618,x);
     num=pow(-0.618,x);
    num1 -= num;
    num1 /= 2.236;
    cout<<num1<<" ";
    n=fast_pow(2,x-2,M);
    cout<<n<<" ";

 result = n-ceil(num1)-1;

    cout<<result<<endl;;

   return 0;
    }
}
