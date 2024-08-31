#include <omp.h>
#include <stdio.h>

#define NUM_THREADS 4
#define ARRAY_SIZE 100

int main() {
    int i;
    double sum = 0.0;
    double array[ARRAY_SIZE];

    // Initialize the array
    for (i = 0; i < ARRAY_SIZE; i++) {
        array[i] = i * 2.0;
    }

    // Create a parallel region
    #pragma omp parallel num_threads(NUM_THREADS)
    {
        // Define a private variable for each thread
        double local_sum = 0.0;

        // Parallelize the loop using #pragma omp for
        #pragma omp for
        for (i = 0; i < ARRAY_SIZE; i++) {
            local_sum += array[i];
            printf("array %f\n", array[i]);
        }

        // Use a reduction to combine the local sums
        #pragma omp critical
        {
            sum += local_sum;
        }
    }

    printf("Sum: %f\n", sum);

    return 0;
}