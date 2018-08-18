#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    string s;
    cin >> s;
    int len,a,count=1;
    len=s.size();
    for(int i=1;i<len;i++)
        {a=s[i]-64;
        if(a>=1&&a<=26)
            count++;
    }
    cout<<count;
    return 0;
}
