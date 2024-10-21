//program to calculate the fine for overdue library books
/*
Author: Silas Mmbigulu
Reg No: CT101/G/23652/24
Date: 26/09/2024
*/
#include <stdio.h>
int main () {
//declaration and initialization
    int BookID;
    int DueDate;
    int ReturnDate;
    int DaysOverdue;
    int fineRate;
    int fineAmount;

    //prompting the user for values of each
    printf("Enter BookID:");
    scanf("%d", &BookID);
    printf("Enter Due Date:");
    scanf("%d", &DueDate);
    printf("Enter Return Date:");
    scanf("%d", &ReturnDate);

    //calculating days overdue
    DaysOverdue = (ReturnDate - DueDate);

   //determining fine rates
    if (DaysOverdue<=7)
        printf("\nfineRates =Ksh.20");
    else if (DaysOverdue<=14)
        printf("\nfineRates = Ksh.50");
    else
        printf("\nfineRates = Ksh.100");

    //calculating fine amount
    fineAmount = (DaysOverdue*fineRate);

    //display
    printf("\nBookID:%d\n", BookID);
    printf("DueDate:%d\n", DueDate);
    printf("ReturnDate:%d\n", ReturnDate);
    printf("DaysOverdue:%d\n", DaysOverdue);
    printf("fineRate:Ksh.%d per day\n", fineRate);
    printf("fineAmount:Ksh.%d\n", fineAmount);

    return 0;

}
