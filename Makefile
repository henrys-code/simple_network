CC=gcc
CFlags= -pthread

test: main.o
	$(CC) $(CFlags) -o test main.o

clean:
	rm -f ./*.o test