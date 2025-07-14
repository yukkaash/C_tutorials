#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, values[3][3];

    printf("Enter Values:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &values[i][j]);
        }
    }

    printf("Entered Values are:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", values[i][j]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
