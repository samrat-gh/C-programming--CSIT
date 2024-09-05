#include <stdio.h>

int main(){
    char input[999];
    int i;
    char state='A';//States : A,B,C,D
    printf("Enter the string to be checked [INPUTS:0,1] :: ");
    scanf("%s",input);
    for(i=0;input[i]!='\0';i++){
            switch(state){

            case 'A':
                if(input[i]=='0')
                    state='B';
                else if(input[i]=='1')
                    state='D';
                break;

            case 'B':
                if(input[i]=='1')
                    state='C';
                else if(input[i]=='0')
                    state='D';
                break;

            case 'C':
                if(input[i]=='0')
                    state='C';
                else if(input[i]=='1')
                    state='C';
                break;

            case 'D':
                if(input[i]=='0')
                    state='D';
                else if(input[i]=='1')
                    state='D';
                break;


            }
    }
    printf("\n");
    if(state=='C')
        printf("-->The string is accepted over DFA.\n");
    else
        printf("-->The string is not accepted over DFA.\n");
    return 0;
}
