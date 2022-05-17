#include <stdio.h>
#include <stdlib.h>


int main() {
	int i;
	float toplam=0,sayi;
	float artOrt;
	int dizi[100];
	printf("Eleman sayisini giriniz: ");
	scanf("%f",&sayi);
	for(i=0;i<sayi;i++){
		printf("Dizinin %d. degerini giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	printf("\n\n");
	for(i=0;i<sayi;i++){
		printf("%d ",dizi[i]);
		toplam=toplam+dizi[i];
		artOrt=toplam/sayi;
		//printf("%d",toplam);
	}
	printf("\nGirilen degerlerin toplami=%f\n",toplam);
	printf("Girilen degerlerin aritmetik ortalmasi=%f",artOrt);
	
	
	return 0;
}
