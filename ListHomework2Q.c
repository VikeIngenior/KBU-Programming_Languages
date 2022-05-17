#include <stdio.h>
#include <stdlib.h>

struct node {
int number;
struct node * next;
};

struct node *head=NULL;

struct node* cutlastaddhead(struct node** head)
{
	if (*head == NULL || (*head)->next == NULL)
		return 0;

	struct node *secLast = NULL;
	struct node *last = *head;

	while (last->next != NULL)
	{
		secLast = last;
		last = last->next;
	}
	secLast->next = NULL;
	last->next = *head;
	*head = last;
}

void push(struct node** head, int newnumber)
{
	struct node* newnode =(struct node*) malloc(sizeof(struct node));
	newnode->number = newnumber;
	newnode->next = (*head);
	(*head) = newnode;
}

void print() {  
     
    struct node *index = head;  
      
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    while(index != NULL) {  
          
        printf("%d ", index->number);  
        index = index->next;  
    }  
    printf("\n");  
}  

int main()
{
	struct node *start = NULL;

	printf("Enter a number to add to the list.\nEnter -1 to end.\n");
	int e=0;
	scanf("%d",&e);
	while(e!=-1){
		addNode(e);
		scanf("%d",&e);
	} 

	printf("\n Linked list before moving last to front\n");
	print();

	cutlastaddhead(&start);

	printf("\n Linked list after removing last to front\n");
	print();

	return 0;
}
