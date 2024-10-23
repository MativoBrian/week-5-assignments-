//program to find electricity bills
/*
Author: Brian Waema Mativo
Reg No: CT101/G/22118/24
*/
//preprocessor directive printf()

#include <stdio.h>

int main() {
    int customerID;
    char customerName[50];
    float unitsConsumed, chargePerUnit, totalBill, surcharge;


    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", customerName);

    printf("Enter Units Consumed: ");
    scanf("%f", &unitsConsumed);


    if (unitsConsumed <= 199) {
        chargePerUnit = 1.20;
    } else if (unitsConsumed >= 200 && unitsConsumed < 400) {
        chargePerUnit = 1.50;
    } else if (unitsConsumed >= 400 && unitsConsumed < 600) {
        chargePerUnit = 1.80;
    } else {
        chargePerUnit = 2.00;
    }

    // Calculate the total bill
    totalBill = unitsConsumed * chargePerUnit;

    // If the bill exceeds 400 Ksh, apply a 15% surcharge
    if (totalBill > 400) {
        surcharge = totalBill * 0.15;
        totalBill += surcharge;
    }

    // Minimum bill should be Ksh 100
    if (totalBill < 100) {
        totalBill = 100;
    }


    printf("\n -The Electricity Bill is -\n");
    printf("Customer ID: %d\n", customerID);
    printf("Customer Name: %s\n", customerName);
    printf("Units Consumed: %.2f\n", unitsConsumed);
    printf("Charge per Unit: %.2f Ksh\n", chargePerUnit);
    printf("Total Amount to Pay: %.2f Ksh\n", totalBill);

    return 0;
}
