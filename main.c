#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Extra headers design for GoL*/
#include "constantsGame.h"
#include "rules.h"

char rngSeed ();


int main()
{
    char lastIteration[ROWS][COLUMNS];
    char c;
    char *pCell = &c;
    
    int maxIt = 10;
    int thisIt = 0;
    
    //Hide cursor
    printf("\e[?25l");

    /*Initialize seeding*/
    printf("8");
        for (int j = 0; j < ROWS; j++)
            printf("-");
        printf("8\n");
    for (int i = 0; i < COLUMNS; i++)
        {
            printf("|");
            for (int j = 0; j < ROWS; j++)
            {
                c = rngseed();
                lastIteration[i][j] = c;
                printf("%c", lastIteration[i][j]);
            }
            printf("|\n");
        }
    printf("8");
    for (int j = 0; j < ROWS; j++)
        printf("-");
    printf("8\n");
    printf("%.*s", ROWS +2, "************************************************************************************");
    printf("\nInitial seed, press any key to continue\n");
    printf("%.*s", ROWS +2, "************************************************************************************");
    getchar();
    //clear screen
    printf("\e[1;1H\e[2J");

    /*Initialize iterations*/

    do
    {
        printf("8");
        for (int j = 0; j < ROWS; j++)
            printf("-");
        printf("8\n");
        //printf("this is the first char: %c", lastIteration[0]);
        for (int i = 0; i < COLUMNS; i++)
        {
            printf("|");
            for (int j = 0; j < ROWS; j++)
            {
                printf("%c", lastIteration[i][j]);
            }
            printf("|\n");
        }

        printf("8");
        for (int j = 0; j < ROWS; j++)
            printf("-");
        printf("8\n");
        
        thisIt++;
        printf("%.*s", ROWS +2, "************************************************************************************");
        printf("\nNext iteration, press any key\n");
        printf("%.*s", ROWS +2, "************************************************************************************");
        getchar();
        //clear screen
        printf("\e[1;1H\e[2J");

    }while(thisIt < maxIt);
    return 0;
}