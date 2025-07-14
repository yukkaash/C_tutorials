#include <stdio.h>

int main() {
    int arr[200], n1, n2, i;

    printf("Enter number of elements in array 1: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for (i = 0; i < n1; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of elements in array 2: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for (i = 0; i < n2; i++) {
        scanf("%d", &arr[n1 + i]);
    }

    printf("Merged Array: ");
    for (i = 0; i < n1 + n2; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
