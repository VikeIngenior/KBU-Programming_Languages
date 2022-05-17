#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int sayi,i,digit=0,a[5];
	scanf("%d",&sayi);
	
	while(sayi%10>0){
	    sayi=sayi%10;
		digit++;
	}
	printf("sayi: %d",sayi);
	printf("digit: %d",digit);
	return 0;
}
