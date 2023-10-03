all: main

main.o: main.cpp  BrazoRobotico.h BrazoRobotico.cpp
	g++ -c main.cpp

BrazoRobotico.o: BrazoRobotico.cpp BrazoRobotico.h
	g++ -c BrazoRobotico.cpp

main: main.o BrazoRobotico.c
	g++ -o main main.o BrazoRobotico.o

clean:
	rm -f *.o main

test: all
	./main
