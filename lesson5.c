/*Prompt the user for a number of seconds. Take the user's input and convert the number of seconds into its duration in Hours, Minutes, and remaining Seconds.
Extra Credit: Make sure the Hours, Minutes, and Seconds print with no decimal places.
 */


#include <stdio.h>
#include <stdlib.h>


int main(){
	int seconds;
	printf("enter num of seconds\n");
	scanf("%i",&seconds);
	
	int hours = seconds/3600;
	int minutes = (seconds-(hours*3600)) / 60;
	int remseconds = (seconds - (hours*3600) - (minutes*60));

	printf("%i seconds is equal to %i hours, %i minutes, and %i seconds", seconds, hours, minutes, remseconds);





	return 0;
}
