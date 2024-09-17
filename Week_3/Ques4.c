#include<stdio.h>
#include<omp.h>
int main(){
    int n = 100;
    int i;
    omp_set_num_threads(4);
    #pragma omp parallel for schedule(static, 4)
    for (i = 0; i < n; i++)
    {
        int thread_id = omp_get_thread_num();
        printf("Hello World! from thread %d\n", thread_id);
    }
}