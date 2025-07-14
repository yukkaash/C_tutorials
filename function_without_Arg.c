#include <stdio.h>

void sum();//declar function

int main(void) {
    sum(); //call function
    return 0;
}

void sum() {// function
    int num1, num2, result;

    printf("Enter any 2 numbers: \n");
    scanf("%d%d", &num1, &num2);
    result = num1 + num2;

    printf("%d + %d = %d", num1, num2, result);
}
