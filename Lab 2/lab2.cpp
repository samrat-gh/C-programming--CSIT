//Write a program to sort N number in ascending order.

// Write a program to sort N number in descending order.

// 1. Write a program to read 10 members from user and display it on the screen.

//#include <stdio.h>
//int main() {
//	int num, i;
//	int numList[10];
//		
//	for(i=0; i<10; i++) {
//	printf("Enter number as member %d: ", i);
//	scanf("%d", &num);
// 
//    numList[i] = num;
//}
//printf("\n\nThe members are: \n");
//for(i=0; i<10; i++) 
//	printf("%d \t", numList[i]);
//
//	
//	return 0;
//}


//2. Write a program to search an element from N number of array elements.

//#include <stdio.h>
//
//int main(){
//    int i, num, n;
//    
//    
//    printf("Enter the number of Elements 'N': ");
//    scanf("%d", &n);5
//    5
//    
//int arr[n];
//    
//	printf("Enter %d elements for array: ", n);
//	for(i=0; i<n; i++){
//		scanf("%d", &num);
//		arr[i] = num;
//	}    
//	
//	printf("\nEnter an element to search: ");
//	scanf("%d", &num);
//    for(i=0; i<n; i++){
//    	if(arr[i]==num){
//    		printf("\nYour number %d is found \n", num);
//            printf("It is at index no %d.", i); 
//			return 0;   
//		}
//	}
//	printf("The number is not available");	
//return 0;
//}


//3. Write a Program to display smallest and largest element from N number of array elements.


//#include <stdio.h>
// 
//int main()
//{
//    int i, n, min, max;
//   
//    printf("Enter size of the array : ");
//    scanf("%d",&n);
// 
// int arr[n];
//    printf("Enter elements for array : ");
//    for(i=0; i<n; i++)
//    {
//        scanf("%d",&arr[i]);
//    }
// 
//    min=max=arr[0];
//    for(i=1; i<n; i++)
//    {
//         if(min>arr[i])
//		  min=arr[i];   
//		   if(max<arr[i])
//		    max=arr[i];       
//    }
//     printf("\nminimum value from array is : %d",min);
//     printf("\nmaximum value from array is : %d",max);
//
//
//    return 0;
//}



//4. Write a program to sort N numbers in ascending order.

//#include <stdio.h>
//
//int main(){
//	int i, j, temp, n;
//	
//	printf("Enter the size of the array: ");
//	scanf("%d", &n);
//	
//	int arr[n];
//	
//	printf("Enter elements: \n");
//	for(i=0; i<n; i++){
//		scanf("%d", &arr[i]);
//	}
//	
//	for(i=0; i<n-1; i++){
//		for(j=0; j<n-1-i; j++){
//			if(arr[j]>arr[j+1]) {
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1]=temp;
//				
//			}
//		}
//	}
//	
//	printf("\nsorted elements are: \n");
//	for(i=0; i<n; i++){
//		printf("%d \t", arr[i]);
//	}
//	return 0;
//}







//5. Write a program to sort N numbers in descending order.

//#include <stdio.h>
//
//int main(){
//	int i, j, temp, n;
//	printf("Enter the size of the array: ");
//	scanf("%d", &n);
//	
//	int arr[n];
//	
//	printf("Enter elements \n");
//	for(i=0; i<n; i++){
//		scanf("%d", &arr[i]);
//	}
//	
//	for(i=0; i<n-1; i++){
//		for(j=0; j<n-1-i; j++){
//			if(arr[j]<arr[j+1]) {
//				temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1]=temp;
//				
//			}
//		}
//	}
//	
//	printf("\nsorted elements are: \n");
//	for(i=0; i<n; i++){
//		printf("%d \t", arr[i]);
//	}
//	return 0;
//}




//6.  Write a program that takes a 1-D array of integers as input and removes all duplicates from the array.

//#include <stdio.h>
//
//int main() {
//	int i, j, k, n;
//	printf("Enter the number of array elements: ");
//	scanf("%d", &n);
//	
//	int arr[n];
//	
//	printf("Enter the array elements: ");
//	for(i=0; i<n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	
//	for(i=0; i<n; i++) {
//	  for(j =i+1; j<n;j++){
//	  	if(arr[i] == arr[j]) {
//	  		 for ( k = j; k < n - 1; k++)  {  
//                    arr[k] = arr [k + 1];  
//                }  
//                n--;
//				j--; 
//		  }
//	  }	
//	}
//	
//	printf("The new array elements are: \n");
//	for(i=0; i<n; i++){
//		printf("%d \t", arr[i]);
//	}
//	
//	return 0;
//}

//7. Write a program that takes a 1-array of integers as input and replaces 
//each elements with the sum of its neighbours.


//#include <stdio.h>
//
//int main() {
//	int i, j, n, temp;
//		  
//	printf("Enter the number of array elements: ");
//	scanf("%d", &n);
//	
//	int arr[n];
//	int newArr[n];
//	
//	printf("Enter the array elements: ");
//	for(i=0; i<n; i++) {
//		scanf("%d", &arr[i]);
//	}
//	
//	for(i=0; i<n; i++) {
//	     if(i == 0){
//	     	temp = arr[i] + arr[i + 1];
//			newArr[i] = temp; 
//		 }
//		 
//		 else if(i == n-1) {
//		 	temp = arr[i] + arr[i-1];
//		 	newArr[i] = temp;
//		 }
//		 
//		 else{
//		 temp = arr[i-1] + arr[i] + arr[i+1];
//		 newArr[i] = temp;
//		 }
//		 
//}
//		printf("The array elements are: ");
//		for(i=0; i<n; i++){
//			printf("%d \t", newArr[i]);
//		}
//	return 0;	
//}


//8. write a program to read any 3x3 matrix and display it in appropriate format.


//#include<stdio.h>
//
//int main(){
//	
//int arr[3][3],i,j;
//
//
//for(i=0;i<3;i++) {
//for(j=0;j<3;j++){
//printf("Enter Element at a%d%d position: ",i+1,j+1);
//scanf("%d",&arr[i][j]);
//
//} }
//
//printf("\n\nThe 3x3 matrix is:\n");
//for(i=0;i<3;i++){
//for(j=0;j<3;j++){
//printf(" %d ",arr[i][j]);
//}
//printf("\n");
//
//}
//return 0;
//
//}



//9. Write a program to display the sum of all elements of a 4x4 matrix 

//#include <stdio.h>
//
//int main(){
//	int arr[4][4], i, j, sum;
//
//
//for(i=0;i<4;i++) {
//	for(j=0;j<4;j++){
//		printf("Enter Element at a%d%d position: ",i+1,j+1);
//		scanf("%d",&arr[i][j]);
//	
//} }
//
//
//for(i=0; i<4; i++){
//	for(j=0; j<4; j++){
//		sum = sum + arr[i][j]; 
//	}
//}
//
//printf("\nThe sum is %d", sum);
//
//return 0;
//}



//10. Write a program to display sum of diagonal elements of any given 3×3 matrix.

//#include <stdio.h>
//
//int main() {
//	int arr[3][3], i, j, sum;
//	
//
//for(i=0; i<3; i++) {
//for(j=0; j<3; j++){
//printf("Enter Element at a%d%d position: ", i+1, j+1);
//scanf("%d", &arr[i][j]);
//
//} }
//
//for(i=0; i<3; i++){
//	for(j=0; j<3; j++){
//		if(i == j)
//			sum = sum + arr[i][j];
//		
//	}
//}
//
//printf("\nThe sum of its diagonal elements is %d", sum);
//
//return 0;
//}


//11.Write a program to display sum of each row of any given n×m matrix.


//#include<stdio.h>
//
//int main(){
//	
//int i, j,n, m, sum;
//
//printf("Enter the number of rows and columns: ");
//scanf("%d %d", &n, &m);
//int arr[n][m];
//
//for(i=0;i<n;i++) {
//for(j=0;j<m;j++){
//printf("Enter Element at a%d%d position: ",i+1,j+1);
//scanf("%d",&arr[i][j]);
//
//} }
// 
//for(i=0; i<n; i++) {
// for(j=0; j<m; j++)	{
// 	sum = sum + arr[i][j]; 
// }
// printf("\nThe sum of elements of row no. %d is %d", i+1, sum);
// sum = 0;
//}
//
//
//return 0;
//}


//12.Write a program to display transpose of any given n×m matrix.

//#include<stdio.h>
//
//int main(){
//int i, j,n, m, sum;
//
//printf("Enter the number of rows and columns: ");
//scanf("%d %d", &n, &m);
//int arr[n][m], transpose[m][n];
//
//for(i=0; i<n; i++) {
//for(j=0; j<m; j++){
//printf("Enter Element at a%d%d position: ",i+1, j+1);
//scanf("%d", &arr[i][j]);
//
//} }
//
//for(i=0; i<n; i++) {
// for(j=0; j<m; j++)	{
// 	transpose[j][i] = arr[i][j]; 
// }
//}
//
//printf("The transpose of the matrix is: \n");
//for(i=0; i<n; i++) {
// for(j=0; j<m; j++)	{
// 	 printf("%d \t", transpose[i][j]);
// }
// printf("\n");
//}
//
//
//return 0;
//}



//13.Write a program to display sum of each column of any given n×m matrix.


//#include<stdio.h>
//
//int main(){
//	
//int i, j,n, m, sum;
//
//printf("Enter the number of rows and columns: ");
//scanf("%d %d", &n, &m);
//int arr[n][m];
//
//for(i=0;i<n;i++) {
//for(j=0;j<m;j++){
//printf("Enter Element at a%d%d position: ",i+1,j+1);
//scanf("%d",&arr[i][j]);
//
//} }
// 
//for(i=0; i<n; i++) {
// for(j=0; j<m; j++)	{
// 	sum = sum + arr[j][i]; 
// }
// printf("\nThe sum of elements of column no. %d is %d", i+1, sum);
// sum = 0;
//}
//
//
//return 0;
//}


//14.Write a program to display the sum of any given two n×m matrix.

//#include <stdio.h>
//
//int main(){
//	
//int i, j,n, m, sum;
//
//printf("Enter the number of rows and columns of matrix: ");
//scanf("%d %d", &n, &m);
//int arr[n][m], arr1[n][m], arr2[n][m];
//
//printf("\nFor first Matrix\n");
//for(i=0;i<n;i++) {
//for(j=0;j<m;j++){
//printf("Enter Element at a%d%d position: ",i+1,j+1);
//scanf("%d",&arr1[i][j]);
//} }
//
//printf("\nFor Second Matrix\n");
//for(i=0;i<n;i++) {
//for(j=0;j<m;j++){
//printf("Enter Element at a%d%d position: ",i+1, j+1);
//scanf("%d", &arr2[i][j]);
//
//} }
//
//
//for(i=0; i<n; i++){
//	for(j=0; j<m; j++){
//		arr[i][j] = arr1[i][j] + arr2[i][j];
//	}
//}
//
//printf("\nThe Sum of two matrix is: \n");
//for(i=0; i<n; i++){
//	for(j=0; j<m; j++){
//		printf("%d \t", arr[i][j]);
//	}
//	printf("\n");
//}
//
//return 0;
//}



//15.Write a program to display the product of any given two n×m matrix. 


//#include <stdio.h>
//
//int main(){
//int i, j, r1, c1, sum, r2, c2;
//
//printf("Please make sure no of rows of first matrix should be equal to number of columns of second matrix \n\n");
//
//printf("Enter the number of rows and columns for first matrix: ");
//scanf("%d %d", &r1, &c1);
//
//printf("Enter the number of rows and columns for Second matrix: ");
//scanf("%d %d", &r2, &c2);
//
//
//int arr[r1][c2], arr1[r1][c1], arr2[r2][c2];
//
//printf("\nFor first Matrix\n");
//for(i=0; i<r1; i++) {
//for(j=0; j<c1; j++){
//printf("Enter Element at a%d%d position: ",i+1,j+1);
//scanf("%d",&arr1[i][j]);
//} }
//
//printf("\nFor Second Matrix\n");
//for(i=0; i<r2;i++) {
//for(j=0; j<c2; j++){
//printf("Enter Element at a%d%d position: ",i+1, j+1);
//scanf("%d", &arr2[i][j]);
//
//} }
//
//
//   for (i = 0; i < r1; ++i)
//      for (int j = 0; j < c2; ++j) {
//         arr[i][j] = 0;
//      }
//
//   for (int i = 0; i < r1; ++i) {
//      for (int j = 0; j < c2; ++j) {
//         for (int k = 0; k < c1; ++k) {
//            arr[i][j] += arr1[i][k] * arr2[k][j];
//         }
//      }
//   }
//   
//   
//     printf("\nOutput Matrix:\n");
//   for (int i = 0; i < r1; ++i) {
//      for (int j = 0; j < c2; ++j) {
//         printf("%d \t", arr[i][j]);
//   }
//printf("\n");
//}
// return 0;  
//}




//16.Write a program to read N students name and display them in alphabetical order.


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//char name[100][15],temp[15];
//int i,j,n;
//printf("How many students are there: ");
//scanf("%d",&n);
//printf("Enter name of student\n");
//for(i=0;i<n;i++)
//{
//scanf("%s",name[i]);
//}
//for(i=0;i<n-1;i++)
//{
//for(j=i+1;j<n;j++)
//{
//if(strcmp(name[i],name[j])>0)
//{
//strcpy(temp,name[i]);
//strcpy(name[i],name[j]);
//strcpy(name[j],temp);
//}
//}
//}
//printf("Names in alphabetical order\n");
//for(i=0;i<n;i++)
//{
//printf("%s\n",name[i]);
//}
//return 0;
//}


//17.Write program to read a line of text and count no of vowel, no of consonant, no of
//digits and no of spaces.


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//char str[100];
//int spaces=0,vowel=0,digits=0,consonant=0,i;
//
//puts("Enter a text\n");
//gets(str);
//strlwr(str);
//for(i=0;str[i]!='\0';i++)
//{
//if(str[i]>='a'&&str[i]<='z')
//{
//if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
//vowel++;
//else
//consonant++;
//}
//if(str[i]>='0'&&str[i]<='9')
//digits++;
//if(str[i]==32)
//spaces++;
//}
//printf("\nvowels=%d\nconsonant=%d\ndigits=%d\nSpaces=%d",vowel,consonant,digits,spaces);
//return 0;
//}



//18. Write a program to check whether a given string is palindrome or not.

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//char s1[15],s2[15];
//printf("Enter a string: ");
//scanf("%s",s1);
//strcpy(s2,s1);
//strrev(s2);
//if(strcmp(s1,s2)==0)
//printf("%s is palindrome",s1);
//else
//printf("%s is not palindrome",s1);
//return 0;
//}



