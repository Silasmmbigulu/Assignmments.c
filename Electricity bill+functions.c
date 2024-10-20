//a c program to calculate electricity bill with functions
#include<stdio.h>
//functions to calculate electricity bill
float calculate_bill(float units_consumed){
float charges_per_unit;
float total_bill;

if (units_consumed <=199){
        charges_per_unit=1.20;
}else if(units_consumed<400){
      charges_per_unit=1.50;
}else if(units_consumed<600){
        charges_per_unit=1.80;
}else{
   charges_per_unit=2.00;
}
total_bill=(units_consumed*charges_per_unit);

//application of surcharge fee
if(total_bill>400){
    total_bill+=total_bill*0.15;
}

//ensuring minimum bill is ksh.100
if(total_bill<100){
    total_bill=100;
}
return total_bill;
}

int main () {
//initialization
char customer_id[25];
char customer_name[45];
float units_consumed;
float total_bill;

//prompting the user for values of each
printf("Enter Customer_ID:");
scanf("%s",&customer_id);
printf("Enter Customer Name:");
scanf("%s", &customer_name);
printf("Enter Units Consumed:");
scanf("%f", &units_consumed);

//total bill
total_bill=calculate_bill(units_consumed);

//display
printf("\nElectricity Bill\n");
printf("--------\n");
printf("Customer ID:%s\n",customer_id);
printf("Customer Name:%s\n",customer_name);
printf("Units Consumed:%.2f\n",units_consumed);
printf("Charges Per Unit:%.2f Ksh.\n",units_consumed);
printf("Total Amount to Pay:%.2f Ksh.\n",total_bill);

return 0;
}
