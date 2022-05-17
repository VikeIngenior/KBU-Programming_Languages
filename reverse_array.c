#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, c=4,e, a[5],b[5];
	for(i=0;i<5;i++){
		scanf("%d",&e);
		a[i]=e;
	}
	while (c>=0){
		for(j=0;j<5;j++){
			b[j]=a[c];
			c--;
		}
	}
	for(i=0;i<5;i++){
		printf("a[%d]: %d\n",i,a[i]);
	}
	printf("Reverse is:\n ");
	for(j=0;j<5;j++){
		printf("b[%d]: %d\n",j,b[j]);
	}
	
	return 0;
}
