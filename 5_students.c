//c program to read name and marks of 5 students
struct students{
char name[60];
int marks;
};
//processor directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
//initialization
int i;
struct students students[5];
FILE*fptr;
//declare path
fptr = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\c program\\students.txt","w");
//check if the file exist
if (fptr==NULL){
    printf("Error opening file!");
    exit(1);
}
//prompt the use for name and marks
for (i=0;i<5;i++){
    printf("Enter name of student%d:",i+1);
    scanf("%s",&students[i].name);
    printf("Enter marks of student%d:",i+1);
    scanf("%d",&students[i].marks);
}
//write students data to file
for (i=0;i<5;i++){
fprintf(fptr,"%s%d\n",students[i].name,students[i].marks);
}
fclose(fptr);
return 0;

}
