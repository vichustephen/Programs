#include<cstdio>
#include <iostream>
#include <string>
#include<istream>
using namespace std;
int main() {
    string s;
    int len,a;
   getline(cin,s);
    int count=0,i,j;
  for(int i=0;i<s.size();i++)
  {
      if(s[i]>=97&&s[i]<=122)
      {
          s[i]-=32;
      }
  }
    for(i=1;i<=26;i++)
        {
        for(j=0;j<s.size();j++)
            {
            if(s[j]-64==i)
                {
                count++;
                break;
            }

        }

    }
    if(count==26)
       printf("pangram\n");
           else
        printf("not pangram\n");
    return 0;
}
