#include <stdio.h>

int main() {
    int arr[100], num, i, temp;

    printf("Enter the number of elements: ");
    scanf("%d", &num);

    printf("Enter %d elements:\n", num);
    for(i = 0; i < num; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < num / 2; i++) {
        temp = arr[i];
        arr[i] = arr[num - 1 - i];
        arr[num - 1 - i] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < num; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
