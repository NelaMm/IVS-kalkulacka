CFLAGS=-O2 -Wall -pedantic -lm -std=c++11 

calculatorTests: Display.o Errors.o Operations.o Qlabel.o calculatorTests.o
	g++ $(CFLAGS) Display.o Errors.o Operations.o Qlabel.o calculatorTests.o -o calculatorTests

Display.o:  Display.cpp Display.h Qlabel.h
	g++ $(CFLAGS) -c Display.cpp -o Display.o

Errors.o: Errors.cpp Errors.h 
	g++ $(CFLAGS) -c Errors.cpp -o Errors.o

Operations.o: Operations.cpp Operations.h Qlabel.h
	g++ $(CFLAGS) -c Operations.cpp -o Operations.o

Qlabel.o: Qlabel.cpp Qlabel.h
	g++ $(CFLAGS) -c Qlabel.cpp -o Qlabel.o

calculatorTests.o: calculatorTests.cpp Qlabel.h Operations.h Errors.h Display.h catch.hpp
	g++ $(CFLAGS) -c calculatorTests.cpp -o calculatorTests.o



clean:
	rm -f *.o calculatorTests
