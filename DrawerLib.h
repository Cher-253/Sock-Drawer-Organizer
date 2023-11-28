#ifndef _DRAWERLIB_H
#define _DRAWERLIB_H
#include <stdio.h>
#include "SockLib.h"
#include "SortLib.h"
int NumDrawers;
int GetDrawer(SockDrawer Dresser[MAX_DRAWERS],int DrawerNumber);
void GetNumDrawers();
void CreateDrawer(SockDrawer *Dresserpointer, int DrawNumber);
#endif