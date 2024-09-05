#include <stdio.h>
#include <string.h>

int main(){
    char keyword_list[32][10]={ "auto","break","case","char",
                        "const","continue","default","do",
                        "double","else","enum","extern",
                        "float","for","goto","if",
                        "int","long","register","return",
                        "short","signed","sizeof","static",
                        "struct","switch","typedef","union",
                        "unsigned","void","volatile","while"
                    };
    char input[10];
    int i, result=0;
    printf("Enter the string to be checked :: ");
    scanf("%s",input);
    for(i=0;i<32;i++){
    if(strcmp(input,keyword_list[i])==0){
        printf("\n->%s is keyword\n",input);
        goto end;
    }
    }
    char c = input[0];
    if((c=='_')||(c>='A' && c<='Z')||(c>='a' && c<='z')){
    for(i=1;input[i]!='\0';i++){
            c=input[i];
            if((c=='_')||(c>='A' && c<='Z')||(c>='a' && c<='z')||(c<='0'||c<='9'))
                result = 1;
            else
                result = 0;
    }
    }
    if(result==1){
         printf("\n->%s is identifier\n",input);
    }
    else{
        printf("\n-> Invalid identifier\n");
    }

    end:
    return 0;
}
