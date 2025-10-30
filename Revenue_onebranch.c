/*
Name:Muse Joseph Wabuge
Reg no;PA106/G/29042/25
Description;2D Array For Room Occupancy one branch
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// main function
int main(){
int occupancy[5][10];
  int floor,room;
  int occupied,vacant;

srand(time(0));

    printf("room occupancy(1=occupied,0=vacant):\n");
    
    for ( floor=0;floor<5;floor++){
		occupied=0,vacant=0;
		
		for(room=0;room<10;room++){
			occupancy[floor][room]=rand()%2;
			
			if (occupancy[floor][room]==1)
				occupied++;
			 
			else
				vacant++;
			
		}
		printf("floor %d->occcupied:%d,vacant:%d\n",floor +1,occupied,vacant);
	}
    return 0;
}