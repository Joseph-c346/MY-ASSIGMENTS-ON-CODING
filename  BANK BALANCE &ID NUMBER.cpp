/*
Name:Joseph Muse Wabuge
Regestration no:PA106/G/29042/25
Description:program to display  my height,id number and bank balance
*/
//preprocessor directive

#include <stdio.h>//scanf[],printf[]

int main(){
int height	;
int idnumber;
int bankbalance;
int phonenumber;

	printf("Enter your height :");
	scanf("%d",&height);
	printf("your height is meters. %d\n",height );
	
	printf("Enter your id_number:");
	scanf("%d",&idnumber);
	printf("your id_number is %d\n",idnumber);
	
	printf("Enter bankbalance :");
	scanf("%d",&bankbalance);
	printf("your bank balance is ksh.%d\n",bankbalance);
	
	printf("Enter your phonenumber:");
	scanf("%d",&phonenumber);
	printf("your phonenumber is %d",phonenumber);
	
	return 0;
}

