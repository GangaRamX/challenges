#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX(x, y) ((x)>(y) ? (x) : (y))

int non_divisible_subset_helper(int k, int *a_m) 
{
    unsigned int arr[k];
    int elem_num = 0;
    int counter = 0;
    int start = 1;
    int end = k-1;
            
    if(a_m[0]){
        counter++;
    }
    
    while(end >= start) {
        if(end == start) {
            if(a_m[start]) counter++;
            return counter;
        }
        counter += MAX(a_m[start], a_m[end]);
        start++;
        end--;
    }
   // printf("r_counter=%d\n",counter); 
    return counter;
}
int non_divisible_subset(int n, int *a_i, int k) 
{
    int mod[k];
    int num = 0;
    
    memset(mod, 0, k*sizeof(int));
    
    for(int i = 0; i < n; i++) {
        mod[a_i[i]%k]++;
    }
    
    for(int i = 0; i < k; i++) {
        //printf("%d ",mod[i]);
    }
    //printf("\n");  
    num = non_divisible_subset_helper(k, mod);
    //printf("\n%d \n",num);
    return num;
}



int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a_i[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a_i[i]);
    }
    
    printf("%d\n",non_divisible_subset(n, a_i, k));
    return 0;
}

