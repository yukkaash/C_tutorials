#include <stdio.h>

int main() {
    char name[50];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("The received name: %s", name);

    return 0;
}
