#include<omp.h>
#include<stdio.h>
int main(){
    int n = 6;
    int a[] = {1,2,3,4,5,6};
    int c[n];
    #pragma omp parallel for
    for(int i = 0; i < n; i++){
        c[i] = a[i]*a[i]*a[i];
        printf("Thread %d: Array: a[%d] : cubed: %d\n",omp_get_thread_num(), i, c[i]);
    }
    printf("Cubed of Array are:\n");
    for(int i = 0; i < n; i++){
        printf("%d ",c[i]);
    }
    printf("\n");
    return 0;
}