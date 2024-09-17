#include <stdio.h>

int main() {
    int numbers[20];
    printf("Enter 20 integers:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numbers[i]);
    }
    for (int i = 0; i < 20; i++) {
        if (numbers[i] % 2 == 0) {
            printf("%d is even\n", numbers[i]);
        } else {
            printf("%d is odd\n", numbers[i]);
        }
    }
    return 0;
}
