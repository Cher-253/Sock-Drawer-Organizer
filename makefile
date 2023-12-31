SRC1 = Code6_1001759133.c
SRC2 = SockLib.c
SRC3 = SortLib.c
SRC4 = DrawerLib.c
SRC5 = DresserLib.c

OBJ1 = $(SRC1:.c=.o)
OBJ2 = $(SRC2:.c=.o)
OBJ3 = $(SRC3:.c=.o)
OBJ4 = $(SRC4:.c=.o)
OBJ5 = $(SRC5:.c=.o)

EXE = $(SRC1:.c=.e)
HFILE1 = SockLib.h
HFILE2 = SortLib.h
HFILE3 = DrawerLib.h
HFILE4 = DresserLib.h

CFLAGS = -g

all : $(EXE)

$(EXE): $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5)
	gcc $(CFLAGS) $(OBJ1) $(OBJ2) $(OBJ3) $(OBJ4) $(OBJ5) -o $(EXE)

$(OBJ1): $(SRC1) $(HFILE1) $(HFILE2) $(HFILE3) $(HFILE4) 
	gcc -c $(CFLAGS) $(SRC1) -o $(OBJ1)

$(OBJ2): $(SRC2) $(HFILE1) $(HFILE2) $(HFILE3) $(HFILE4) 
	gcc -c $(CFLAGS) $(SRC2) -o $(OBJ2)

$(OBJ3): $(SRC3) $(HFILE1) $(HFILE2) $(HFILE3) $(HFILE4) 
	gcc -c $(CFLAGS) $(SRC3) -o $(OBJ3)

$(OBJ4): $(SRC4) $(HFILE1) $(HFILE2) $(HFILE3) $(HFILE4) 
	gcc -c $(CFLAGS) $(SRC4) -o $(OBJ4)

$(OBJ5): $(SRC5) $(HFILE1) $(HFILE2) $(HFILE3) $(HFILE4) 
	gcc -c $(CFLAGS) $(SRC5) -o $(OBJ5)