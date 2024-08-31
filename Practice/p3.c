#include<omp.h>
#include<stdio.h>
int main(){
    int array[5] = {1,2,3,4,5};
    int i;
    #pragma omp parallel for
    for(i = 0; i < 5; i++){
        array[i] *= 2;
        printf("Thread %d: array[%d] = %d\n",omp_get_thread_num(), i, array[i]);
    }

    printf("Final array values:\n");
    for(i=0;i<5;i++){
        printf("%d ",array[i]);
    }
    printf("\n");
    return 0;
}