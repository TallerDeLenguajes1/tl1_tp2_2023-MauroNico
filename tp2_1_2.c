#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(void){

    int i;
    double vt[N];
    double *p;
    p = &vt[0];
    while(*p != N)
    {
        *p=1+rand()%100;
        printf("%f   ",*p);
        p++;
    }
}