CC= gcc
CFlags= -pthread
DEPS= Receiver.h Sender.h
OBJ= main.o Sender.o Receiver.o

%.o:%.c $(DEPS)
		$(CC) -c -o $@ $< $(CFLAGS)

test: $(OBJ)
	$(CC) -o $@ $^ $(CFlags)

clean:
	rm -f ./*.o test