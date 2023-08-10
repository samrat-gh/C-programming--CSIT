//1. Write a program to print the value of array element using pointer.

//#include <stdio.h>
//
//int main() {
//	int i, n;
//	printf("Enter the number of elements: ");
//	scanf("%d", &n);
//	
//	int arr[n];
//	
//	printf("\nEnter the Elements: ");
//	for(i=0; i<n; i++){
//		scanf("%d", &arr[i]);
//	}
//	
//	printf("\nThe arrray Elements are: \n");
//	
//	for(i=0; i<n; i++){
//		printf("%d \t", *(arr + i));
//	}
//	return 0;
//}

//2. Write a program to sort ‘n’ numbers in ascending order using pointer.

//#include<stdio.h>
//int main() {
//    int arr[100],n,i,j,temp;
//    printf("How many numbers are there: ");
//    scanf("%d",&n);
//    printf("Enter numbers:");
//    for(i=0; i<n; i++) {
//        scanf("%d", (arr+i));
//    }
//    for(i=0; i<n-1; i++){
//        for(j=i+1; j<n; j++){
//            if(*(arr+i) > *(arr+j)){
//                temp= *(arr+i);
//                *(arr+i)= *(arr+j);
//                *(arr+j)= temp;
//            }
//        }
//    }
//    printf("Numbers in ascending order:\n");
//    for(i=0; i<n; i++){
//        printf("%d\t", *(arr+i));
//    }
//    return 0;
//}

//3. Write a program to find sum of all the elements of an array using pointers.

//#include<stdio.h>
//int main() {
//    int n,i,arr[100],sum=0;
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//    printf("Enter elements:");
//    for(i=0; i<n; i++){
//        scanf("%d", (arr+i));
//    }
//    for(i=0; i<n; i++){
//    	sum = sum + *(arr+i);
//    }
//	printf("Sum of all elements of array is: %d",sum);
//	return 0;
//}

//4. Write a program to search an element from ‘n’ number of elements using pointer.

//#include<stdio.h>
//int main() {
//    int arr[20], search, i, n;
//    printf("Enter number of elements: ");
//    scanf("%d",&n);
//    printf("Enter elements: ");
//    for(i=0; i<n; i++) {
//        scanf("%d",(arr+i));
//    }
//    printf("Enter element to be searched: ");
//    scanf("%d",&search);
//    for(i=0; i<n; i++) {
//        if(*(arr+i)==search) {
//            printf("Search element found in %d position ", i+1);
//        break;
//        }
//    }
//    if(i==n)
//    printf("Element not found");
//    return 0;
//}

//5. Write a program to read any 2 by 3 matrix and display its element in appropriate
//format.

//#include<stdio.h>
//int main() {
//	int arr[2][3], i, j;
//	printf("//Output : 5\n\n");
//	printf("Enter elements of 2 x 3 matrix: ");
//	for(i=0; i<2; i++) {
//		for(j=0; j<3; j++) {	
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for(i=0; i<2; i++) {
//		for(j=0; j<3; j++) {
//			printf("%d\t", *(*(arr+i)+j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//6. Write a program to understand dynamic allocation of memory using.
//a. malloc
//b. calloc
//c. realloc

//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//    int n,i,*ptr;
//    printf("Enter number of elements: ");
//    scanf("%d", &n);
//    printf("Enter elements:");
//    ptr= (int *) malloc (n*sizeof(int));
//    for(i=0; i<n; i++){
//        scanf("%d", ptr+i);
//    }
//    printf("\nThe array elements are:\n");
//    for(i=0; i<n; i++){
//        printf("%d\t", *(ptr+i));
//    }
//    return 0;
//}

//7. Write a program to sort n numbers in ascending order using dynamic memory.
//#include<stdio.h>
//#include<stdlib.h>
//int main() {
//    int *ptr,n,i,j,temp;
//    printf("How many numbers are there: ");
//    scanf("%d",&n);
//    ptr= (int *)malloc(n*sizeof(int));
//    printf("Enter numbers:");
//    for(i=0; i<n; i++) {
//        scanf("%d", (ptr+i));
//    }
//    for(i=0; i<n-1; i++){
//        for(j=i+1; j<n; j++){
//            if(*(ptr+i) > *(ptr+j)){
//                temp= *(ptr+i);
//                *(ptr+i)= *(ptr+j);
//                *(ptr+j)= temp;
//            }
//        }
//    }
//    printf("Numbers in ascending order:\n");
//    for(i=0; i<n; i++){
//        printf("%d\t", *(ptr+i));
//    }
//    return 0;
//}

//8. Write a C program that uses a function pointer to calculate the sum of two integers.
//The program should define a function sum() that takes two integer pointers as
//arguments, adds their values, and returns a pointer to the sum. The program should
//then invoke the sum() function using function pointers and display the calculated sum.
//Explain the purpose of using a function pointer in this program and how it helps in
//achieving dynamic function invocation.

//#include <stdio.h>
//#include<stdlib.h>
//int* sum(int* x, int* y) {
//    int* result =(int*) malloc(sizeof(int));
//    *result = *x + *y;
//    return result;
//}
//int main() {
//    int a = 5, b = 10;
//    int* (*sum_ptr)(int*, int*) = &sum; // define function pointer
//    int* result = sum_ptr(&a, &b); // call function through pointer
//    printf("The sum of %d and %d is %d\n", a, b, *result);
//    free(result);
//    return 0;
//}
