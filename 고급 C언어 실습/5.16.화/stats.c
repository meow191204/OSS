#include<stdio.h>
#include "stats.h"

Stats calculateStats(int level)
{
    Stats zelda;
    zelda.health = 100*level;
    zelda.attack = 10*level;

    return zelda;
}