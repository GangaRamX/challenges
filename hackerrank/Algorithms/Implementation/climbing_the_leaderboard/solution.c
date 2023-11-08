#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n; 
    scanf("%d",&n);
    int *scores = malloc(sizeof(int) * n);
    for(int scores_i = 0; scores_i < n; scores_i++){
       scanf("%d",&scores[scores_i]);
    }
    int m; 
    scanf("%d",&m);
    unsigned long *alice = malloc(sizeof(unsigned long) * m);
    for(int alice_i = 0; alice_i < m; alice_i++){
       scanf("%lu",&alice[alice_i]);
    }
 
    {
        int alice_rank[m];
        int rank, i, j;
        
        memset(alice_rank, 0, m*sizeof(int));
        
       /* for(int i=1; i<m; i++){
            alice[i] += alice[i-1];
        } */
  
        for(i=0, j = m-1, rank = 1; i<n && j>=0; i++){
            //printf("i-%d, j-%d, rank-%d\n", i, j, rank);
            while((alice[j] >= scores[i]) && (j>=0)){
                alice_rank[j] = rank;
                j--;
            }
            while(i < n-1){
                if(scores[i] == scores[i+1]) i++;
                else break;
            }
            
            rank++;
        }
        while(j >= 0) {
            alice_rank[j] = rank;
            j--;
        }
        
        for(int i = 0; i < m; i++){
            printf("%d\n", alice_rank[i]);
        }
    }
    return 0;
}

