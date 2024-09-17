#include<stdio.h>
#include<omp.h>
#include<stdbool.h>

bool isPerfect(int num);

int main(){
    int num[5];
    printf("Enter 20 Integers : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    #pragma omp parallel for
    for (int i = 0; i < 5; i++)
    {
        if(num[i] < 0){
            printf("Negative numbers is not allowed");
        }
        if(isPerfect(num[i])){
            printf("%d is perfect number\n",num[i]);
        }else{
            printf("%d is not perfect number\n",num[i]);
        }
    }
}

bool isPerfect(int num){
    int result = 0;
    #pragma omp parallel for
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            result = result + i;
        }
    }
    return (result == num);
}