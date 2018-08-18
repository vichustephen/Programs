#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    char stack[s.size()];
    int top=0,f=1;
    for(int i =0;s[i]!='\0';i++)
    {
        if(s[i] =='{' || s[i] =='(' || s[i] == '[')
        {
            stack[top] = s[i];
            top++;
        }
        else
        {
            top--;
            switch(s[i])
            {
                case '}':
                    if(stack[top]=='[' || stack[top] == '(')
                    {
                        f=0;
                        goto end;
                    }
                    break;

                case ')':
                    if(stack[top]=='{' || stack[top] == '[')
                    {
                        f=0;
                        goto end;
                    }
                    break;

                case ']':
                    if(stack[top]=='{' || stack[top] == '(')
                    {
                        f=0;
                        goto end;
                    }
                    break;
            }
        }
    }
    end:
    f==1 && top==0?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
