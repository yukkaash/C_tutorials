#include<stdio.h>

int main()
{
  int a = 0;
  printf("Please enter a value: ");
  scanf("%d", &a);

  if (a > 0) {
    printf("The number %d is positive", a);
  }
  else if (a < 0) {
    printf("The number %d is negative", a);
  }
  else {
    printf("The number is zero");
  }

  return 0;
}
