//a c program to manage simple file operations
//processor directives
#include <stdio.h>
#include <stdlib.h>
#include <string.h>      

void Write_to_file()
{
    FILE*fptr;
    char sentence[100]="manage simple file operations";
//declare path
    fptr= fopen("C:\\Users\\USER\\OneDrive\\Desktop\\c program\\data.txt","w");
//check if the file exist
    if (fptr == NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
//prompt the user to enter a sentence
    printf("Enter a sentence:");
    scanf("%s",&sentence);
    if (fgets(sentence,100,stdin)==NULL){
        printf("Error reading input.\n");
        exit(1);
    }

//write data to the file
    fputs(sentence,fptr);
          fclose(fptr);
}
void Read_from_file(){

    FILE*fptr;
    char ch;
//declare path
    fptr = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\c program\\data.txt","r");
//check if the file exist
    if (fptr==NULL)
    {
        printf("Error opening file");
        exit(1);
    }
//ensure ch is present in the file
    while ((ch=fgetc(fptr))!=EOF){
        if(putc(ch,fptr)==EOF){
            printf("Error writing to file.\n");
            exit(1);
        }
    }
    
    
    fclose(fptr);
}
void Append_to_file(){
    FILE*fptr;
    char sentence[100];
//declare path
    fptr = fopen("C:\\Users\\USER\\OneDrive\\Desktop\\c program\\data.txt","a");
//check if the file exist
    if (fptr==NULL)
    {
        printf("Error opening file!");
        exit(1);
    }
    printf("Enter a sentence to append:");
    scanf("%s",sentence);
    fgets(sentence,100,stdin);
//write to the file
    fputs(sentence,fptr);
    fclose(fptr);
}
int main()
{
    int choice;
    do
    {
//display on the screen
        printf("\nMenu:\n");
        printf("1. Write to file\n");
        printf("2. Read from file\n");
        printf("3. Append to file\n");
        printf("4. Exit\n");

//prompt the user to enter his/her choice
        printf("Enter your choice:");
        scanf("%d",&choice);

//check user choice and display on the screen
        switch (choice)
        {
        case 1:
            Write_to_file("data.txt");
            break;
        case 2:
            Read_from_file("data.text");
            break;
        case 3:
            Append_to_file("data.text");
            break;
        case 4:
            printf("Exiting...");
            break;
        //if none
        default:
            printf("Invalid Choice. Please try again.\n");
        }
    }
    while (choice !=4);
    return 0;
}
