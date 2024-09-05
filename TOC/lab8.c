#include <stdio.h>
#include <string.h>

 char input[999];
int NFA(int, char);
int main(){
   char state;
    printf("Enter the string to be checked [INPUTS:0,1] :: ");
    scanf("%s",input);

    state=NFA(0, 'A');

    printf("\n");
    if(state=='D')
        printf("-->The string is accepted over NFA.\n");
    else
        printf("-->The string is not accepted over NFA.\n");
    
    return 0;
}
int NFA(int index,char state){
    if(input[index]=='\0'){
        return state;
    }
    if(state=='A'){
        if(input[index]=='0'){
                char next_state1=NFA(index+1,'A');
                char next_state2=NFA(index+1,'B');
            if((next_state1=='D')||(next_state2=='D'))
                return 'D';
        }
        else if(input[index]=='1')
            return NFA(index+1,'A');
    }
    else if(state=='B'){
         if(input[index]=='0')
            return NFA(index+1,'C');
    }
    else if(state=='C'){
         if(input[index]=='1')
            return NFA(index+1,'D');
    }
    else if(state=='D'){
            return NFA(index+1,'D');
    }
    return 'X';

}
