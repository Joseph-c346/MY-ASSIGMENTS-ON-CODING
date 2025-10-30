/* 
Name;Muse Joseph Wabuge
Description:3d array to display hotel revenue for three branches
Reg nom;PA106/G/29042/25
*/

#include <stdio.h>
#include <stdlib.h> // for rand
#include <time.h>

int main()
{
	int chain[3][5][10];//3 branches ,5 floors,10 rooms each
	int total_occupied=0;
	int branch,floor,room;
	
	 
	 srand(time(0));
	 
	 for (branch=0;branch<3;branch++){
		 printf("\n=====branch%d=====\n",branch+1);
		 
		 for(floor=0;floor<5;floor++){
			 printf("floor%d.",floor+1);
			 
			 for (room=0;room<10;room++){
				 chain[branch][floor][room]=rand()%2;
				 
				 printf("%d",chain[branch][floor][room]);
				 total_occupied +=chain[branch][floor][room];
				 

			 }
			 printf("\n");
		 }
		 
	 }
	 
	 
printf("\n Total number of occupied rooms across all branches=%d",total_occupied);

	return 0;
}