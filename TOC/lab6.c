#include <stdio.h>
#include <string.h>

int main(){
    char input[999];
    int i;
    char state='A';//States : A,B,C
    printf("Enter the string to be checked [INPUTS:0,1] :: ");
    scanf("%s",input);
    for(i=0;input[i]!='\0';i++){
            switch(state){

            case 'A':
                if(input[i]=='0')
                    state='B';
                else if(input[i]=='1')
                    goto end;
                break;

            case 'B':
                if(input[i]=='1')
                    state='C';
                else if(input[i]=='0')
                    goto end;
                break;

            case 'C':
                if(input[i]=='0')
                    state='C';
                else if(input[i]=='1')
                    state='C';
                break;

        }
    }
    printf("\n");
    if(state=='C'){
        printf("-->The string is accepted over NFA.\n");
    }
    else{
        end:
        printf("\n-->The string is not accepted over NFA.\n");
    }

    return 0;
}
