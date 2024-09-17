#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<omp.h>

bool isArmstrong(int num);

int main(){
    int num[20];
    printf("Enter 20 Integers : ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&num[i]);
    }

    #pragma omp parallel for
    for(int i = 0; i < 20; i++)
    #pragma omp critical
    {
        if(isArmstrong(num[i])){
            printf("%d is Armstrong Number!\n",num[i]);
        }else{
            printf("%d is Not an Armstrong Number!\n", num[i]);
        }
    }   
}

bool isArmstrong(int num){
    int originalNum, remainder, result = 0;
    originalNum = num;
    int n = 0;
    while (originalNum != 0)
    #pragma omp parallel
    {
        originalNum = originalNum / 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    #pragma omp parallel
    {
        remainder = originalNum % 10;
        result = result + pow(remainder, n);
        originalNum = originalNum / 10;
    }
    return (num == result);
}