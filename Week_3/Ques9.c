#include<stdio.h>
#include<omp.h>
int factorial(int num);
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d\n",num, factorial(num));
    return 0;
}

int factorial(int num){
    int fact = 1;
    if(num == 0){
        return 1;
    }
    if(num < 0){
        return -1;
    }
    #pragma omp parallel for
    for (int i = 2; i <= num; i++)
    {
        #pragma omp critical
        {
        fact = fact * i;
        }
    }

    return fact;
    
}