#include <stdio.h>

int main() {
char str[20];
int num;
int n, i, j = 0;

FILE *fp;
FILE *prime;
fp = fopen("num.txt", "r");
prime = fopen("prime.txt", "w");

while(fscanf(fp, "%d", &num)!=EOF){
	for(i = 2; i <= num; i++) {
	if(num % i == 0) {
		j++; 
		}
	}
	if(j == 1){
	fprintf(prime, "%d \t", num);
}
j = 0;
}

fclose(fp);
fclose(prime);	
return 0;	
}



