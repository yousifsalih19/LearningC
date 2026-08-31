/*
Prompt the user for a Numerator (top number of a fraction) and a Denominator (bottom number of a fraction). Tell the user whether or not there is a remainder using if control flow.
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int a; int b;

	printf("enter numerator and denominator");
	scanf("%i %i", &a, &b);
	
	int c = a/b;

	int remainder = a%b;

	printf("%i / %i === %i", a,b,c);

	if(remainder == 0){
		printf("there is NOT a remainder");
	} else {
		printf("the remainder is %i.", remainder);
	}




	return 0;
}
