#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char a[40],b[40],c[40];
	int i,j,k;
	gets(a);
	gets(b);
	for(i=0;a[i]!='\0';i++)
	for(j=0;b[j]!='\0';j++)
	k=i-1;
	while(k!=-1){
		if(a[i-1]==b[j-1]){
			i--;
			j--;
			k--;
		}
		else{
			k=-1;
			printf("not same");
		}
	}
	if(a[i-1]==b[i-1]){
		printf("same");
	}
	return 0;
}
