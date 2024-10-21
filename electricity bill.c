//program calculating electrical bill
/*
Author: Silas Mmbigulu
Date:7/9/2023
Reg No:23652
*/
//processor directives
#include <stdio.h>
int main () {
//declaration and initialization
 char CustomerName;
 int CustomerID,UnitsConsumed;
 double ChargePerUnit,TotalBill,Surcharge,TotalAmounttoPay;

 //prompting the user for values of each
 printf("Enter Customer ID:");
 scanf("%d", &CustomerID);
 printf("Enter Customer Name:");
 scanf("%c", &CustomerName);
 printf("Enter Units Consumed:");
 scanf("%d", &UnitsConsumed);

 //determining charges per unit
 if (UnitsConsumed <=199)
    printf("ChargePerUnit =1.20");
 else if (UnitsConsumed <400)
    printf("ChargesPerUnit =1.50");
 else if (UnitsConsumed <600)
    printf("ChargePerUnit =1.80");
 else
    printf("ChargePerUnit =2.00");

 //calculating total bill
 TotalBill = (UnitsConsumed*ChargePerUnit);

 //calculating surcharges
 if (TotalBill >400)
 {
     Surcharge = TotalBill*0.15;
     TotalBill+=Surcharge;
 }
 //ensuring the minimum bill is ksh.100
 if (TotalBill <100)
 {
     TotalBill=100;
 }
 //total amount to pay
 TotalAmounttoPay = TotalBill;

 //Display
 printf("\nCustomer ID:%c\n", CustomerID);
 printf("Customer Name:%c\n", CustomerName);
 printf("Units Consumed:%d\n", UnitsConsumed);
 printf("Charges Per Unit:Ksh.%f\n", ChargePerUnit);
 printf("Total Amount to Pay:Ksh.%f\n", TotalAmounttoPay);

 return 0;
}
