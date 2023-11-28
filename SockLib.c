#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "SockLib.h"
#include "SortLib.h"
#include "DrawerLib.h"

void SortMySocks(SockDrawer Dresser[MAX_DRAWERS]) 
{
    int SortChoice=0;
    int(*CompareFunctionPtrArray[])(const void *,const void *) ={DrawerIDCompare,NumberOfSocksCompare,MaxCapacityCompare,SockColorCompare};
    do
    {
        printf("\n\nDo you want to sort by?\n\n");
        printf("0. Changed my mind - don't want to sort\n1. Drawer ID?\n2. Number of Socks in drawer?\n3. Max capacity of the drawers?\n4. Sock color?\n\n Choice: ");
        scanf("%d",&SortChoice);
    }while(SortChoice<0||SortChoice>4);
    if(SortChoice == 0)
    {
        printf("\n\nYour sock drawer is a mess!\n\n");
    }
    else
    {
        SockDrawer *Dresserpointer = &Dresser[0];
        //qsort(void *base,size_t elements,size_t size, int(*compare)(const void*, const void*));
        qsort((void*)Dresserpointer,NumDrawers,sizeof(SockDrawer),(*CompareFunctionPtrArray[SortChoice-1]));
    }
}
void PutOnMySocks(SockDrawer Dresser[MAX_DRAWERS])
{
    int DrawerNumber =0;
    int UserNumberOfSocks =0;
    printf("\n\nWhich drawer do you want to get socks from? ");
    scanf("%d",&DrawerNumber);
    printf("\n\nHow many socks are you getting out? ");
    scanf("%d",&UserNumberOfSocks);
    if(Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks<UserNumberOfSocks)
    {
        printf("You don't have that many socks!! You only get %d socks.\n\n ",Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks);
        Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks = 0;
    }
    else
    {
        Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks=Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks-UserNumberOfSocks;
    }
}
void PutAwayMySocks(SockDrawer Dresser[MAX_DRAWERS])
{
    int DrawerNumber =0;
    int UserNumberOfSocks =0;
    printf("\n\nWhich drawer are you putting socks into? ");
    scanf("%d",&DrawerNumber);
    printf("\n\nHow many socks are you putting away? ");
    scanf("%d",&UserNumberOfSocks);
    int currentSockCapacity=0;
    if(UserNumberOfSocks>Dresser[GetDrawer(Dresser,DrawerNumber)].MaxDrawerCapacity)
    {
        currentSockCapacity=Dresser[GetDrawer(Dresser,DrawerNumber)].MaxDrawerCapacity-Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks;
        printf("\n%d socks fit in the drawer and %d fell on the floor\n\n",currentSockCapacity,UserNumberOfSocks-currentSockCapacity);
        Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks= Dresser[GetDrawer(Dresser,DrawerNumber)].MaxDrawerCapacity;
    }
    else
    {
        Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks=UserNumberOfSocks+Dresser[GetDrawer(Dresser,DrawerNumber)].NumberOfSocks;
    }
    
}