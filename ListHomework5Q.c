#include<stdio.h>
#include<stdlib.h>

struct node {
int data;
struct node * next;
};
struct node *head=NULL;
struct node* cutheadaddlast(struct node** head){
	if (*head == NULL || (*head)->next == NULL)
		return 0;

	struct node *first = *head;
	struct node *last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	*head = first->next;
    first->next = NULL;
    last->next = first;
}

void addNode(int data) {  
    
    struct node *newNode = (struct node*)malloc(sizeof(struct node));  
    newNode->data = data;  
    newNode->next = NULL;  
      
    
    if(head == NULL) {  
        
        head = newNode;  
    }  
    else {  
        struct node *index = head;  
        while(index->next != NULL) {  
            index = index->next;  
        }  
         
        index->next = newNode;  
    }  
}  

void print() {  
     
    struct node *index = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(index != NULL) {  
          
        printf("%d ", index->data);  
        index = index->next;  
    }  
    printf("\n");  
}  

int main(){
	struct node *start = NULL;
    printf("Enter a number to add to the list.\nEnter -1 to end.\n");
	int e=0;
	scanf("%d",&e);
	while(e!=-1){
		addNode(e);
		scanf("%d",&e);
	} 
	print();
	cutheadaddlast(&start);
	print();

	return 0;
}
