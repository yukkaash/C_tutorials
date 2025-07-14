#include <stdio.h>

int main() {
    int amount;
    printf("Enter the amount: ");
    scanf("%d", &amount);

    int notes[] = {500,100, 50, 20,10, 5,2,1};
    int count;

    for (int i = 0; i < 8; i++) {
        count = amount / notes[i];       
        if (count > 0) {
            printf("%d : %d\n", notes[i], count);
            amount = amount % notes[i];
        }
    }

    return 0;
}
