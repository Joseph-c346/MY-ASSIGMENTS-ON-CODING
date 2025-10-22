/*
Name:Joseph Muse Wabuge
Reg no; PA106/G/29042/25
Description:program to calculate electric bill
*/

#include <stdio.h>//preprocessor directive
 
 float Calculate_Electric_Bill(int units){
	 float bill;

	 if(units<=100){
		 bill=units*10;

	 }
	 else if( units<=200)
	 {
		 bill=(100*10)+ ((units-100)*15);
	 }
      else{
		  bill=(100*10)+(100*15)+((units-200)*20);
	  }
	  return bill;
 }
//main function
int main()
{
	int units;
	printf("Enter number of units consumed:");
	scanf("%d",&units);
	
	printf("Total bill=KSH.%2f\n",Calculate_Electric_Bill(units));
	return 0;
}