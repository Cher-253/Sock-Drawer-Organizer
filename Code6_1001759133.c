#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include "SockLib.h"
#include "SortLib.h"
#include "DrawerLib.h"
#include "DresserLib.h"

int main (void)
{
    int MenuChoice=0;
    enum SockAction 
    {
        RemoveSocks=1,AddSocks,DisplayDresser,SortSocks
    };
    SockDrawer Dresser[MAX_DRAWERS];
    GetNumDrawers();
    int i=0;
    for(i=0;i<NumDrawers;i++)
    {
        SockDrawer *Dresserpointer;
        Dresserpointer = &Dresser[i];
        CreateDrawer(Dresserpointer,(i+1));
    }

    do
    {
        printf("\n\nWhat do you need to do?\n\n");
        printf("0. Don't have Socks!!\n1. Take socks out of a drawer?\n2. Put more socks in a drawer?\n3. Display dresser?\n4. Sort Socks\n\n Choice: ");
        scanf("%d",&MenuChoice);
        switch(MenuChoice)
        {
            case RemoveSocks:
                PutOnMySocks(Dresser);
                DisplayMyDresser(Dresser);
                break;
            case AddSocks:
                PutAwayMySocks(Dresser);
                DisplayMyDresser(Dresser);
                break;
            case DisplayDresser:
                DisplayMyDresser(Dresser);
                break;
            case SortSocks:
                SortMySocks(Dresser);
                DisplayMyDresser(Dresser);
                break;
            case 0:
                printf("\nTime to do Laundry\n");
                break;
        }
    } while (MenuChoice!=0);
}