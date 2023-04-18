/*
*****************************************************************************
                          Workshop - #2 (P2)
Full Name  :Devon Chan
Student ID#:066869132
Email      :dchen80@myseneca.ca
Section    :IPC144 NBB
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const double TAX = 0.13;
    const char patSize = 'S', salSize = 'M', tomSize = 'L';
    int smallPrice, smallPriceDollars, smallPriceCents;
    int mediumPrice, mediumPriceDollars, mediumPriceCents;
    int largePrice, largePriceDollars, largePriceCents;
    int patShirtQuantity, salShirtQuantity, tomShirtQuantity;
    int patSubTotal, salSubTotal, tomSubTotal;
    int patTaxes, salTaxes, tomTaxes;
    int subTotal, taxTotal;
    int coins;
    int incTaxBalance, excTaxBalance;


    printf("Set Shirt Prices\n");
    printf("================\n");
    printf("Enter the price for a SMALL shirt: $");
    scanf("%d.%d", &smallPriceDollars, &smallPriceCents); //user input: 17.96
    printf("Enter the price for a MEDIUM shirt: $");
    scanf("%d.%d", &mediumPriceDollars, &mediumPriceCents); //user input: 26.96
    printf("Enter the price for a LARGE shirt: $");
    scanf("%d.%d", &largePriceDollars, &largePriceCents); //user input: 35.97

    smallPrice = ((smallPriceDollars * 100) + smallPriceCents);
    mediumPrice = ((mediumPriceDollars * 100) + mediumPriceCents);
    largePrice = ((largePriceDollars * 100) + largePriceCents);

    printf("\nShirt Store Price List\n");
    printf("======================\n");
    printf("SMALL  : $%.2f\n", (float)smallPrice / 100);
    printf("MEDIUM : $%.2f\n", (float)mediumPrice / 100);
    printf("LARGE  : $%.2f\n\n", (float)largePrice / 100);
    printf("Patty's shirt size is '%c'\n", patSize);
    printf("Number of shirts Patty is buying: ");
    scanf("%d", &patShirtQuantity); //user input: 6
    printf("\nTommy's shirt size is '%c'\n", tomSize);
    printf("Number of shirts Tommy is buying: ");
    scanf("%d", &tomShirtQuantity); //user input: 3
    printf("\nSally's shirt size is '%c'\n", salSize);
    printf("Number of shirts Sally is buying: ");
    scanf("%d", &salShirtQuantity); //user input: 4

    patSubTotal = smallPrice * patShirtQuantity;
    patTaxes = patSubTotal * TAX + 0.5;
    salSubTotal = mediumPrice * salShirtQuantity;
    salTaxes = salSubTotal * TAX + 0.5;
    tomSubTotal = largePrice * tomShirtQuantity;
    tomTaxes = tomSubTotal * TAX + 0.5;
    subTotal = patSubTotal + salSubTotal + tomSubTotal;
    taxTotal = patTaxes + salTaxes + tomTaxes;

    printf("\nCustomer Size Price Qty Sub-Total       Tax     Total\n");
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("Patty    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", patSize, ((double)smallPrice)/100, patShirtQuantity, (float)patSubTotal / 100, (float)patTaxes/100, (float)(patSubTotal+patTaxes)/100);
    printf("Sally    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", salSize, ((double)mediumPrice)/100, salShirtQuantity, (float)salSubTotal / 100, (float)salTaxes/100, (float)(salSubTotal+salTaxes)/100);
    printf("Tommy    %-4c %5.2lf %3d %9.4lf %9.4lf %9.4lf\n", tomSize, ((double)largePrice)/100, tomShirtQuantity, (float)tomSubTotal / 100, (float)tomTaxes/100, (float)(tomSubTotal+tomTaxes)/100);
    printf("-------- ---- ----- --- --------- --------- ---------\n");
    printf("%33.4lf %9.4lf %9.4lf\n\n", (float)subTotal/100, (float)taxTotal/100, (float)(subTotal+taxTotal)/100);

    excTaxBalance = subTotal;
    incTaxBalance = (subTotal + taxTotal);

    printf("Daily retail sales represented by coins\n");
    printf("=======================================\n\n");
    printf("Sales EXCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (float)subTotal/100);
    coins = subTotal / 200;
    excTaxBalance = excTaxBalance % 200;
    printf("Toonies  %3d %9.4lf\n", coins, (float)excTaxBalance / 100);
    coins = excTaxBalance / 100;
    excTaxBalance = excTaxBalance % 100;
    printf("Loonies  %3d %9.4lf\n", coins, (float)excTaxBalance / 100);
    coins = excTaxBalance / 25;
    excTaxBalance = excTaxBalance % 25;
    printf("Quarters %3d %9.4lf\n", coins, (float)excTaxBalance / 100);
    coins = excTaxBalance / 10;
    excTaxBalance = excTaxBalance % 10;
    printf("Dimes    %3d %9.4lf\n", coins, (float)excTaxBalance / 100);
    coins = excTaxBalance / 5;
    excTaxBalance = excTaxBalance % 5;
    printf("Nickels  %3d %9.4lf\n", coins, (float)excTaxBalance / 100);
    coins = excTaxBalance / 1;
    excTaxBalance = excTaxBalance % 1;
    printf("Pennies  %3d %9.4lf\n\n", coins, (float)excTaxBalance / 100);
    printf("Average cost/shirt: $%.4lf\n\n", (float)subTotal / 100 / (patShirtQuantity+salShirtQuantity+tomShirtQuantity));

    printf("Sales INCLUDING tax\n");
    printf("Coin     Qty   Balance\n");
    printf("-------- --- ---------\n");
    printf("%22.4lf\n", (float)incTaxBalance / 100);
    coins = (subTotal + taxTotal) /100 / 2;
    incTaxBalance = incTaxBalance % 200;
    printf("Toonies  %3d %9.4lf\n", coins, (float)incTaxBalance / 100);
    coins = incTaxBalance / 100;
    incTaxBalance = incTaxBalance % 100;
    printf("Loonies  %3d %9.4lf\n", coins, (float)incTaxBalance / 100);
    coins = incTaxBalance / 25;
    incTaxBalance = incTaxBalance % 25;
    printf("Quarters %3d %9.4lf\n", coins, (float)incTaxBalance / 100);
    coins = incTaxBalance / 10;
    incTaxBalance = incTaxBalance % 10;
    printf("Dimes    %3d %9.4lf\n", coins, (float)incTaxBalance / 100);
    coins = incTaxBalance / 5;
    incTaxBalance = incTaxBalance % 5;
    printf("Nickels  %3d %9.4lf\n", coins, (float)incTaxBalance / 100);
    coins = incTaxBalance / 1;
    incTaxBalance = incTaxBalance % 1;
    printf("Pennies  %3d %9.4lf\n\n", coins, (float)incTaxBalance / 100);
    printf("Average cost/shirt: $%.4lf\n", (float)(subTotal+taxTotal) / 100 / (patShirtQuantity + salShirtQuantity + tomShirtQuantity));

    return 0;
}