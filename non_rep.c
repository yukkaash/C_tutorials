#include <stdio.h>
#include <string.h>

int main() {
    char s[101], result[101];
    printf("Enter the string: ");
    scanf("%s", s);

    int i = 0, j = 0;

    for (; s[i] != '\0'; i++) {
        if (j >= 2 && result[j - 1] == s[i] && result[j - 2] == s[i]) {
            continue;
        } else {
            result[j++] = s[i];
        }
    }

    result[j] = '\0';
    printf("Result: %s\n", result);

    return 0;
}
