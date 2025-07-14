#include<stdio.h>
float simpleinterest(int p,int r,int t);
int main ()
{
  int p,r,t;

  printf("Enter principle: ");
  scanf("%d",&p);
  printf("Enter rate: ");
  scanf("%d",&r);
  printf("Enter time: ");
  scanf("%d",&t);
  

  printf("simple interest is %x\n\n",simpleinterest(p,r,t));

  return 0;
}
  

float simpleinterest(int p,int r,int t){
  float interest = ((p*r*t)/100);
  return interest;
}
