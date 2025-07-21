#include <stdio.h>

int romanToInt(char *s) {
    int map[26];
    map['I' - 'A'] = 1;
    map['V' - 'A'] = 5;
    map['X' - 'A'] = 10;
    map['L' - 'A'] = 50;
    map['C' - 'A'] = 100;
    map['D' - 'A'] = 500;
    map['M' - 'A'] = 1000;

    int total = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        int curr = map[s[i] - 'A'];
        int next = map[s[i + 1] - 'A'];

        if (s[i + 1] != '\0' && curr < next) {
            total -= curr;
        } else {
            total += curr;
        }
    }

    return total;
}

int main() {
    char s[20];
    printf("Enter Roman Numeral: ");
    scanf("%s", s);

    int number = romanToInt(s);
    printf("The integer value is: %d\n", number);

    return 0;
}
