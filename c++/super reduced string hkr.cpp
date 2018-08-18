#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

int stringReduction(string s) {
    int a=0,b=0,c=0,len=s.size();
    for(int i=0;i<len;i++)
        {
        if(s[i]-96==1)
            a++;
        if(s[i]-96==2)
            b++;
        if(s[i]-96==3)
            c++;
            cout<<"its a"<<a<<" its b "<<b<<endl;

        if(a%2==0 && b%2==0)
            if(c%2==0)
        return 2;

        if(a%2!=0 && b%2!=0)
            if(c%2!=0)
        return 2;
        else
        return 1;


    }

}

int main() {
    int res, t, i;
    scanf("%d",&t);
    string s;
    for (i=0;i<t;i++) {
        cin>>s;
        res=stringReduction(s);
        printf("%d\n",res);
    }
    return 0;
}
