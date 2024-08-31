#include<stdio.h>
#include<omp.h>

int main(){
    // int num_threads = 4;
    omp_set_num_threads(4);
    int id;
    #pragma omp parallel //num_threads(num_threads)
    {
        id = omp_get_thread_num();
        printf("Hello from thread %d\n",id);
    }
    return 0;
}