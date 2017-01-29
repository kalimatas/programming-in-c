SRC = mod1.c mod2.c main.c
OBJ = mod1.o mod2.o main.o
PROG = big

.PHONY: clean

$(PROG): $(OBJ)
		clang -Wall -pedantic $(OBJ) -o $(PROG)

$(OBJ): $(SRC)

clean:
		rm *.o
