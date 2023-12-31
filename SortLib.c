//four sorting functions for qsort
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "SockLib.h"
#include "SortLib.h"

int DrawerIDCompare(const void *a,const void *b)
{
    return (((SockDrawer*)a)->DrawerID > ((SockDrawer*)b)->DrawerID);
}
int NumberOfSocksCompare(const void *a,const void *b)
{
    return (((SockDrawer*)a)->NumberOfSocks > ((SockDrawer*)b)->NumberOfSocks);
}
int MaxCapacityCompare(const void *a,const void *b)
{
    return (((SockDrawer*)a)->MaxDrawerCapacity > ((SockDrawer*)b)->MaxDrawerCapacity);
}
int SockColorCompare(const void *a,const void *b)
{
    return (strcmp(((SockDrawer*)a)->SockColor,((SockDrawer*)b)->SockColor));
}