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

int deleteFromMiddle(){
	struct node *index=head;
	struct node *prev=NULL;
	int i,counter=0;
	while(index!=NULL){
		index=index->next;
		counter++;
	}
	index=head;
	for(i=0;i<=(counter-1)/2;i++){
		prev=index;
		index=index->next;
	}
	deleteData(prev->data);
	
	return 1;
}





int deleteData(int alinan){
	struct node *prev=NULL;
	struct node *index=head;
	
	if(head==NULL){
		print("Linked list is empty");
		return 1;
	}
	
	if(head->data==alinan){
		struct node *t=head;
		head=head->next;
		free(t);
		return 1;
	}
	while(index!=NULL && index->data!=alinan){
		prev=index;
		index=index->next;
	}
	if(index==NULL){
		printf("data not found");
		return 1;
	}
	prev->next=index->next;
	
	if(tail->data==alinan){
		tail=prev;
	}
	free(index);
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
	printf("First, create a linear list.\Enter a number to add to the list.\nEnter -1 to end.\n");
	int e=0;
	scanf("%d",&e);
	while(e!=-1){
		addNode(e);
		scanf("%d",&e);
	}
	print();
	deleteFromMiddle();
	print();
	return 0;
}
