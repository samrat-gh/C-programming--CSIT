#include<stdio.h>
int main()
{
char negp ,negq,pconq,pdisq,pimpleq,pbimpleq,pxorq;
char P[]={'F','F','T','T'};
char Q[]={'F','T','F','T'};
int A[]={0,0,1,1};
int B[]={0,1,0,1};
int i,j;
printf("\np \t q \t ~p \t ~q \t p^q \t pVq \t p->q \t p<->q \t pXORq\n");
for(i=0;i<4;i++){
	if (A[i]==0)
	negp='T';
	else
	negp='F';
	
	if (B[i]==0)
	negq='T';
	else
	negq='F';
	
	if(A[i]&&B[i]==1)
	pconq='T';
	else
	pconq='F';
	
	if(A[i]||B[i]==1)
	pdisq='T';
	else
	pdisq='F';
	
	if(A[i]==1&&B[i]==0)
	pimpleq='F';
	else
	pimpleq='T';
	if(A[i]==B[i])
	pbimpleq='T';
	else
	pbimpleq='F';
	if(A[i]==B[i])
	pxorq='F';
	else
	pxorq='T';
	printf("%c \t %c \t %c \t %c \t %c\t %c \t %c \t %c \t %c \n",P[i],Q[i],negp,negq,pconq,pdisq,pimpleq,pbimpleq,pxorq);
}
return 0;
}
