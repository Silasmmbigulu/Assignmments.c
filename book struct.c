//c program for a book structure
//processor directives
#include <stdio.h> //scanf(), printf()
#include <string.h> //strcpy

//declaration
struct book{
char title[30];
char author[30];
int publication_year;
char ISBN[13];
float price;
}book1, book2;

int main () {
//struct book book1, book2
strcpy(book1.title, "Introduction to C Programming");
strcpy(book1.author, "John Smith");
book1.publication_year = 2022;
strcpy(book1.ISBN, "9780131103627");
book1.price = 49.99;

//displaying output
printf("title:%s\n", book1.title);
printf("author:%s\n", book1.author);
printf("Publication Year:%d\n", book1.publication_year);
printf("ISBN:%s\n", book1.ISBN);
printf("Price:%.2f\n", book1.price);

//prompting the user to enter the declared variables
printf("\n----------\n");
printf("\nEnter Book Title:");
scanf("%s", &book1.title);
printf("Enter the Author:");
scanf("%s", &book1.author);
printf("Enter Publication Year:");
scanf("%d", &book1.publication_year);
printf("Enter ISBN:");
scanf("%s", &book1.ISBN);
printf("Enter the Price:");
scanf("%f", &book1.price);

// print the updated details
printf("\nUpdated book Details:\n");
printf("Title:%s\n", book1.title);
printf("Author:%s\n", book1.author);
printf("Publication Year:%d\n", book1.publication_year);
printf("ISBN:%s\n", book1.ISBN);
printf("Price:%.2f\n", book1.price);

return 0;
}
