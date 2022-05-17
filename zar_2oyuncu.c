#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//7-11 ise kazanýr, 12-2-3 ise kaybeder, diðerleri toplanýr.

int main(int argc, char *argv[]) {
	int i,n,pScore=0;
	srand(time(NULL));
	for(i=0;i!=-1;i++){
		n=rand()%11+2;
		printf("%d. roll = %d\n",i+1,n);
		if(n==7||n==11){
			printf("You won the game!\nYour score is %d.",pScore);
			break;
		}
		else if(n==2||n==3||n==12){
			printf("You lost the game!\nYour score is %d.",pScore);
			break;
		}
		else{
			pScore+=n;
		}
		
	}
	
	
	return 0;
}
