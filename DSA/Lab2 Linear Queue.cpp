#include <stdio.h>
#include<stdlib.h>
#define Capacity 50
int qarr[Capacity];
int rear = - 1;
int front = - 1;
 
void enQueue()
{
    int element;
    if (rear == Capacity - 1)
    printf("Queue is full\n");
    else
    {
        if (front == - 1)
        
        front = 0;
        printf("\nEnter element to insert: ");
        scanf("%d", &element);
        rear = rear + 1;
        qarr[rear] = element;
    }
} 
 
void deQueue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue is empty!! \n");
       
    }
    else
    {
        printf("\nElement deleted from queue: %d\n", qarr[front]);
        front = front + 1;
    }
} 
 
void display()
{
    int i;
    if (front==-1 || front > rear)
        printf("Queue is empty!! \n");
    else
    {
        printf("\nElements of Queue are: \n");
        for (i = front; i <= rear; i++)
              printf("%d ", qarr[i]);
        printf("\n");
    }
    
}
int main()
{
    int ch;
    while (1)
    {
       printf("----- Queue Menu ----");
printf("\n1.EnQueue\n2.DeQueue\n3.Display\n4.Exit");
printf("\nEnter Operation:");
scanf("%d",&ch);
switch(ch)
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
} 
