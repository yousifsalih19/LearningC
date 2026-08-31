/*Assignment 3
Prompt the user to input their first and last name and then print them a welcome message. Try storing the input as a char variable's value.

Easy Mode: Allocate an arbitrary amount of indices to your char array and pray to the gods that the user input fits.

Extra Credit: Dynamically allocate the array size of your char variable based on the length of the user's input.
 */




#include <stdio.h>
// standard library
#include <stdlib.h>

int main()
{
	// initialize first and last as pointers for dynamic allocation
	char *first;
	char *last;

	//prompt user
	printf("enter first and last name!");
	
	// use %ms to free memory according to input ;; use & before variables for their memory address !!!!
	scanf("%ms %ms", &first, &last);
	//print result
	printf("hello %s %s!", first,last);
	

	// deallocate memory allocated to first and last
	free(first);
	free(last);

	return 0;
}
