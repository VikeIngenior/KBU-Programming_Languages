#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;


int addNode(int alinan){
	
	
	if(head==NULL){
		struct node *yeni=(struct node*)malloc(sizeof(struct node));
		yeni->data=alinan;
		yeni->next=NULL;
		
		head=tail=yeni;
		
	}
	else{
		struct node *yeni=(struct node*)malloc(sizeof(struct node));
		yeni->data=alinan;
		yeni->next=NULL;
		
		tail->next=yeni;
		tail=yeni;
	}
	return 1;
	
}

int addNodeHead(int alinan){
	if(head==NULL){
		struct node *yeni=(struct node *)malloc(sizeof(struct node));
		yeni->data=alinan;
		yeni->next=NULL;
		
		head=tail=yeni;
	}
	else{
		struct node *yeni=(struct node*)malloc(sizeof(struct node));
		yeni->data=alinan;
		yeni->next=head;
		
		head=yeni;
	}
	
	return 1;
}

int print(){
	struct node *index=head;
	while(index != NULL){
		printf("%d - ",index->data);
		index=index->next;
	}
	printf("\n");
	return 1;
}

int main(){
	printf("Enter a number to add to the list.\nEnter -1 to end.\n");
	int a=0;
	scanf("%d",&a);
	while(a!=-1){
		
		if(a%2==1){
			addNodeHead(a);
		}
		else{
			addNode(a);
		}
		scanf("%d",&a);
	}
	print();
	return 0;
}
