#include<iostream>
#include<cstdio>
#include <fstream>
#include <cstdlib>
#include <sstream>
using namespace std;
int check(int p)
{ int flag=0;
    for(int i=2;i<=p/2;i++)
    {
        if(p%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 0;  //false
    else
        return 1;   //true

}
int main()
{

    string n1,n2,b;
    cin>>n1>>n2;
    int c,d,nth;
    c=atoi(n1.c_str());
    d=atoi(n2.c_str());
    cin>>b;
    nth=atoi(b.c_str());
    if(nth==0)
    {
        cout<<"Invalid Input"<<endl;
        return 0;
    }
        if(c||d==0)
    {
         cout<<"Invalid Input"<<endl;
        return 0;
    }
       if(c==1)
        c++;
    int a,count=0,i;
    for(i=c;i<=d;i++)
    {
        a=check(i);

        if(a==1)
            count++;
            if(count==nth)
                 break;

    }
    cout<<i<<endl;
    return 0;

}
