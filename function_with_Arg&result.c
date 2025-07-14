#include <stdio.h>

int sum(int,int);

int main(void) {
    int res,a,b;
    printf("Enter any 2 numbers: \n");
    scanf("%d%d", &a, &b);
    res=sum(a,b); 
    printf("%d + %d = %d", a, b, res);
    
}

int sum(int num1,int num2){
    int result;
    result = num1 + num2;
    return result;
}   
