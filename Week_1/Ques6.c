#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool isPrime(int num);
void printPrime(int num1, int num2);

int main(){
    int num1, num2;
    printf("Enter lower range : ");
    scanf("%d",&num1);
    printf("Enter Upper range : ");
    scanf("%d", &num2);
    printPrime(num1, num2);
    return 0;
}

bool isPrime(int num){
    bool cond = true;
    if(num <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            cond = false;
            break;
        }
    }
    return cond;
}

void printPrime(int num1, int num2){
    for (int i = num1; i <= num2; i++)
    {
        if(isPrime(i)){
            printf("%d ",i);
        }
    }
    printf("\n");
}