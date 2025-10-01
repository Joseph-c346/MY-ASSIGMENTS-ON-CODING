/*
Name;Joseph Muse Wabuge
Regestration no:PA106/G/29042/25
Description;program to check eligibility for an exam
*/
//main function

#include <stdio.h>//preprocessor directive scanf(),printf()

int main(){
	float attendancepercentage ,average_marks;
	printf ("Enter your attendancepercentage:");
	scanf("%f",&attendancepercentage);
	
	printf("Enter your average_marks:");
	scanf("%f",&average_marks);
	
	
	if(attendancepercentage>=75&&average_marks>=40)
		printf("you are eligible for the exam:");
	else{

	printf("not eligible for exam:");
		
	}

	return 0;
}