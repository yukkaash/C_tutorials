#include<stdio.h>
void fabonacchi(int n);
int main ()
{
  int num;
  printf("enter the number:");
  scanf("%d",&num);

  fabonacchi(num);
  printf("\n");
  return 0;
}

void fabonacchi(int n)
      {
        int first=0;
      int second=1;

      int temp,i;

      if(n>=1){
        printf("\n%d",first);
      }

      if(n>=2){
        printf("\n%d",second);
      }

      if(n > 2){
        for(i=3;i<=n;i++)
        {
          temp = first + second;
          printf("\n%d",temp);
          first = second;
          second = temp;
        }
      }
      }