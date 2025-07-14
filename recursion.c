#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: if n is 0 or 1, the factorial is 1
    if (n == 0 , n == 1) {
        return 1;
    } else {
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}

int main() {
    int num = 4; 
    int result = factorial(num);
    printf("The factorial of %d is %d\n", num, result);
    return 0;
}