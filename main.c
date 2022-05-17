#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int j,i;
	char isim[2][5][20];
	int vize[2][5],final[2][5];
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("%d. siniftaki %d. ogrencinin adi:",i+1,j+1); scanf("%s",&isim[i][j]);
			printf("%d. siniftaki %d. ogrencinin vizesi:",i+1,j+1); scanf("%d",&vize[i][j]);
			printf("%d. siniftaki %d. ogrencinin finali:",i+1,j+1); scanf("%d",&final[i][j]);
			
		}
		printf("\n");
	}
	for(i=0;i<2;i++){
		for(j=0;j<5;j++){
			printf("%d. siniftaki %d. ogrencinin adi: %s\n",i+1,j+1,isim[i][j]); 
			printf("%d. siniftaki %d. ogrencinin vizesi: %d\n",i+1,j+1,vize[i][j]); 
			printf("%d. siniftaki %d. ogrencinin finali: %d\n",i+1,j+1,final[i][j]);
			
		}
	}
	
	
	
	
	return 0;
}
