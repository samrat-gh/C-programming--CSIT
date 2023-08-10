
//1. Write a program to delete and rename the file.

//#include<stdio.h>
//
//int main()
//{
//char str[20];
//FILE *fp;
//fp=fopen("fil.txt","w");
//printf("\nInput string: ");
//scanf("%s",str);
//fprintf(fp,"%s",str);
//fclose(fp);
//rename("fil.txt","newfil.txt"); /* rename the file name to newfil.txt */
//return 0;
//}

//2. Write a program to copy contents of one file to another.

//#include<stdio.h>

//int main()
//{
//	printf("//Output : 2\n\n");
//FILE *fp1,*fp2;
//char ch;
//fp1=fopen("abc.txt","r");
//fp2=fopen("xyz.txt","w");
//while((ch=getc(fp1))!=EOF)
//{
//putc(ch,fp2);
//}
//fclose(fp1);
//fclose(fp2);
//return 0;
//}

//3. Write a program to understand
//a. fputc( ) and fgetc( )
//b. putc( ) and getc( )
//c. putw( ) and getw( )
//d. fputs( ) and fgets( )
//e. fprintf( ) and fscanf( ).

//
//#include <stdio.h>
//
//int main()
//{
//    FILE *fp;
//    int num;
//    char str[100];
//
//	printf("//Output : 3\n\n");
//	 
//    // a. fputc() and fgetc()
//    fp = fopen("file.txt", "w");
//    fputc('A', fp); // Write a character to the file
//    fclose(fp);
//
//    fp = fopen("file.txt", "r");
//    printf("fgetc(): %c\n", fgetc(fp)); // Read a character from the file
//    fclose(fp);
//
//    // b. putc() and getc()
//    fp = fopen("file.txt", "w");
//    putc('B', fp); // Write a character to the file
//    fclose(fp);
//
//    fp = fopen("file.txt", "r");
//    printf("getc(): %c\n", getc(fp)); // Read a character from the file
//    fclose(fp);
//
//    // c. putw() and getw()
//    fp = fopen("file.bin", "wb");
//    putw(123, fp); // Write an integer to the file
//    fclose(fp);
//
//    fp = fopen("file.bin", "rb");
//    printf("getw(): %d\n", getw(fp)); // Read an integer from the file
//    fclose(fp);
//
//    // d. fputs() and fgets()
//    fp = fopen("file.txt", "w");
//    fputs("Hello, World!\n", fp); // Write a string to the file
//    fclose(fp);
//
//    fp = fopen("file.txt", "r");
//    fgets(str, 100, fp); // Read a string from the file
//    printf("fgets(): %s", str);
//    fclose(fp);
//
//    // e. fprintf() and fscanf()
//    fp = fopen("file.txt", "w");
//    fprintf(fp, "%d %f", 10, 3.14); // Write formatted data to the file
//    fclose(fp);
//    int intValue;
//    float floatValue;
//    fp = fopen("file.txt", "r");
//    fscanf(fp, "%d %f", &intValue, &floatValue); // Read formatted data from the file
//    printf("fscanf(): %d %f\n", intValue, floatValue);
//    fclose(fp);
//
//    return 0;
//}





