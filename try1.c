#include <stdio.h>

int main()
{
    int number, count = 0, result = 0, mul, rem, q, cnt;

    printf("Please enter a number: ");
    scanf("%d", &number);

    q = number;

    // Count number of digits

    while(q !=0)
    {
        q = q % 10;
        count ++
   }
    
   cnt = count;
   printf(count);
    // Check Armstrong condition
    //if (result == number)
       //    printf("%d is an Armstrong number\n", number);
    //else
      //  printf("%d is not an Armstrong number\n", number);

    return 0;
}
