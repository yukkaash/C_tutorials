#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int limit, i, j, flag, sum = 0;

    printf("Enter a limit: ");
    scanf("%d", &limit);

    for (i = 2; i <= limit; i++) {
        flag = 0;

        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            sum += i;
    }
    printf("Sum of prime numbers: %d\n", sum);

    return 0;
}
