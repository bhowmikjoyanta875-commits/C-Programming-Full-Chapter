#include <stdio.h>

int main()
{
      int i = 72;
      int* j = &i; //j pointer pointing to i (j is an intejer point)
      int k = 67;
      printf("The address of is i %p\n", &i);
      printf("The address of is i %p\n", j);
      printf("The address of is i %p\n", &k);
      
      printf("The value at address j is %d\n", *(&i));
      
      return 0;
}