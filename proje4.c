#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*struct student {
	int number;
	char name[40];
	char surname[40];
	int midtermGrade;
};*/


int main(int argc, char *argv[]) {
	struct computer {
	char brand[40];
	char model[40];
	int ram_gb;
	char processor[40];
	char graphic_card[40];
    };
    struct computer array[10];
    int i;
    for(i=0;i<3;i++){
    	printf("%d. Computer\n",i+1);
    	printf("Brand: ");
    	scanf("%s",&array[i].brand);
    	printf("Model: ");
    	scanf("%s",&array[i].model);
    	printf("Ram: ");
    	scanf("%d",&array[i].ram_gb);
    	printf("Processor: ");
    	scanf("%s",&array[i].processor);
    	printf("Graphic Card: ");
    	scanf("%s",&array[i].graphic_card);
	}
	for(i=0;i<3;i++){
		printf("%d. Computer\n",i+1);
		printf("%s\n",array[i].brand);
		printf("%s\n",array[i].model);
		printf("%d\n",array[i].ram_gb);
		printf("%s\n",array[i].processor);
		printf("%s\n",array[i].graphic_card);
	}
	
	return 0;
}
