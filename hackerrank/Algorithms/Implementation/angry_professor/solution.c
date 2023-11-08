#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    int res[t];
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        int k; 
        int ontime = 0;
        scanf("%d %d",&n,&k);
        int a[n];
        res[a0] = 0;
        for(int a_i = 0; a_i < n; a_i++){
           scanf("%d",&a[a_i]);
        }
        for(int a_i = 0; a_i < n; a_i++){
           if(a[a_i] <= 0) {
               if (++ontime == k){
                   res[a0] = 1;
                   break;
               }
           }
        }   
    }
    for(int a_i = 0; a_i < t; a_i++){
        if(res[a_i]) printf("NO\n");
        else printf("YES\n");
    }
    
    return 0;
}

