#include<stdio.h>
#include <stdbool.h>
#include <omp.h>
#include <string.h>

bool isPalindrome(int number);

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
    return 0;
}
bool isPalindrome(int number){
    char str[20];
    sprintf(str, "%d", number);
    int len = strlen(str);
    bool is_palindrome = true;
    #pragma omp parallel for shared(is_palindrome)
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            #pragma omp critical
            {
                is_palindrome = false;
            }
        }
    }
    return is_palindrome;
}