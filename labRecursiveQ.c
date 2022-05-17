#include <stdio.h>
int fun(int dizi[],int n){
	//int odd;
	if(n>=0){
	
	if(dizi[n]%2!=0){
		
		return 1+fun(dizi,n-1);
	}
	else
		return fun(dizi,n-1);
	
}
return 0;
}
int main(){
	int a[]={0,1,2,3,4,5,6,7,8,9};
	printf("%d",fun(a,9));
	return 0;
}

