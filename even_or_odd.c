//a c program to deterimine even and odd numbers
#include <stdio.h>
void even_or_odd(int a);
int main(){
int num;

printf("Enter any number:");
scanf("%d", &num);

even_or_odd(num);
return 0;

}
void even_or_odd(int a){
if(a%2==0){
    printf("the number is even");
}
else{
    printf("the number is odd");
}
}
