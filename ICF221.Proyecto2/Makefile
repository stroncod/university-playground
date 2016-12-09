CC = clang++
CFLAGS = -std=c++11
all: main.o 
	$(CC) $(CFLAGS) main.o  -o program 

main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp 

clean:
	rm -rf *o all
run:
	./program