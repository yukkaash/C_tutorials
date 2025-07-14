#include <stdio.h>
#define HELLO 100
int main()
{
  #ifdef HL
  {printf("HL is not defined,so now we are going to"\"define here \n");
   #define HL 300} 
  #else printf("HL is already defined in the program");
  #endif
  return 0;
}