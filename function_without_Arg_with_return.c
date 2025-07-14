#include <stdio.h>

int sum(); 

int main(void) {
    int result;
    result = sum();  
    printf("Result received from function: %d\n", result);
    return 0;
}


int sum() {
    int num1, num2;
    printf("Enter any 2 numbers:\n");
    scanf("%d%d", &num1, &num2);
    return num1 + num2;  
}
