#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define MIN(x,y) ((x)<(y) ? (x) :(y))
int Drawing_Book(int n, int p){
    if(n%2)
        return MIN(((n - p)/2), (p/2));
    else
        return MIN((((n+1) - p)/2), (p/2));
}

int main() {
    int n; 
    scanf("%d", &n);
    int p; 
    scanf("%d", &p);
    int result = Drawing_Book(n, p);
    printf("%d\n", result);
    return 0;
}
