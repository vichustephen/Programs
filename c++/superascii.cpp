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
            cout<<"elements: "<<s[i]<<" "<<s[j]<<endl;
            cout<<a[i]<<a[j]<<endl;
            if(a[i]==a[j]){
                    a[j]=0;
                coun[i]++;}
                cout<<"count for "<<s[i]<<" "<<coun[i]<<endl;
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
    cout<<"not superascii";
else cout<<"superacsii";
cout<<a[3]<<" "<<coun[3];
}
int main()
{
    string s;
    cin>>s;
    check(s);
}
