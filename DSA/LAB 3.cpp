#include <stdio.h>
#include <conio.h>
#define MAX 7
struct CQUEUE{
int rear;
int front;
int item[MAX];
};

void ENQUEUE(struct CQUEUE *);
void DEQUEUE(struct CQUEUE *);
void DISPLAY(struct CQUEUE *);

int main(){
    struct CQUEUE cq;
    cq.front=MAX-1;
    cq.rear=MAX-1;
    char choice;
    do{
        printf("\n1. ENQUEUE\t");
        printf("2. DEQUEUE\n");
        printf("3. DISPLAY\t");
        printf("4. EXIT\n");
        printf("Enter Command:");
        scanf(" %c",&choice);
        switch(choice){
        case '1':
            ENQUEUE(&cq);
            break;
        case '2':
            DEQUEUE(&cq);
//            getch();
            break;
        case '3':
            DISPLAY(&cq);
//            getch();
            break;
        case '4':
//            printf("EXITING...\n");
//            getch();
            break;
        default:
            printf("NO SUCH CHOICE.....\n");
            printf("INPUT AGAIN\n");
            getch();
        }
    }
    while(choice!='4');
    return 0;
}
void ENQUEUE(struct CQUEUE *cq){
    int num;
    if((cq->rear+1)%MAX==cq->front){
        printf("QUEUE IS FULL\n");
        getch();
    }
    else{
        printf("Enter the value : ");
        scanf("%d",&num);
        cq->rear=(cq->rear+1)%MAX;
        cq->item[cq->rear]=num;
    }
}
void DEQUEUE(struct CQUEUE *cq){
    int num;
    if(cq->rear==cq->front){
        printf("QUEUE IS EMPTY\n");
    }
    else{
        num=cq->item[(cq->front+1)%MAX];
        printf("%d is dequeue\n",num);
        cq->front=(cq->front+1)%MAX;
    }
}
void DISPLAY(struct CQUEUE *cq){
    if(cq->rear==cq->front){
        printf("QUEUE IS EMPTY\n");
    }
    else{
        for(int i=(cq->front+1)%MAX;i<=cq->rear;i=(i+1)%MAX){
            printf("%d\t",cq->item[i]);
        }
        printf("\n");
    }
}
