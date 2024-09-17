#include<stdio.h>
#include<stdbool.h>

bool isPerfect(int num);

int main(){
    int num[20];
    printf("Enter 20 Integers (Positive) : ");
    for (int i = 0; i < 20; i++)
    {
        scanf("%d",&num[i]);
    }
    for (int i = 0; i < 20; i++)
    {
        if(num[i] < 0){
            printf("Negative numbers is not allowed\n");
        }
        if(isPerfect(num[i])){
            printf("%d is Perfect number\n",num[i]);
        }else{
            printf("%d is Not perfect Number\n",num[i]);
        }
    }
}

bool isPerfect(int num){
    int rem;
    int sum = 0;
    for(int i = 1; i <= num / 2; i++){
        if(num % i == 0){
            sum = sum + i;
        }
    }
    return (sum == num);
}