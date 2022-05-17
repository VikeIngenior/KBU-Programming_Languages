#include <stdio.h>
#include <stdlib.h>

int main(){
	struct{
		char name[40];
		int length;
		struct {
			int day;
			int month;
			int year;
		} birthday;
	}person;
	printf("Your name: ");
	scanf("%s",person.name);
	printf("Your length: ");
	scanf("%d",&person.length);
	printf("Your birthday: ");
	scanf("%d %d %d",&person.birthday.day,&person.birthday.month,&person.birthday.year);
	
	
	return 0;
}
