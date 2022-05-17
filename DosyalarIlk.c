#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	

	FILE *mfPtr;
	char ad[40];
	int sayac=1,sNumber,grade;
	mfPtr=fopen("studentFile.dat","w");
	printf("isim,numara,not girin\n-->");
	scanf("%s %d %d",ad,&sNumber,&grade);
	fprintf(mfPtr,"%-10s%-13d%d",ad,sNumber,grade);
	while(sayac<=2){
	     
		printf(mfPtr,"%s %d %d",ad,sNumber,grade);
		printf("-->");
		scanf("%s%d%d",ad,&sNumber,&grade);
		fprintf(mfPtr,"%-10s%-13d%d\n",ad,sNumber,grade);
		sayac++;
	}
	
	rewind(mfPtr);
	fclose(mfPtr);
	mfPtr=fopen("studentFile.dat","r");
	while(!feof(mfPtr)){
		printf("%-10s%-13d%d\n",ad,sNumber,grade);
		fscanf(mfPtr,"%s%d%d",ad,&sNumber,&grade);
	}
	
	
	fclose(mfPtr);
	
	
	return 0;
}
