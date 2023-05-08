////1 
//#include <stdio.h>
//int main() {  
//printf("My name is Samrat Ghimire");
//	return 0;
//}



////2
//#include <stdio.h>
//int main() {
//	int a = 10, b = 5;
//	printf("Let two numbers, a = 10 and b = 5 \n");
//	printf("\nAddition : a + b = %d \n", a + b);
//	printf("Subtraction: a - b = %d \n", a - b);
//	printf("Multiplication : a*b = %d \n", a*b);
//	printf("Division: a / b = %d \n", a/b);
//	
//	return 0;
//	
//}


// 3
//#include <stdio.h>
//
//int main() {
//    printf("// 3: output\n\n");
//    float celsius, fahrenheit;
//    int a;
//
//    printf("Enter '1' to convert celsius to fahrenheit and '2' to convert fahrenheit to celsius: ");
//    scanf("%d", &a);
//
//    if (a == 1) {
//        printf("Enter the value in celsius: ");
//        scanf("%f", &celsius);
//        fahrenheit = (celsius * 1.8) + 32;
//        printf("%.2f celsius in fahrenheit is %.2f", celsius, fahrenheit);
//    } else if (a == 2) {
//        printf("Enter the value in fahrenheit: ");
//        scanf("%f", &fahrenheit);
//        celsius = (fahrenheit - 32) * 5/9;
//        printf("%.2f Fahrenheit in Celsius is %.2f", fahrenheit, celsius);
//    }
//
//    return 0;
//}




//4
//#include <stdio.h>
//int main(){
//	printf("// 4: output \n \n");
//	int lensqr = 10, areasqr, perimetersqr;
//	areasqr = lensqr*lensqr; 
//	perimetersqr = 4*lensqr;
//	printf("For square, the length is 10 \n");
//	printf("\nThe area of square is %d and perimeter is %d",areasqr , perimetersqr);
//	
//	int length = 15, breadth = 10, area, perimeter;
//	area = length * breadth;
//	perimeter = 2*(length + breadth);
//	printf("\n\n\nFor rectangle, the length is %d and breadth is %d", length, breadth);
//	printf("\n\nThe area of rectangle is %d and perimeter is %d", area, perimeter);
//	
//	return 0;
//}


//5. WAP to calculate diameter, circumference, and area of circle using constant.

//#include <stdio.h>
//int main(){
//	printf("// 5: output \n \n");
//   const float pi = 3.14;
//   const float r = 7.5;
//   float diameter, circumference, area;
//   
//   diameter =  2*r;
//   circumference = 2*pi*r;
//   area = 2*pi*r*r;
//   printf("Let us take the radius is 7.5cm \n");
//   printf("The diameter of circle is %.2fcm \n", diameter);
//   printf("The circumference of circle is %.2fcm \n", circumference);
//   printf("The area of circle of circle is %.2fcm^2 \n", area);
//   
//   return 0;
//}


//6. Write a program to express a length given in millimetres, centimetres to meters.

//#include <stdio.h>
//int main() {
//	int a;
//	float output;
//	//	printf("// 1: output \n \n");
//	printf("Enter '1' to convert millimeters to centimeters and '2'to convert centrimeters to meters: ");
//	scanf("%d", &a);
//	
//	printf("Enter the value: ");
//	scanf("%f", &output);
//
//   if(a == 1){
//   	output = output / 10;  
//	printf("The output is %.2f cm", output);
//   }	
//   else if(a == 2) {
//	output = output / 100;
//	printf("The output is %.2f m", output);    	
//   }
//
//return 0;	
//}






//7. WAP that takes input of two numbers and an operator in (+, -, *, /) as input and pass those numbers and an operator to the 
//function. The function should calculate the result of two numbers as indicated by operator and return the result. Display the result
//of computation in your program.

//#include <stdio.h>
//
//int main(){
//	printf("// 7: output \n \n");
//	int a, b, output;
//	char oper;
//
//printf("Enter the operator (+,-,*,/)= ");
//scanf("%c", &oper);
//
//printf("Enter two opearands ");
//scanf("%d %d",&a , &b);
//
//switch(oper)
//{
//case '+':
//	output = a + b;
//	printf("The sum is %d", output);
//	break;
// 
//case '-':
//	output = a - b;
//	printf("The difference is %d", output);
//	break;
//
//case '*':
//	output = a*b;
//	printf("The product is %d", output);
//	break;
//
//case '/':
//	output = a/b;
//	printf("The division is %d", output);
//	break;
//	
//}
//
//return 0;
//}




//8. Write a program to read annual salary of an employee and decide tax withheld as
//follows:
//       Salary Tax
//Up to 300,000 0%
//Up to 650,000 1%
//Above 650,000 5%


//#include <stdio.h>
//
//int main() {
//float salary;
//	printf("// 8: output \n \n");
//printf("Enter your salary :");	
//scanf("%f", &salary);
//
//if(salary < 300000) {
//	printf("No tax is imposed");
//}
//else if(salary >= 30000 && salary <= 650000) {
//	printf("1%% tax is imposed i.e %.2f", (salary)/100);
//}
//
//else if(salary > 650000){
//	printf("5%% tax is imposed i.e %.2f", (salary*5)/100);
//}
//return 0;	
//}


// 9. Write a program to check whether a number is even or odd.

//#include <stdio.h>
//
//int main() {
//	int a;
//printf("// 9: output \n \n");
//	printf("Enter a number: ");
//	scanf("%d", &a);
//	
//	if(a%2 == 0) {
//		printf("The number is even");
//	}
//	
//	else if(a%2 == 1) {
//		printf("The number is odd");	}
//		
//	return 0;
//}



//10.Write a program to check whether a given number is prime or not.

// #include <stdio.h>
//
//int main() {
//	int num, i, c =0 ;
//	printf("// 10: output \n \n");
//	
//	printf("Enter the number: ");
//	scanf("%d", &num);
//	
//	for(i = 1; i <= num; i++) {
//		if(num %i == 0){
//		c++;
//		}
//	}
//	
//	if(c == 2){
//		printf("%d is prime number", num);
//	}
//	else {
//		printf("%d is not the prime number", num);
//	}
//	return 0;
//}

//11.WAP that reverse the number. [3-digit number]

//#include <stdio.h>
//
//int main() {
//	int num, reverse, remainder;
//	
//	printf("// 11: output \n \n");
//	printf("Enter the number ");
//	scanf("%d", &num);
//	
//	while(num!=0) {
//		remainder =  num % 10;
//		reverse = reverse*10 + remainder;
//		num = num / 10;
//	}
//	
//	printf("The reverse of the number is %d ", reverse);
//	
//}


//12.WAP will swap the value of two numbers.
//
//#include <stdio.h>
//
//int main() {
//	int a = 10, b=24, temp;
//		printf("// 12: output \n \n");
//	printf("Before Swapping, a & b are valued as %d and %d \n", a, b);
//	printf("swapping....\n");
//	
//	temp = a;
//	a = b;
//	b = temp;
//	
//	printf("After Swapping, a & b are valued as %d and %d", a, b);
//	
//	return 0;
//}



//13.WAP that displays all ASCII codes.
//#include <stdio.h>
//
//int main() {
//	int i;
//	printf("// 13: output \n \n");
//	for(i=0; i<=256; i++){
//        printf("ASCII code %d: %c\n", i, i);
//    }
//    return 0;
//}


//14. WAP to find largest number among three numbers using if statement only.
//
//#include <stdio.h>

//int main() {
//	printf("// 14: output \n \n");
//	int a, b, c;
//	printf("Enter three number a, b & c: ");
//	scanf("%d %d %d", &a, &b, &c);
//	
//	if(a > b && a > c){
//		printf("a = %d is the greatest number", a);
//	}
//	
//	if(b > a && b > c) {
//	printf("b = %d is the greatest number", b);	
//	}
//	
//	if(c > a && c > b){
//		printf("c = %d is the greatest number", c);
//	}
//	return 0;
//	
//}


//15.Given marks in five subjects. WAP
//a. to display “PASS” or “FAIL” if assumed pass marks is 45 in each subject,
//b. to find percentage of marks obtained, and
//c. to find division for “PASS” students if 80% and above for “DISTINCTION”, 70%
//and above for “FIRST DIVISION” otherwise “SECOND DIVISION”.
//
//#include <stdio.h>
//
//int main(){
//	float phy, maths, dl, iit, c;
//	printf("// 15: output \n \n");
//	
//	printf("Enter your marks in Physics, Maths, Digital Logic, IIT and C programming respectively: ");
//	scanf("%f %f %f %f %f", &phy, &maths, &dl, &iit, &c);
//	
//	// For Pass and Fail check
//	if(phy >= 45 && maths >= 45 && dl >= 45 && iit >= 45 && c >= 45){
//		printf("You have passed");
//	}
//	else{
//		printf("You have failed");
//	}
//	
//	//For percentage
//	float percentage, fm = 500.00, marks;
//	marks = phy + maths + dl + iit + c;
//	percentage = (marks/fm)*100; 
//	
//	printf(" \nYou have scored overall %.2f percentage\n", percentage);
//if(percentage >= 80){
//	printf("Congratulations! For Securing Distinction");
//}
//else if(percentage >= 70){
//	printf("Congratulation! For Securing First Division");
//}
//
//else if(percentage >= 45){
//	printf("Congratulation! For Securing Second Division");
//}
//
//else{
//	printf("Wrong Input! Try Again");
//}
//	
//	return 0;
//	
//}

//16.WAP using switch statement to develop a simple calculator for +, -, *, /, and % operators.

//#include <stdio.h>
//
//int main(){
//	int a, b, output;
//	char oper;
//
//	printf("// 16: output \n \n");
//printf("Enter the operator (+,-,*,/,%%)= ");
//scanf("%c", &oper);
//
//printf("Enter two opearands ");
//scanf("%d %d",&a , &b);
//
//switch(oper)
//{
//case '+':
//	output = a + b;
//	printf("%d + %d = %d",a, b, output);
//	break;
// 
//case '-':
//	output = a - b;
//	printf("%d - %d = %d", a, b, output);
//	break;
//
//case '*':
//	output = a*b;
//	printf("%a * b =  %d",a, b, output);
//	break;
//
//case '/':
//	output = a / b;
//	printf("%d / %d = %d", a, b, output);
//	break;
//
//case '%':
//	output = a % b;
//	printf("%d %% %d = %d", a, b, output);
//	break;
//}
//
//return 0;
//}


//17.WAP to print 1 to 5.
//WAP to print your name for 5 times using all three looping statements.

//#include <stdio.h>
//Print 1 to 5

//int main() {
//	int i;
//	printf("// 17: output \n \n");	
//	for(i=1; i<=5; i++){
//		printf("%d \t", i);
//	}
//	printf("\n \n");
//
//
//////WAP to print your name for 5 times using all three looping statements.
////int  main() {
//	int j, a=1, b=1;
//	for(j=0; j<5; j++){
//		printf("My Name is Samrat Ghimire \n");
//	}
//	printf("\n");	
//	while(a<=5) {
//		a++;
//		printf("My Name is Samrat Ghimire \n");
//	}
//	printf("\n");
//
//	do {
//		b++;
//		printf("My Name is Samrat Ghimire \n");
//		
//	} while (b <= 5);
//return 0;	
//}


//
//18.Write a program to display the following options:
//a. To find area of circle
//b. To check the given number is odd or even.
//c. To find the sum of n numbers

//#include <stdio.h>
//#define pi 3.14
//
//int main() {
//		
//	printf("// 18: output \n \n");
//	float r, area;
//	printf("Enter the radius: ");
//	scanf("%f", &r);
//	
//	area = pi*r*r;
//	printf("The area of circle is %.2f \n \n", area);
//	
//	
//	int num;
//	printf("Enter the number: ");
//	scanf("%d", &num);
//	
//	if(num % 2 == 0) {
//		printf("The number is even");
//	}
//	else
//	printf("The number is odd");
//	
//
//	int n, i, sum = 0 ;
//
//	printf("\n\nEnter the number 'n': ");
//	scanf("%d",&n);
//	
//	for(i=1; i<=n; i++) {
//		sum = sum + i;
//	}
//	printf("The sum of first %d number is %d", n, sum);
//	return 0;
//}
	
	




//19.Write a program to print the following outputs using for loops:
//1
//2 2
//3 3 3
//4 4 4 4
//5 5 5 5 5

//#include <stdio.h>
//
//int main() {
//	int i, j;
//	
//	printf("// 19: output \n \n");
//	for(i=1; i<=5; i++){
//		for(j=1; j<=i; j++){
//		printf("%d  ", j);}
//		printf("\n");
//	}
//return 0;
//}



//20.Write a program to print the following outputs using for loops:
//*
//* *
//* * *
//* * * *
//* * * * *
//
//#include <stdio.h>
//
//int main() {
//	int i, j;
//	char sym = '*';
//	
//	printf("// 20: output \n \n");
//	for(i=1; i<=5; i++){
//		for(j=1; j<=i; j++){
//		printf("%c  ", sym);}
//		printf("\n");
//	}
//return 0;
//}


//21.WAP to calculate sum of first n natural numbers.

// #include <stdio.h>

//int main() {
//	int n, i, sum = 0 ;
//	
//	printf("// 21: output \n \n");
//	printf("Enter the number 'n': ");
//	scanf("%d",&n);
//	
//	for(i=1; i<=n; i++) {
//		sum = sum + i;
//	}
//	printf("The sum of first %d natural number is %d", n, sum);
//	return 0;
//}




//22.WAP to calculate sum of first n odd numbers.

//#include <stdio.h>
//
//int main() {
//	int n, a =1, i = 0, sum = 0 ;
//	
//	printf("// 22: output \n \n");
//	printf("Enter the number 'n': ");
//	scanf("%d",&n);
//	
//	while(i != n){
//		sum = sum + a;
//		a = a +2;
//		i = i + 1; 
//	}
//	
//	printf("The sum of first %d odd numbers is %d", n, sum);
//	
//	return 0;		
//}




//23.WAP to calculate sum of first n even numbers.

//#include <stdio.h>
//
//int main() {
//	int n, a =2, i = 0, sum = 0 ;
//	
//	printf("// 23: output \n \n");
//	printf("Enter the number 'n': ");
//	scanf("%d",&n);
//	
//	while(i != n){
//		sum = sum + a;
//		a = a +2;
//		i = i + 1; 
//	}	
//	printf("The sum of first %d even numbers is %d", n, sum);
//	
//	return 0;		
//}


//24.WAP to display the sum of squares of first n numbers.

//#include <stdio.h>
//
//int main() {
//	int n,i = 1, sum = 0 ;
//	
//	printf("// 24: output \n \n");
//	printf("Enter the number 'n': ");
//	scanf("%d",&n);
//	
//	while(i <= n){
//		sum = sum + i*i;
//		i = i + 1; 
//	}	
//	printf("The sum of square of first %d numbers is %d", n, sum);
//	
//	return 0;		
//}


//25.WAP to display the sum of cubes of first n numbers.

//#include <stdio.h>
//
//int main() {
//	int n,i = 1, sum = 0 ;
//	
//	printf("// 25: output \n \n");
//	printf("Enter the number 'n': ");
//	scanf("%d",&n);
//	
//	while(i <= n){
//		sum = sum + i*i*i;
//		i = i + 1; 
//	}	
//	printf("The sum of cubes of first %d numbers is %d", n, sum);
//	
//	return 0;		
//}


//26.WAP to generate the multiplication table.


//#include <stdio.h>
//
//int main(){
//	int num, i;
//	
//	printf("// 26: output \n \n");
//	printf("Enter the number: ");
//	scanf("%d", &num);
//	
//	for(i=1; i<=10; i++){
//		printf("%d * %d = %d \n", num, i, num*i);
//	}
//	return 0;
//}





//27.WAP to find factorial of a number. [Error for negative number]

//#include<stdio.h>
//
//int main() {
//	int i, num, factorial = 1;
//
//	printf("// 27: output \n \n");
//	printf("Enter the number: ");
//	scanf("%d", &num);
//	
//	for(i = num; i>=1; i--) {		
//	if(num == 0) {
//		printf("The number is negative so it has no factorial");
//		break;
//	}
//	
//	factorial = factorial * i;
//	}
//	printf("The factorial of  %d is %d", num, factorial);
//	
//	return 0;
//}





//28.WAP to display following Fibonacci series up to n terms.
//0 1 1 2 3 5......n terms

//#include <stdio.h>
//
//int main() {
//
//	printf("// 28: output \n \n");
//	int a=0, b=1, num, sum =0;
//	printf("Enter the final term n: ");
//	scanf("%d", &num);
//
//	printf("%d\t", a);
//	printf("%d\t", b);
//	do {
//	  sum = a + b;
//	  printf("%d\t",sum);
//	  a = b;
//	  b = sum;
//	  
//	  if(sum > num){
//	printf("\n The number isn't present in fibonacci series' ");
//	break;
//	}	
//	} while(sum != num);
//	return 0;
//}

//29.WAP to evaluate the sum of the harmonic series (1+ 1/2 + 1/3 + 1/4 + ... + 1/n) for a
//given value of n.

//#include <stdio.h>
//
//int main(){
//
//	printf("// 29: output \n \n");
//	int n, i;
//	float a = 1.0, sum;
//	
//	printf("Enter a number: ");
//	scanf("%d", &n);
//	
//	for(i=1; i<=n; i++) {
//		sum =  sum + a/i;
//	}
//	
//	printf("The sum of harmonic series upto %d is %.2f",n, sum);
//return 0;
//}


//30.WAP to find the sum of the series 1x^2 + 2x^2 + 3x^2+ 4x^2+...+nx^2

//#include <stdio.h>
//
//int main() {
//  int n, x, sum = 0;
//	printf("// 30: output \n \n");
//  
//  printf("Enter the value of n: ");
//  scanf("%d", &n);
//  
//  printf("Enter the value of x: ");
//  scanf("%d", &x);
//  
//  for (int i = 1; i <= n; i++) {
//    sum += i * x * x;
//  }
//  
//  printf("The sum of the series is: %d", sum);
//  
//  return 0;
//}


//31.WAP to calculate the sequence 1/1! + 2/2! + 3/3! +...+ n/n!

//#include <stdio.h>
//
//int main() {
//  int n, i;
//  float sum = 0, fact = 1;
//
//	printf("// 31: output \n \n");
//  
//  printf("Enter the value of n: ");
//  scanf("%d", &n);
//  
//  for (i = 1; i <= n; i++) {
//    fact *= i; 
//    sum += i / fact; 
//  }
// 
//  printf("The sum of the sequence is: %.2f", sum);
// 
//  return 0;
//}

//32.WAP to display sum of the following series x - x^2 + x^3- x^4 +......

//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n, i;
//	float x, sum=0;
//	 	printf("// 32: output \n \n");
//	printf("Enter the number of terms n: ");
//	scanf("%d", &n);
//	printf("Enter the value of x: ");
//	scanf("%f", &x);
//	for(i=1; i<=n; i++) {
//		if(i%2==1) {
//			sum += pow(x, i);
//		} else {
//			sum -= pow(x, i);
//		}
//	}
//	printf("The sum of the series is: %.3f", sum);
//	return 0;
//}




//33.WAP to find sum of the following series for the given value of a and n
//a – a^2/2 + a^3/3 – a^4/4...up to n

#include<stdio.h>
#include<math.h>
int main() {
	int n, i;
	float a, sum=0;
	 	printf("// 33: output \n \n");

	printf("Enter the number of terms n: ");
	scanf("%d", &n);

	printf("Enter the value of a: ");
	scanf("%f", &a);

	for(i=1; i<=n; i++) {
		if(i%2==1) {
			sum += pow(a, i)/i;
		} else {
			sum -= pow(a, i)/i;
		}
	}
	printf("The sum of the series is: %.3f", sum);
	return 0;
}




