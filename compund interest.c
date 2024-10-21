//program to calculate compound interest
/*
Author: Silas Mmbigulu
Reg No: CT101/G/23652/24
Date: 24/09/2024
*/
//variables and data types
//processor directives

#include <stdio.h>
int main () {
	float principal;
	float time;
	float rate;
	float ci;
	
	int n;
	printf("enter principal amount: ");
	scanf("%f", &principal);
	printf("enter time: ");
	scanf("%f", &time);
	printf("enter rate: ");
	scanf("%f", &rate);
	printf("enter the number of times interest is compounded annually:");
	scanf("%d", &n);
	
    double amount= principal*((1+rate/100),(n*time));
    
    ci= (amount-principal);
	printf("\ncompound interest is: %.2f\n", ci);
	
	return 0;
	
	}
