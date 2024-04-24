#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Extra headers design for GoL*/
#include "constantsGame.h"
#include "rules.h"

char rngSeed ();
char updateState (int i, int j, char lastIteration[ROWS][COLUMNS]);

int main()
{
    char lastIteration[ROWS][COLUMNS];
    char newIteration[ROWS][COLUMNS];
    char c;
    
    int maxIt = 50;
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
        for (int i = 0; i < COLUMNS; i++)
        {
            printf("|");
            for (int j = 0; j < ROWS; j++)
            {
                newIteration[i][j] = updateState(i, j, lastIteration);
                printf("%c", newIteration[i][j]);
            }
            printf("|\n");
        }
        for (int i = 0; i < COLUMNS; i++)
        {
            for (int j = 0; j < ROWS; j++)
            {
                lastIteration[i][j] = newIteration[i][j];
            }
        }

        printf("8");
        for (int j = 0; j < ROWS; j++)
            printf("-");
        printf("8\n");
        
        thisIt++;
        if(thisIt == maxIt)
        {
            printf("%.*s", ROWS +2, "************************************************************************************");
            printf("\nNext iteration, press any key\n");
            printf("%.*s", ROWS +2, "************************************************************************************");
            getchar();
        }
        //clear screen
        printf("\e[1;1H\e[2J");

    }while(thisIt <= maxIt);
    return 0;
}