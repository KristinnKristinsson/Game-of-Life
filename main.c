#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

/*Extra headers design for GoL*/
#include "constantsGame.h"
#include "rules.h"

char rngSeed ();
void iterate (char *newIteration);
char *storeLastIteration (char *newIteration);
char *storeLastIteration (char *newIteration);

int main()
{
    char c;   
    int quit = 0;
    while (!quit)
    {
        //Hide cursor
        printf("\e[?25l");

        printf("8");
        for (int i = 0; i < COLUMNS; i++)
            printf("-");
        printf("8\n");

        for (int j = 0; j < ROWS; j++)
        {
            printf("|");
            for (int i = 0; i < COLUMNS; i++)
            {
                char firstIteration = rngSeed();
                printf("%c", firstIteration);
            }
            printf("|\n");
        }

        printf("8");
        for (int i = 0; i < COLUMNS; i++)
            printf("-");
        printf("8\n");
        //move cursor to top
        printf("\e[%iA", ROWS + 2);
    }
    return 0;
}