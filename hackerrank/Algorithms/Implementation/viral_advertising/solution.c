#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define INITVALUE (5/2)
int main() {
    int num_days = 0;
    unsigned long sum = INITVALUE;
    unsigned long day_n = sum;
    
    scanf("%d", &num_days);
    for(int i = 1; i < num_days; i++)
    {
        day_n = (day_n*3)/2;
        sum += day_n;
        //printf("%lu ", sum);
    }
    
    printf("%lu", sum);
 
    return 0;
}

