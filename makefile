clean :
	rm *.o a.out

all : MapGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o FilterGeneric.o FilterOdd.o FilterNonPositive.o FilterForTwoDigitPositive.o main.cpp
	g++ MapGeneric.o MapTriple.o MapSquare.o MapAbsoluteValue.o FilterGeneric.o FilterOdd.o FilterNonPositive.o FilterForTwoDigitPositive.o main.cpp

MapGeneric.o : MapGeneric.cpp MapGeneric.h
	g++ -c MapGeneric.cpp -o MapGeneric.o

MapTriple.o : MapTriple.cpp MapTriple.h MapGeneric.o
	g++ -c MapTriple.cpp -o MapTriple.o

MapSquare.o : MapSquare.cpp MapSquare.h MapGeneric.o
	g++ -c MapSquare.cpp -o MapSquare.o

MapAbsoluteValue.o : MapAbsoluteValue.cpp MapAbsoluteValue.h MapGeneric.o
	g++ -c MapAbsoluteValue.cpp -o MapAbsoluteValue.o

FilterGeneric.o : FilterGeneric.cpp FilterGeneric.h
	g++ -c FilterGeneric.cpp -o FilterGeneric.o

FilterOdd.o : FilterOdd.cpp FilterOdd.h
	g++ -c FilterOdd.cpp -o FilterOdd.o

FilterNonPositive.o : FilterNonPositive.cpp FilterNonPositive.h
	g++ -c FilterNonPositive.cpp -o FilterNonPositive.o

FilterForTwoDigitPositive.o : FilterForTwoDigitPositive.cpp FilterForTwoDigitPositive.h
	g++ -c FilterForTwoDigitPositive.cpp -o FilterForTwoDigitPositive.o