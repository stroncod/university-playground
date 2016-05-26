CC = clang++
CFLAGS = -std=c++11
all: main.o Teo_F.o AFnD.o TransicionesEP.o AFD.o
	$(CC) main.o Teo_F.o AFnD.o TransicionesEP.o AFD.o -o program $(CFLAGS)

main.o: main.cpp
	$(CC) -c main.cpp $(CFLAGS)

Teo_F.o: Teo_F.cpp
	$(CC) -c Teo_F.cpp $(CFLAGS)

AFnD.o: AFnD.cpp
	$(CC) -c AFnD.cpp $(CFLAGS)

TransicionesEP.o: TransicionesEP.cpp
	$(CC) -c TransicionesEP.cpp $(CFLAGS)
AFD.o: AFD.cpp
	$(CC) -c AFD.cpp $(CFLAGS)
clean:
	rm -rf *o all
