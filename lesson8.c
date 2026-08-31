/*
Ask the user for a number between 1 and 500 and then display what range that number is in from the following:

1 - 100
101 - 200
201 - 300
301 - 400
401 - 500

 */

#include <stdio.h>

int main(){
	
	int num;

	printf("enter a number: ");
	scanf("%i", &num);

	if (num<=100 && num > 0){
		printf("%i is between 1 and 100",num);
	}else if (num<= 200){
		printf("%i is between 100 and 200",num);
	}else if (num<=300){
		printf("%i is between 200 and 300",num);
	}else if (num<=400){
		printf("%i is between 300 and 400",num);
	}else if (num<=500){
		printf("%i is between 400 and 500",num);
	}else if (num > 0){
		printf("%i is above 500",num);
	} else {
		printf("%i is below 0", num);
	}



	return 0;
}
