#include <stdio.h>
#include <stdbool.h>

int main() {
    int i, num, arr[100], temp;
    int result = 0;
    const int True = 1;
    const int False = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter the %d array elements: \n", num);
    for (i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num / 2; i++) {
        temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }

    for (i = 0; i < num; i++) {
        if (arr[i] == num) {
            result = True;
            break;
        }
    }

    if (result == True) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    printf("Reversed array: ");
    for (i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
