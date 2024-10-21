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
strcpy(student1.name,"silas");
student1.height=6.7;
strcpy(student1.reg_no,"CT101/G/23652/24");
strcpy(student1.email,"silas@gmail.com");
student1.phone_no =757901898;

printf("name:%s \n", student1.name);
printf("height:%f \n", student1.height);
printf("email:%s \n", student1.email);
printf("phone number: %d \n", student1.phone_no);

return 0;
}
