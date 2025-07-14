#include <stdio.h>

void sum(int,int);

int main(void) {
    int a,b;
    printf("Enter any 2 numbers: \n");
    scanf("%d%d", &a, &b);
    sum(a,b); 
    return 0;
}

void sum(int num1,int num2){
    int result;
    result = num1 + num2;
    printf("%d + %d = %d", num1, num2, result);
}   
