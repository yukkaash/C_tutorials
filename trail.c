#include <stdio.h>

int main() {
    int arr[] = {5, 9, 2, 11, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number is %d\n", max);
    return 0;
}
