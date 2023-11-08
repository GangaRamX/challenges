#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int sockMerchant(int n,  int* ar) 
{
    int count = 0;
    char *pair = calloc(99, sizeof(char));
    for (int i = 0; i < n; i++) {
        if(pair[ar[i]] == 0) {
            pair[ar[i]]++;
        }
        else {
            count++;
            pair[ar[i]] = 0;
        }
    }
    return count;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = sockMerchant(n, ar);
    printf("%d\n", result);
    return 0;
}
