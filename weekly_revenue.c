/*
Name:Joseph Muse Wabuge
Reg no:PA106/G/29042/25
Description:progaram for id array to check weekly revenue
*/

#include <stdio.h>

//main function

int main(){
	int i;
	
		
float revenue[7];
float total=0,average;

        printf("Enter your revenuefor 7 days:\n");
        
        for(i=0;i<7;i++){
		printf(" Day %d",i+1);
		scanf("%f",&revenue[i]);
		total+=revenue[i];
	}
		
		average=total/7;
		
		printf("Total Weekly Revenue:%2f\n",total);
		printf("Average Daily Revenue:%2f\n",average);
	return 0;
}