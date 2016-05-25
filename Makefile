<<<<<<< HEAD
CC=g++
all: main.o Teo_F.o AFnD.o
	$(CC) main.o Teo_F.o AFnD.o -o program 

main.o: main.cpp
	$(CC) -c main.cpp

Teo_f.o: Teo_F.cpp
	$(CC) -c Teo_F.cpp

AFnD.o: AFnD.cpp
	$(CC) -c AFnD.cpp
=======
CC = clang++
CFLAGS = -std=c++11
all: main.o Teo_F.o AFnD.o TransicionesEP.o
	$(CC) main.o Teo_F.o AFnD.o TransicionesEP.o -o program $(CFLAGS)

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

Teo_F.o: Teo_F.cpp
	$(CC) -c Teo_F.cpp $(CFLAGS)

AFnD.o: AFnD.cpp
	$(CC) -c AFnD.cpp $(CFLAGS)

TransicionesEP.o: TransicionesEP.cpp
	$(CC) -c TransicionesEP.cpp $(CFLAGS)
>>>>>>> jbranch1.1

clean:
	rm -rf *o all
