
CC = gcc #sets the compiler to GCC
CFLAGS = -Wall -Wextra  #enables all common warnings and extra warnings

SRC = main.c node.c #the two source files
OBJ = $(SRC:.c=.o) # derives object file names by substituting .c → .o, producing main.o node.c
EXE = node # the final executable name




#compilation rules

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(EXE) $(OBJ)

