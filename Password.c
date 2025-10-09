/*
Name;Joseph Muse Wabuge
Regestration no:PA106/G/29042/25
Description:program to display password
*/

#include <stdio.h>//preprocessor directive,scanf(),printf()
#include <string.h>//for strcmp

int main()
{
const char correct_password[]="1234";
char user_input[10]	;

printf("password Login system\n");

do{
	printf("Enter password.");
	scanf("%s",user_input);
	
	if(strcmp(user_input,correct_password)!=0){
		printf("Incorrect password.Try again\n");
	}
	
}while(strcmp (user_input,correct_password)!=0);

printf("\nAccess granted\n");	

 
	return 0;
}