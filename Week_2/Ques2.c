#include<stdio.h>
#include<omp.h>

void mergeArray(int arr[],int arr2[], int merged[], int N1, int N2);

int main(){
    int N1, N2;
    printf("Enter the size of first array : ");
    scanf("%d", &N1);
    printf("Enter the size of second array : ");
    scanf("%d",&N2);
    int arr1[N1];
    int arr2[N2];
    int merged[N1 + N2];
    printf("Enter the array Elements of first array : ");
    for(int i = 0; i < N1; i++){
        scanf("%d", &arr1[i]);
    }
    printf("Enter the array elements of second array : ");
    for(int i = 0; i < N2; i++){
        scanf("%d",&arr2[i]);
    }
    printf("First array is : ");
    #pragma omp prallel for
    for(int i = 0; i < N1; i++)
    #pragma omp critical
    {
        printf("%d ",arr1[i]);
    }
    printf("\n");
    printf("Second array is : ");
    #pragma omp prallel for
    for(int i = 0; i < N2; i++)
    #pragma omp critical
    {
        printf("%d ",arr2[i]);
    }
    printf("\n");
    mergeArray(arr1,arr2, merged, N1, N2);
    #pragma omp prallel for
    for(int i = 0; i < N1+N2; i++)
    #pragma omp critical
    {
        printf("%d ",merged[i]);
    }
    printf("\n");
}

void mergeArray(int arr1[],int arr2[], int merged[], int N1, int N2){
    int i;

    // Parallel copying elements from the first array
    #pragma omp parallel for
    for (i = 0; i < N1; i++) {
        merged[i] = arr1[i];
    }

    // Parallel copying elements from the second array
    #pragma omp parallel for
    for (i = 0; i < N2; i++) {
        merged[N1 + i] = arr2[i];
    }
}