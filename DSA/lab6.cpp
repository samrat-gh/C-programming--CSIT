// Lab Exercise 6
// *Singly Linked List
//   Add at the beginning
//   Add at the End
//   Add at Specified Position
//   Delete from beginnning
//   Delete from end
//	 Delete from Specified Position 
//   Display
//   Exit



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function prototypes
void insertAtBeginning(struct Node** headRef, int newData);
void insertAtEnd(struct Node** headRef, int newData);
void insertAtPosition(struct Node** headRef, int position, int newData);
void deleteFromBeginning(struct Node** headRef);
void deleteFromEnd(struct Node** headRef);
void deleteFromPosition(struct Node** headRef, int position);
void display(struct Node* head);

int main() {
    struct Node* head = NULL;
    int choice, data, position;

    do {
        printf("\n\n--- MENU ---\n");
        printf("1. Insert at beginning\n");
        printf("2. Insert at end\n");
        printf("3. Insert at specific position\n");
        printf("4. Delete from beginning\n");
        printf("5. Delete from end\n");
        printf("6. Delete from specific position\n");
        printf("7. Display\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Enter data to insert at beginning: ");
                scanf("%d", &data);
                insertAtBeginning(&head, data);
                break;
            case 2:
                printf("Enter data to insert at end: ");
                scanf("%d", &data);
                insertAtEnd(&head, data);
                break;
            case 3:
                printf("Enter position to insert at: ");
                scanf("%d", &position);
                printf("Enter data to insert at position %d: ", position);
                scanf("%d", &data);
                insertAtPosition(&head, position, data);
                break;
            case 4:
                deleteFromBeginning(&head);
                break;
            case 5:
                deleteFromEnd(&head);
                break;
            case 6:
                printf("Enter position to delete from: ");
                scanf("%d", &position);
                deleteFromPosition(&head, position);
                break;
            case 7:
                display(head);
                break;
            case 8:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while(choice != 8);

    return 0;
}

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

// Function to insert a new node at the end of the linked list
void insertAtEnd(struct Node** headRef, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    struct Node* last = *headRef;

    newNode->data = newData;
    newNode->next = NULL;

    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = newNode;
}

// Function to insert a new node at a specific position in the linked list
void insertAtPosition(struct Node** headRef, int position, int newData) {
    if (position < 1) {
        printf("Invalid position!\n");
        return;
    }

    if (position == 1) {
        insertAtBeginning(headRef, newData);
        return;
    }

    struct Node* temp = *headRef;
    for (int i = 1; i < position - 1 && temp != NULL; i++)
        temp = temp->next;

    if (temp == NULL) {
        printf("Invalid position!\n");
        return;
    }

    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = temp->next;
    temp->next = newNode;
}

// Function to delete a node from the beginning of the linked list
void deleteFromBeginning(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty, nothing to delete!\n");
        return;
    }

    struct Node* temp = *headRef;
    *headRef = (*headRef)->next;
    free(temp);
}

// Function to delete a node from the end of the linked list
void deleteFromEnd(struct Node** headRef) {
    if (*headRef == NULL) {
        printf("List is empty, nothing to delete!\n");
        return;
    }

    struct Node* secondLast = *headRef;
    struct Node* last = *headRef;

    while (last->next != NULL) {
        secondLast = last;
        last = last->next;
    }

    if (secondLast == last) {
        *headRef = NULL;
    } else {
        secondLast->next = NULL;
    }

    free(last);
}

// Function to delete a node from a specific position in the linked list
void deleteFromPosition(struct Node** headRef, int position) {
    if (*headRef == NULL) {
        printf("List is empty, nothing to delete!\n");
        return;
    }

    struct Node* temp = *headRef;

    if (position == 1) {
        *headRef = temp->next;
        free(temp);
        return;
    }

    for (int i = 1; temp != NULL && i < position - 1; i++)
        temp = temp->next;

    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position!\n");
        return;
    }

    struct Node* next = temp->next->next;
    free(temp->next);
    temp->next = next;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Linked list: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

