/*
Name;Joseph Muse Wabuge
Regestration no;PA106/G/29042/25
DESCRIPTION:PROGRAM TO DISPLAY DTA BUNDLES
*/

#include <stdio.h>//preprocessor diirective

//mainfunction;scanf(),printf()

int main(){
	int choice;
	
	printf("select data bundle:\n");
	printf("1.100 MB@ 50KES\n");
	printf("2.500MB@ 200KES\n");
	printf("3.1GB@350KES\n");
	printf("4.2GB@ 600KES\n");
	printf("Enter your choice");
	scanf("%d",&choice);
	
	switch(choice){
	case 1:
		printf("you selected 100MB.cost=50KES\n");
		break;
	
	case 2:
		printf("you selected 500MB.cost=200KES\n");
		break;
	
	case 3:
	printf("you selected 1GB.cost=350KES\n");
	break;

    case 4:
    	printf("you selected 2GB.cost=600KES\n");
    	break;
	default:
		printf("Invalid choice please enter a number between 1and4.\n");
	}

	
	return 0;
}