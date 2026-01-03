#include <stdio.h>

int main()
{
    int number, count = 0, result = 0, mul, rem, q, cnt;

    printf("Please enter a number: ");
    scanf("%d", &number);

    q = number;

    // Count number of digits
    while (q != 0)
    {
        q = q / 10;
        count++;
    }

    cnt = count;
    q = number;

    // Calculate Armstrong sum
    while (q != 0)
    {
        rem = q % 10;
        mul = 1;

        while (cnt != 0)
        {
            mul = mul * rem;
            cnt--;
        }

        result = result + mul;
        cnt = count;      // Reset digit counter
        q = q / 10;       // Move to next digit
    }

    // Check Armstrong condition
    if (result == number)
        printf("%d is an Armstrong number\n", number);
    else
        printf("%d is not an Armstrong number\n", number);

    return 0;
}
