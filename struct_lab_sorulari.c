#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main(int argc, char *argv[]) {
	
	struct student{
	
		int number;
		char name[50];
		int midGrade;
		int finGrade;
	};
	int sayac=0;
	struct student *info;
	info = (struct student*)malloc(sizeof(struct student));
	int e=0,c,i,classAvg,markSum=0,temp,bestStudent,bestStudentNumber;
	char bestStudentName[50];

	
while(1){
		printf("1) Add new record.\n");
	printf("2) List records.\n");
	printf("3) Update records.\n");
	printf("4) Calculate class average.\n");
	printf("5) Show best student according to average.\n");
	scanf("%d",&c);

	switch(c){
	
	case 1:
		
	    info=(struct student*)realloc(info,sayac+1*sizeof(struct student) );
	    /*printf("temp");
		scanf("%d",&temp);
	    (info+(sayac))->number=temp;
	    printf("%d",(info+sayac)->number);
	    */
		printf("Name: ");
		getchar();
	    gets((info+sayac)->name);
	    printf("Number: ");
	    scanf("%d",&(info+sayac)->number);
	    printf("Midterm Grade: ");
	    scanf("%d",&(info+sayac)->midGrade);
	    printf("Final Grade: ");
	    scanf("%d",&(info+sayac)->finGrade);
	    printf("%s %d %d %d\n",(info+sayac)->name,(info+sayac)->number,(info+sayac)->midGrade,(info+sayac)->finGrade);
	    
	    sayac++;
	    break;
	case 2:
	    for(i=0;i<sayac;i++){
	    	printf("%s %d %d %d\n",(info+i)->name,(info+i)->number,(info+i)->midGrade,(info+i)->finGrade);
		}
		break;
	case 3:
	    break;	
	case 4:
	    for(i=0;i<sayac;i++){
	    	markSum+=(info+i)->midGrade*0.4+(info+i)->finGrade*0.6;
		}
		classAvg=markSum/sayac;	    
		printf("Class average is %d\n",classAvg);
		break;
	case 5:
		
		bestStudent=(info)->midGrade*0.4+(info)->finGrade*0.6;
		for(i=0;i<sayac;i++){
			if((info+i)->midGrade*0.4+(info+i)->finGrade*0.6>bestStudent){
				bestStudent=(info+i)->midGrade*0.4+(info+i)->finGrade*0.6;
				bestStudentNumber=(info+i)->number;
				strcpy(bestStudentName,(info+i)->name);
				//printf("best student number: %d",bestStudentNumber);
			}
		}
		printf("Best student's number is %d\n",bestStudentNumber);
		printf("Best student's name is %s\n",bestStudentName);
		break;
}

} 
	    
	    
	    
	    
	    
	    
	return 0;
}
