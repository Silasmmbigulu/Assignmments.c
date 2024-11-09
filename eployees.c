#include <stdio.h>
#include <string.h>
struct Employee{
int id;
char name[60];
float salary;
};
int main(){
struct Employee employees[3];
int i,highest_salary=0;

for(i=1;i<4;i++){
    printf("Enter employee details%d:\n",i);
    printf("Enter ID:");
    scanf("%d",&employees[i].id);
    printf("Enter Name:");
    scanf("%s", &employees[i].name);
    printf("Enter Salary:");
    scanf("%f",&employees[i].salary);
}
//highest salary
for(i=1;i<4;i++){
if (employees[i].salary > employees[highest_salary].salary){
    highest_salary = i;
}    
}
printf("\nEmployee with highest salary:\n");
printf("ID:%d\n", employees[highest_salary].id);
printf("Name:%s\n", employees[highest_salary].name);
printf("Salary:%.2f", employees[highest_salary].salary);

return 0;
}
