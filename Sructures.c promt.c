struct student{
char name[30];
char email[20];
char reg_no[15];
int phone_no;
float height;
} student1, student2;
#include <stdio.h>
#include <string.h>//strycpy()
int main () {
//structure student student1, student2;
printf("Enter your name:");
scanf("%s", &student1.name);
student1.height=6.7;
printf("Enter your Reg No:");
scanf("%s", &student1.reg_no);
strcpy(student1.email,"silas@gmail.com");
student1.phone_no =757901898;

//printf("name:%s \n", student1.name);
printf("height:%f \n", student1.height);
printf("email:%s \n", student1.email);
printf("phone number: %d \n", student1.phone_no);

return 0;
}
