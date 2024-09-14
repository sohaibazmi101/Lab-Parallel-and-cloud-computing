#include<stdio.h>

int hcf(int a, int b){
    int temp;
    while (b != 0){
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b){
    return (a * b) / hcf(a,b);
}

int main(){
    int a,b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d",&b);
    if(a <= 0 || b <= 0){
        printf("Number less than or equal to zero is not allowed\n");
        return 0;
    }
    int num1, num2;
    if(a > b){
        num1 = a;
        num2 = b;
    }else{
        num1 = b;
        num2 = a;
    }
    printf("LCM of %d and %d is : %d\n",num1,num2,lcm(num1, num2));
    printf("HCF of %d and %d is %d\n",num1, num2, hcf(num1, num2));
}