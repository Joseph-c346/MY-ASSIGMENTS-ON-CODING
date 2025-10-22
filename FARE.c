/*
Name; Joseph Muse Wabuge
Reg no :PA106/G/29042/25
Description :PROGRAM TO CALCULATE FARE
*/
#include <stdio.h>//preprocessor  directive

float Calculate_fare(float distance){
	return distance*50;
	
}
//main function
int main(){
	float distance;
	
	printf("Enter distance in km:");
	scanf("%f",&distance);

	printf("Total fare= Ksh,%2f\n",Calculate_fare(distance));
	
	return 0;
}