#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "constantsGame.h"

char rngseed()
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

bool isValid (int i, int j)
{
    if(i < 1 || j < 1 || i > ROWS || j > COLUMNS)
        return false;
    else
        true;
}

char updateState (int i, int j, char lastIteration[][COLUMNS])
{
    char cell;
    int x = i - 1;
    i++;
    int c;
    int counterY = j + 1;
    int countLiving = 0;
    for (x; x <= i; x++)
    {
        int y = j -1;
        for(y; y <= counterY; y++)
        {
            if(isValid(x, y) == true)
            {
                c = lastIteration[x][y];
                if(c == 88)
                {
                    countLiving++;
                }
            }
            else
                countLiving;
            
        }
    }
    if(countLiving < 2 || countLiving > 3)
        {
            cell = '.';
        }
        else if (countLiving == 3)
        {
            cell = 'X';
        }
        else if(countLiving == 2 && cell == 'X')
        {
            cell = 'X';
        }
        else
            cell = '.';
    return cell;
}   