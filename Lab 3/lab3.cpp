//1. Write a C program that defines a function called calcSum, which takes two integer
//arguments and returns their sum.
//a. No arguments and no return value
//b. No arguments with return value
//c. Arguments and no return value
//d. Arguments with return value


//1.a  No arguments and no return value
//#include <stdio.h>
// 
// int calSum();
//
//int main() {
//	calSum();
//	return 0;
//}
//
//int calSum() {
//		int a, b, sum = 0;
//	
//	printf("Enter two numbers: ");
//	scanf("%d %d", &a, &b);
//	
//	sum = a + b;
//	
//	printf("The sum is %d", sum);
//	return 0;
//}

//1.b  No arguments and return value

//#include <stdio.h>
// 
// int calSum();
//
//int main() {
//	int sum;
//	sum = calSum();
//	printf("The sum is %d", sum);
//	return 0;
//}
//
//int calSum() {
//		int a, b, sum = 0;
//	
//	printf("Enter two numbers: ");
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	return sum;
//}


//1.c  Arguments and no return value

//#include <stdio.h>
// 
// int calSum(int, int);
//
//int main() {
//	int a, b;
//	printf("Enter any two number: ");
//	scanf("%d %d", &a, &b);
//	calSum(a, b);
//	return 0;
//}
//
//int calSum(int a, int b) {
//	int sum = 0;
//	sum = a + b;
//	printf("The sum is %d", sum);
//	return 0;
//}


// 1.d Arguments and return value
//
//#include <stdio.h>
// int calSum(int, int);
// 
//
//int main() {
//	int a, b, sum;
//	printf("Enter two numbers: ");
//	sum = calSum(a , b);
//	printf("The sum is %d", sum);
//	return 0;
//}
//
//int calSum(int a,int b) {
//	return a + b;
//}




//2. Create a C program that defines a function called calcFactorial, which takes an integer
//argument and returns its factorial.



//#include <stdio.h>
//int calcFactorial(int);
//
//int main() {
//	int factorial, num;
//	
//	printf("Enter the number :");
//	scanf("%d", &num);
//	
//	factorial = calcFactorial(num);
//	printf("The factorial of %d is %d", num, factorial);
//	return 0;
//} 
//
//
//int calcFactorial(int num) {
//	int fact = 1, i;
//	
//	for(i = num ; i > 1; i--){
//		fact = fact * i;
//	}
//	
//	return fact; 
//}




// 3. write a program to calculate factorial of any given number using recursive function.

//#include <stdio.h>
// int factorial (int);
//int main() {
//    int n;
//    printf("Enter a non-negative integer: ");
//    scanf("%d", &n);
//    printf("%d! = %d\n", n, factorial(n));
//    return 0;
//}
//int factorial(int n) {
//    if (n == 0 || n == 1) {
//        return 1;
//    } else {
//        return n * factorial(n - 1);
//    }
//}
//


//4. Write a program to calculate the sum of N natural numbers using recursive function.

//#include <stdio.h>
//
//int sum(int);
//
//int main() {
//    int n;
//    printf("Enter the number of Natural Number 'N': ");
//    scanf("%d", &n);
//    printf("The sum of first %d Natural Number is = %d\n", n, sum(n));
//    return 0;
//}
//
//int sum(int n) {
//	if(n == 0) {
//		return 0;
//	}
//	else {
//		return n + sum(n-1);
//	}
//}


//5. Write a recursive program to calculate xy
//(x to the power y).

//#include <stdio.h>
//
//int power(int, int);
//
//int main() {
//	int x, y;
//	
//	printf("Enter the value of x and y: ");
//	scanf("%d %d", &x, &y);
//	
//	printf("The output of x^y is %d", power(x, y));
//	return 0;
//}
//
//int power(int x, int y){
//	if(y == 0) {
//		return 1;
//	}
//	else {
//		return x * power(x, y-1);
//	}
//}


//
//6. Write a program
		//a. passing single dimensional array as an argument to a function.	

//#include <stdio.h>
//
//int fun(int [5]);
//
//int main() {
//	int arr[5] = {5, 4, 3, 2, 1};
//    fun(arr);
//	return 0;
//}
//
//int fun(int arr[])  {
//	int i;
//	for(i=0; i<5; i++) {
//		printf("%d \t", arr[i]);
//	}
//	return 0;
//}


	//b. passing multi-dimensional array as an argument to a function.
	
	
//	
//#include <stdio.h>
//
//int fun(int [2][2]);
//
//int main() {
//	int arr[2][2] = {1, 2, 3, 4};
//	
//	fun(arr);
//	return 0;
//}	
//
//int fun(int arr[2][2]) {
//	int i, j;
//	
//	for(i=0; i<2; i++){
//		for(j=0; j<2; j++){
//			printf("%d \t", arr[i][j]);
//		}
//	printf("\n");
//	}
//	
//	return 0;
//}










//
//7. Write a program to showcase the proper implementation of
//a. Call by value (passing by value)

//#include<stdio.h>
//#include<conio.h>
//
//int change(int);
//int main()
//{
//int a=15;
//printf("Before calling function, a=%d\n",a);
//change(a);
//printf("After calling function, a=%d",a);
//return 0;
//}
//int change(int x)
//{
//x=x+5;
//return 0;
//}



//b. Call by reference (passing by reference)


//#include<stdio.h>
//
//int change(int*);
//int main()
//{
//int a=15;
//
//printf("Before calling function, a=%d\n",a);
//change(&a);
//printf("After calling function, a=%d",a);
//return 0;
//}
//int change(int *x)
//{
//*x=*x+5;
//return 0;
//}



//8. Write a program passing string as an argument to a function.


//#include<stdio.h>
//
//int string(char* str);
//int main() {
//char str[40]="Kathmandu Nepal";
//string(str);
//return 0;
//}
//int string(char* str) {
//printf("The String is %s",str);
//return 0;
//}
