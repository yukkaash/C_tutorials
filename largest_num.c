#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter 3 numbers to find the largest one: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
        printf("0");  
    else if (num2 >= num1 && num2 >= num3)
        printf("1");  
    else if (num3 >= num1 && num2 >= num2)
        printf("2"); 
    else 
        printf("invalid answer");

    printf("\n");
    return 0;
}
