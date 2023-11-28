#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SockLib.h"
#include "SortLib.h"
#include "DrawerLib.h"
void DisplayMyDresser(SockDrawer Dresser[MAX_DRAWERS])
{
    int i =0;
    printf("\n\nMy Dresser\n");
    for(i=0;i<NumDrawers;i++)
    {
        printf("Drawer %d\n\t\tContents: %d %s socks\n\t\tCapacity : %d socks\n",Dresser[i].DrawerID,Dresser[i].NumberOfSocks,Dresser[i].SockColor,Dresser[i].MaxDrawerCapacity);
    }
}