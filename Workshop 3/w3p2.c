/*
*****************************************************************************
                          Workshop - #3 (P2)
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

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    // You will need this when converting from grams to pounds (lbs)
    const double GRAMS_IN_LBS = 453.5924;

    char coffeeType1, coffeeType2, coffeeType3;
    char coffeeGrind1, coffeeGrind2, coffeeGrind3;
    int bagWeight1, bagWeight2, bagWeight3;
    char cream1, cream2, cream3;
    float celsius1, celsius2, celsius3;

    char coffeeStrength, withCream, coffeeMaker;
    int dailyServings;
    // Note:
    // You can convert Celsius to Fahrenheit given the following formula:
    // fahrenheit = (celsius * 1.8) + 32.0);

    printf("Take a Break - Coffee Shop\n");
    printf("==========================\n\n");
    printf("Enter the coffee product information being sold today...\n\n");
    printf("COFFEE-1...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffeeType1); //userinput: l
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffeeGrind1); //userinput: c
    printf("Bag weight (g): "); 
    scanf("%d", &bagWeight1); //userinput: 250
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream1); //userinput: y
    printf("Ideal serving temperature (Celsius): ");
    scanf("%f", &celsius1); //userinput: 65.7
    
    printf("\nCOFFEE-2...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffeeType2); //userinput: B
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffeeGrind2); //userinput: F
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight2); //userinput: 500
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream2); //userinput: N
    printf("Ideal serving temperature (Celsius): ");
    scanf("%f", &celsius2); //userinput: 70.0

    printf("\nCOFFEE-3...\n");
    printf("Type ([L]ight,[B]lend): ");
    scanf(" %c", &coffeeType3); //userinput: L
    printf("Grind size ([C]ourse,[F]ine): ");
    scanf(" %c", &coffeeGrind3); //userinput: f
    printf("Bag weight (g): ");
    scanf("%d", &bagWeight3); //userinput: 1000
    printf("Best served with cream ([Y]es,[N]o): ");
    scanf(" %c", &cream3); //userinput: n
    printf("Ideal serving temperature (Celsius): ");
    scanf("%f", &celsius3); //userinput: 80.5

    printf("\n---+---------------+---------------+---------------+-------+--------------\n");
    printf("   |    Coffee     |    Coffee     |   Packaged    | Best  |   Serving\n");
    printf("   |     Type      |  Grind Size   |  Bag Weight   | Served| Temperature\n");
    printf("   +---------------+---------------+---------------+ With  +--------------\n");
    printf("ID | Light | Blend | Course | Fine |  (G) | Lbs    | Cream |   (C) |   (F)\n");
    printf("---+---------------+---------------+---------------+-------+--------------\n");
    printf(" 1 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n",
        coffeeType1 == 'L' || coffeeType1 == 'l', coffeeType1 == 'B' || coffeeType1 == 'b', coffeeGrind1 == 'C' || coffeeGrind1 == 'c',
        coffeeGrind1 == 'F' || coffeeGrind1 == 'f', bagWeight1, bagWeight1 / GRAMS_IN_LBS, cream1 == 'Y' ||cream1 == 'y', celsius1, (celsius1 * 1.8) + 32);
    printf(" 2 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n", coffeeType2 == 'L' || coffeeType2 == 'l',
        coffeeType2 == 'B' || coffeeType2 == 'b', coffeeGrind2 == 'C' || coffeeGrind2 == 'c', coffeeGrind2 == 'F' || coffeeGrind2 == 'f',
        bagWeight2, bagWeight2 / GRAMS_IN_LBS, cream2 == 'Y' ||cream2 == 'y', celsius2, (celsius2 * 1.8) + 32);
    printf(" 3 |   %d   |   %d   |    %d   |   %d  | %4d | %6.3lf |   %d   | %5.1lf | %5.1lf\n\n", coffeeType3 == 'L' || coffeeType3 == 'l',
        coffeeType3 == 'B' || coffeeType3 == 'b', coffeeGrind3 == 'C' || coffeeGrind3 == 'c', coffeeGrind3 == 'F' || coffeeGrind3 == 'f',
        bagWeight3, bagWeight3 / GRAMS_IN_LBS, cream3 == 'Y' ||cream3 == 'y', celsius3, (celsius3 * 1.8) + 32);
    printf("Enter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffeeStrength); //userinput: m
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &withCream); //userinput: y
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServings); //userinput: 6
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &coffeeMaker); //userinput: c
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",
        ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType1 == 'L' || coffeeType1 == 'l')) || ((coffeeStrength == 'R' || coffeeStrength == 'r') && (coffeeType1 == 'B' || coffeeType1 == 'b')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (coffeeGrind1 == 'F' || coffeeGrind1 == 'f')) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (coffeeGrind1 == 'C' || coffeeGrind1 == 'c')),
        ((dailyServings >= 1 && dailyServings <= 4) && (bagWeight1 <= 250)) || ((dailyServings >= 4 && dailyServings <= 9) && (bagWeight1 == 500)) || ((dailyServings >=10) && (bagWeight1 == 1000)),
        ((withCream == 'Y' || withCream == 'y') && (cream1 == 'Y' || cream1 == 'y')) || ((withCream == 'N' || withCream == 'n') && (cream1 == 'N' || cream1 == 'n')),
        ((coffeeMaker == 'c' || coffeeMaker =='C') && (celsius1 >= 70.0)) || ((coffeeMaker == 'R' || coffeeMaker =='r') && (celsius1 >= 60 && celsius1 <= 69.9)));
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",
        ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType2 == 'L' || coffeeType2 == 'l')) || ((coffeeStrength == 'R' || coffeeStrength == 'r') && (coffeeType2 == 'B' || coffeeType2 == 'b')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (coffeeGrind2 == 'F' || coffeeGrind2 == 'f')) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (coffeeGrind2 == 'C' || coffeeGrind2 == 'c')),
        ((dailyServings >= 1 && dailyServings <= 4) && (bagWeight2 <= 250)) || ((dailyServings >= 4 && dailyServings <= 9) && (bagWeight2 == 500)) || ((dailyServings >= 10) && (bagWeight2 == 1000)),
        ((withCream == 'Y' || withCream == 'y') && (cream2 == 'Y' || cream2 == 'y')) || ((withCream == 'N' || withCream == 'n') && (cream2 == 'N' || cream2 == 'n')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (celsius2 >= 70.0)) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (celsius2 >= 60 && celsius2 <= 69.9)));
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",
        ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType3 == 'L' || coffeeType3 == 'l')) || ((coffeeStrength == 'R' || coffeeStrength == 'r') && (coffeeType3 == 'B' || coffeeType3 == 'b')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (coffeeGrind3 == 'F' || coffeeGrind3 == 'f')) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (coffeeGrind3 == 'C' || coffeeGrind3 == 'c')),
        ((dailyServings >= 1 && dailyServings <= 4) && (bagWeight3 <= 250)) || ((dailyServings >= 4 && dailyServings <= 9) && (bagWeight3 == 500)) || ((dailyServings >= 10) && (bagWeight3 == 1000)),
        ((withCream == 'Y' || withCream == 'y') && (cream3 == 'Y' || cream3 == 'y')) || ((withCream == 'N' || withCream == 'n') && (cream3 == 'N' || cream3 == 'n')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (celsius3 >= 70.0)) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (celsius3 >= 60 && celsius3 <= 69.9)));

    printf("\nEnter how you like your coffee and the coffee maker equipment you use...\n\n");
    printf("Coffee strength ([M]ild,[R]ich): ");
    scanf(" %c", &coffeeStrength); //userinput: R
    printf("Do you like your coffee with cream ([Y]es,[N]o): ");
    scanf(" %c", &withCream); //userinput: N
    printf("Typical number of daily servings: ");
    scanf("%d", &dailyServings); //userinput: 10
    printf("Maker ([R]esidential,[C]ommercial): ");
    scanf(" %c", &coffeeMaker); //userinput: R
    printf("\nThe below table shows how your preferences align to the available products:\n\n");
    printf("--------------------+--------------------+-------------+-------+--------------\n");
    printf("  |     Coffee      |       Coffee       |  Packaged   | With  |   Serving\n");
    printf("ID|      Type       |     Grind Size     | Bag Weight  | Cream | Temperature\n");
    printf("--+-----------------+--------------------+-------------+-------+--------------\n");
    printf(" 1|       %d         |         %d          |      %d      |   %d   |      %d\n",
        ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType1 == 'L' || coffeeType1 == 'l')) || ((coffeeStrength == 'R' || coffeeStrength == 'r') && (coffeeType1 == 'B' || coffeeType1 == 'b')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (coffeeGrind1 == 'F' || coffeeGrind1 == 'f')) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (coffeeGrind1 == 'C' || coffeeGrind1 == 'c')),
        ((dailyServings >= 1 && dailyServings <= 4) && (bagWeight1 <= 250)) || ((dailyServings >= 4 && dailyServings <= 9) && (bagWeight1 == 500)) || ((dailyServings >= 10) && (bagWeight1 == 1000)),
        ((withCream == 'Y' || withCream == 'y') && (cream1 == 'Y' || cream1 == 'y')) || ((withCream == 'N' || withCream == 'n') && (cream1 == 'N' || cream1 == 'n')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (celsius1 >= 70.0)) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (celsius1 >= 60 && celsius1 <= 69.9)));
    printf(" 2|       %d         |         %d          |      %d      |   %d   |      %d\n",
        ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType2 == 'L' || coffeeType2 == 'l')) || ((coffeeStrength == 'R' || coffeeStrength == 'r') && (coffeeType2 == 'B' || coffeeType2 == 'b')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (coffeeGrind2 == 'F' || coffeeGrind2 == 'f')) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (coffeeGrind2 == 'C' || coffeeGrind2 == 'c')),
        ((dailyServings >= 1 && dailyServings <= 4) && (bagWeight2 <= 250)) || ((dailyServings >= 4 && dailyServings <= 9) && (bagWeight2 == 500)) || ((dailyServings >= 10) && (bagWeight2 == 1000)),
        ((withCream == 'Y' || withCream == 'y') && (cream2 == 'Y' || cream2 == 'y')) || ((withCream == 'N' || withCream == 'n') && (cream2 == 'N' || cream2 == 'n')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (celsius2 >= 70.0)) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (celsius2 >= 60 && celsius2 <= 69.9)));
    printf(" 3|       %d         |         %d          |      %d      |   %d   |      %d\n",
        ((coffeeStrength == 'm' || coffeeStrength == 'M') && (coffeeType3 == 'L' || coffeeType3 == 'l')) || ((coffeeStrength == 'R' || coffeeStrength == 'r') && (coffeeType3 == 'B' || coffeeType3 == 'b')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (coffeeGrind3 == 'F' || coffeeGrind3 == 'f')) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (coffeeGrind3 == 'C' || coffeeGrind3 == 'c')),
        ((dailyServings >= 1 && dailyServings <= 4) && (bagWeight3 <= 250)) || ((dailyServings >= 4 && dailyServings <= 9) && (bagWeight3 == 500)) || ((dailyServings >= 10) && (bagWeight3 == 1000)),
        ((withCream == 'Y' || withCream == 'y') && (cream3 == 'Y' || cream3 == 'y')) || ((withCream == 'N' || withCream == 'n') && (cream3 == 'N' || cream3 == 'n')),
        ((coffeeMaker == 'c' || coffeeMaker == 'C') && (celsius3 >= 70.0)) || ((coffeeMaker == 'R' || coffeeMaker == 'r') && (celsius3 >= 60 && celsius3 <= 69.9)));


    printf("\nHope you found a product that suits your likes!\n");
    return 0;
}