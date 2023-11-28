#ifndef _SOCKLIB_H
#define _SOCKLIB_H
#include <stdio.h>
#define MAX_DRAWERS 10 
typedef struct  
{
    int DrawerID;
    int NumberOfSocks;
    char SockColor[40];
    int MaxDrawerCapacity;
}SockDrawer;

void SortMySocks(SockDrawer Dresser[MAX_DRAWERS]);
void PutOnMySocks(SockDrawer Dresser[MAX_DRAWERS]);
void PutAwayMySocks(SockDrawer Dresser[MAX_DRAWERS]);
#endif