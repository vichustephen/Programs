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
using namespace std;


int main(){
    int n,count=0;
    cin >> n;
    vector<int> c(n);
    for(int i = 0;i < n;i++){
       cin >> c[i];
    }
    for(int i=0;i<n-1;)
        {
        if(c[i+2]==0){
            i+=2;

        }
        else
            i++;
        count++;
    }
    cout<<count;
    return 0;
}
