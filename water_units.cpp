/*
NAME;JOSEPH MUSE WABUGE
Regestration no;PA106/G/29042/25
Descriotion;progarm to diaplay units
*/
#include <stdio.h>//preprocessor directive ,
//main function;scanf(),printf()

int main()
{
	int units;
	float bill=0.0;
	
	printf("enter units of water consumed:");
	scanf("%d",&units);
	
	if(units>=0&&units<=30){
		bill= units*20;
		
	}else if(units>30&&units<=60){
		bill=30*20+ ((units-30)*25);
	}	
	else if(units>60){
		bill=(30*20)+(30*25)+((units-60)*30);
		
	printf("invalid units consumed.units cannot be negative\n");
	}
	
	printf("Total bil of water is :%2f Kes\n",bill);
	return 0;
}