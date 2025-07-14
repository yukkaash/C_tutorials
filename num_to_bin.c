#include <stdio.h>

void printBinary(int num) {
    if (num > 1) {
        printBinary(num / 2);  // go to higher bit
    }
    printf("%d", num % 2);     // print current bit
}

int main() {
    int num;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    printf("Binary: ");
    if (num == 0)
        printf("0");
    else
        printBinary(num);
    
    printf("\n");

    return 0;
}
