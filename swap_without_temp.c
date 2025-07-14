#include <stdio.h>

int main(){
    int a,b;
    a=10;
    b=20;

    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swap a =%d and b=%d",a ,b);
return 0;
}