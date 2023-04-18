#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double price1 = 10.10, price2 = 10.12, price3 = 10.15;
    int cents1 = (int)(price1 * 100);
    int cents2 = (int)(price2 * 100);
    int cents3 = (int)(price3 * 100);
    printf("%d 10.10 = %.15lf\n", cents1, price1);
    printf("%d 10.10 = %.15lf\n", cents2, price2);
    printf("%d 10.10 = %.15lf\n", cents3, price3);
    
    int smallPrice = 1796;
    int smallPriceDollars = smallPrice / 100;
    int smallPriceCents = smallPrice % 100;
    printf("Small Price: $%d.%d\n", smallPriceDollars, smallPriceCents);
    printf("Small Price: %d.%d\n", smallPrice / 100, smallPrice % 100);
    printf("Small Price: %.2f", (float)smallPrice / 100);

    double price;
    price = smallPrice;
    printf("Small Price: %.2f", price / 100);

    return 0;
}