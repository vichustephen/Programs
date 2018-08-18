#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,j,d1=0,d2=0,ans=0;
    scanf("%d",&n);
    int a[n][n];
    for(i = 0;i < n;i++){
       for(j = 0;j < n;j++){

          scanf("%d",&a[i][j]);

       }
    }
        for(i=0;i<n;i++)
            {
            for(j=0;j<n;j++)
                {
                if(i==j)
                   d1=d1+a[i][j];
                if(i==n-j)
                    d2=d2+a[i][j-1];
            }
        }
    d1=d1+d2;
    printf("%d",d1);

    return 0;
}
