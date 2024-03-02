//Lab Exercise - 1
//
//STACK
//1. PUSH
//2. POP
//3. DISPLAY
//4. EXIT


//Lab Exercise - 2
//
//Linear Queue 
//1. ENQUEUE
//2. DEQUEUE
//3. DISPLAY
//4. EXIT


#include <stdio.h>

#define MAX 10

struct Stack {
    int top;
    int item[MAX];
};

void push(struct Stack *);
void pop(struct Stack *);
void display(struct Stack *);

int main() {

    struct Stack s1;
    s1.top = -1;

    int n;

    printf("\n Stack Operation");

    do {
        printf("\n Enter the digits to carry out corresponding operation\n \t 1. PUSH \n\t 2. POP \n\t 3. DISPLAY \n\t 4. EXIT \n\n\t Enter Operation:");
        scanf("%d", &n);

        switch (n) {
            case 1:
                push(&s1);
                break;

            case 2:
                pop(&s1);
                break;

            case 3:
                display(&s1);
                break;

            case 4:
                break;
        }

    } while (n != 4);

    return 0;
}

void push(struct Stack *s) {
    if (s->top == MAX - 1) {
        printf("\n Stack Overflow");
    } else {
        s->top++;
        printf("\n Enter the integer to push: ");
        scanf("%d", &s->item[s->top]);
        printf("\n Pushed Successfully!\n \n");
    }
}

void pop(struct Stack *s) {
    if (s->top == -1) {
        printf("\n Stack is empty, No value to pop");
    } else {
        printf("\n%d is popped", s->item[s->top]);
        s->top--;
    }
}

void display(struct Stack *s) {
    int i;
    if (s->top == -1) {
        printf("\n Stack is empty, No value to display \n \n");
    } else {
        printf("\n Stack elements: ");
        for (i = s->top; i >= 0; i--) {
            printf("%d \t", s->item[i]);
        }
        printf("\n");

    }
}




#include <stdio.h>
#include<stdlib.h>
#define CAPACITY 50
 
void enQueue();
void deQueue();
void display();
int queue_array[CAPACITY];
int rear = - 1;
int front = - 1;

int main() { 
    int choice;
    while (){
        printf("\n1.Enter 1 to insert element to queue \n");
        printf("2.Enter 2 to delete element from queue \n");
        printf("3.Enter 3 to display all elements of queue \n");
        printf("4.Enter 4 to quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            enQueue();
            break;
            case 2:
            deQueue();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(1);
            default:
            printf("Wrong choice \n");
        } 
    } 
    return 0;
} 
 
void enQueue()
{
    int element;
    if (rear == CAPACITY - 1)
    printf("Queue is full\n");
    else
    {
        if (front == - 1)
        
        front = 0;
        printf("Enter element which is to be inserted ");
        scanf("%d", &element);
        rear = rear + 1;
        queue_array[rear] = element;
    }
} /* End of insert() */
 
void deQueue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue is empty we cannot delete an element  \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue_array[front]);
        front = front + 1;
    }
} /* End of delete() */
 
void display()
{
    int i;
    if (front==-1 || front > rear)
        printf("Queue is empty \n");
    else
    {
        printf("Elements of Queue are: \n");
        for (i = front; i <= rear; i++)
              printf("%d ", queue_array[i]);
        printf("\n");
    }
    
}
