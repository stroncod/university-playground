CC=g++
all: main.o Teo_F.o AFnD.o
	$(CC) main.o Teo_F.o AFnD.o -o program 

main.o: main.cpp
	$(CC) -c main.cpp

Teo_f.o: Teo_F.cpp
	$(CC) -c Teo_F.cpp

AFnD.o: AFnD.cpp
	$(CC) -c AFnD.cpp

clean:
	rm -rf *o all
