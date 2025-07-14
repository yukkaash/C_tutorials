#include <stdio.h>

int main() {
    int i, j, s;
    printf("Enter the number of rows and columns of * you want: ");
    scanf("%d", &s);

    for (i = s; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
