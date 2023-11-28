## Sock Drawer Organizer Project  

This project implements a sock drawer organizer system in C, allowing users to manage their sock collection by sorting, adding, and removing socks from different drawers.   

Code6_1.c:    
The main program file orchestrating the sock drawer organizer system.  
Utilizes functions from SockLib, SortLib, DrawerLib, and DresserLib to perform actions like adding, removing, displaying, and sorting socks in drawers.    

SockLib.c:    
Contains functions related to sock management.    
Implements sorting, adding, and removing socks functionalities.    

SortLib.c:  
Includes sorting functions used for qsort.  
Provides comparison functions for DrawerID, NumberOfSocks, MaxCapacity, and SockColor.  

DrawerLib.c:  
Manages the creation and retrieval of sock drawers.  
Allows users to create drawers with specific capacities and sock colors.  

DresserLib.c:  
Displays the current status of the sock dresser, showing the contents, capacity, and sock color of each drawer.  

Key Features - Sock Drawer:  
Users can interactively manage their sock collection, including adding, removing, sorting, and displaying socks in different drawers.  
The sock organizer supports multiple drawers, each with a specific capacity, sock color, and current sock count.  