#include<omp.h>
#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int b[5] = {6,7,8,9,10};
    int c[5];
    int tid;
    #pragma omp parallel num_threads(5)
    {
        tid = omp_get_thread_num();
        c[tid] = a[tid]+b[tid];
        printf("c[%d]=%d\n",tid,c[tid]);
    }
    return 0;
}