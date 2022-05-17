#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct node{
	int data;
	struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;

//sonuna node ekleme
int addNode(int alinan){
	
	//liste boþsa
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


//baþýna node ekleme




int deleteData(int alinan){
	struct node *prev=NULL;
	struct node *index=head;
	//boþsa
	if(head==NULL){
		print("Linked list is empty");
		return 1;
	}
	//head
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
	
	
	return 0;
}

