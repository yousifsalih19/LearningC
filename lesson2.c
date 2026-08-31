/*Assignment 2
Initialize and assign a value to an integer, float, and char variable. Then print each one with a sentence on a new line describing variable data type.

*/



#include <stdio.h>

int main(){
	int a = 5;
	float b = 3.140000;
	char *c = "hello world";
/* use %d or %i for printing int, %f for float, %c for char, %s for multichar */
	printf("%d is an integer!\n", a);
	printf("%f is a float!\n", b);
	printf("%s is a char!\n", c);
	return 0;
}
