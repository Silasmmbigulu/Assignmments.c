//c program to read name and marks of n number of students
struct student{
char name[60];
int marks;
};
//processor directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
//initialization
int n;
int i;
struct student students[n];
FILE*fptr;
//declare path
fptr = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\c program\\marksn.txt","w");
//check if the file exists
if (fptr==NULL){
    printf("Error opening file!");
    exit(1);
}
//prompt the user for the number of students
printf("Enter number of students:");
scanf("%d", &n);

//prompt the user for student details
for (i=1;i<n;i++){
    printf("\nEnter name of student%d:",i);
    scanf("%s",&students[i].name);
    printf("Enter marks for student%d:", i);
    scanf("%d",&students[i].marks);
}
//write students data to file
for (i=1;i<n;i++){
    fprintf("%s%d\n", students[i].name,students[i].marks);

}
fclose(fptr);
return 0;
}
