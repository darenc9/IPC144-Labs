/*
*****************************************************************************
                          Workshop - #3 (P1)
Full Name  : Devon Chan
Student ID#: 066869132
Email      : dchen80@myseneca.ca
Section    : NBB
Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/

#include <stdio.h>

int main(void)
{
    // You must use this variable in #3 data analysis section!
    const double testValue = 330.99;
    const int product1ID = 111, product2ID = 222, product3ID = 111;
    const double product1Price = 111.49, product2Price = 222.99, product3Price = 334.49;
    const char product1Taxed =  'Y', product2Taxed = 'N', product3Taxed = 'N';
    double averagePrice = (product1Price + product2Price + product3Price) / 3;


    printf("Product Information\n");
    printf("===================\n");
    printf("Product-1 (ID:%d)\n", product1ID);
    printf("  Taxed: %c\n", product1Taxed);
    printf("  Price: $%.4f\n\n", product1Price);
    printf("Product-2 (ID:%d)\n", product2ID);
    printf("  Taxed: %c\n", product2Taxed);
    printf("  Price: $%.4f\n\n", product2Price);
    printf("Product-3 (ID:%d)\n", product3ID);
    printf("  Taxed: %c\n", product3Taxed);
    printf("  Price: $%.4f\n\n", product3Price);
    printf("The average of all prices is: $%.4f\n\n", averagePrice);
    printf("About Relational and Logical Expressions!\n");
    printf("========================================\n");
    printf("1. These expressions evaluate to TRUE or FALSE\n");
    printf("2. FALSE: is always represented by integer value 0\n");
    printf("3. TRUE : is represented by any integer value other than 0\n\n");
    printf("Some Data Analysis...\n");
    printf("=====================\n");
    printf("1. Is product 1 taxable? -> %d\n\n",product1Taxed == 'Y');
    printf("2. Are products 2 and 3 both NOT taxable (N)? -> %d\n\n", (product2Taxed == 'N' && product3Taxed == 'N'));
    printf("3. Is product 3 less than testValue ($%.2f)? -> %d\n\n", testValue, product3Price < testValue);
    printf("4. Is the price of product 3 more than both product 1 and 2 combined? -> %d\n\n", product3Price > (product1Price + product2Price));
    printf("5. Is the price of product 1 equal to or more than the price difference\n   of product 3 LESS product 2? ->  %d (price difference: $%.2f)\n\n", product1Price >= (product2Price+product3Price), product3Price - product2Price);
    printf("6. Is the price of product 2 equal to or more than the average price? -> %d\n\n", product2Price >= averagePrice);
    printf("7. Based on product ID, product 1 is unique -> %d\n\n", product1ID != product2ID && product1ID != product3ID);
    printf("8. Based on product ID, product 2 is unique -> %d\n\n", product2ID != product1ID && product2ID != product3ID);
    printf("9. Based on product ID, product 3 is unique -> %d\n\n", product3ID != product1ID && product3ID != product2ID);

    return 0;
}