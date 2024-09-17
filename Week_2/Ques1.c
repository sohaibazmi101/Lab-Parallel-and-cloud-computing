#include <stdio.h>
#include <omp.h>

void printBinary(int num);
void printOctal(int num);
void printHexadecimal(int num);

int main()
{
    int num;
    printf("Enter Decimal number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Only positive numer is allowed\n");
        return 0;
    }
    printBinary(num);
    printOctal(num);
    printHexadecimal(num);
}

void printBinary(int num)
{
    int a[32];
    int i = 0;
    if (num == 0)
    {
        printf("Binary : 0\n");
        return;
    }
    while (num != 0)
    {
        a[i] = num % 2;
        num = num / 2;
        i++;
    }
    printf("Binary : ");
    #pragma omp parallel for
    
        for (int j = i - 1; j >= 0; j--)
        #pragma omp critical
        {

            printf("%d ", a[j]);
        }
    printf("\n");
}
void printOctal(int num)
{
    int a[32];
    int i = 0;
    if (num == 0)
    {
        printf("Octal : 0\n");
        return;
    }
    while (num != 0)
    {
        a[i] = num % 8;
        num = num / 8;
        i++;
    }
    printf("Octal : ");
    #pragma omp parallel for
        for (int j = i - 1; j >= 0; j--)
        #pragma omp critical
        {
            printf("%d ", a[j]);
        }
    printf("\n");
}
void printHexadecimal(int num)
{
    int a[32];
    int i = 0;
    if (num == 0)
    {
        printf("Hexadecimal : 0\n");
        return;
    }
    while (num != 0)
    {
        a[i] = num % 16;
        num = num / 16;
        i++;
    }
    printf("Hexadecimal : ");
    #pragma omp parallel for
        for (int j = i - 1; j >= 0; j--)
        #pragma omp critical
        {
            printf("%d ", a[j]);
        }
    printf("\n");
}