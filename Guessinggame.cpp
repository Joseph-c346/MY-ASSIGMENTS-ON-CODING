/*
Name :Joseph Muse
Regestration no:PA106/G/29042/25
Description:program to display guessing gamr
*/
//main function scanf (),printf()

#include <stdio.h>//preprocessor directive,

int main(){

	int secret_number=18;
	int guess;
	int attempts=0;
	
	printf("Number Guessing Game");	
	printf("I have picked a secret number between 1 and 20.try to guess it!\n");
	
	do 
	{
		printf("Enter your guess:");
		scanf("%d",&guess);
		 attempts++;
		
		 if(guess>secret_number){
			 printf("Too high!\n");
		 
	}else if(guess<secret_number){
	printf("Too low!\n");	
	}
}while(guess!=secret_number);
    printf("\nCOngratulations!YOu guessed the number 5dcorrectly.\n,secret_number");
    printf("TOtal number of attempts:%d\n",attempts);

	
	return 0;
}