/*
*****************************************************************************
                          Workshop - #4 (P1)
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
    char loopType;
    int loopAmt;
    int loopFlag = 0;

    printf("+----------------------+\n");
    printf("Loop application STARTED\n");
    printf("+----------------------+\n\n");
    
    while(loopFlag == 0) {
        printf("D = do/while | W = while | F = for | Q = quit\n");
        printf("Enter loop type and the number of times to iterate (Quit=Q0): ");
        scanf(" %c%d", &loopType, &loopAmt);

        if ((loopType == 'D' || loopType == 'W' || loopType == 'F') && (loopAmt >= 3 && loopAmt <= 20))
        {
            if (loopType == 'D')
            {
                printf("DO-WHILE: ");
                do
                {
                    printf("D");
                    loopAmt--;
                } while (loopAmt > 0);
                printf("\n\n");
            }
            if (loopType == 'W')
            {
                printf("WHILE   : ");
                while (loopAmt > 0)
                {
                    loopAmt--;
                    printf("W");
                }
                printf("\n\n");
            }
            if (loopType == 'F')
            {
                printf("FOR     : ");
                for (loopAmt = loopAmt; loopAmt > 0; --loopAmt)
                {
                    printf("F");
                }
                printf("\n\n");
            }
        }
        else if ((loopType == 'D' || loopType == 'W' || loopType == 'F') && !(loopAmt >= 3 && loopAmt <= 20))
        {
            printf("ERROR: The number of iterations must be between 3-20 inclusive!\n\n");
        }
        else if (loopType == 'Q' && loopAmt != 0)
        {
            printf("ERROR: To quit, the number of iterations should be 0!\n\n");
        }
        else if (loopType == 'Q' && loopAmt == 0)
        {
            printf("\n");
            loopFlag = 1;
        }
        else
        {
            printf("ERROR: Invalid entered value(s)!\n\n");
        }
    }


    printf("+--------------------+\n");
    printf("Loop application ENDED\n");
    printf("+--------------------+\n\n");
    return 0;
}