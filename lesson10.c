/*
Create an integer array with 10 integers and then print the number of elements in the array to the terminal.

Hint: Play with the sizeof() function to determine how many bytes of storage an integer takes up.
*/


#include <stdio.h>


int main()
{
  int a[] = {1,2,3,4,5,6,7,8,9,10};
  int arrsize = sizeof(a)/4;
  printf("size of array is: %i\n",arrsize);
  
  return 0;
}
