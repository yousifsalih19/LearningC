/*
Prompt the user to input the length of a radius and then print the area of the user's circle to the terminal.\
Extra credit: Use the #define feature of C to assign the value 3.14 to PIE.
 */

#include <stdio.h>
#define PI 3.141592653

int main(){
 	float rad;
	printf("enter radius! \n");
	scanf("%f",&rad);
	float area = (rad*rad)*PI;
	printf("area = %f", area);

	return 0;
}
