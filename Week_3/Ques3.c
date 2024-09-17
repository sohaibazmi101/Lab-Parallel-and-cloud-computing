#include<stdio.h>
#include<omp.h>
int main(){
    omp_set_num_threads(4);
    #pragma omp parallel for
    for (int i = 0; i < 30; i++)
    {
        int num_thread = omp_get_thread_num();
        printf("Hello World! from thread %d\n",num_thread);
    }
    return 0;
}