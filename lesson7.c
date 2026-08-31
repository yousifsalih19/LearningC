/*
Prompt the user for A, B, and C values and then use those values to determine the value of 'X' using the Quadratic Formula.

If you need to brush up on the Quadratic Formula, hit up Khan Academy!

Hint: Make your life easier by including the math.h header file. You may have to search online for an additional flag for gcc to get your code compiled correctly!

Extra Credit: Build in a mechanism which checks the solution by plugging it back into the formula and seeing if it equals 0. Use if control flow to instruct the user to double check all solutions which aren't confirmed (a lot won't be confirmed since they'll be truncated decimals).

 */


#include <stdio.h>
#include <math.h>

int main(){
	
	float a,b,c;

	printf("enter a: ");
	scanf("%f",&a);
	
	printf("enter b: ");
	scanf("%f",&b);

	printf("enter c: ");
	scanf("%f",&c);
	//initialize positive and negative
	float pos; float neg;
	
	pos = (-1*b + sqrt((b*b) -(4*a*c)))/(2*a);
	neg = (-1*b - sqrt((b*b) -(4*a*c)))/(2*a);

	bool checkpos = (a*pos*pos + b*pos + c == 0);
	bool checkneg = (a*neg*neg + b*neg + c == 0);

	if(!checkpos){
		printf("the solution using the + operator is %f, but i'd double check that \n", pos);
	}else{
		printf("the solution using the + operator is %f\n", pos);
	}

	if(!checkneg){
		printf("the solution using the - operator is %f, but i'd double check that\n", neg);
	}else{
		printf("the solution using the - operator is %f\n", neg);
	}






	return 0;
}
