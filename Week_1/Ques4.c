#include<stdio.h>
#include<math.h>
double compound(double principle, double rate, double year);
double simple(double principle, double rate, double year);
int main(){
    double principle, rate, year;
    printf("Enter the principle : ");
    scanf("%lf",&principle);
    printf("Enter Rate of Interest : ");
    scanf("%lf",&rate);
    printf("Enter Year : ");
    scanf("%lf", &year);

    printf("Compound Interest is %lf\n",compound(principle,rate,year));
    printf("Simple Interest is %lf\n", simple(principle, rate,year));
    return 1;
}
double compound(double principle, double rate, double year){
    double amount;
    double rateDecimal = rate / 100;
    return principle * pow(rateDecimal + 1, year) - principle;
}
double simple(double principle, double rate, double year){
    return principle * rate * year / 100;
}