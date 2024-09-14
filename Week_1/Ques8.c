#include<stdio.h>

void printLargest(int a[], int n);
void printSmallest(int a[], int n);

int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the Elelmnts of Array : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Entered Array is : ");
    for(int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printLargest(arr, n);
    printSmallest(arr, n);
}

void printLargest(int a[], int n){
    int temp = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] > temp){
            temp = a[i];
        }
    }
    printf("Largest Element is %d\n",temp);
}
void printSmallest(int a[], int n){
    int temp = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < temp){
            temp = a[i];
        }
    }
    printf("Smallest Element is %d\n",temp);
}