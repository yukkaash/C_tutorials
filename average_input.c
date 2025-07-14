#include<stdio.h>

int main(){
    float num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);
    printf("The average of the three numbers is %f\n", (num1 + num2 + num3) / 3);
    return 0;
}
