#include <stdio.h>

int main() {
    float a, b;
    int choice;

    printf("Enter value a: ");
    scanf("%f", &a);
    printf("Enter value b: ");
    scanf("%f", &b);

    printf("Choose:\n 1 - Addition\n 2 - Subtraction\n 3 - Multiplication\n 4 - Division\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Addition of %.1f and %.1f is %.2f", a, b, a + b);
            break;
        case 2:
            printf("Subtraction of %.1f and %.1f is %.2f", a, b, a - b);
            break;
        case 3:
            printf("Multiplication of %.1f and %.1f is %.2f", a, b, a * b);
            break;
        case 4:
            if (b == 0)
                printf("Division by zero is not allowed!");
            else
                printf("Division of %.1f and %.1f is %.2f", a, b, a / b);
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}
