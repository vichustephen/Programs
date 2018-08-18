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
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        string s;
        cin >> s;
        int cost=0;
        for(int i=1;i<=26;i++)
            {
            for(int j=0;j<s.size();j++)
                {
                if(s[j]-96==i)
                    {
                    cost++;
                    break;
                }
            }
        }
        cout<<cost<<endl;

    }
    return 0;
}
