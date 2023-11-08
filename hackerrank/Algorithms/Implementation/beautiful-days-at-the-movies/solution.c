#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define REVERSE(x) ({ \
        int __x = (x); \
        int rem = 0; \
        int rev = 0; \
        while(__x) { \
            rem = __x % 10; \
            __x = __x / 10; \
            rev = (rev*10) + rem;\
        } \
        rev; \
})

int num_beautiful_days(int i, int j, int k)
{
    int count = 0;
    int diff = 0;
    if(i < j) {
        for(int x=i; x <= j; x++) {
            diff = abs(x - REVERSE(x));
            if(diff%k == 0) count++;
        }
    } else {
        do{}while(1);
    }
    return count;
}
    
int main() {
    int i, j, k;
    int rev = 0;
    scanf("%d %d %d", &i, &j, &k);
    printf("%d", num_beautiful_days(i,j,k));
    return 0;
}

