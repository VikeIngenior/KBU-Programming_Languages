#include <stdio.h>  
   

struct node{  
    int data;  
    struct node *next;  
};      
   
 
struct node *head = NULL;  
   

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
   

void changeFirstAndLast() {  
    struct node *index = head, *temp = NULL, *index2 = NULL;  
      
    
    if(head == NULL) {  
        return;  
    }  
    else {  
        
        while(index->next != NULL) {  
            index2 = index;  
            index = index->next;  
        }  
          
          
        if(head == index) {  
            return;  
        }  
        
        else if(head->next == index) {  
            temp = head;  
            head = index;  
            head->next = temp;    
            temp->next = NULL;  
        }  
        else {  
            temp = head;  
            head = index;  
            head->next = temp->next;   
            index2->next = temp;   
            temp->next = NULL;  
        }  
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
      
int main()  
{  
    printf("Enter a number to add to the list.\nEnter -1 to end.\n");
	int e=0;
	scanf("%d",&e);
	while(e!=-1){
		addNode(e);
		scanf("%d",&e);
	} 
	print();
	changeFirstAndLast();  
	print();
   
    return 0;  
}  
