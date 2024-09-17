#include<stdio.h>

int factorial(int num);
int main(){
    int num;
    printf("Enter the number to find factorial : ");
    scanf("%d",&num);
    printf("Fcatoral of %d is %d\n",num, factorial(num));
}
int factorial(int num){
    if(num == 0){
        return 1;
    }
    if(num < 0){
        return -1;
    }
    int fact = num;
    if(num == 1){
        return fact;
    }
    fact = fact * factorial(num - 1);
    return fact;
}