#include <stdio.h>

int main() {
    int i, number;
    printf("Give a number to find its even and odd numbers: ");
    scanf("%d", &number);

    printf("\nEven numbers from 1 to %d are:\n", number);
    for (i = 1; i <= number; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\nOdd numbers from 1 to %d are:\n", number);
    for (i = 1; i <= number; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
