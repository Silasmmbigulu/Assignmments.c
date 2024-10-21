//program to calculate loan for customers
/*
Author: Silas Mmbigulu
Reg No: CT101/G/23652/24
Date: 24/09/2024
*/
//variables and data types
//processor directives
#include <stdio.h>


int main () {
    //initialization and declaration
    int age;
    float income;

//prompting the user for values of each
    printf("enter age:");
    scanf("%d", &age);
    printf("enter income:");
    scanf("%f", &income);

    if (age >=21 &&income >=21000)
        printf("congratulations you qualify for a loan");
    else
        printf("unfortunately we are unable to offer you you a loan at this time");
    return 0;

}
