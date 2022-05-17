#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i,n,bir=0,iki=0,uc=0,dort=0,bes=0,alti=0;
	srand(time(NULL));
	//int upper=6 lower=1;
	//n=rand()(upper-lower+1)+lower;
	printf("Hundred times dice roll.\n");
	for(i=1;i<=10;i++){
		n=rand()%6+1;
		printf("%d\n",n);
		if(n==1){
			bir++;
		}
		else if(n==2){
			iki++;
		}
		else if(n==3){
			uc++;
		}
		else if(n==4){
			dort++;
		}
		else if(n==5){
			bes++;
		}
		else{
			alti++;
		}
	}
	printf("Bir: %d\nIki: %d\nUc: %d\nDort: %d\nBes: %d\nAlti: %d",bir,iki,uc,dort,bes,alti);
	return 0;
}
