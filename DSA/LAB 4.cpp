#include <stdio.h>
#include <limits.h>
#include <conio.h>
#define MAX 10
struct ITEM{
int value;
int priority;
};
void ENQUEUE();
void DEQUEUE();
void DISPLAY();

int PEEK(int);

struct ITEM pq[MAX];
int size=-1;
int main(){
    char choice;
   
      
    do{
        printf("\n1. ENQUEUE\n");
        printf("2. DEQUEUE\n");
        printf("3. PEEK\n");
        printf("4. DISPLAY\n");
        printf("5. EXIT\n");
        printf("Enter Operation: ");
        scanf(" %c",&choice);
        switch(choice){
        case '1':
            ENQUEUE();
            break;
        case '2':
            DEQUEUE();
//            getch();
            break;
        case '3':
            PEEK(3);
//            getch();
            break;
        case '4':
            DISPLAY();
//            getch();
            break;
        case '5':
            printf("EXITING...\n");
//            getch();
            break;
        default:
            printf("NO SUCH CHOICE.....\n");
            printf("INPUT AGAIN\n");
//            getch();
        }
    }
    while(choice!='5');
    return 0;
}
void ENQUEUE(){
    int n1,n2;
    if(size==MAX-1){
        printf("QUEUE IS FULL\n");
        getch();
    }
    else{
        printf("Enter the value and priority to enqueue :: ");
        scanf("%d %d",&n1,&n2);
        size++;
        pq[size].value=n1;
        pq[size].priority=n2;
    }
}
void DEQUEUE(){
    if(size==-1){
        printf("QUEUE IS EMPTY\n");
    }
    else{
    int index=PEEK(1);
    printf("%d is dequeue.\n",pq[index].value);
    for (int i=index;i<size;i++){
    pq[i]=pq[i+1];
    }
    size--;
    }
}
int PEEK(int a){
    int highestPriority=INT_MIN;
    int index=-1;
    for (int i=0; i<=size;i++){
        if (highestPriority==pq[i].priority && index>-1 && pq[index].value<pq[i].value){
            highestPriority = pq[i].priority;
            index=i;
        }
        else if (highestPriority < pq[i].priority) {
            highestPriority=pq[i].priority;
            index=i;
        }
    }
    if (a==3){
        printf("%d is value with highest priority.\n",pq[index].value);
        printf("It has %d priority\n",highestPriority);
    }
    return index;
}
void DISPLAY(){
    if(size==-1){
        printf("QUEUE IS EMPTY\n");
    }
    else{
            printf("(VALUE,PRIORITY):\n");
        for(int i=0;i<=size;i++){
            printf("(%d,%d)\t",pq[i].value,pq[i].priority);
        }
        printf("\n");
    }
}
