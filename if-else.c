#include <stdio.h>

int main() {
    int M, N;
    scanf("%d%d", &M, &N);
    printf(M > N ? "%d is greater than %d" : M < N ? "%d is lesser than %d" : "They are equal", M, N);
    return 0;
}
