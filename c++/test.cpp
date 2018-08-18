#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    double num,num1;
    int x,n,result;
    cin>>x;
    x += 2;
     num1 =pow(1.618,x);
     num=pow(-0.618,x);
    num1 -= num;
    num1 /= 2.236;
 result = pow(2,x-2)-ceil(num1);
    cout<<result;

    }

   return 0;

}
