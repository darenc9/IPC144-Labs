/*
*****************************************************************************
                          Workshop - #2 (P1)
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
    const char patSize = 'S';
    int smallPrice, smallPriceDollars, smallPriceCents;
    int mediumPrice, mediumPriceDollars, mediumPriceCents;
    int largePrice, largePriceDollars, largePriceCents;
    int shirtQuantity;
    int subTotal, taxes;

    printf ("Set Shirt Prices\n");
    printf ("================\n");
    printf ("Enter the price for a SMALL shirt: $");
    scanf ("%d.%d", &smallPriceDollars, &smallPriceCents); //user input: 17.96
    printf ("Enter the price for a MEDIUM shirt: $");
    scanf ("%d.%d", &mediumPriceDollars, &mediumPriceCents); //user input: 26.96
    printf ("Enter the price for a LARGE shirt: $");
    scanf ("%d.%d", &largePriceDollars, &largePriceCents); //user input: 35.97

    smallPrice = ((smallPriceDollars * 100) + smallPriceCents);
    mediumPrice = ((mediumPriceDollars * 100) + mediumPriceCents);
    largePrice = ((largePriceDollars * 100) + largePriceCents);

    printf ("\nShirt Store Price List\n");
    printf ("======================\n");
    printf("SMALL  : $%.2f\n", (float)smallPrice / 100);
    printf ("MEDIUM : $%.2f\n", (float)mediumPrice / 100);
    printf ("LARGE  : $%.2f\n\n", (float)largePrice / 100);
    printf ("Patty's shirt size is '%c'\n", patSize);
    printf ("Number of shirts Patty is buying: ");
    scanf ("%d", &shirtQuantity);
    printf ("\nPatty's shopping cart...\n");

    subTotal = smallPrice * shirtQuantity;
    taxes = subTotal * TAX + .5;

    printf ("Contains : %d shirts\n", shirtQuantity);
    printf ("Sub-total: $%8.4lf\n", (float)subTotal / 100);
    printf ("Taxes    : $%8.4lf\n", (float)taxes / 100);
    printf ("Total    : $%8.4lf\n", (float) (subTotal+taxes) / 100);
    return 0;
}