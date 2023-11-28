#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SockLib.h"
#include "SortLib.h"
#include "DrawerLib.h"
int GetDrawer(SockDrawer Dresser[MAX_DRAWERS],int DrawerNumber)
{
    do
    {
        if(NumDrawers<DrawerNumber)
        {
            printf("\n\nThat's not one of your drawers!!\nPick again!\n\n");
        }
    }while (DrawerNumber>NumDrawers);
    int i=0;
    int CurrentDrawerID =0;
    while(i<NumDrawers)
    {
        if(Dresser[i].DrawerID == DrawerNumber)
        {       
            CurrentDrawerID=i;
        }
        i++;
    }
    return CurrentDrawerID;
}
void GetNumDrawers()
{
    int tempNumDrawers=0;
    do
    {
        printf("\n\nHow many drawers does your dresser have?(1-10)  ");
        scanf("%d",&tempNumDrawers);
        if(tempNumDrawers<MAX_DRAWERS)
        {
            NumDrawers = tempNumDrawers;
        }
        else
        {
            printf("\n\nNumber of drawers must be between 1 and 10.\n\nPlease reenter.\n\n");
        }
        
    }while(tempNumDrawers>MAX_DRAWERS);
}
void CreateDrawer(SockDrawer *Dresserpointer, int DrawNumber)
{
    Dresserpointer->DrawerID=DrawNumber;//*
    printf("\nHow many total socks will fit in Drawer %d ? ",DrawNumber);
    scanf("%d",&Dresserpointer->MaxDrawerCapacity);
    printf("\nHow many socks are you putting in Drawer %d ? ",DrawNumber);
    scanf("%d",&Dresserpointer->NumberOfSocks);
    if(Dresserpointer->NumberOfSocks>Dresserpointer->MaxDrawerCapacity)
    {
        printf("\n%d socks fit in the drawer and %d fell on the floor",Dresserpointer->MaxDrawerCapacity,((Dresserpointer->NumberOfSocks)-(Dresserpointer->MaxDrawerCapacity)));
        Dresserpointer->NumberOfSocks = Dresserpointer->MaxDrawerCapacity;
    }
    getchar();
    printf("\nWhat color are the socks in Drawer %d ? ",DrawNumber);
    fgets(Dresserpointer->SockColor,39,stdin);
    Dresserpointer->SockColor[strlen(Dresserpointer->SockColor)-1] = '\0';
}