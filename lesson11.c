/*
Ask the user for test scores and then keep asking the user if they would like to continue or end the program. Store all test score values and calculate an average score that prints to the terminal when the user ends the program. You can initialize your array size as 10 and let's use a max test score count of 8 for this.

Print the average of the test scores to the second decimal place.

Hint: Look up while and for loops. Look up the strcmp() function.
*/

#include <stdio.h>
#include <string.h>

int main(){
  
  int scores[10]; int count = 0; int check = 1;
  char response[1];
  
  while(check == 1 && count < 9){
    printf("\nenter score: ");
    scanf("%i", &scores[count]);

    printf("continue entering scores? ");
    scanf("%c" &response);
    
    while(strcmp(response, 'Y') || strcmp(response, 'N')){
      printf("enter \"Y\" or \"N\"");
      scanf("%s", &response)
    }
    check = strcmp('Y', response);

  }
  


  return 0;
}
