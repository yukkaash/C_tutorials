#include <stdio.h>

int main() {
    int arr[5];  
    int i;

    printf("Enter 5 integers:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);  
    }

    printf("You entered:\n");

    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);  
    }

    return 0;
}
