#include <stdio.h>

int main(){
    int number,i,sum=0;
    printf("Enter the N number to sum : ");
    scanf("%d",&number);
    for (i=1;i<=number;i++){
        sum = sum + i;
    }
    printf("The sum of %d is %d", number,sum);    
    return 0;
}
