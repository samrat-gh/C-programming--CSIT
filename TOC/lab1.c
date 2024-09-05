#include <stdio.h>
#include <string.h>

char* strrev(char* str) {
    if (!str || !*str) return str; // Check for null or empty string

    int i = strlen(str) - 1, j = 0;
    char ch;
    while (i > j) {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        i--;
        j++;
    }
    return str; // Make sure to return the modified string
}


int main(){
    char string[999],temp[999]="",pre[999]="",suff[999]="",substr[999]="";
    int i,j;
    char state='A';//States : A,B,C,D
    printf("Enter the string :: ");
    scanf("%s",string);

    printf("\n-->PREFIX :\n");
    for(i=0;i<strlen(string);i++){
        strncat(pre,&string[i],1);
        printf("%s\n",pre);
    }
    printf("\n-->SUFFIX :\n");
    for(i=strlen(string)-1;i>=0;i--){
        strncat(suff,&string[i],1);
        strcpy(temp,suff);
        printf("%s\n",strrev(temp));
    }
    printf("\n-->SUBSTRING :\n");
    for(i=0;i<strlen(string);i++){
            for(j=i;j<strlen(string);j++){
                strncat(substr,&string[j],1);
                printf("%s\t",substr);
            }
            printf("\n");
            strcpy(substr,"");
    }

    return 0;
}

