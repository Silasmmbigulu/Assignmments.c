//program to calculate simple interest
/*
Author: Silas Mmbigulu
Reg No: CT101/G/23652/24
Date: 24/09/2024
*/
//variables and data types
//processor directives

#include<stdio.h>
int main () {
//declaration and initialization
   double Principal;
   double Time;
   double Rate;
   double interest;
   
   //prompting user for values of each
   printf("Enter principal:");
   scanf("%f", &Principal);
   printf("Enter time in years:");
   scanf("%f", &Time);
   printf("Enter rate:");
   scanf("%f", &Rate);
   
    
    interest = ((Principal*Rate*Time)/100);
    printf("interest is:%f", interest);
    return 0;
}
