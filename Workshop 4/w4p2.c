/*
*****************************************************************************
                          Workshop - #4 (P2)
Full Name  : Devon Chan
Student ID#: 066 869 132
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
    int apples, oranges, pears, tomatoes, cabbages;
    int applesPicked, orangesPicked, pearsPicked, tomatoesPicked, cabbagesPicked;
    int shopLoop = 1;
    while (shopLoop > 0)
    {
        printf("Grocery Shopping\n");
        printf("================\n");
        printf("How many APPLES do you need? : ");
        scanf("%d", &apples);
        while (apples < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many APPLES do you need? : ");
            scanf("%d", &apples);
        }
        printf("\nHow many ORANGES do you need? : ");
        scanf("%d", &oranges);
        while (oranges < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many ORANGES do you need? : ");
            scanf("%d", &oranges);
        }
        printf("\nHow many PEARS do you need? : ");
        scanf("%d", &pears);
        while (pears < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many PEARS do you need? : ");
            scanf("%d", &pears);
        }
        printf("\nHow many TOMATOES do you need? : ");
        scanf("%d", &tomatoes);
        while (tomatoes < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many TOMATOES do you need? : ");
            scanf("%d", &tomatoes);
        }
        printf("\nHow many CABBAGES do you need? : ");
        scanf("%d", &cabbages);
        while (cabbages < 0)
        {
            printf("ERROR: Value must be 0 or more.\n");
            printf("How many CABBAGES do you need? : ");
            scanf("%d", &cabbages);
        }
        printf("\n--------------------------\n");
        printf("Time to pick the products!\n");
        printf("--------------------------\n\n");

        while (apples > 0)
        {
            printf("Pick some APPLES... how many did you pick? : ");
            scanf("%d", &applesPicked);
            if (applesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (applesPicked > apples)
            {
                printf("You picked too many... only %d more APPLE(S) are needed.\n", apples);
            }
            else if (applesPicked <= apples)
            {
                apples = apples - applesPicked;
                if (apples > 0)
                {
                    printf("Looks like we still need some APPLES...\n");
                }
                else
                {
                    printf("Great, that's the apples done!\n\n");
                }
            }
        }
        while (oranges > 0)
        {
            printf("Pick some ORANGES... how many did you pick? : ");
            scanf("%d", &orangesPicked);
            if (orangesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (orangesPicked > oranges)
            {
                printf("You picked too many... only %d more ORANGE(S) are needed.\n", oranges);
            }
            else if (orangesPicked <= oranges)
            {
                oranges = oranges - orangesPicked;
                if (oranges > 0)
                {
                    printf("Looks like we still need some ORANGES...\n");
                }
                else
                {
                    printf("Great, that's the oranges done!\n\n");
                }
            }
        }
        while (pears > 0)
        {
            printf("Pick some PEARS... how many did you pick? : ");
            scanf("%d", &pearsPicked);
            if (pearsPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (pearsPicked > pears)
            {
                printf("You picked too many... only %d more PEAR(S) are needed.\n", pears);
            }
            else if (pearsPicked <= pears)
            {
                pears = pears - pearsPicked;
                if (pears > 0)
                {
                    printf("Looks like we still need some PEARS...\n");
                }
                else
                {
                    printf("Great, that's the pears done!\n\n");
                }
            }
        }
        while (tomatoes > 0)
        {
            printf("Pick some TOMATOES... how many did you pick? : ");
            scanf("%d", &tomatoesPicked);
            if (tomatoesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (tomatoesPicked > tomatoes)
            {
                printf("You picked too many... only %d more TOMATO(ES) are needed.\n", tomatoes);
            }
            else if (tomatoesPicked <= tomatoes)
            {
                tomatoes = tomatoes - tomatoesPicked;
                if (tomatoes > 0)
                {
                    printf("Looks like we still need some TOMATOES...\n");
                }
                else
                {
                    printf("Great, that's the tomatoes done!\n\n");
                }
            }
        }
        while (cabbages > 0)
        {
            printf("Pick some CABBAGES... how many did you pick? : ");
            scanf("%d", &cabbagesPicked);
            if (cabbagesPicked <= 0)
            {
                printf("ERROR: You must pick at least 1!\n");
            }
            else if (cabbagesPicked > cabbages)
            {
                printf("You picked too many... only %d more CABBAGE(S) are needed.\n", cabbages);
            }
            else if (cabbagesPicked <= cabbages)
            {
                cabbages = cabbages - cabbagesPicked;
                if (cabbages > 0)
                {
                    printf("Looks like we still need some CABBAGES...\n");
                }
                else
                {
                    printf("Great, that's the cabbages done!\n\n");
                }
            }
        }
        printf("All the items are picked!\n\n");
        printf("Do another shopping? (0=NO): ");
        scanf("%d", &shopLoop);
        printf("\n");
    }
    printf("Your tasks are done for today - enjoy your free time!\n");

    return 0;
}