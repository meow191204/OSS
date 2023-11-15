#ifndef STATS_H
#define STATS_H

typedef struct{
    int health;
    int attack;
}Stats;

Stats calculateStats(int level);
#endif