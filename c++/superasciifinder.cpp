#include<iostream>
#include<string>
using namespace std;
void check(string s)
{
    int len,i,j,k=0;
    len=s.size();
    int a[len],coun[len];
    for(i=0;i<len;i++)
    {
        a[i]=s[i]-96;
    }
    for(i=0;i<len-1;i++){
        coun[i]=1;
        for(j=i+1;j<len;j++)
        {if(a[i]==0)
        break;
        if(a[i]==a[j]){
                    a[j]=0;
                coun[i]++;}
        }
    }coun[len-1]=1;
    for(i=0;i<len-1;i++)
    {
     if(a[i]==a[len-1])
            coun[len-1]++;
    }
for(i=0;i<len;i++)
{
  while(a[i]!=0){
    if(a[i]!=coun[i])
    k++;
  break;
    }
}
if(k>0)
    cout<<"The given string string is not an superascii"<<endl;
else cout<<"The given string string is an superacsii"<<endl;
}
int main()
{
    string s;
    int t;
    cout<<"Enter the no of testcases:";
    cin>>t;
    cout<<"\n";
    for(int a=0;a<t;a++){
            cout<<"\nEnter the string to check:"<<endl;
    cin>>s;
    check(s);
    }
}
