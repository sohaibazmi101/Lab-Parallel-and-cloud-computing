#include<stdio.h>
#include<omp.h>

double valueOfPi(int num, int sign, double pi);
int main(){
    int num;
    double pi = 0.0;
    int sign = 1;
    printf("Enter the Number of terms of terms to approximate PI : ");
    scanf("%d",&num);
    printf("Value of PI : %lf\n",valueOfPi(num, sign, pi));
}

double valueOfPi(int num, int sign, double pi){
    #pragma omp parallel for
    for(int i = 0; i < num; i++){
        pi = pi + sign * (1.0 / (2 * i + 1));
        sign = -sign;
    }
    return pi *= 4;
}