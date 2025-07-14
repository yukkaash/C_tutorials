#include<stdio.h>
int main()
{
  int M,N;
  printf("Enter a value for M & N:");
  scanf("%d%d",&M ,&N);

  if(M>N)
  {
    printf("%d is greater than %d",M,N);
  }

  else if (M<N)
  {              
    printf("%d is lesser than %d",M,N);
  }

  else
  {
    printf("They are equal",M,N);
  }
  
  return 0;
}