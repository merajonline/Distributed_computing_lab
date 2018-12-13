#include <stdio.h>
#include <omp.h>

void main() {
    int i,j;
    int n;
    printf("Enter  number\n");
    scanf("%d",&n);
    int a[4] = {0};
    #pragma omp parallel for firstprivate(n) lastprivate(i) num_threads(4) 
    for(j = 0; j<=n; j++) {
        i += j*j*j*j;
        //printf("%d\n",i);
        
        //printf("%d\t",i);
    } 
    printf("Sum of squares(4)[Quadruples] %d\n",i);
    
}

