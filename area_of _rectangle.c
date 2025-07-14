#include<stdio.h>

int main()
{
    float length,width,area;
    printf("Enter length & width of the rectangle : ");
    scanf("%f%f", &length, &width);
    area = (length * width);
    printf("The area of the rectangle is %.2f\n", area);
    
    return 0;
}