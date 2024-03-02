// Lab Exercise 8
// *Circular Linked List
//   Add at the beginning
//   Add at the End
//   Delete from beginnning
//   Delete from end
//   Display
//   Exit

#include <stdio.h>
#include <stdlib.h>

typedef struct Clist{
	int data;
	struct Clist *next;
	
}node;

void AddAtBeginning(node **, node **);
void AddAtEnd(node **, node **);
void DeleteFromBeginning(node **, node **);
void DeleteFromEnd(node **, node **);
void Display(node **, node **);

int main() {
	
	int n;
	
	node *head, *tail;
	
	head = NULL;
	tail = NULL;
	
	do {
	
	printf("\n1. Add at Beginning\n");
	printf("2. Add at End\n");
	printf("3. Delete from Beginning\n");
	printf("4. Delete from End\n");
	printf("5. Display\n");
	printf("6. Exit\n");
	
	printf("\nEnter Operation: ");
	scanf("%d", &n);
	
	switch(n) {
		case 1 : AddAtBeginning(&head, &tail);
		printf("\n");
		break;
		
		case 2 : AddAtEnd(&head, &tail);
		printf("\n");
		break;
		
		case 3 : DeleteFromBeginning(&head, &tail);
		printf("\n");
		break;
		
		case 4 : DeleteFromEnd(&head, &tail);
		printf("\n");
		break;
		
		case 5 : Display(&head, &tail);
		printf("\n");
		break;
		
		case 6 : printf("Exiting ...");
		break;
		
		default: printf("wrong Input! \n");
	}
	}
	while (n != 6);
	
	
	return 0;
}


void AddAtBeginning(node **head, node **tail){
	
   int n;
   
   node *temp;
   
   printf("Enter a number");
   scanf("%d", &n);
   
   temp = (node*)malloc(sizeof(node));
   
   temp -> data = n;
   temp -> next = NULL;
   
   if(*head == NULL){
   	*head = temp;
   	*tail = temp;
   }
   else {
   	temp -> next = *head;
   	(*tail) -> next = temp;
   	*head = temp;
   }   

}


void AddAtEnd(node **head, node **tail){
	
   int n;
   
   node *temp;
   
   printf("Enter a number");
   scanf("%d", &n);
   
   temp = (node*)malloc(sizeof(node));
   
   temp -> data = n;
   temp -> next = NULL;
   
   if(*head == NULL){
   	*head = temp;
   	*tail = temp;
   }
   else {
   	temp -> next = *head;
   	(*tail) -> next = temp;
   	*tail = temp;
   }   
}


void DeleteFromBeginning(node **head, node **tail){
  node *temp;
 
 	if(*head == NULL){
		printf("List is empty");
	}
	else {
		temp = *head;
		printf("The deleted value is %d", temp -> data);
		*head = temp -> next;
		(*tail) -> next = *head;
		free(temp); 
	}
}


void DeleteFromEnd(node **head, node **tail){
  node *temp, *temp1;
 
 	if(*head == NULL){
		printf("List is empty");
	}
	else {
		
		temp = *head;
		temp1 = *tail;
		
		while (temp -> next == *tail){
			temp =  temp -> next;
		}
		
		printf("The deleted value is %d",(*tail) -> data);
		temp -> next = *head;
		*tail = temp;
		free(temp1); 
	}
}


void Display(node **head, node **tail) {
	
	node *temp;
	
	if(*head == NULL){
		printf("List is Empty");
}
else {
	temp = *head;
	do {
		printf("%d \t", temp -> data);
		temp = temp ->  next;
	}while (temp != *head );
}
}


