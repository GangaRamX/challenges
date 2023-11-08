#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int number_picker(int len, int *arr)
{
    int ctr[100];
    int num = 0;
    
    memset(ctr, 0, sizeof(int)*100);
    
    for(int i = 0; i < len; i++){
        ctr[arr[i]]++;
    }
    
    for(int i = 1; i < 99; i++){
        if ((ctr[i] + ctr[i+1]) > num) num = ctr[i] + ctr[i+1];
    }
    return num;
}

int main(){
    int n; 
    scanf("%d",&n);
    int *a = malloc(sizeof(int) * n);
    for(int a_i = 0; a_i < n; a_i++){
       scanf("%d",&a[a_i]);
    }
    printf("%d", number_picker(n, a));
    return 0;
}

