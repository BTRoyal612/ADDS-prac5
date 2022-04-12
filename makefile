clean :
	rm *.o a.out

all : MapGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o main.cpp
	g++ MapGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o main.cpp

MapGeneric.o : MapGeneric.cpp MapGeneric.h
	g++ -c MapGeneric.cpp -o MapGeneric.o

MapTriple.o : MapTriple.cpp MapTriple.h MapGeneric.o
	g++ -c MapTriple.cpp -o MapTriple.o

MapSquare.o : MapSquare.cpp MapSquare.h MapGeneric.o
	g++ -c MapSquare.cpp -o MapSquare.o

MapAbsoluteValue.o : MapAbsoluteValue.cpp MapAbsoluteValue.h MapGeneric.o
	g++ -c MapAbsoluteValue.cpp -o MapAbsoluteValue.o