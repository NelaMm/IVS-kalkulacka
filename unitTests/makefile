CFLAGS=-O2 -Wall -pedantic -lm -std=c++11 


calculatorTests: Display.o Operations.o Qlabel.o calculatorTests.o Mathf.o
	g++ $(CFLAGS) Display.o Operations.o Qlabel.o calculatorTests.o Mathf.a -o calculatorTests

Mathf.o: Mathf.cpp Mathf.h
	g++ $(CFLAGS) -c Mathf.cpp -o Mathf.o
	ar rvs Mathf.a Mathf.o

Display.o:  Display.cpp Display.h Qlabel.h
	g++ $(CFLAGS) -c Display.cpp -o Display.o


Operations.o: Operations.cpp Operations.h Qlabel.h
	g++ $(CFLAGS) -c Operations.cpp -o Operations.o

Qlabel.o: Qlabel.cpp Qlabel.h
	g++ $(CFLAGS) -c Qlabel.cpp -o Qlabel.o

calculatorTests.o: calculatorTests.cpp Qlabel.h Operations.h Display.h catch.hpp
	g++ $(CFLAGS) -c calculatorTests.cpp -o calculatorTests.o



clean:
	rm -f *.o calculatorTests *.a
