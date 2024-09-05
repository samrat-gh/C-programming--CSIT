#include <stdio.h>
#include <string.h>

struct STACK{
    char value[100];
    int top;
};
struct STACK S;
void PUSH(char);
void POP();
int main(){
    char input[100];
    char state='A';
    int i;
    S.top=-1;
    printf("Enter the string to checked [INPUTS : {0,1} ] :: ");
    scanf("%s",input);

    if(state=='A'){
        PUSH('Z');
        state='B';
    }
    for(i=0;input[i]!='\0';i++){
        char ch=S.value[S.top];
        if(state=='B'){
                if(input[i]=='0'){
                    if(ch=='Z')
                        PUSH('0');
                    else if(ch=='1')
                        POP();
                    else if(ch=='0')
                        PUSH('0');
                }
                else if(input[i]=='1'){
                    if(ch=='Z')
                        PUSH('1');
                    else if(ch=='0')
                        POP();
                    else if(ch=='1')
                        PUSH('1');
                }
            }

        }
    if(S.value[S.top]=='Z')
        state='C';
    if(state=='C')
        printf("-->The string is accepted over PDA.\n");
    else
        printf("-->The string is not accepted over PDA.\n");
    
    return 0;
}
void PUSH(char ch){
    S.top++;
    S.value[S.top]=ch;
}
void POP(){
    S.top--;
}
