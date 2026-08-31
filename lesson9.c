/*
Take two command line arguments from the user, their first and last name, and then print a welcome message for the user.

The program should check for two arguments and then print the program's usage instructions if the user submits too few or too many arguments.

 */

#include <stdio.h>

int main(int argc, char *argv[]){
	
	if(argc != 3){
		printf("usage: ./lesson9.c Firstname Lastname\n");

	}else{
		printf("hello %s %s\n", argv[1],argv[2]);
	}


	return 0;
}
