#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int x, n, i, flag = 0;

    printf("Enter any number to find prime: ");
    scanf("%d", &x); 

    n = x;

    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 1; 
            break;
        }
    }

    if (flag == 0)
        printf("The %d is a Prime Number", n);
    else
        printf("The %d is Not a Prime Number", n);

    return EXIT_SUCCESS;
}
