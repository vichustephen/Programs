#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <list>

using namespace std;

int sum=1,m,n;
void fire(int x, int y,int arr[][22])
{
    arr[x][y]=-1;
    if(x-1>=0)
        {
        if(arr[x-1][y]=='T')
             fire(x-1,y,arr);
        arr[x-1][y]=-1;


    }
    if(x+1<=n-1)
        {
          if(arr[x+1][y]=='T')
         fire(x+1,y,arr);
        arr[x+1][y]=-1;
    }
    if(y+1<=n-1)
        {
          if(arr[x][y+1]=='T')
            fire(x,y+1,arr);
        arr[x][y+1] = -1;
    }
    if(y-1>=0)
        {

          if(arr[x][y-1]==0)
            fire(x,y-1,arr);
        arr[x][y-1] =-1;
    }

}
int main()
{
    int s1,s;
    cin>>m>>n;
    int arr[22][22];
    cin>>s1>>s2;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {

            cin>>arr[i][j];
        }
    }
    fire(s1,s2,arr);
}
