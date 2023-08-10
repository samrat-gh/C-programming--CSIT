//1. Write a program to read name, rollno and fee of a student and display it on screen
//using structure.

//#include <stdio.h>
//
//struct student {
//	char name[15];
//	int roll;
//	float fee;
//};
//
//int main() {
//struct student st ={"Anil",1, 50000.0};
//    printf("\nRoll :%d",st.roll);
//    printf("\nName :%s",st.name);
//    printf("\nFee :%.2f",st.fee);
//return 0;
//}


//2. Define a structure containing members as roll no, name, course and semester and
//write program to input information about ‘n’ students and display the name and
//course of all students.

//
//#include <stdio.h>
//
//struct student {
//    char name[25];
//    int rollno;
//    char course[25];
//    int semester;
//};
//
//int main() {
//    int i, n;
//    printf("Enter the number of students: ");
//    scanf("%d", &n);
//
//    
//    struct student std[n]; // Declare an array of 'n' students
//    
//    // Input information about each student
//    for(i = 0; i < n; i++) {
//        printf("Enter the name of student: ");
//        scanf("%s", std[i].name);
//        
//        printf("Enter the roll number of student: ");
//        scanf("%d", &std[i].rollno);
//        
//        printf("Enter the course of student: ");
//        scanf("%s", std[i].course);
//        
//        printf("Enter the semester of student: ");
//        scanf("%d", &std[i].semester);
//        
//        printf("\n");
//    }
//    
//    // Display the name and course of all students
//    printf("Student Information:\n");
//    for(i = 0; i < n; i++) {
//        printf("Name: %s, \t Roll no: %d\n", std[i].name, std[i].rollno);
//        printf("Course: %s, \t sem: %d\n", std[i].course, std[i].semester);
//        printf("\n");
//    }
//    
//    return 0;
//}



//3. Write a C program that defines a structure named "Person" with two members: a
//string named "name" and an integer named "age". Create a pointer to a "Person"
//structure and allocatlly, print the details of the person using the pointer to the
//structure.


//#include <stdio.h>
//#include <stdlib.h>
//struct Person {
//	char name[25];
//	int age;
//};
//
//int main() {
//	struct Person *pntr;   
//	pntr = (struct Person*)malloc(sizeof(struct Person));
//	printf("Enter name: ");
//	scanf("%s", &pntr->name);
//	printf("Enter Age: ");
//	scanf("%d", &pntr->age);
//	printf("\nName: %s\n", pntr->name);
//	printf("Age: %d\n", pntr->age);
//return 0;
//} 
//




//4. Write a program that reads names and ages of ‘n’ students into the computer and
//rearrange the names into alphabetical order using the structure variables.

//#include<stdio.h>
//#include<string.h>
//int main() {  
//	struct student{
//		int age;
//		char name[15];
//	};
//	struct student st[100], temp;
//	int i,j,n;
//	printf("Enter number of students: ");
//	scanf("%d", &n);
//	for(i=0; i<n; i++){
//		printf("Enter student name and age: ");
//		scanf("%s%d", st[i].name, &st[i].age);
//	}
//	for(i=0; i<n-1; i++){
//		for(j=i+1; j<n; j++){
//			if(strcmp(st[i].name, st[j].name)>0){
//				temp= st[i];
//				st[i]= st[j];
//				st[j]= temp;
//			}
//		}
//	}
//	printf("\nName\tAge");
//	for(i=0; i<n; i++){
//		printf("\n%s\t%d", st[i].name, st[i].age);
//	}
//	return 0;
//}


//5. . Define a structure date having integer members to store day, month and year. Define
//another structure student having members as rollno, name and date_of_birth. Now
//write a program to accept and display information about ‘n’ students

//#include<stdio.h>
//int main() {
//    struct date {
//        int year;
//        int month;
//        int day;  
//    };
//    struct student {
//        int roll;
//        char name[15];
//        struct date dob;
//    };
//    struct student st[100];
//    int i,n;
//	printf("Enter number of students: ");
//	scanf("%d", &n);
//	for(i=0; i<n; i++){
//		printf("Enter roll no, name and date of birth in (year-month-day): ");
//		scanf("%d%s%d%d%d", &st[i].roll, st[i].name, &st[i].dob.year,&st[i].dob.month, &st[i].dob.day);
//	}
//	printf("\nRollno\tName\tDOB(Year-Month-Day)");
//	for(i=0; i<n; i++){
//		printf("\n%d\t%s\t%d-%d-%d",st[i].roll,st[i].name,st[i].dob.year,st[i].dob.month,st[i].dob.day);
//	}
//	return 0;
//}
//
//6. In a C program, define a structure named "Book" with three members: a string named
//"title", a string named "author", and an integer named "year". Write a function called
//"DisplayBookInfo" that takes a "Book" structure as a parameter and displays the
//information of the book (title, author, and year) in a formatted manner. Test the
//function by creating a "Book" structure, populating it with sample data, and passing it
//to the "DisplayBookInfo" function.

//#include <stdio.h>
//#include <string.h>
//struct Book {
//	char title[100];
//	char author[100];
//	int year;
//};
//
//int DisplayBookInfo(struct Book book) {
//	printf("Title: %s\n", book.title);
//	printf("Author: %s\n", book.author);
//	printf("Year: %d\n", book.year);
//	
//	return 0;
//}
//
//
//int main(){   
//	struct Book myBook;
//	
//	strcpy(myBook.title, "Rich Dad Poor Dad");
//	strcpy(myBook.author, "Robert T.Kiyosaki");
//	myBook.year = 1997;
//	
//	DisplayBookInfo(myBook);
//	
//	return 0;
//}


