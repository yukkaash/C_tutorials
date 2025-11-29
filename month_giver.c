#include <stdio.h>

int main() {
    int choice;

    printf("Choose:\n 1 - jan \n 2 - feb\n 3 - mar\n 4 - apr\n 5 - may \n 6 - jun\n 7 - jul\n 8 - aug\n 9 - sep \n 10 - oct \n 11 - nov\n 12 - dec\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("ITS jan");
            break;
        case 2:
            printf("ITS feb");
            break;
        case 3:
            printf("ITS mar");
            break;
        case 4:
            printf("ITS apr");
            break;
        case 5:
            printf("ITS may");
            break;
        case 6:
            printf("ITS jun");
            break;
        case 7:
            printf("ITS jul");
            break;
        case 8:
            printf("ITS aug");
            break;
        case 9:
            printf("ITS sep");
            break;
        case 10:
            printf("ITS oct");
            break;
        case 11:
            printf("ITS nov");
            break;
        case 12:
            printf("ITS dec");
            break;
        default:
            printf("Invalid choice!");
    }

    return 0;
}
