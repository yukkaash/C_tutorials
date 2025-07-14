#include<stdio.h>
int main()
{

    int celcius, kelvin;
    printf("Enter the celcius of the object :");
    scanf("%d",&celcius);
    kelvin = celcius + 273;
    printf("The heat of the object in kelvin is: %d", kelvin);
    return 0;
}