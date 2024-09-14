#include <stdio.h>
#include <math.h>
#include <omp.h>

void findRoots(double a, double b, double c, double *root1, double *root2);

int main(){
    double a, b, c;
    double root1, root2;
    printf("Enter Coefficient of a, b, and c : ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0){
        printf("Coefficient of a cannot be 0\n");
        return 1;
    }
    findRoots(a, b, c, &root1, &root2);
    if (b * b - 4 * a * c >= 0) {
        printf("Root 1: %.2lf\n", root1);
        printf("Root 2: %.2lf\n", root2);
    }
    return 0;
}

void findRoots(double a, double b, double c, double *root1, double *root2){
    double discriminant;
    #pragma omp paralle
    {
        #pragma omp single
        {
            discriminant = b*b - 4*a*c;
        }
    }
    if(discriminant < 0){
        #pragma omp critical
        {
            printf("Equation Have no real roots\n");
        }
        return;
    }
    double sqrtDiscriminant = sqrt(discriminant);

    #pragma omp parallel sections
    {
        #pragma omp section
        {
            *root1 = (-b + sqrtDiscriminant) / (2 * a);
        }
        #pragma omp section
        {
            *root2 = (-b - sqrtDiscriminant) / (2 * a);
        }
    }
}