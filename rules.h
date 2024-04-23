#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
#include "constantsGame.h"


char rngSeed ()
{
    char cell;
    int rng = rand() % 10;
    if(rng < 1)
             {
                cell = 'X';
             }
            else
                 cell = '.';
    return cell;
}

// char *rngSeed ()
// {
//     char *firstIteration = (char *)malloc((COLUMNS*ROWS)*sizeof(char));
//     int rng = rand() % 10;
//     int i, j;
//     for (i=0; i < ROWS; i++)
//     {
//         for(j=0; j < COLUMNS; j++)
//         {
//             if(rng < 4)
//             {
//                 firstIteration[i] = 'X';
//             }
//             else
//                 firstIteration[i] = '.';
//         }
//     }
//     return firstIteration;
// }

// void iterate (char *newIteration)
// {
//     char* lastIteration;
//     lastIteration = storeLastIteration(newIteration);
//     int i, j;
//     for (i=0; i < ROWS; i++)
//     {
//         for(j=0; j < COLUMNS; j++)
//         {
//             char cell = updateState(i, j, lastIteration);
//             newIteration[i] = cell;
//             printf("%c", newIteration[i]);
//         }
//         newIteration++;
//     }
    
// }

// char *storeLastIteration (char *newIteration)
// {
//     char *lastIteration = (char *)malloc((COLUMNS*ROWS)*sizeof(char));
//     int i, j;
//     for (i=0; i < ROWS; i++)
//     {
//         for(j=0; j < COLUMNS; j++)
//         {
//             lastIteration[i] = newIteration[i];
//         }
//     }
//     return lastIteration;
// }

// char updateState (int i, int j, char* lastIteration)
// {
//     int countLiving = 0;
//     char cell = lastIteration[i];
//     int x = i;
//     int y = j;
//     for (x--; x < i++; x++)
//     {
//         for(y--; y < j++; y++)
//         {
//             if(lastIteration[y] == 'X');
//             countLiving++;
//         }
//     }
//     if(countLiving < 2 || countLiving > 3)
//         {
//             cell = '.';
//         }
//         else if (countLiving == 3)
//         {
//             cell = 'X';
//         }
//         else if(countLiving == 2 && cell == 'X')
//         {
//             cell = 'X';
//         }
//         else
//             cell = '.';
// }   