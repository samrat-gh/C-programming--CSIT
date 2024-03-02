#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int FACTORIAL(int);
int FIBO(int,int,int);
int GCD(int,int);
void TOH(char,char,char,int);

int main(){
    int num1, num2;
    int choice;
    do{
        printf("\n1. FACTORIAL\n");
        printf("2. FIBONACCI SERIES\n");
        printf("3. GCD\n");
        printf("4. TOWER OF HANOI\n");
        printf("5. EXIT\n");
        printf("Enter Operation: ");
        scanf("%d",&choice);
        switch(choice){
        case 1:
            printf("Enter the number to find factorial :: ");
            scanf("%d",&num1);
            if(num1<0){
                printf("PLEASE ENTER POSITIVE NUMBER\n");
            }
            else{
                printf("The factorial of %d is %d.\n",num1,FACTORIAL(num1));
            }
            getch();
            break;
        case 2:
            printf("Enter the number of elements of series :: ");
            scanf("%d",&num1);
            if(num1<0){
                printf("PLEASE ENTER POSITIVE NUMBER\n");
            }
            else{
                FIBO(num1,1,2);
                printf("\n");
            }
            getch();
            break;
        case 3:
            printf("Enter two numbers :: ");
            scanf("%d %d",&num1,&num2);
            if((num1<0)||(num2<0)){
                printf("PLEASE ENTER POSITIVE NUMBER\n");
            }
            else{
                printf("The GCD of %d and %d is %d\n",num1,num2,GCD(num1,num2));
            }
            getch();
            break;
        case 4:
            printf("Enter the number of Disks:: ");
            scanf("%d",&num1);
            if(num1<0){
                printf("PLEASE ENTER POSITIVE NUMBER\n");
            }
            else{
                TOH('S','T','A',num1);
            }
            printf("\n");
            getch();
            break;
        case 5:
            printf("EXITING...\n");
            getch();
            break;
        default:
            printf("NO CHOICE CHOICE....");
            printf("Enter again..");
            getch();
        }
    }
    while(choice!=5);
    return 0;
}
int FACTORIAL(int n){
    if (n==0)
        return 1;
    else
        return(n*FACTORIAL(n-1));
}
int FIBO(int n,int a,int b){
    if(n==0)
        return 0;
    else{
        printf("%d\t",a);
        return FIBO(n-1,b,a+b);
    }
}
int GCD(int n1, int n2){
    if (n2==0)
        return n1;
    else
        return GCD(n2, n1%n2);
}
void TOH(char S, char T, char A, int num) {
    if(num == 1)
        printf("\nMove disc %d from peg %c to peg %c", num, S, T);
    else {
        TOH(S, A, T, num-1);
        printf("\nMove disc %d from peg %c to peg %c", num, S, A);
        TOH(A, T, S, num-1);
    }
}

