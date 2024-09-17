#include <stdio.h>
#include <omp.h>

int main() {
    int numbers[20];
    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numbers[i]);
    }
    #pragma omp parallel for
    for (int i = 0; i < 20; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Thread %d: %d is even\n", omp_get_thread_num(), numbers[i]);
        } else {
            printf("Thread %d: %d is odd\n", omp_get_thread_num(), numbers[i]);
        }
    }
    return 0;
}
