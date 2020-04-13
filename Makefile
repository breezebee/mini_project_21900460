TARGET = snack
DTARGET = snack_debug
OBJECTS = market.c product.o manager.o saveload.o
CFLAGS = -W -Wall
CC = gcc

$(TARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(DTARGET) : $(OBJECTS)
	$(CC) $(CFLAGS) -DDEBUG -o $@ $^

clean :
	rm *.o $(TARGET) $(DTARGET)

